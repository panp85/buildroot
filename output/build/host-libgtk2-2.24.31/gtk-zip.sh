#!/bin/sh

# Build zipfiles for GTK on Win32

ZIP=/tmp/gtk+-2.24.31.zip
DEVZIP=/tmp/gtk+-dev-2.24.31.zip
cd /media/panpan/tools/buildroot-2018.02.8/output/host

mkdir -p share/doc/gtk+-2.24.31
cp -p /media/panpan/tools/buildroot-2018.02.8/output/build/host-libgtk2-2.24.31/COPYING share/doc/gtk+-2.24.31

mkdir -p share/doc/gtk+-dev-2.24.31
cp -p /media/panpan/tools/buildroot-2018.02.8/output/build/host-libgtk2-2.24.31/COPYING share/doc/gtk+-dev-2.24.31

rm $ZIP
zip $ZIP -@ <<EOF
etc/gtk-2.0/gtkrc
lib/gtk-2.0/@GTK_BINARY_VERSION/immodules.cache
etc/gtk-2.0/im-multipress.conf
bin/libgdk-win32-2.0-0.dll
bin/libgtk-win32-2.0-0.dll
bin/libgailutil-18.dll
bin/gtk-query-immodules-2.0.exe
EOF

zip $ZIP lib/gtk-2.0/modules/libgail.dll lib/gtk-2.0/2.10.0/loaders/*.dll lib/gtk-2.0/2.10.0/immodules/*.dll lib/gtk-2.0/2.10.0/engines/*.dll

zip $ZIP share/themes/Raleigh/gtk-2.0/gtkrc
zip $ZIP share/themes/Default/gtk-2.0-key/gtkrc
zip $ZIP share/themes/Emacs/gtk-2.0-key/gtkrc
zip $ZIP share/themes/MS-Windows/gtk-2.0/gtkrc

zip $ZIP share/locale/*/LC_MESSAGES/gtk20.mo
zip $ZIP share/locale/*/LC_MESSAGES/gtk20-properties.mo

zip -r -D $ZIP share/doc/gtk+-2.24.31

rm $DEVZIP
zip -r -D $DEVZIP -@ <<EOF
include/gtk-2.0
include/gail-1.0
bin/gtk-builder-convert
bin/gtk-demo.exe
bin/gtk-update-icon-cache.exe
share/man
lib/libgdk-win32-2.0.dll.a
lib/gdk-win32-2.0.lib
lib/libgtk-win32-2.0.dll.a
lib/gtk-win32-2.0.lib
lib/libgailutil.dll.a
lib/gailutil.lib
lib/gtk-2.0/include
lib/pkgconfig
share/aclocal
share/gtk-2.0
share/gtk-doc
EOF

zip -r $DEVZIP share/doc/gtk+-dev-2.24.31
