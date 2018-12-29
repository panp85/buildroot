#!/usr/bin/env python

# this is a hack-tacular script to pass to asciinema like:
#    asciinema -c ./asciinema-demo0.py rec
# to script the show. as it were.

import os
import sys
import time
import random
import colors
import subprocess

prompt = 'user@machine:~/src/txtorcon$ '

def interkey_interval():
    "in milliseconds"
#    return 0
    return (random.lognormvariate(0.0, 0.5) * 30.0) / 1000.0
    return (float(random.randrange(10,50)) / 1000.0)

def type_it_out(line):
    for c in line:
        sys.stdout.write(c)
        sys.stdout.flush()
        time.sleep(interkey_interval())

def do_commands(lines):
    for line in lines:
        sys.stdout.write(colors.blue(prompt))
        type_it_out(line)
        time.sleep(0.5)
        print
        os.system(colors.strip_color(line))

commands = []
commands.append(colors.bold('export TMPDIR=/dev/shm'))
commands.append(colors.red('# txtorcon + endpoints demo'))
commands.append(colors.red('# we already checked out the code here'))
commands.append(colors.red('# first, prepare a virtualenv'))
commands.append(colors.bold('virtualenv txtorcon_demo'))
commands.append('txtorcon_demo/bin/' + colors.bold(colors.white('pip install -r requirements.txt')))

commands.append(colors.red('# pick up txtorcon from our local Git checkout'))
commands.append('export PYTHONPATH=`pwd`')

commands.append(colors.red('# prepare example web content'))
commands.append('mkdir -p example_website')
commands.append('echo "hello, hidden-service world" > example_website/index.html')
commands.append('rm -f twistd.log')
commands.append('txtorcon_demo/bin/' + colors.bold('twistd web ') + colors.white('--port onion:80') + colors.bold(' --path example_website/'))

commands.append(colors.red('# wait until Tor launches etc'))
commands.append('tail twistd.log')
commands.append(colors.red('# wait for a particular log message to appear'))
commands.append('while ! grep "Started hidden service" twistd.log ; do sleep 1; done;')

commands.append(colors.red('# save our new hidden service\'s keys'))
commands.append('tail twistd.log')
commands.append('mkdir hidserv_keys')
commands.append(r'cp `grep "Keys are in " twistd.log  | cut -d \" -f 2`/* hidserv_keys')
commands.append('ls hidserv_keys')
commands.append('cat hidserv_keys/hostname')
commands.append(colors.red("# now we've got a copy of the private key"))
commands.append('tail twistd.log')

commands.append(colors.red('# there we go, a new hidden-serivce.'))
commands.append(colors.red('# now, what if we kill it and want to re-launch with the same key/hostname?'))
commands.append('kill `cat twistd.pid`')
commands.append('rm twistd.log')
commands.append('txtorcon_demo/bin/' + colors.bold('twistd web ') + colors.white('--port onion:80' + colors.bold(':hiddenServiceDir=hidserv_keys')) + colors.bold(' --path example_website/'))
commands.append('#                                            ^^^^^^^^^^^^^^^^')
commands.append('sleep 5')

commands.append(colors.red('# remember, if anyone gets hold of private_key ' + colors.bold(colors.green(colors.underline('they can BECOME your hidden-service')))))
commands.append(colors.red('# just as if you\'d completely lost control of your DNS entries on "normal" internet'))
commands.append('while ! grep "Started hidden service" twistd.log ; do sleep 1; done;')
commands.append('tail twistd.log')
commands.append(colors.bold('cat hidserv_keys/hostname'))
commands.append(colors.green('# thanks for watching!'))
commands.append(colors.bold(colors.white('# https://github.com/meejah/txtorcon')))

if __name__ == '__main__':
    do_commands(commands)
