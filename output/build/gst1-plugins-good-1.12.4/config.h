/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Default audio sink */
#define DEFAULT_AUDIOSINK "autoaudiosink"

/* Default audio source */
#define DEFAULT_AUDIOSRC "alsasrc"

/* Default video sink */
#define DEFAULT_VIDEOSINK "autovideosink"

/* Default video source */
#define DEFAULT_VIDEOSRC "v4l2src"

/* Default visualizer */
#define DEFAULT_VISUALIZER "goom"

/* Disable Orc */
#define DISABLE_ORC 1

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/* #undef ENABLE_NLS */

/* gettext package name */
#define GETTEXT_PACKAGE "NULL"

/* The GIO library directory. */
#define GIO_LIBDIR "/media/panpan/tools/buildroot-2018.02.8/output/host/bin/../arm-buildroot-linux-gnueabihf/sysroot/usr/lib"

/* The GIO modules directory. */
#define GIO_MODULE_DIR "/usr/lib/gio/modules"

/* The GIO install prefix. */
#define GIO_PREFIX "/usr"

/* GStreamer API Version */
#define GST_API_VERSION "1.0"

/* Define if extra runtime checks should be enabled */
/* #undef GST_ENABLE_EXTRA_CHECKS */

/* Defined if gcov is enabled to force a rebuild due to config.h changing */
/* #undef GST_GCOV_ENABLED */

/* Default errorlevel to use */
#define GST_LEVEL_DEFAULT GST_LEVEL_NONE

/* GStreamer license */
#define GST_LICENSE "LGPL"

/* package name in plugins */
#define GST_PACKAGE_NAME "GStreamer Good Plug-ins source release"

/* package origin */
#define GST_PACKAGE_ORIGIN "Unknown package origin"

/* GStreamer package release date/time for plugins as YYYY-MM-DD */
#define GST_PACKAGE_RELEASE_DATETIME "2017-12-07"

/* Define if static plugins should be built */
/* #undef GST_PLUGIN_BUILD_STATIC */

/* Define if Video4Linux probe shall be run at plugin load */
#define GST_V4L2_ENABLE_PROBE 1

/* Define to enable aalib ASCII Art library (used by aasink). */
/* #undef HAVE_AALIB */

/* Define to 1 if you have the `asinh' function. */
#define HAVE_ASINH 1

/* Define to enable bz2 library for matroska . */
/* #undef HAVE_BZ2 */

/* Define to enable Cairo graphics rendering and gobject bindings (used by
   cairo). */
/* #undef HAVE_CAIRO */

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the `clock_gettime' function. */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the `cosh' function. */
#define HAVE_COSH 1

/* Define if the target CPU is AARCH64 */
/* #undef HAVE_CPU_AARCH64 */

/* Define if the target CPU is an Alpha */
/* #undef HAVE_CPU_ALPHA */

/* Define if the target CPU is an ARC */
/* #undef HAVE_CPU_ARC */

/* Define if the target CPU is an ARM */
#define HAVE_CPU_ARM 1

/* Define if the target CPU is a CRIS */
/* #undef HAVE_CPU_CRIS */

/* Define if the target CPU is a CRISv32 */
/* #undef HAVE_CPU_CRISV32 */

/* Define if the target CPU is a HPPA */
/* #undef HAVE_CPU_HPPA */

/* Define if the target CPU is an x86 */
/* #undef HAVE_CPU_I386 */

/* Define if the target CPU is a IA64 */
/* #undef HAVE_CPU_IA64 */

/* Define if the target CPU is a M68K */
/* #undef HAVE_CPU_M68K */

/* Define if the target CPU is a MIPS */
/* #undef HAVE_CPU_MIPS */

/* Define if the target CPU is a PowerPC */
/* #undef HAVE_CPU_PPC */

/* Define if the target CPU is a 64 bit PowerPC */
/* #undef HAVE_CPU_PPC64 */

/* Define if the target CPU is a S390 */
/* #undef HAVE_CPU_S390 */

/* Define if the target CPU is a SPARC */
/* #undef HAVE_CPU_SPARC */

/* Define if the target CPU is a x86_64 */
/* #undef HAVE_CPU_X86_64 */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */

/* Define to enable DirectSound plug-in (used by directsoundsink). */
/* #undef HAVE_DIRECTSOUND */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* define for working do while(0) macros */
#define HAVE_DOWHILE_MACROS 1

/* Define to enable raw1394 and avc1394 library (used by 1394). */
/* #undef HAVE_DV1394 */

/* Define to enable building of experimental plug-ins. */
/* #undef HAVE_EXPERIMENTAL */

/* Define to enable building of plug-ins with external deps. */
#define HAVE_EXTERNAL /**/

/* Define to 1 if you have the <fcntl.h> header file. */
/* #undef HAVE_FCNTL_H */

/* FIONREAD ioctl found in sys/filio.h */
/* #undef HAVE_FIONREAD_IN_SYS_FILIO */

/* FIONREAD ioctl found in sys/ioclt.h */
#define HAVE_FIONREAD_IN_SYS_IOCTL 1

/* Define to enable FLAC lossless audio (used by flac). */
/* #undef HAVE_FLAC */

/* Define to 1 if you have the `fpclass' function. */
/* #undef HAVE_FPCLASS */

/* Define if compiler supports gcc inline assembly */
#define HAVE_GCC_ASM 1

/* Define to enable GDK pixbuf (used by gdkpixbuf). */
/* #undef HAVE_GDK_PIXBUF */

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define to enable Video 4 Linux 2 (used by video4linux2). */
/* #undef HAVE_GST_V4L2 */

/* Whether gudev is available for device detection */
/* #undef HAVE_GUDEV */

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* building for iOS platofrm */
/* #undef HAVE_IOS */

/* Define if we have struct ip_mreqn */
#define HAVE_IP_MREQN /**/

/* Define to 1 if you have the `isinf' function. */
#define HAVE_ISINF 1

/* Define to enable Jack (used by jack). */
/* #undef HAVE_JACK */

/* defined if jack >= 0.120.1 is available */
/* #undef HAVE_JACK_0_120_1 */

/* defined if jack >= 1.9.7 is available */
/* #undef HAVE_JACK_1_9_7 */

/* Define to enable jpeg library (used by jpeg). */
/* #undef HAVE_JPEG */

/* Define to enable libcaca coloured ASCII art (used by cacasink). */
/* #undef HAVE_LIBCACA */

/* Define to enable libdv DV demuxer/decoder (used by dv). */
/* #undef HAVE_LIBDV */

/* Define to enable Portable Network Graphics library (used by png). */
/* #undef HAVE_LIBPNG */

/* Whether libv4l2 is available for video buffer conversion */
/* #undef HAVE_LIBV4L2 */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Use Orc */
/* #undef HAVE_ORC */

/* Define to enable OSS audio (used by ossaudio). */
/* #undef HAVE_OSS */

/* Define to enable Open Sound System 4 (used by oss4). */
/* #undef HAVE_OSS4 */

/* Define if OSS includes are in /machine/ */
/* #undef HAVE_OSS_INCLUDE_IN_MACHINE */

/* Define if OSS includes are in / */
/* #undef HAVE_OSS_INCLUDE_IN_ROOT */

/* Define if OSS includes are in /sys/ */
/* #undef HAVE_OSS_INCLUDE_IN_SYS */

/* Define to enable OSX audio (used by osxaudio). */
/* #undef HAVE_OSX_AUDIO */

/* Define to enable OSX video (used by osxvideosink). */
/* #undef HAVE_OSX_VIDEO */

/* Define to 1 if you have the <process.h> header file. */
/* #undef HAVE_PROCESS_H */

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Have PTHREAD_PRIO_INHERIT. */
#define HAVE_PTHREAD_PRIO_INHERIT 1

/* Define to enable pulseaudio plug-in (used by pulseaudio). */
/* #undef HAVE_PULSE */

/* Define if RDTSC is available */
/* #undef HAVE_RDTSC */

/* Define to 1 if you have the `rint' function. */
#define HAVE_RINT 1

/* Define to enable Shoutcast/Icecast client library (used by shout2). */
/* #undef HAVE_SHOUT2 */

/* Define to 1 if you have the `sinh' function. */
#define HAVE_SINH 1

/* Define to enable soup http client plugin (2.4) (used by souphttpsrc). */
/* #undef HAVE_SOUP */

/* Define to enable speex speech codec (used by speex). */
/* #undef HAVE_SPEEX */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to enable Sun Audio (used by sunaudio). */
/* #undef HAVE_SUNAUDIO */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef HAVE_SYS_IOCTL_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to enable taglib tagging library (used by taglib). */
/* #undef HAVE_TAGLIB */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define if valgrind should be used */
/* #undef HAVE_VALGRIND */

/* Defined if the VP8 decoder is available */
/* #undef HAVE_VP8_DECODER */

/* Defined if the VP8 encoder is available */
/* #undef HAVE_VP8_ENCODER */

/* Defined if the VP9 decoder is available */
/* #undef HAVE_VP9_DECODER */

/* Defined if the VP9 encoder is available */
/* #undef HAVE_VP9_ENCODER */

/* Define to enable VPX decoder (used by vpx). */
/* #undef HAVE_VPX */

/* Defined if the VPX library version is 1.4 or bigger */
/* #undef HAVE_VPX_1_4 */

/* Define to enable Win32 WaveForm (used by waveformsink). */
/* #undef HAVE_WAVEFORM */

/* Define to enable wavpack plug-in (used by wavpack). */
/* #undef HAVE_WAVPACK */

/* Define to enable X libraries and plugins (used by ximagesrc). */
#define HAVE_X /**/

/* Defined if Xdamage is available */
#define HAVE_XDAMAGE 1

/* Defined if Xfixes is available */
#define HAVE_XFIXES 1

/* Defined if XShm is available */
#define HAVE_XSHM 1

/* Define to enable zlib support for qtdemux/matroska. */
/* #undef HAVE_ZLIB */

/* the host CPU */
#define HOST_CPU "arm"

/* gettext locale dir */
#define LOCALEDIR "/usr/share/locale"

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "gst-plugins-good"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugzilla.gnome.org/enter_bug.cgi?product=GStreamer"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GStreamer Good Plug-ins"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GStreamer Good Plug-ins 1.12.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gst-plugins-good"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.12.4"

/* directory where plugins are located */
#define PLUGINDIR "/usr/lib/gstreamer-1.0"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* The size of `char', as computed by sizeof. */
/* #undef SIZEOF_CHAR */

/* The size of `int', as computed by sizeof. */
/* #undef SIZEOF_INT */

/* The size of `long', as computed by sizeof. */
/* #undef SIZEOF_LONG */

/* The size of `short', as computed by sizeof. */
/* #undef SIZEOF_SHORT */

/* The size of `void*', as computed by sizeof. */
/* #undef SIZEOF_VOIDP */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* the target CPU */
#define TARGET_CPU "arm"

/* Version number of package */
#define VERSION "1.12.4"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif
