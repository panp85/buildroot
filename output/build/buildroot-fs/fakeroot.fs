#!/bin/sh
set -e
chown -h -R 0:0 /media/panpan/tools/buildroot-2018.02.8/output/target
chown -h -R 1000:1000 '/media/panpan/tools/buildroot-2018.02.8/output/target//var/run/dbus'
/media/panpan/tools/buildroot-2018.02.8/output/host/bin/makedevs -d /media/panpan/tools/buildroot-2018.02.8/output/build/buildroot-fs/device_table.txt /media/panpan/tools/buildroot-2018.02.8/output/target
   	(cd /media/panpan/tools/buildroot-2018.02.8/output/target; find -print0 | LC_ALL=C sort -z | tar  -cf /media/panpan/tools/buildroot-2018.02.8/output/images/rootfs.tar --null --xattrs-include='*' --no-recursion -T - --numeric-owner)
