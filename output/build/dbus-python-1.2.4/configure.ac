-*- mode: m4 -*-
AC_PREREQ(2.59c)

dnl The dbus-python version number
m4_define(dbus_python_major_version, 1)
m4_define(dbus_python_minor_version, 2)
dnl Micro version is odd for non-releases
m4_define(dbus_python_micro_version, 4)

AC_INIT([dbus-python],
  dbus_python_major_version.dbus_python_minor_version.dbus_python_micro_version,
  [http://bugs.freedesktop.org/enter_bug.cgi?product=dbus&component=python])
AC_CONFIG_MACRO_DIR([m4])
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES])
AC_CONFIG_AUX_DIR([build-aux])

m4_pattern_forbid([^AX_],
  [Unexpanded AX_ macro found. Please install GNU autoconf-archive])

# By default, rebuild autotools files on demand; only use ./missing if the
# user says --disable-maintainer-mode (in particular this is useful when
# running under pip, which does not preserve timestamps)
AM_MAINTAINER_MODE([enable])

AX_IS_RELEASE([micro-version])
AC_DEFINE(DBUS_PYTHON_MAJOR_VERSION, dbus_python_major_version, [dbus-python major version])
AC_SUBST(DBUS_PYTHON_MAJOR_VERSION, dbus_python_major_version)
AC_DEFINE(DBUS_PYTHON_MINOR_VERSION, dbus_python_minor_version, [dbus-python minor version])
AC_SUBST(DBUS_PYTHON_MINOR_VERSION, dbus_python_minor_version)
AC_DEFINE(DBUS_PYTHON_MICRO_VERSION, dbus_python_micro_version, [dbus-python micro version])
AC_SUBST(DBUS_PYTHON_MICRO_VERSION, dbus_python_micro_version)

AC_CONFIG_SRCDIR([_dbus_bindings/module.c])
AC_CONFIG_HEADERS(config.h)

AM_INIT_AUTOMAKE([1.13 -Wno-portability subdir-objects tar-ustar])

AC_CANONICAL_BUILD
AC_CANONICAL_HOST

# mingw32, mingw-w64 are native Windows; for our purposes, Cygwin isn't
AC_MSG_CHECKING([for native Windows host])
AS_CASE(["$host"],
  [*-*-mingw*],
    [windows=yes],
  [*],
    [windows=no])
AC_MSG_RESULT([$windows])
AM_CONDITIONAL([WINDOWS], [test "x$windows" = xyes])

AC_DISABLE_STATIC

dnl XXXX hack to kill off all the libtool tags ...
dnl it isn't like we are using C++ or Fortran.
dnl (copied from libglade/configure.in)
m4_define([_LT_AC_TAGCONFIG],[])

AC_PROG_LIBTOOL
AM_PROG_CC_C_O
AC_C_INLINE
AC_PROG_MKDIR_P

AM_PATH_PYTHON([2.6])

AM_CHECK_PYTHON_HEADERS(,[AC_MSG_ERROR(could not find Python headers)])

# This command exits 0 (success) if sys.version >= "3", or 1 (failure)
# if sys.version < "3" (i.e. starts with "2").
AM_CONDITIONAL([HAVE_PYTHON_3],
  [$PYTHON -c "import sys; sys.exit(sys.version < '3')"])

PLATFORM=`$PYTHON -c "from __future__ import print_function; from distutils import util; print(util.get_platform())"`
AC_SUBST(PLATFORM)

AC_ARG_VAR([PYTHON_LIBS],
  [LDFLAGS for Python, overriding output of python2.x-config --ldflags, e.g. "-L/opt/misc/lib -lpython2.7"])
AS_IF([test "${PYTHON_LIBS+set}" = set],
  [AC_MSG_NOTICE([PYTHON_LIBS overridden to: $PYTHON_LIBS])],
  dnl else
  [
  AC_MSG_CHECKING([for Python library linker flags using ${PYTHON_CONFIG}])
  PYTHON_LIBS="$($PYTHON_CONFIG --ldflags)"
  AC_MSG_RESULT([$PYTHON_LIBS])
  ])

AC_SUBST([PYTHON_LIBS])

AC_ARG_ENABLE([installed-tests],
  [AC_HELP_STRING([--enable-installed tests],
    [install test programs and helpers for as-installed testing])],
  [],
  [enable_installed_tests=no])
AM_CONDITIONAL([ENABLE_INSTALLED_TESTS], [test "_$enable_installed_tests" = _yes])

dnl Building documentation

AX_GENERATE_CHANGELOG

AC_MSG_CHECKING([whether you want to build HTML docs])
AC_ARG_ENABLE(html-docs,
AC_HELP_STRING([--enable-html-docs], [Enable HTML documentation building (requires docutils, default: auto-detect)]), enable_html_docs=$enableval, enable_html_docs="if possible")
AC_MSG_RESULT([$enable_html_docs])

AC_MSG_CHECKING([whether you want to build API docs])
AC_ARG_ENABLE(api-docs,
AC_HELP_STRING([--enable-api-docs], [Enable API documentation building (requires epydoc 3 and docutils)]), enable_api_docs=$enableval, enable_api_docs="if possible")
AC_MSG_RESULT([$enable_api_docs])


AS_IF([test "$enable_api_docs" != no || test "$enable_html_docs" != no],
  [
  AX_PYTHON_MODULE([docutils])
  AS_IF([test "$HAVE_PYMOD_DOCUTILS" = no],
    [
    AS_IF([test "$enable_api_docs" = "if possible"], [enable_api_docs=no])
    AS_IF([test "$enable_html_docs" = "if possible"], [enable_html_docs=no])
    AS_IF([test "$enable_api_docs" != no || test "$enable_html_docs" != no],
      [AC_MSG_ERROR([cannot compile HTML documentation or API documentation without python-docutils installed])])
    ])
  ])

AS_IF([test "${enable_api_docs}" != no],
  [
  AC_PATH_PROG([EPYDOC], [epydoc])
  AX_PYTHON_MODULE([epydoc])
  AC_MSG_CHECKING([epydoc 3])
  AS_IF([test -n "$EPYDOC" && test "$HAVE_PYMOD_EPYDOC" = yes],
    [
    EPYDOC_VERSION=`$EPYDOC --version`
    AS_CASE(["$EPYDOC_VERSION"],
      [*ersion?3*],
        [
        AC_MSG_RESULT([yes, $EPYDOC_VERSION])
        ],
      [*],
        [
        AC_MSG_RESULT([no, $EPYDOC_VERSION])
        EPYDOC=
        ])
    ],
    [
    EPYDOC=
    ])
  AS_IF([test -z "$EPYDOC"],
    [
    AS_CASE(["$enable_api_docs"],
      [if*possible],
        [enable_api_docs=no],
      [*],
        [AC_MSG_ERROR([cannot compile API documentation without epydoc 3.0beta1 or newer installed])])
    ])
  ])

AC_ARG_VAR([DBUS_RUN_SESSION],
  [The dbus-run-session tool from dbus 1.8 or later])
AC_PATH_PROG([DBUS_RUN_SESSION], [dbus-run-session], [false])
AM_CONDITIONAL([HAVE_DBUS_RUN_SESSION], [test "$DBUS_RUN_SESSION" != false])

RST2HTMLFLAGS=
AS_IF([test "${enable_html_docs}" != no],
  [
  AC_CHECK_PROGS([RST2HTML], [rst2html rst2html.py], [])
  AS_IF([test -z "$RST2HTML"],
    [
    AS_CASE(["$enable_html_docs"],
      [if*possible],
        [enable_html_docs=no],
      [*],
        [AC_MSG_ERROR([cannot compile HTML documentation without rst2html installed])])
    ])
  ],
  [
    DBUS_PY_ADD_RST2HTMLFLAG([--generator])
    DBUS_PY_ADD_RST2HTMLFLAG([--date])
    DBUS_PY_ADD_RST2HTMLFLAG([--time])
    DBUS_PY_ADD_RST2HTMLFLAG([--exit-status=2])
    DBUS_PY_ADD_RST2HTMLFLAG([--no-raw])
    DBUS_PY_ADD_RST2HTMLFLAG([--no-file-insertion])
    DBUS_PY_ADD_RST2HTMLFLAG([--cloak-email-addresses])
    DBUS_PY_ADD_RST2HTMLFLAG([--input-encoding=UTF-8])
  ])
AC_SUBST([RST2HTML])
AC_SUBST([RST2HTMLFLAGS])

AM_CONDITIONAL([ENABLE_API_DOCS], [test "$enable_api_docs" != no])
AM_CONDITIONAL([ENABLE_DOCS], [test "$enable_html_docs" != no])

PKG_CHECK_MODULES(DBUS, [dbus-1 >= 1.6])
PKG_CHECK_MODULES(DBUS_GLIB, [dbus-glib-1 >= 0.70])

AX_COMPILER_FLAGS([WARN_CFLAGS],
  [WARN_LDFLAGS], [],
  dnl unfortunately the Python headers fail various checks included in
  dnl AX_COMPILER_FLAGS, and are not const-correct for strings
  [ \
   -Wdeprecated-declarations \
   -Wno-redundant-decls \
   -Wno-switch-default \
   -Wno-write-strings \
   -std=c9x \
  ])
dnl AX_COMPILER_FLAGS doesn't order the compiler flags correctly to be able
dnl to disable flags that it would normally enable
WARN_CFLAGS="$(echo "${WARN_CFLAGS}" | ${SED} \
  -e s/-Wredundant-decls// \
  -e s/-Wswitch-default// \
  -e s/-Wwrite-strings// \
  )"

AC_ARG_ENABLE([coding-style-checks],
  [AC_HELP_STRING([--enable-coding-style-checks],
                 [check coding style using grep])],
  [ENABLE_CODING_STYLE_CHECKS=$enableval],
  [ENABLE_CODING_STYLE_CHECKS=$ax_is_release])

AC_CONFIG_FILES([
  Makefile
  dbus-python.pc
])
AC_OUTPUT
