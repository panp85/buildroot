#!/usr/bin/python
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

import os
from distutils.core import setup

PACKAGE_PATH = os.path.dirname(__file__)
README_PATH = os.path.join(PACKAGE_PATH, 'README')

setup(
    name='iowait',
    version='0.2',
    author='Andrea Corbellini',
    author_email='corbellini.andrea@gmail.com',
    url='https://launchpad.net/python-iowait',
    description='Platform-independent module for I/O completion events',
    long_description=open(README_PATH).read(),
    classifiers=[
        'Development Status :: 5 - Production/Stable',
        'Intended Audience :: Developers',
        'License :: OSI Approved :: '
            'GNU Library or Lesser General Public License (LGPL)',
        'Operating System :: OS Independent',
        'Programming Language :: Python :: 2',
        'Programming Language :: Python :: 3',
        'Topic :: Software Development :: Libraries :: Python Modules'],
    license='GNU LGPL v3',
    py_modules=['iowait'])
