# Copyright (C) 2011, 2013  Andrea Corbellini
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as
# published by the Free Software Foundation, either version 3 of the
# License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

import contextlib
import errno
import gc
import io
import itertools
import os
import random
import select
import signal
import socket
import sys
import threading
import time
import unittest
import warnings

import iowait
from iowait import IOEvent


class IOEventTestCase(unittest.TestCase):

    def test_init_exceptions(self):
        self.assertRaises(TypeError, IOEvent)
        self.assertRaises(TypeError, IOEvent, read=True)
        self.assertRaises(TypeError, IOEvent, write=True)
        self.assertRaises(TypeError, IOEvent, read=True, write=True)

    def test_init_fileno(self):
        self.assertEqual(IOEvent(123), (123, False, False))

    def test_init_fileobj(self):
        with open(os.devnull) as fp:
            self.assertEqual(IOEvent(fp), (fp, False, False))

    def test_init_non_bool(self):
        self.assertEqual(IOEvent(123, read=456, write=0), (123, True, False))
        self.assertEqual(IOEvent(123, read=0, write=456), (123, False, True))
        self.assertEqual(IOEvent(123, read=[1], write='abc'),
                         (123, True, True))
        self.assertEqual(IOEvent(123, read='', write=[]), (123, False, False))


class SocketTestCaseMixin(object):

    def setUp(self):
        super(SocketTestCaseMixin, self).setUp()

        choices = range(256)
        length = random.randrange(20, 200)
        self.data = bytes((random.choice(choices)
                           for i in range(length)))

        self._open_files = []

    def tearDown(self):
        super(SocketTestCaseMixin, self).tearDown()
        for fp in self._open_files:
            fp.close()

    if hasattr(socket, 'socketpair'):
        def getFilePair(self):
            pair = socket.socketpair()
            self._open_files.extend(pair)
            return pair
    else:
        # Work-around for operating systems that don't define socketpair().
        def getFilePair(self):
            global _test_server
            global _test_server_port

            try:
                _test_server
            except NameError:
                for _test_server_port in range(10000, 10500):
                    _test_server = socket.socket()
                    try:
                        _test_server.bind(('localhost',
                                           _test_server_port))
                    except (OSError, socket.error):
                        pass
                    break
                else:
                    raise
                _test_server.listen(1)

            a = socket.create_connection(('localhost', _test_server_port))
            b = _test_server.accept()[0]
            self._open_files.extend([a, b])
            return a, b

    def readData(self, fp):
        return fp.recv(len(self.data))

    def writeData(self, fp):
        fp.send(self.data)

    def closeFile(self, fp):
        self._open_files.remove(fp)
        fp.close()


class SocketFdTestCaseMixin(SocketTestCaseMixin):

    def setUp(self):
        super(SocketFdTestCaseMixin, self).setUp()
        self._fd2fp = {}

    def getFilePair(self):
        a, b = super(SocketFdTestCaseMixin, self).getFilePair()
        self._fd2fp.update({
            a.fileno(): a,
            b.fileno(): b,
        })
        return a.fileno(), b.fileno()

    def readData(self, fd):
        fp = self._fd2fp[fd]
        return super(SocketFdTestCaseMixin, self).readData(fp)

    def writeData(self, fd):
        fp = self._fd2fp[fd]
        super(SocketFdTestCaseMixin, self).writeData(fp)

    def closeFile(self, fd):
        fp = self._fd2fp.pop(fd)
        super(SocketFdTestCaseMixin, self).closeFile(fp)


class BaseIOWaitTestCase(object):

    def setUp(self):
        if not self.getWait.available:
            raise unittest.SkipTest('unsupported system call')
        super(BaseIOWaitTestCase, self).setUp()

    def assertEventsEqual(self, list1, list2):
        self.assertTrue(isinstance(list1, list))
        self.assertTrue(isinstance(list2, list))
        self.assertTrue(all(isinstance(item, IOEvent)
                            for item in list1))
        self.assertTrue(all(isinstance(item, IOEvent)
                            for item in list2))
        self.assertEqual(set(list1), set(list2))

    def assertSleepsFor(self, *args, **kwargs):
        class SleepFinished(Exception):
            pass

        def wait_for_timeout():
            time.sleep(timeout)
            os.kill(os.getpid(), signal.SIGABRT)

        def quit_main_thread(signum, frame):
            raise SleepFinished

        timeout, args = args[0], args[1:]

        if hasattr(signal, 'alarm'):
            signal.signal(signal.SIGALRM, quit_main_thread)
            signal.alarm(timeout)
            th = None
        else:
            signal.signal(signal.SIGABRT, quit_main_thread)

            th = threading.Thread(target=wait_for_timeout)
            th.setDaemon(True)
            th.start()

        try:
            self.assertRaises(SleepFinished, *args, **kwargs)
        finally:
            # Clean up.
            while th and th.is_alive():
                try:
                    th.join()
                except:
                    pass


class WaitTestCaseMixin(object):

    def test_wait_no_timeout(self):
        a, b = self.getFilePair()

        with self.getWait() as waitobj:
            waitobj.watch(a, read=True)
            self.assertSleepsFor(1, waitobj.wait)

            self.writeData(b)
            event_list = waitobj.wait()
            self.assertEventsEqual(event_list,
                                   [IOEvent(a, True, False)])

            self.readData(a)
            self.assertSleepsFor(1, waitobj.wait)

    def test_wait_zero_timeout(self):
        a, b = self.getFilePair()

        with self.getWait() as waitobj:
            waitobj.watch(a, read=True)
            self.assertEventsEqual(waitobj.wait(timeout=0), [])

            self.writeData(b)
            event_list = waitobj.wait(timeout=0)
            self.assertEventsEqual(event_list,
                                   [IOEvent(a, True, False)])

            self.readData(a)
            self.assertEventsEqual(waitobj.wait(timeout=0), [])

    def test_wait_with_timeout(self):
        a, b = self.getFilePair()

        with self.getWait() as waitobj:
            waitobj.watch(a, read=True)
            self.assertSleepsFor(1, waitobj.wait, timeout=1.5)
            self.assertEventsEqual(waitobj.wait(timeout=.5), [])

            self.writeData(b)
            event_list = waitobj.wait(timeout=1)
            self.assertEventsEqual(event_list,
                                   [IOEvent(a, True, False)])

            self.readData(a)
            self.assertSleepsFor(1, waitobj.wait, timeout=1.5)
            self.assertEventsEqual(waitobj.wait(timeout=.5), [])

    def test_wait_without_watched(self):
        a, b = self.getFilePair()

        with self.getWait() as waitobj:
            self.assertRaises(ValueError, waitobj.wait)
            waitobj.watch(a, read=True)
            waitobj.unwatch(a)
            self.assertRaises(ValueError, waitobj.wait)


class WatchTestCaseMixin(object):

    def test_watch_exceptions(self):
        a, b = self.getFilePair()

        with self.getWait() as waitobj:
            self.assertRaises(TypeError, waitobj.watch)
            self.assertRaises(TypeError, waitobj.watch, read=True)
            self.assertRaises(TypeError, waitobj.watch, object(), read=True)

            self.assertRaises(IOError, waitobj.watch, io.BytesIO(), read=True)
            self.assertRaises(IOError, waitobj.watch, io.StringIO(), read=True)

            self.assertRaises(ValueError, waitobj.watch, a)
            self.assertRaises(ValueError, waitobj.watch, a, read=False)
            self.assertRaises(ValueError, waitobj.watch, a, write=False)
            self.assertRaises(ValueError, waitobj.watch,
                              a, read=False, write=False)
            self.assertRaises(ValueError, waitobj.watch, IOEvent(a))

    def test_watch_modifications(self):
        a, b = self.getFilePair()

        with self.getWait() as waitobj:
            self.assertEventsEqual(waitobj.get_watched(), [])

            waitobj.watch(a, read=True)
            self.assertEventsEqual(waitobj.get_watched(),
                                   [IOEvent(a, True, False)])

            waitobj.watch(a, write=True)
            self.assertEventsEqual(waitobj.get_watched(),
                                   [IOEvent(a, False, True)])

            waitobj.watch(a, read=True, write=True)
            self.assertEventsEqual(waitobj.get_watched(),
                                   [IOEvent(a, True, True)])

    def test_watch_unwatch(self):
        a, b = self.getFilePair()

        with self.getWait() as waitobj:
            self.assertEventsEqual(waitobj.get_watched(), [])

            waitobj.watch(a, read=True)
            self.assertEventsEqual(waitobj.get_watched(),
                                   [IOEvent(a, True, False)])

            waitobj.unwatch(a)
            self.assertEventsEqual(waitobj.get_watched(), [])

            waitobj.watch(a, write=True)
            self.assertEventsEqual(waitobj.get_watched(),
                                   [IOEvent(a, False, True)])

            waitobj.watch(b, read=True)
            self.assertEventsEqual(waitobj.get_watched(),
                                   [IOEvent(a, False, True),
                                    IOEvent(b, True, False)])

            waitobj.unwatch(a)
            self.assertEventsEqual(waitobj.get_watched(),
                                   [IOEvent(b, True, False)])

            waitobj.unwatch(b)
            self.assertEventsEqual(waitobj.get_watched(), [])

    def test_watch_clear(self):
        a, b = self.getFilePair()

        with self.getWait() as waitobj:
            self.assertEventsEqual(waitobj.get_watched(), [])

            waitobj.watch(a, read=True)
            self.assertEventsEqual(waitobj.get_watched(),
                                   [IOEvent(a, True, False)])

            waitobj.clear()
            self.assertEventsEqual(waitobj.get_watched(), [])

            waitobj.watch(a, write=True)
            self.assertEventsEqual(waitobj.get_watched(),
                                   [IOEvent(a, False, True)])

            waitobj.watch(b, read=True)
            self.assertEventsEqual(waitobj.get_watched(),
                                   [IOEvent(a, False, True),
                                    IOEvent(b, True, False)])

            waitobj.clear()
            self.assertEventsEqual(waitobj.get_watched(), [])


class CloseTestCaseMixin(object):

    def test_close(self):
        a, b = self.getFilePair()

        waitobj = self.getWait()
        self.assertFalse(waitobj.closed)
        waitobj.watch(a, read=True)
        self.assertFalse(waitobj.closed)

        waitobj.close()
        self.assertTrue(waitobj.closed)

        self.assertRaises(ValueError, waitobj.watch, b, read=True)
        self.assertRaises(ValueError, waitobj.unwatch, a)
        self.assertRaises(ValueError, waitobj.wait)
        self.assertRaises(ValueError, waitobj.wait, 0)
        self.assertRaises(ValueError, waitobj.wait, 10)
        self.assertRaises(ValueError, waitobj.get_watched)
        self.assertRaises(ValueError, waitobj.clear)

        # close() may be called multiple times.
        waitobj.close()
        self.assertTrue(waitobj.closed)

    def test_resource_warning(self):
        try:
            ResourceWarning
        except NameError:
            raise unittest.SkipTest('ResourceWarning is not defined')

        waitobj = self.getWait()
        with warnings.catch_warnings(record=True) as warn_list:
            del waitobj
        gc.collect()

        self.assertEqual(len(warn_list), 1)
        self.assertEqual(warn_list[0].category, ResourceWarning)

    def test_context_manager(self):
        with warnings.catch_warnings(record=True) as warn_list:
            with self.getWait() as waitobj:
                self.assertFalse(waitobj.closed)
        self.assertTrue(waitobj.closed)
        self.assertFalse(warn_list)


class StressTestCaseMixin(object):

    _allowed_rw_errors = []
    if hasattr(errno, 'ECONNRESET'):
        _allowed_rw_errors.append(errno.ECONNRESET)
    if hasattr(errno, 'EPIPE'):
        _allowed_rw_errors.append(errno.EPIPE)
    if hasattr(errno, 'WSAECONNABORTED'):
        _allowed_rw_errors.append(errno.WSAECONNABORTED)
    if hasattr(errno, 'WSAECONNRESET'):
        _allowed_rw_errors.append(errno.WSAECONNRESET)

    def test_stress(self):
        actions = [
            self.do_add_files,
            self.do_add_files,
            self.do_add_files,

            self.do_del_file,
            self.do_del_file,

            self.do_handle_events,
            self.do_handle_events,
            self.do_handle_events,
            self.do_handle_events,

            self.do_cleanup,
        ]

        with self.getWait() as waitobj:
            for i in range(500):
                method = random.choice(actions)
                method(waitobj)

    def do_add_files(self, waitobj):
        before = len(waitobj.get_watched())
        try:
            pair = self.getFilePair()
        except (OSError, socket.error):
            # Likely EMFILE.
            return

        for f in pair:
            read, write = random.choice([
                (True, False),
                (False, True),
                (True, True),
            ])
            waitobj.watch(f, read=read, write=write)

        after = len(waitobj.get_watched())
        self.assertEqual(before + 2, after)

    def do_del_file(self, waitobj):
        before = len(waitobj.get_watched())
        if not before:
            return

        ev = random.choice(waitobj.get_watched())
        waitobj.unwatch(ev.fileobj)
        self.closeFile(ev.fileobj)

        after = len(waitobj.get_watched())
        self.assertEqual(before - 1, after)

    def do_cleanup(self, waitobj):
        waitobj.clear()
        self.assertEventsEqual(waitobj.get_watched(), [])

    def handle_read_events(self, waitobj):
        for ev in waitobj.wait():
            if ev.read:
                try:
                    self.readData(ev.fileobj)
                except (OSError, socket.error) as exc:
                    if exc.errno not in self._allowed_rw_errors:
                        raise

    def handle_write_events(self, waitobj):
        for ev in waitobj.wait():
            if ev.write:
                try:
                    self.writeData(ev.fileobj)
                except (OSError, socket.error) as exc:
                    if exc.errno not in self._allowed_rw_errors:
                        raise

    def do_handle_events(self, waitobj):
        watched = waitobj.get_watched()
        if not watched:
            self.assertRaises(ValueError, waitobj.wait)

        if not any(ev.write for ev in watched):
            return

        self.handle_write_events(waitobj)
        self.handle_read_events(waitobj)


def define_iowait_test_cases():
    iowait_classes = [
        iowait.SelectIOWait,
        iowait.PollIOWait,
        iowait.EPollIOWait,
        iowait.KQueueIOWait,
    ]

    file_mixins = [
        SocketTestCaseMixin,
        SocketFdTestCaseMixin,
    ]

    test_mixins = [
        WaitTestCaseMixin,
        WatchTestCaseMixin,
        CloseTestCaseMixin,
        StressTestCaseMixin,
    ]

    for item in itertools.product(iowait_classes,
                                  file_mixins,
                                  test_mixins):
        iowait_cls, file_mixin_cls, test_mixin_cls = item

        name = ''.join((iowait_cls.__name__[:-len('IOWait')],
                        file_mixin_cls.__name__[:-len('TestCaseMixin')],
                        test_mixin_cls.__name__[:-len('Mixin')]))
        bases = (test_mixin_cls,
                 file_mixin_cls,
                 BaseIOWaitTestCase,
                 unittest.TestCase)
        attrs = {'getWait': iowait_cls}

        globals()[name] = type(name, bases, attrs)


define_iowait_test_cases()


if __name__ == '__main__':
    unittest.main()
