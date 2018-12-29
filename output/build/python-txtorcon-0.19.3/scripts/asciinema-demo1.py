#!/usr/bin/env python

# this is a hack-tacular script to pass to asciinema like:
#    asciinema -c ./asciinema-demo1.py rec
# to script the show. as it were.

import os
import sys
import time
import random
import colors
import subprocess

prompt = 'user@machine:~/src$ '

def interkey_interval():
    "in milliseconds"
#    return 0  # faster debugging
    return (random.lognormvariate(0.0, 0.5) * 30.0) / 1000.0
    return (float(random.randrange(10,50)) / 1000.0)

def type_it_out(line):
    for c in line:
        sys.stdout.write(c)
        sys.stdout.flush()
        time.sleep(interkey_interval())

def do_commands(lines):
    for line in lines:
        if callable(line):
            line()
            continue
        really_run = True
        if line.startswith('!'):
            really_run = False
            line = line[1:]
        sys.stdout.write(colors.blue(prompt))
        type_it_out(line)
        time.sleep(0.5)
        print
        if really_run:
            # XXX nice to have time-limit?
            os.system(colors.strip_color(line))

def change_prompt(p):
    global prompt
    prompt = p

commands = []
commands.append(colors.bold('export TMPDIR=/dev/shm'))
commands.append(colors.red('# see http://txtorcon.readthedocs.org'))
commands.append('git clone https://github.com/meejah/txtorcon')
commands.append(colors.bold('virtualenv venv'))
commands.append('!' + colors.bold('source ./venv/bin/activate'))
commands.append(lambda: change_prompt('(venv)user@machine:~/src/txtorcon$ '))
commands.append(lambda: sys.path.insert(0, './venv/bin'))
commands.append(colors.bold(colors.white('pip install --editable ./txtorcon')))
commands.append('!' + colors.white('cd txtorcon'))
commands.append(lambda: os.chdir('./txtorcon'))
commands.append(lambda: change_prompt('user@machine:~/src/txtorcon$ '))
commands.append('make coverage')
#commands.append('python examples/add_hiddenservice_to_system_tor.py')
commands.append(colors.red('# okay, lets try one of the examles'))
commands.append('ls examples/')
commands.append('python examples/dump_config.py | head')
commands.append('python examples/hello_darkweb.py')
commands.append(colors.red('# thanks for watching'))
commands.append(colors.red('# https://github.com/meejah/txtorcon'))
commands.append(colors.red('# https://txtorcon.readthedocs.org'))

if __name__ == '__main__':
    do_commands(commands)
