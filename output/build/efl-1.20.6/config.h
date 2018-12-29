/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef EFL_CONFIG_H__
#define EFL_CONFIG_H__


/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Build Altivec Code */
/* #undef BUILD_ALTIVEC */

/* Use biggest dither mask while converting in Evas */
#define BUILD_BIG_DITHER_MASK 1

/* Support for X11_DRI2 Backend in Ecore_Buffer */
/* #undef BUILD_ECORE_BUFFER_X11_DRI2 */

/* Support for X11_DRI3 Backend in Ecore_Buffer */
/* #undef BUILD_ECORE_BUFFER_X11_DRI3 */

/* Support for drm Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_DRM */

/* Support for ews Engine in Ecore_Evas */
#define BUILD_ECORE_EVAS_EWS 1

/* Support for extn Engine in Ecore_Evas */
#define BUILD_ECORE_EVAS_EXTN 1

/* Support for fb Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_FB */

/* Support for gl-drm Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_GL_DRM */

/* Support for opengl-cocoa Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_OPENGL_COCOA */

/* Support for opengl-sdl Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_OPENGL_SDL */

/* Support for opengl-x11 Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_OPENGL_X11 */

/* OpenGL Xlib rendering backend */
/* #undef BUILD_ECORE_EVAS_OPENGL_XLIB */

/* Support for psl1ght Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_PSL1GHT */

/* Support for SDL Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_SDL */

/* Support for software-ddraw Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_SOFTWARE_DDRAW */

/* Support for software-gdi Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_SOFTWARE_GDI */

/* Support for software-sdl Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_SOFTWARE_SDL */

/* Support for software-x11 Engine in Ecore_Evas */
#define BUILD_ECORE_EVAS_SOFTWARE_X11 1

/* Evas Software Xlib Engine Support */
#define BUILD_ECORE_EVAS_SOFTWARE_XLIB 1

/* Build Ecore_Evas VNC module */
/* #undef BUILD_ECORE_EVAS_VNC_SERVER */

/* Support for Wayland Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_WAYLAND */

/* Support for wayland-egl Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_WAYLAND_EGL */

/* Support for wayland-shm Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_WAYLAND_SHM */

/* Support for Win32 Engine in Ecore_Evas */
/* #undef BUILD_ECORE_EVAS_WIN32 */

/* Support for X Window Engines in Ecore_Evas */
#define BUILD_ECORE_EVAS_X11 1

/* Ecore Imf IBUS Support */
/* #undef BUILD_ECORE_IMF_IBUS */

/* Ecore Imf SCIM Support */
/* #undef BUILD_ECORE_IMF_SCIM */

/* Ecore Imf Wayland Support */
/* #undef BUILD_ECORE_IMF_WAYLAND */

/* Use Fixed Point instead of FPU */
/* #undef BUILD_EDJE_FP */

/* Build buffer Evas engine */
#define BUILD_ENGINE_BUFFER 1

/* Drm rendering backend */
/* #undef BUILD_ENGINE_DRM */

/* OpenGL Fb rendering backend */
/* #undef BUILD_ENGINE_EGLFS */

/* Build fb Evas engine */
/* #undef BUILD_ENGINE_FB */

/* OpenGL Cocoa rendering backend */
/* #undef BUILD_ENGINE_GL_COCOA */

/* Generic OpenGL Rendering Support */
/* #undef BUILD_ENGINE_GL_COMMON */

/* OpenGL Drm rendering backend */
/* #undef BUILD_ENGINE_GL_DRM */

/* OpenGL SDL rendering backend */
/* #undef BUILD_ENGINE_GL_SDL */

/* Build OpenGL X11 engine */
/* #undef BUILD_ENGINE_GL_X11 */

/* OpenGL XLib rendering backend */
/* #undef BUILD_ENGINE_GL_XLIB */

/* Build psl1ght Evas engine */
/* #undef BUILD_ENGINE_PSL1GHT */

/* Software DirectDraw rendering backend */
/* #undef BUILD_ENGINE_SOFTWARE_DDRAW */

/* Software GDI rendering backend */
/* #undef BUILD_ENGINE_SOFTWARE_GDI */

/* Build software X11 engine */
#define BUILD_ENGINE_SOFTWARE_X11 1

/* Software Xlib rendering backend */
#define BUILD_ENGINE_SOFTWARE_XLIB 1

/* Building any wayland evas engine */
/* #undef BUILD_ENGINE_WAYLAND_COMMON */

/* Wayland Egl rendering backend */
/* #undef BUILD_ENGINE_WAYLAND_EGL */

/* Wayland Shm rendering backend */
/* #undef BUILD_ENGINE_WAYLAND_SHM */

/* Use simpler line-only dither mask while converting in Evas */
/* #undef BUILD_LINE_DITHER_MASK */

/* UP Image Loader Support */
#define BUILD_LOADER_BMP 1

/* UP Image Loader Support */
#define BUILD_LOADER_DDS 1

/* UP Image Loader Support */
#define BUILD_LOADER_EET 1

/* UP Image Loader Support */
#define BUILD_LOADER_GENERIC 1

/* UP Image Loader Support */
/* #undef BUILD_LOADER_GIF */

/* UP Image Loader Support */
#define BUILD_LOADER_ICO 1

/* UP Image Loader Support */
/* #undef BUILD_LOADER_JP2K */

/* UP Image Loader Support */
/* #undef BUILD_LOADER_JPEG */

/* JPEG Region Decode Support */
/* #undef BUILD_LOADER_JPEG_REGION */

/* UP Image Loader Support */
#define BUILD_LOADER_PMAPS 1

/* UP Image Loader Support */
/* #undef BUILD_LOADER_PNG */

/* UP Image Loader Support */
#define BUILD_LOADER_PSD 1

/* UP Image Loader Support */
#define BUILD_LOADER_TGA 1

/* UP Image Loader Support */
#define BUILD_LOADER_TGV 1

/* UP Image Loader Support */
/* #undef BUILD_LOADER_TIFF */

/* UP Image Loader Support */
#define BUILD_LOADER_WBMP 1

/* UP Image Loader Support */
/* #undef BUILD_LOADER_WEBP */

/* UP Image Loader Support */
#define BUILD_LOADER_XPM 1

/* Build MMX Code */
/* #undef BUILD_MMX */

/* Build NEON Code */
#define BUILD_NEON 1

/* Build NEON Intrinsics */
/* #undef BUILD_NEON_INTRINSICS */

/* Do not use dither masks while converting in Evas */
/* #undef BUILD_NO_DITHER_MASK */

/* Use smaller dither mask while converting in Evas */
/* #undef BUILD_SMALL_DITHER_MASK */

/* Build SSE3 Code */
/* #undef BUILD_SSE3 */

/* UP Image Loader Support */
#define BUILD_VG_LOADER_EET 1

/* UP Image Loader Support */
#define BUILD_VG_LOADER_SVG 1

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Ftp url for testing */
/* #undef ECORE_CON_FTP_TEST_URL */

/* Http url for testing */
/* #undef ECORE_CON_HTTP_TEST_URL */

/* Build support for Xcomposite */
#define ECORE_XCOMPOSITE 1

/* Build support for Xcursor */
#define ECORE_XCURSOR 1

/* Build support for Xdamage */
#define ECORE_XDAMAGE 1

/* Build support for Xdpms */
#define ECORE_XDPMS 1

/* Build support for Xfixes */
#define ECORE_XFIXES 1

/* Build support for Xgesture */
/* #undef ECORE_XGESTURE */

/* Build support for Xi2 */
#define ECORE_XI2 1

/* Build support for Xi2_2 */
/* #undef ECORE_XI2_2 */

/* Build support for Xinerama */
#define ECORE_XINERAMA 1

/* Build support for Xkb */
#define ECORE_XKB 1

/* Build support for Xpresent */
/* #undef ECORE_XPRESENT */

/* Build support for Xrandr */
#define ECORE_XRANDR 1

/* Build support for Xrender */
#define ECORE_XRENDER 1

/* Build support for Xss */
#define ECORE_XSS 1

/* Build support for Xtest */
#define ECORE_XTEST 1

/* Cache result of calc glob matches */
#define EDJE_CALC_CACHE 1

/* Cache result of program glob matches */
/* #undef EDJE_PROGRAM_CACHE */

/* eject bin to use */
#define EEZE_EJECT_BIN "/usr/bin/eject"

/* mount bin to use */
#define EEZE_MOUNT_BIN "/bin/mount"

/* umount bin to use */
#define EEZE_UNMOUNT_BIN "/bin/umount"

/* Macro declaring a function to always be inlined. */
#define EFL_ALWAYS_INLINE __attribute__ ((__always_inline__)) inline

/* Enable access to unstable EFL API that are still in beta */
#define EFL_BETA_API_SUPPORT 1

/* Enable access to unstable EFL Eo API */
#define EFL_EO_API_SUPPORT 1

/* Extra run time sanity checks */
/* #undef EFL_EXTRA_SANITY_CHECKS */

/* Define to mention that OSX spinlocks are supported */
/* #undef EFL_HAVE_OSX_SPINLOCK */

/* Define to mention that POSIX threads spinlocks are supported */
#define EFL_HAVE_POSIX_THREADS_SPINLOCK 1

/* Define to mention that POSIX or Win32 threads are supported */
#define EFL_HAVE_THREADS 1

/* Set to 1 if static is built */
#define EINA_BUILD_CHAINED_POOL 1

/* Set to 1 if static is built */
#define EINA_BUILD_ONE_BIG 1

/* Set to 1 if static is built */
#define EINA_BUILD_PASS_THROUGH 1

/* Turn on Eina_Magic in Eina_Cow */
/* #undef EINA_COW_MAGIC_ON */

/* Turn on debugging overhead in mempool */
/* #undef EINA_DEBUG_MALLOC */

/* Default log level triggering backtraces */
#define EINA_LOG_BACKTRACE_ENABLE 1

/* if set, logging is limited to this amount. */
#define EINA_LOG_LEVEL_MAXIMUM 3

/* Set to 1 if static is statically built */
#define EINA_STATIC_BUILD_CHAINED_POOL 1

/* Set to 1 if static is statically built */
#define EINA_STATIC_BUILD_ONE_BIG 1

/* Set to 1 if static is statically built */
#define EINA_STATIC_BUILD_PASS_THROUGH 1

/* Report Eina stringshare usage pattern */
/* #undef EINA_STRINGSHARE_USAGE */

/* "subdirectory for all elementary data" */
#define ELEMENTARY_BASE_DIR ".elementary"

/* Build generic Evas engine */
#define EMOTION_BUILD_GENERIC 1

/* Build gstreamer Evas engine */
/* #undef EMOTION_BUILD_GSTREAMER */

/* Build gstreamer1 Evas engine */
#define EMOTION_BUILD_GSTREAMER1 1

/* Build libvlc Evas engine */
/* #undef EMOTION_BUILD_LIBVLC */

/* Build xine Evas engine */
/* #undef EMOTION_BUILD_XINE */

/* Build generic Evas engine inside libevas */
#define EMOTION_STATIC_BUILD_GENERIC 1

/* Build gstreamer Evas engine inside libevas */
/* #undef EMOTION_STATIC_BUILD_GSTREAMER */

/* Build gstreamer1 Evas engine inside libevas */
/* #undef EMOTION_STATIC_BUILD_GSTREAMER1 */

/* Build libvlc Evas engine inside libevas */
/* #undef EMOTION_STATIC_BUILD_LIBVLC */

/* Build xine Evas engine inside libevas */
/* #undef EMOTION_STATIC_BUILD_XINE */

/* Use liblz4 external library instead of embedded copy */
#define ENABLE_LIBLZ4 1

/* Use interpreted Lua (5.1 or 5.2) */
/* #undef ENABLE_LUA_OLD */

/* Use Multisense */
#define ENABLE_MULTISENSE 1

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/* #undef ENABLE_NLS */

/* Enable X Input Method */
#define ENABLE_XIM 1

/* Shared cache server. */
#define EVAS_CSERVE2 1

/* Hunspell-compatible hyphen dictionaries install directory */
#define EVAS_DICTS_HYPHEN_DIR "/usr/share/hyphen/"

/* Build BMP image loader inside libevas */
#define EVAS_STATIC_BUILD_BMP 1

/* Build buffer Evas engine inside libevas */
#define EVAS_STATIC_BUILD_BUFFER 1

/* Build DDS image loader inside libevas */
#define EVAS_STATIC_BUILD_DDS 1

/* Build drm engine inside libevas */
/* #undef EVAS_STATIC_BUILD_DRM */

/* Build Eet image loader inside libevas */
#define EVAS_STATIC_BUILD_EET 1

/* Build eglfs engine inside libevas */
/* #undef EVAS_STATIC_BUILD_EGLFS */

/* Build fb Evas engine inside libevas */
/* #undef EVAS_STATIC_BUILD_FB */

/* Build Generic image loader inside libevas */
#define EVAS_STATIC_BUILD_GENERIC 1

/* Build Gif image loader inside libevas */
/* #undef EVAS_STATIC_BUILD_GIF */

/* Build gl-cocoa engine inside libevas */
/* #undef EVAS_STATIC_BUILD_GL_COCOA */

/* Build GL generic engine as part of libevas */
/* #undef EVAS_STATIC_BUILD_GL_COMMON */

/* Build gl-drm engine inside libevas */
/* #undef EVAS_STATIC_BUILD_GL_DRM */

/* Build gl-sdl engine inside libevas */
/* #undef EVAS_STATIC_BUILD_GL_SDL */

/* Build OpenGL X11 engine as part of libevas */
/* #undef EVAS_STATIC_BUILD_GL_X11 */

/* Build gl-xlib engine inside libevas */
/* #undef EVAS_STATIC_BUILD_GL_XLIB */

/* Build ICO image loader inside libevas */
#define EVAS_STATIC_BUILD_ICO 1

/* Build JP2K image loader inside libevas */
/* #undef EVAS_STATIC_BUILD_JP2K */

/* Build JPEG image loader inside libevas */
/* #undef EVAS_STATIC_BUILD_JPEG */

/* Build PMAPS image loader inside libevas */
#define EVAS_STATIC_BUILD_PMAPS 1

/* Build PNG image loader inside libevas */
/* #undef EVAS_STATIC_BUILD_PNG */

/* Build PSD image loader inside libevas */
#define EVAS_STATIC_BUILD_PSD 1

/* Build psl1ght Evas engine inside libevas */
/* #undef EVAS_STATIC_BUILD_PSL1GHT */

/* Build software-ddraw engine inside libevas */
/* #undef EVAS_STATIC_BUILD_SOFTWARE_DDRAW */

/* Build software-gdi engine inside libevas */
/* #undef EVAS_STATIC_BUILD_SOFTWARE_GDI */

/* Build software generic engine as part of libevas */
#define EVAS_STATIC_BUILD_SOFTWARE_GENERIC 1

/* Build software X11 engine as part of libevas */
/* #undef EVAS_STATIC_BUILD_SOFTWARE_X11 */

/* Build software-xlib engine inside libevas */
/* #undef EVAS_STATIC_BUILD_SOFTWARE_XLIB */

/* Build Tga image loader inside libevas */
#define EVAS_STATIC_BUILD_TGA 1

/* Build TGV image loader inside libevas */
#define EVAS_STATIC_BUILD_TGV 1

/* Build Tiff image loader inside libevas */
/* #undef EVAS_STATIC_BUILD_TIFF */

/* Build EET vg loader inside libevas */
#define EVAS_STATIC_BUILD_VG_EET 1

/* Build SVG vg loader inside libevas */
#define EVAS_STATIC_BUILD_VG_SVG 1

/* Build wayland-egl engine inside libevas */
/* #undef EVAS_STATIC_BUILD_WAYLAND_EGL */

/* Build wayland-shm engine inside libevas */
/* #undef EVAS_STATIC_BUILD_WAYLAND_SHM */

/* Build WBMP image loader inside libevas */
#define EVAS_STATIC_BUILD_WBMP 1

/* Build WEBP image loader inside libevas */
/* #undef EVAS_STATIC_BUILD_WEBP */

/* Build XPM image loader inside libevas */
#define EVAS_STATIC_BUILD_XPM 1

/* Suffix for binary objects */
#define EXEEXT ""

/* Imagination SGX GLES2 support */
/* #undef GLES_VARIETY_SGX */

/* Always integrate glib if support compiled */
/* #undef GLIB_INTEGRATION_ALWAYS */

/* GLSL runtime shader GLES2 support */
/* #undef GL_GLES */

/* Have abstract sockets namespace */
#define HAVE_ABSTRACT_SOCKETS 1

/* Define to 1 if you have the `accept4' function. */
#define HAVE_ACCEPT4 1

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Alsa support */
/* #undef HAVE_ALSA */

/* Have altivec.h header file */
/* #undef HAVE_ALTIVEC_H */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <arpa/nameser.h> header file. */
#define HAVE_ARPA_NAMESER_H 1

/* Define to 1 if you have the <asm/hwcap.h> header file. */
#define HAVE_ASM_HWCAP_H 1

/* Use fstatat and other -at file functions */
#define HAVE_ATFILE_SOURCE 1

/* Have `avahi' pkg-config installed. */
/* #undef HAVE_AVAHI */

/* Define to 1 if you have the `backtrace' function. */
#define HAVE_BACKTRACE 1

/* Define to 1 if you have the `backtrace_symbols' function. */
#define HAVE_BACKTRACE_SYMBOLS 1

/* GCC builtin bswap16 exists */
#define HAVE_BSWAP16 1

/* GCC builtin bswap32 exists */
#define HAVE_BSWAP32 1

/* GCC builtin bswap64 exists */
#define HAVE_BSWAP64 1

/* Have `bullet' pkg-config installed. */
#define HAVE_BULLET 1

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Have cipher support built in eet */
#define HAVE_CIPHER 1

/* Define to 1 if you have the `clearenv' function. */
#define HAVE_CLEARENV 1

/* Have clock_gettime() */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the <crt_externs.h> header file. */
/* #undef HAVE_CRT_EXTERNS_H */

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* Have `dbus' pkg-config installed. */
#define HAVE_DBUS 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have a valid <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dirfd' function. */
#define HAVE_DIRFD 1

/* Define to 1 if you have the `dladdr' function. */
#define HAVE_DLADDR 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `dlopen' function. */
#define HAVE_DLOPEN 1

/* Define to 1 if you have the `dlsym' function. */
#define HAVE_DLSYM 1

/* Have `drm' pkg-config installed. */
/* #undef HAVE_DRM */

/* optional EFL Ecore_Audio is enabled */
#define HAVE_ECORE_AUDIO 1

/* optional EFL Ecore_Buffer is enabled */
/* #undef HAVE_ECORE_BUFFER */

/* optional EFL Ecore_Cocoa is enabled */
/* #undef HAVE_ECORE_COCOA */

/* optional EFL Ecore_Drm is enabled */
/* #undef HAVE_ECORE_DRM */

/* optional EFL Ecore_Drm2 is enabled */
/* #undef HAVE_ECORE_DRM2 */

/* optional EFL Ecore_FB is enabled */
/* #undef HAVE_ECORE_FB */

/* Ecore IMF Support */
#define HAVE_ECORE_IMF 1

/* optional EFL Ecore_Js is enabled */
/* #undef HAVE_ECORE_JS */

/* optional EFL Ecore_Psl1ght is enabled */
/* #undef HAVE_ECORE_PSL1GHT */

/* optional EFL Ecore_SDL is enabled */
/* #undef HAVE_ECORE_SDL */

/* optional EFL Ecore_Wayland is enabled */
/* #undef HAVE_ECORE_WAYLAND */

/* optional EFL Ecore_Win32 is enabled */
/* #undef HAVE_ECORE_WIN32 */

/* optional EFL Ecore_Wl2 is enabled */
/* #undef HAVE_ECORE_WL2 */

/* optional EFL Ecore_X is enabled */
#define HAVE_ECORE_X 1

/* optional EFL Eeze is enabled */
#define HAVE_EEZE 1

/* Have `eeze_mount' pkg-config installed. */
#define HAVE_EEZE_MOUNT 1

/* optional EFL Efl_Js is enabled */
/* #undef HAVE_EFL_JS */

/* optional EFL Efl_Wl is enabled */
/* #undef HAVE_EFL_WL */

/* optional EFL Eina_Js is enabled */
/* #undef HAVE_EINA_JS */

/* Have eio library */
#define HAVE_EIO 1

/* optional EFL Eio_Js is enabled */
/* #undef HAVE_EIO_JS */

/* optional EFL Eldbus_Js is enabled */
/* #undef HAVE_ELDBUS_JS */

/* Cocoa support for Elementary */
/* #undef HAVE_ELEMENTARY_COCOA */

/* Elementary debug. */
/* #undef HAVE_ELEMENTARY_DEBUG */

/* DRM support for Elementary */
/* #undef HAVE_ELEMENTARY_DRM */

/* FB support for Elementary */
/* #undef HAVE_ELEMENTARY_FB */

/* optional EFL Elementary_Js is enabled */
/* #undef HAVE_ELEMENTARY_JS */

/* PSL1GHT support for Elementary */
/* #undef HAVE_ELEMENTARY_PSL1GHT */

/* SDL support for Elementary */
/* #undef HAVE_ELEMENTARY_SDL */

/* Win32 support for Elementary */
/* #undef HAVE_ELEMENTARY_WIN32 */

/* Wl2 support for Elementary */
/* #undef HAVE_ELEMENTARY_WL2 */

/* X support for Elementary */
#define HAVE_ELEMENTARY_X 1

/* Have `elput' pkg-config installed. */
/* #undef HAVE_ELPUT */

/* optional EFL Elua is enabled */
#define HAVE_ELUA 1

/* Have `emotion_module_gstreamer' pkg-config installed. */
/* #undef HAVE_EMOTION_MODULE_GSTREAMER */

/* Have `emotion_module_gstreamer1' pkg-config installed. */
/* #undef HAVE_EMOTION_MODULE_GSTREAMER1 */

/* Have `emotion_module_libvlc' pkg-config installed. */
/* #undef HAVE_EMOTION_MODULE_LIBVLC */

/* Have `emotion_module_xine' pkg-config installed. */
/* #undef HAVE_EMOTION_MODULE_XINE */

/* extern environ exists */
#define HAVE_ENVIRON 1

/* optional EFL Eolian_Js is enabled */
/* #undef HAVE_EOLIAN_JS */

/* Have eo id */
/* #undef HAVE_EO_ID */

/* optional EFL Eo_Js is enabled */
/* #undef HAVE_EO_JS */

/* EPhysics Support */
#define HAVE_EPHYSICS 1

/* optional EFL Escape is enabled */
/* #undef HAVE_ESCAPE */

/* optional EFL Ethumb_Js is enabled */
/* #undef HAVE_ETHUMB_JS */

/* optional EFL Evil is enabled */
/* #undef HAVE_EVIL */

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the `execvp' function. */
#define HAVE_EXECVP 1

/* Define to 1 if you have the `fchmod' function. */
#define HAVE_FCHMOD 1

/* Define to 1 if you have the `fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the <features.h> header file. */
#define HAVE_FEATURES_H 1

/* Define to 1 if you have the `fnmatch' function. */
#define HAVE_FNMATCH 1

/* Have `fontconfig' pkg-config installed. */
#define HAVE_FONTCONFIG 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `fpathconf' function. */
#define HAVE_FPATHCONF 1

/* Have `freetype' pkg-config installed. */
#define HAVE_FREETYPE 1

/* Have `fribidi' pkg-config installed. */
#define HAVE_FRIBIDI 1

/* Define to 1 if you have the `fstatat' function. */
#define HAVE_FSTATAT 1

/* Define to 1 if your compiler supports __attribute__ ((vector)). */
#define HAVE_GCC_ATTRIBUTE_VECTOR 1

/* Define to 1 if you have the `geteuid' function. */
#define HAVE_GETEUID 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getpwent' function. */
#define HAVE_GETPWENT 1

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getuid' function. */
#define HAVE_GETUID 1

/* Have `glib' pkg-config installed. */
#define HAVE_GLIB 1

/* Define to 1 if you have the `gmtime_r' function. */
#define HAVE_GMTIME_R 1

/* Have `gnutls' pkg-config installed. */
/* #undef HAVE_GNUTLS */

/* have harfbuzz support */
#define HAVE_HARFBUZZ 1

/* have hunspell hyphen support */
/* #undef HAVE_HYPHEN */

/* Define to 1 if you have the `iconv' function. */
#define HAVE_ICONV 1

/* Define to 1 if you have the <ieeefp.h> header file. */
/* #undef HAVE_IEEEFP_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if IPV6 is supported */
#define HAVE_IPV6 1

/* Define to 1 if you have 'isfinite', as a function or macro. */
/* #undef HAVE_ISFINITE */

/* Compiling bindings for JavaScript */
/* #undef HAVE_JS */

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Have `libinput' pkg-config installed. */
/* #undef HAVE_LIBINPUT */

/* Have `liblz4' pkg-config installed. */
#define HAVE_LIBLZ4 1

/* Compiling libuv event loop integration */
/* #undef HAVE_LIBUV */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Have local sockets support */
#define HAVE_LOCAL_SOCKETS 1

/* GCC builtin lround exists */
#define HAVE_LROUND 1

/* Have `lua' pkg-config installed. */
/* #undef HAVE_LUA */

/* Have `luajit' pkg-config installed. */
#define HAVE_LUAJIT 1

/* Define to 1 if you have the `mallinfo' function. */
#define HAVE_MALLINFO 1

/* Define to 1 if you have the `malloc_info' function. */
#define HAVE_MALLOC_INFO 1

/* Define to 1 if you have the `malloc_usable_size' function. */
#define HAVE_MALLOC_USABLE_SIZE 1

/* Define to 1 if you have the <mcheck.h> header file. */
#define HAVE_MCHECK_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkdirat' function. */
#define HAVE_MKDIRAT 1

/* Have sys/mman.h header file */
#define HAVE_MMAN_H 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define to 1 if you have the `mtrace' function. */
#define HAVE_MTRACE 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#define HAVE_NETINET_TCP_H 1

/* Define to 1 if you have the <netinet/udp.h> header file. */
#define HAVE_NETINET_UDP_H 1

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Using NodeJS */
/* #undef HAVE_NODEJS */

/* Define to 1 if you have the <nodejs/deps/node/include/node.h> header file.
   */
/* #undef HAVE_NODEJS_DEPS_NODE_INCLUDE_NODE_H */

/* Define to 1 if you have the <nodejs/deps/node/node.h> header file. */
/* #undef HAVE_NODEJS_DEPS_NODE_NODE_H */

/* Define to 1 if you have the <nodejs/deps/uv/include/uv.h> header file. */
/* #undef HAVE_NODEJS_DEPS_UV_INCLUDE_UV_H */

/* Define to 1 if you have the <nodejs/deps/uv/uv.h> header file. */
/* #undef HAVE_NODEJS_DEPS_UV_UV_H */

/* Define to 1 if you have the <nodejs/deps/v8/include/v8.h> header file. */
/* #undef HAVE_NODEJS_DEPS_V8_INCLUDE_V8_H */

/* Define to 1 if you have the <nodejs/deps/v8/v8.h> header file. */
/* #undef HAVE_NODEJS_DEPS_V8_V8_H */

/* Define to 1 if you have the <nodejs/src/node.h> header file. */
/* #undef HAVE_NODEJS_SRC_NODE_H */

/* Define to 1 if you have the <nodejs/src/uv.h> header file. */
/* #undef HAVE_NODEJS_SRC_UV_H */

/* Define to 1 if you have the <nodejs/src/v8.h> header file. */
/* #undef HAVE_NODEJS_SRC_V8_H */

/* Define to 1 if you have the <node.h> header file. */
/* #undef HAVE_NODE_H */

/* Define to 1 if you have the <node/node.h> header file. */
/* #undef HAVE_NODE_NODE_H */

/* Define to 1 if you have the <node/uv.h> header file. */
/* #undef HAVE_NODE_UV_H */

/* Define to 1 if you have the <node/v8.h> header file. */
/* #undef HAVE_NODE_V8_H */

/* File monitoring with fsevent notification */
/* #undef HAVE_NOTIFY_COCOA */

/* File monitoring with kqueue/kevent mechanism */
/* #undef HAVE_NOTIFY_KEVENT */

/* File monitoring with Windows notification */
/* #undef HAVE_NOTIFY_WIN32 */

/* Have `openssl' pkg-config installed. */
#define HAVE_OPENSSL 1

/* Define to 1 if you have the `pause' function. */
#define HAVE_PAUSE 1

/* Have `pixman' pkg-config installed. */
/* #undef HAVE_PIXMAN */

/* Define to 1 if you have the `prctl' function. */
#define HAVE_PRCTL 1

/* Define to 1 if you have the `pthread_getcpuclockid' function. */
/* #undef HAVE_PTHREAD_GETCPUCLOCKID */

/* Define if the <pthread.h> defines PTHREAD_MUTEX_RECURSIVE. */
#define HAVE_PTHREAD_MUTEX_RECURSIVE 1

/* Define if the POSIX multithreading library has read/write locks. */
#define HAVE_PTHREAD_RWLOCK 1

/* Pulseaudio support */
#define HAVE_PULSE 1

/* Define to 1 if you have the `realpath' function. */
#define HAVE_REALPATH 1

/* Define to 1 if you have the `sched_getcpu' function. */
#define HAVE_SCHED_GETCPU 1

/* Have `sdl' pkg-config installed. */
/* #undef HAVE_SDL */

/* SDL_OPENGLES flag is present */
/* #undef HAVE_SDL_FLAG_OPENGLES */

/* SDL_GL version attributes present */
/* #undef HAVE_SDL_GL_CONTEXT_VERSION */

/* Define to 1 if you have the `setxattr' function. */
#define HAVE_SETXATTR 1

/* Define to 1 if you have the `shm_open' function. */
#define HAVE_SHM_OPEN 1

/* Define to 1 if the system has the type `siginfo_t'. */
#define HAVE_SIGINFO_T 1

/* Define to 1 if you have the `siglongjmp' function. */
#define HAVE_SIGLONGJMP 1

/* Have signature support for eet file */
#define HAVE_SIGNATURE 1

/* Sndfile support */
#define HAVE_SNDFILE 1

/* Define to 1 if you have the `splice' function. */
#define HAVE_SPLICE 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if the system has the type `struct ipv6_mreq'. */
#define HAVE_STRUCT_IPV6_MREQ 1

/* Define to 1 if the system has the type `struct sigaction'. */
#define HAVE_STRUCT_SIGACTION 1

/* Have librsvg >= 2.36 */
/* #undef HAVE_SVG_2_36 */

/* Have `systemd' pkg-config installed. */
/* #undef HAVE_SYSTEMD */

/* Defined if systemd >= 209 */
/* #undef HAVE_SYSTEMD_LOGIN_209 */

/* Define to 1 if you have the <sys/auxv.h> header file. */
#define HAVE_SYS_AUXV_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/epoll.h> header file. */
#define HAVE_SYS_EPOLL_H 1

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/inotify.h> header file. */
#define HAVE_SYS_INOTIFY_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
#define HAVE_SYS_PRCTL_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/signalfd.h> header file. */
#define HAVE_SYS_SIGNALFD_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/timerfd.h> header file. */
#define HAVE_SYS_TIMERFD_H 1

/* Define to 1 if you have the <sys/times.h> header file. */
#define HAVE_SYS_TIMES_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define if TCP_CORK is defined in netinet/tcp.h */
#define HAVE_TCP_CORK 1

/* Define if TCP_NOPUSH is defined in netinet/tcp.h */
/* #undef HAVE_TCP_NOPUSH */

/* Have the __thread specifier */
#define HAVE_THREAD_SPECIFIER 1

/* Define to 1 if you have the `timerfd_create' function. */
#define HAVE_TIMERFD_CREATE 1

/* Define to 1 if you have Tizen configuration manager(vconf). */
/* #undef HAVE_TIZEN_CONFIGURATION_MANAGER */

/* Have `tslib' pkg-config installed. */
/* #undef HAVE_TSLIB */

/* Have `udev' pkg-config installed. */
#define HAVE_UDEV 1

/* Define if UDP_CORK is defined in netinet/udp.h */
#define HAVE_UDP_CORK 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Have libunwind */
/* #undef HAVE_UNWIND */

/* Define to 1 if you have the <uv.h> header file. */
/* #undef HAVE_UV_H */

/* Define to 1 if you have Video4Linux 2 available */
#define HAVE_V4L2 1

/* Define to 1 if you must pass create_params explicitly. */
/* #undef HAVE_V8_CREATE_PARAMS */

/* Define to 1 if you must pass create_params explicitly. */
/* #undef HAVE_V8_GLOBAL */

/* Define to 1 if you have the <v8.h> header file. */
/* #undef HAVE_V8_H */

/* Valgrind support enabled */
/* #undef HAVE_VALGRIND */

/* Have `wayland' pkg-config installed. */
/* #undef HAVE_WAYLAND */

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* Define to 1 if you have the <ws2tcpip.h> header file. */
/* #undef HAVE_WS2TCPIP_H */

/* Define to 1 if you have the `listxattr', `setxattr' and `getxattr'
   functions. */
#define HAVE_XATTR 1

/* Build with Gstreamer Xoverlay support */
/* #undef HAVE_XOVERLAY_H */

/* Use gst_x_overlay_set_window_handle instead of old deprecated
   gst_x_overlay_set_xwindow_id */
/* #undef HAVE_X_OVERLAY_SET */

/* libinput version >= 0.8 */
/* #undef LIBINPUT_HIGHER_08 */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* "Module architecture" */
#define MODULE_ARCH "v-1.20"

/* Need EFL_RUN_IN_TREE=1 trick */
#define NEED_RUN_IN_TREE 1

/* Valgrind support disabled */
#define NVALGRIND 1

/* using first version of libmount */
/* #undef OLD_LIBMOUNT */

/* using older version of libudev */
/* #undef OLD_LIBUDEV */

/* Name of package */
#define PACKAGE "efl"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "enlightenment-devel@lists.sourceforge.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "efl"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "efl 1.20.6"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "efl"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.20.6"

/* default value since PATH_MAX is not defined */
/* #undef PATH_MAX */

/* Allow pixman to render fonts */
/* #undef PIXMAN_FONT */

/* Allow pixman to render images */
/* #undef PIXMAN_IMAGE */

/* Allow pixman to render image sampled scaling */
/* #undef PIXMAN_IMAGE_SCALE_SAMPLE */

/* Allow pixman to render lines */
/* #undef PIXMAN_LINE */

/* Allow pixman to render polys */
/* #undef PIXMAN_POLY */

/* Allow pixman to render rects */
/* #undef PIXMAN_RECT */

/* Define if the pthread_in_use() detection is hard. */
/* #undef PTHREAD_IN_USE_DETECTION_HARD */

/* Suffix for shared objects */
#define SHARED_LIB_SUFFIX ".so"

/* The size of `Eina_Unicode', as computed by sizeof. */
#define SIZEOF_EINA_UNICODE 0

/* The size of `FriBidiChar', as computed by sizeof. */
#define SIZEOF_FRIBIDICHAR 4

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `uintptr_t', as computed by sizeof. */
#define SIZEOF_UINTPTR_T 4

/* The size of `wchar_t', as computed by sizeof. */
#define SIZEOF_WCHAR_T 4

/* Sloppy Spec Compliance */
#define SLOPPY_SPEC 1

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
#define STRERROR_R_CHAR_P 1

/* Enable tiled rotate algorithm */
/* #undef TILE_ROTATE */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if you have Windows Fiber support. */
/* #undef USE_FIBER */

/* Use g_main_loop in ecore */
/* #undef USE_G_MAIN_LOOP */

/* Ecore_Wl2 IVI-Shell Support */
/* #undef USE_IVI_SHELL */

/* Define if the POSIX multithreading library can be used. */
#define USE_POSIX_THREADS 1

/* Define if references to the POSIX multithreading library should be made
   weak. */
#define USE_POSIX_THREADS_WEAK 1

/* Define if the GNU Pth multithreading library can be used. */
/* #undef USE_PTH_THREADS */

/* Define if references to the GNU Pth multithreading library should be made
   weak. */
/* #undef USE_PTH_THREADS_WEAK */

/* Define to 1 if you have setjmp/longjmp functions. */
/* #undef USE_SETJMP */

/* Define if the old Solaris multithreading library can be used. */
/* #undef USE_SOLARIS_THREADS */

/* Define if references to the old Solaris multithreading library should be
   made weak. */
/* #undef USE_SOLARIS_THREADS_WEAK */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define to 1 if you have posix ucontext functions. */
#define USE_UCONTEXT 1

/* Define if the Win32 multithreading API can be used. */
/* #undef USE_WIN32_THREADS */

/* Version number of package */
#define VERSION "1.20.6"

/* Major version */
#define VMAJ 1

/* Micro version */
#define VMIC 6

/* Minor version */
#define VMIN 20

/* Revison */
#define VREV 0

/* Last source reconfigure */
#define VTIME "2017-11-22 13:11:05 +0100"

/* Want Ecore_Timer dump infrastructure */
/* #undef WANT_ECORE_TIMER_DUMP */

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

/* xattr enabled directory */
/* #undef XATTR_TEST_DIR */

/* good xrandr */
#define XRANDR_GOOD 1

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* "apple doesn't follow POSIX in this case." */
/* #undef environ */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */


#endif /* EFL_CONFIG_H__ */

