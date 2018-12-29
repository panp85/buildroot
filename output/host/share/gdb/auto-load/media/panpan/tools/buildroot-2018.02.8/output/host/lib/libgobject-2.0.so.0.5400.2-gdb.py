import sys
import gdb

# Update module path.
dir_ = '/media/panpan/tools/buildroot-2018.02.8/output/host/share/glib-2.0/gdb'
if not dir_ in sys.path:
    sys.path.insert(0, dir_)

from gobject_gdb import register
register (gdb.current_objfile ())
