cmd_libbb/makedev.o := /media/panpan/tools/buildroot-2018.02.8/output/host/bin/arm-linux-gnueabihf-gcc -Wp,-MD,libbb/.makedev.o.d   -std=gnu99 -Iinclude -Ilibbb  -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -D"BB_VER=KBUILD_STR(1.27.2)" -DBB_BT=AUTOCONF_TIMESTAMP -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64  -Os  -Wall -Wshadow -Wwrite-strings -Wundef -Wstrict-prototypes -Wunused -Wunused-parameter -Wunused-function -Wunused-value -Wmissing-prototypes -Wmissing-declarations -Wno-format-security -Wdeclaration-after-statement -Wold-style-definition -fno-builtin-strlen -finline-limit=0 -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-guess-branch-probability -funsigned-char -static-libgcc -falign-functions=1 -falign-jumps=1 -falign-labels=1 -falign-loops=1 -fno-unwind-tables -fno-asynchronous-unwind-tables -fno-builtin-printf -Os     -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(makedev)"  -D"KBUILD_MODNAME=KBUILD_STR(makedev)" -c -o libbb/makedev.o libbb/makedev.c

deps_libbb/makedev.o := \
  libbb/makedev.c \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/stdc-predef.h \
  include/platform.h \
    $(wildcard include/config/werror.h) \
    $(wildcard include/config/big/endian.h) \
    $(wildcard include/config/little/endian.h) \
    $(wildcard include/config/nommu.h) \
  /media/panpan/xilinx/SDK/2018.1/gnu/aarch32/lin/gcc-arm-linux-gnueabi/lib/gcc/arm-linux-gnueabihf/7.2.1/include-fixed/limits.h \
  /media/panpan/xilinx/SDK/2018.1/gnu/aarch32/lin/gcc-arm-linux-gnueabi/lib/gcc/arm-linux-gnueabihf/7.2.1/include-fixed/syslimits.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/limits.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/libc-header-start.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/features.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/cdefs.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/wordsize.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/long-double.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/gnu/stubs.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/gnu/stubs-hard.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/posix1_lim.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/local_lim.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/linux/limits.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/posix2_lim.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/xopen_lim.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/uio_lim.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/byteswap.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/byteswap.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/typesizes.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/byteswap-16.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/endian.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/endian.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/uintn-identity.h \
  /media/panpan/xilinx/SDK/2018.1/gnu/aarch32/lin/gcc-arm-linux-gnueabi/lib/gcc/arm-linux-gnueabihf/7.2.1/include/stdint.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/stdint.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/wchar.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/stdint-intn.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/stdint-uintn.h \
  /media/panpan/xilinx/SDK/2018.1/gnu/aarch32/lin/gcc-arm-linux-gnueabi/lib/gcc/arm-linux-gnueabihf/7.2.1/include/stdbool.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/unistd.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/posix_opt.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/environments.h \
  /media/panpan/xilinx/SDK/2018.1/gnu/aarch32/lin/gcc-arm-linux-gnueabi/lib/gcc/arm-linux-gnueabihf/7.2.1/include/stddef.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/confname.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/getopt_posix.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/getopt_core.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/sysmacros.h \
  /media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/sysmacros.h \

libbb/makedev.o: $(deps_libbb/makedev.o)

$(deps_libbb/makedev.o):
