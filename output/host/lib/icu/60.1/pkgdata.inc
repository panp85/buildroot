GENCCODE_ASSEMBLY_TYPE=-a gcc
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.60.1
COMPILE=/usr/bin/gcc -I/media/panpan/tools/buildroot-2018.02.8/output/host/include -D_REENTRANT  -DU_HAVE_ELF_H=1 -DU_HAVE_ATOMIC=1 -DU_HAVE_STRTOD_L=1 -DU_HAVE_XLOCALE_H=1  -DU_DISABLE_RENAMING=1 -DU_ATTRIBUTE_DEPRECATED= -O2 -I/media/panpan/tools/buildroot-2018.02.8/output/host/include -std=c99 -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -c
LIBFLAGS=-I/media/panpan/tools/buildroot-2018.02.8/output/host/include -DPIC -fPIC
GENLIB=/usr/bin/gcc -O2 -I/media/panpan/tools/buildroot-2018.02.8/output/host/include -std=c99 -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -L/media/panpan/tools/buildroot-2018.02.8/output/host/lib -Wl,-rpath,/media/panpan/tools/buildroot-2018.02.8/output/host/lib  -shared -Wl,-Bsymbolic
LDICUDTFLAGS=
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=/usr/bin/ar
ARFLAGS=r
RANLIB=/usr/bin/ranlib
INSTALL_CMD=/usr/bin/install -c
