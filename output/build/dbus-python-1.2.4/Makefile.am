abs_top_srcdir = @abs_top_srcdir@
abs_top_builddir = @abs_top_builddir@
installed_testdir = ${libexecdir}/installed-tests/${PACKAGE_TARNAME}
installed_test_testdir = ${installed_testdir}/test
installed_test_metadir = ${datadir}/installed-tests/${PACKAGE_TARNAME}

ACLOCAL_AMFLAGS = -I m4

CLEANFILES = \
	test/test-service.log \
	$(NULL)
EXTRA_DIST = \
	.travis.yml \
	AUTHORS \
	COPYING \
	ChangeLog \
	dbus-python.pc.in \
	examples/example-async-client.py \
	examples/example-client.py \
	examples/example-service.py \
	examples/example-signal-emitter.py \
	examples/example-signal-recipient.py \
	examples/gconf-proxy-client.py \
	examples/gconf-proxy-service2.py \
	examples/list-system-services.py \
	examples/unix-fd-client.py \
	examples/unix-fd-service.py \
	m4/am-check-python-headers.m4 \
	m4/dbus-py-add-rst2htmlflag.m4 \
	setup.py \
	test/TestSuitePythonService.service.in \
	test/tmp-session-bus.conf.in \
	tools/check-c-style.sh \
	tools/check-coding-style.mk \
	tools/check-py-style.sh \
	tools/check-whitespace.sh
	tools/ci-build.sh \
	$(NULL)

# === C code ===

AM_CPPFLAGS = \
	-include config.h \
	-I$(top_srcdir)/include \
	$(DBUS_CFLAGS) \
	$(DBUS_GLIB_CFLAGS) \
	$(PYTHON_INCLUDES) \
	$(NULL)
AM_CFLAGS = \
	$(WARN_CFLAGS) \
	$(NULL)
AM_LDFLAGS = \
	$(WARN_LDFLAGS) \
	$(NULL)

pymod_ldflags = \
	-module \
	-avoid-version \
	$(NULL)
pymod_libadd = \
	$(NULL)

if WINDOWS
# Win32 DLLs can't have undefined symbols (so this needs explicit linking
# against the Python DLL), and Python expects extensions to be *.pyd
# instead of *.dll
pymod_ldflags += \
	-no-undefined \
	-shrext ".pyd" \
	$(NULL)
pymod_libadd += \
	$(PYTHON_LIBS) \
	$(NULL)
endif

pyexec_LTLIBRARIES = \
	_dbus_bindings.la \
	_dbus_glib_bindings.la \
	$(NULL)

if ENABLE_INSTALLED_TESTS
nobase_installed_test_LTLIBRARIES = test/dbus_py_test.la
else
noinst_LTLIBRARIES = test/dbus_py_test.la
endif

_dbus_bindings_la_LDFLAGS = \
	$(pymod_ldflags) \
	-export-symbols-regex \(PyInit__\|init_\)dbus_bindings \
	$(AM_LDFLAGS) \
	$(NULL)
_dbus_bindings_la_LIBADD = \
	$(pymod_libadd) \
	$(DBUS_LIBS) \
	$(NULL)
_dbus_bindings_la_SOURCES = \
	_dbus_bindings/abstract.c \
	_dbus_bindings/bus.c \
	_dbus_bindings/bytes.c \
	_dbus_bindings/compat-internal.h \
	_dbus_bindings/conn.c \
	_dbus_bindings/conn-internal.h \
	_dbus_bindings/conn-methods.c \
	_dbus_bindings/containers.c \
	_dbus_bindings/dbus_bindings-internal.h \
	_dbus_bindings/debug.c \
	_dbus_bindings/exceptions.c \
	_dbus_bindings/float.c \
	_dbus_bindings/generic.c \
	_dbus_bindings/int.c \
	_dbus_bindings/unixfd.c \
	_dbus_bindings/libdbusconn.c \
	_dbus_bindings/mainloop.c \
	_dbus_bindings/message-append.c \
	_dbus_bindings/message.c \
	_dbus_bindings/message-get-args.c \
	_dbus_bindings/message-internal.h \
	_dbus_bindings/module.c \
	_dbus_bindings/pending-call.c \
	_dbus_bindings/server.c \
	_dbus_bindings/signature.c \
	_dbus_bindings/string.c \
	_dbus_bindings/types-internal.h \
	_dbus_bindings/validation.c \
	$(NULL)

_dbus_glib_bindings_la_LDFLAGS = \
	$(pymod_ldflags) \
	-export-symbols-regex \(PyInit__\|init_\)dbus_glib_bindings \
	$(AM_LDFLAGS) \
	$(NULL)
_dbus_glib_bindings_la_LIBADD = \
	$(pymod_libadd) \
	$(DBUS_LIBS) \
	$(DBUS_GLIB_LIBS) \
	$(NULL)
_dbus_glib_bindings_la_SOURCES = \
	_dbus_glib_bindings/module.c \
	$(NULL)

# unconditionally add an -rpath to force Libtool to build a shared library
test_dbus_py_test_la_LDFLAGS = \
	$(pymod_ldflags) \
	$(AM_LDFLAGS) \
	-rpath $(installed_testdir) \
	$(NULL)
test_dbus_py_test_la_LIBADD = $(DBUS_LIBS)
test_dbus_py_test_la_SOURCES = \
	include/dbus/dbus-python.h \
	test/dbus_py_test.c \
	$(NULL)

# === dbus package ===

nobase_python_PYTHON = \
    dbus/bus.py \
    dbus/connection.py \
    dbus/_compat.py \
    dbus/_dbus.py \
    dbus/decorators.py \
    dbus/exceptions.py \
    dbus/_expat_introspect_parser.py \
    dbus/gi_service.py \
    dbus/glib.py \
    dbus/__init__.py \
    dbus/lowlevel.py \
    dbus/mainloop/__init__.py \
    dbus/mainloop/glib.py \
    dbus/proxies.py \
    dbus/server.py \
    dbus/service.py \
    dbus/types.py

if !HAVE_PYTHON_3
nobase_python_PYTHON += \
    dbus/gobject_service.py \
    $(NULL)
endif

check_py_sources = $(nobase_python_PYTHON)
include $(top_srcdir)/tools/check-coding-style.mk

# === Devel stuff ===

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = dbus-python.pc

dbusincludedir = $(includedir)/dbus-1.0/dbus
dbusinclude_HEADERS = include/dbus/dbus-python.h

# === Tests ===

cross-test-compile: all

cross-test-server:
	$(AM_TESTS_ENVIRONMENT) $(PYTHON) $(top_srcdir)/test/cross-test-server.py
cross-test-client:
	$(AM_TESTS_ENVIRONMENT) $(PYTHON) $(top_srcdir)/test/cross-test-client.py

AM_TESTS_ENVIRONMENT = \
	export DBUS_TOP_SRCDIR="$(abs_top_srcdir)"; \
	export DBUS_TOP_BUILDDIR="$(abs_top_builddir)"; \
	export DBUS_TEST_TMPDIR="$(abs_top_builddir)/test"; \
	export DBUS_TEST_UNINSTALLED=1; \
	export DBUS_PYTHON_VERSION='$(PACKAGE_VERSION)'; \
	export PYTHONPATH="$(abs_top_srcdir):$(abs_top_srcdir)/test:$(abs_top_builddir)/.libs:$(abs_top_builddir)/test/.libs"; \
	export PYTHON='$(PYTHON)'; \
	export DBUS_FATAL_WARNINGS=1; \
	$(NULL)

TEST_EXTENSIONS = .sh .py

if HAVE_DBUS_RUN_SESSION
LOG_COMPILER = $(DBUS_RUN_SESSION) \
	--config-file=$(top_builddir)/test/tmp-session-bus.conf \
	--
installed_log_compiler = $(DBUS_RUN_SESSION) \
	--config-file=$(installed_testdir)/test/tmp-session-bus.conf \
	--
else
LOG_COMPILER = $(top_srcdir)/test/with-session-bus.sh \
	--config-file=$(top_builddir)/test/tmp-session-bus.conf \
	--
installed_log_compiler = $(installed_testdir)/test/with-session-bus.sh \
	--config-file=$(installed_testdir)/test/tmp-session-bus.conf \
	--
endif

installed_log_compiler += \
	env \
	PYTHON=$(PYTHON) \
	DBUS_TOP_SRCDIR=$(installed_testdir) \
	DBUS_TOP_BUILDDIR=$(installed_testdir) \
	$(NULL)

SH_LOG_COMPILER = $(LOG_COMPILER) $(SHELL)
PY_LOG_COMPILER = $(LOG_COMPILER) $(PYTHON)

dist_test_sh = \
	test/run-test.sh \
	$(NULL)

dist_test_py = \
	test/test-client.py \
	test/test-p2p.py \
	test/test-signals.py \
	test/test-standalone.py \
	test/test-unusable-main-loop.py \
	$(NULL)

dist_test_extra_python = \
	test/crosstest.py \
	$(NULL)

dist_test_extra_scripts = \
	test/cross-test-client.py \
	test/cross-test-server.py \
	test/test-service.py \
	test/wait-for-name.py \
	test/with-session-bus.sh \
	$(NULL)

if HAVE_PYTHON_3
dist_test_py += test/test-exception-py3.py
else
dist_test_py += test/test-exception-py2.py
endif

test_programs = \
	test/test-import-repeatedly \
	$(NULL)

test_test_import_repeatedly_SOURCES = test/import-repeatedly.c
test_test_import_repeatedly_CPPFLAGS = $(PYTHON_INCLUDES)
test_test_import_repeatedly_LDADD = $(PYTHON_LIBS)

TESTS = \
	$(dist_test_py) \
	$(dist_test_sh) \
	$(test_programs) \
	$(NULL)

noinst_DATA = \
	test/TestSuitePythonService.service \
	test/tmp-session-bus.conf \
	$(NULL)
CLEANFILES += $(noinst_DATA)

installed_test_test_data = \
	test/installable/TestSuitePythonService.service \
	test/installable/tmp-session-bus.conf \
	$(NULL)
CLEANFILES += $(installed_test_test_data)

$(noinst_DATA): test/%: test/%.in
	@$(MKDIR_P) $(dir $@)
	$(AM_V_GEN)$(SED) \
		-e 's|[@]PYTHON[@]|$(PYTHON)|g' \
		-e 's|[@]G_TEST_SRCDIR[@]|$(abs_top_srcdir)|g' \
		-e 's|[@]G_TEST_BUILDDIR[@]|$(abs_top_builddir)|g' \
		$< > $@

$(installed_test_test_data): test/installable/%: test/%.in
	@$(MKDIR_P) $(dir $@)
	$(AM_V_GEN)$(SED) \
		-e 's|[@]PYTHON[@]|$(PYTHON)|g' \
		-e 's|[@]G_TEST_SRCDIR[@]|$(installed_testdir)|g' \
		-e 's|[@]G_TEST_BUILDDIR[@]|$(installed_testdir)|g' \
		$< > $@

if ENABLE_INSTALLED_TESTS
nobase_installed_test_PROGRAMS = $(test_programs)
nobase_dist_installed_test_SCRIPTS = \
	$(dist_test_py) \
	$(dist_test_sh) \
	$(dist_test_extra_scripts) \
	$(NULL)
nobase_dist_installed_test_PYTHON = \
	$(dist_test_extra_python) \
	$(NULL)
installed_test_test_DATA = $(installed_test_test_data)
installed_test_meta_DATA = $(installed_test_metadata)
else
noinst_PROGRAMS = $(test_programs)
dist_noinst_SCRIPTS = \
	$(dist_test_py) \
	$(dist_test_sh) \
	$(dist_test_extra_scripts) \
	$(NULL)
endif

installed_test_metadata = \
	$(patsubst %,%.test,$(dist_test_py)) \
	$(patsubst %,%.test,$(dist_test_sh)) \
	$(patsubst %,%.test,$(test_programs)) \
	$(NULL)
CLEANFILES += $(installed_test_metadata)

$(patsubst %,%.test,$(dist_test_py)): %.test: Makefile
	$(AM_V_GEN) (echo '[Test]' > $@.tmp; \
	echo 'Type=session' >> $@.tmp; \
	echo 'Exec=$(installed_log_compiler) $(PYTHON) $(installed_testdir)/$*' >> $@.tmp; \
	mv $@.tmp $@)

$(patsubst %,%.test,$(dist_test_sh)): %.test: Makefile
	$(AM_V_GEN) (echo '[Test]' > $@.tmp; \
	echo 'Type=session' >> $@.tmp; \
	echo 'Exec=$(installed_log_compiler) $(installed_testdir)/$*' >> $@.tmp; \
	mv $@.tmp $@)

$(patsubst %,%.test,$(test_programs)): %.test: Makefile
	$(AM_V_GEN) (echo '[Test]' > $@.tmp; \
	echo 'Type=session' >> $@.tmp; \
	echo 'Exec=$(installed_log_compiler) $(installed_testdir)/$*$(EXEEXT)' >> $@.tmp; \
	mv $@.tmp $@)

# === Documentation ===

@GENERATE_CHANGELOG_RULES@

dist-hook: dist-ChangeLog
	echo $(VERSION) > $(distdir)/.version
	touch $(distdir)/MANIFEST
	touch $(distdir)/MANIFEST.in
	( cd $(distdir) && find -type d -o -print ) | \
		LC_ALL=C sort | \
		$(SED) -e 's|^\./||' \
		> $(distdir)/MANIFEST
	sed -e 's/.*/include &/' < $(distdir)/MANIFEST > $(distdir)/MANIFEST.in

TXT_RSTDOCS = \
	doc/tutorial.txt \
	doc/API_CHANGES.txt \
	doc/HACKING.txt \
	doc/PY3PORT.txt \
	$(NULL)
RSTDOCS = \
	README \
	NEWS \
	$(NULL)
dist_doc_DATA = $(TXT_RSTDOCS) $(RSTDOCS)

maintainer-upload:
	rsync -tvpP --chmod=ugo=r $(DIST_ARCHIVES) $(DIST_ARCHIVES:%=%.asc) \
	dbus.freedesktop.org:/srv/dbus.freedesktop.org/www/releases/dbus-python/

maintainer-update-website: _maintainer-update-apidocs \
	_maintainer-update-htmldocs

if ENABLE_DOCS
_maintainer-update-htmldocs: $(HTML_TXT_RSTDOCS) $(HTML_RSTDOCS)
	rsync -rtvzPp --chmod=Dg+s,ug+rwX,o=rX doc \
	$(patsubst %,$(srcdir)/%,$(RSTDOCS)) $(HTML_RSTDOCS) \
	dbus.freedesktop.org:/srv/dbus.freedesktop.org/www/doc/dbus-python/

HTML_TXT_RSTDOCS = $(patsubst %.txt,%.html,$(TXT_RSTDOCS))
HTML_RSTDOCS = $(patsubst %,%.html,$(RSTDOCS))
nodist_doc_DATA = $(HTML_TXT_RSTDOCS) $(HTML_RSTDOCS)

CLEANFILES += $(nodist_doc_DATA)

$(HTML_TXT_RSTDOCS) : %.html: %.txt
	$(INSTALL) -d doc
	$(RST2HTML) $(RST2HTMLFLAGS) $< $@
$(HTML_RSTDOCS) : %.html: %
	$(RST2HTML) $(RST2HTMLFLAGS) $< $@
else
_maintainer-update-htmldocs:
	@echo "*** Not updating the HTML docs on the website - install rst2html"
	@echo "*** from http://docutils.sourceforge.net/ and configure with "
	@echo "*** --enable-html-docs"
endif

if ENABLE_API_DOCS
all: api/index.html

clean-local:
	rm -rf api

APIDOC_PYTHONPATH = $(abs_top_srcdir):$(abs_top_builddir)/.libs

api api/index.html: $(nobase_python_PYTHON) \
		    _dbus_bindings.la \
		    _dbus_glib_bindings.la
	rm -rf api
	mkdir api
	cd $(abs_top_srcdir) && \
	PYTHONPATH=$(APIDOC_PYTHONPATH) DBUS_PYTHON_NO_DEPRECATED=1 \
	$(PYTHON) -Wignore::DeprecationWarning \
	$(EPYDOC) -o $(abs_top_builddir)/api --html \
		--docformat restructuredtext -v \
		`find dbus -name '*.py' \
			| sed -e 's#/__init__\.py##g' \
				-e 's/\.py\>//g' -e 's#/#.#'g` \
		|| { rm -rf api; exit 1; }

_maintainer-update-apidocs: api
	rsync -rtvzPp --chmod=Dg+s,ug+rwX,o=rX api/ \
	dbus.freedesktop.org:/srv/dbus.freedesktop.org/www/doc/dbus-python/api/
else
_maintainer-update-apidocs:
	@echo "*** Not updating the API docs on the website - install epydoc 3"
	@echo "*** alpha (or newer) and configure with --enable-api-docs"
endif

check_c_sources = \
	$(_dbus_bindings_la_SOURCES) \
	$(_dbus_glib_bindings_la_SOURCES) \
	$(NULL)

include $(top_srcdir)/tools/check-coding-style.mk

.PHONY: cross-test-compile cross-test-server cross-test-client \
	always-rebuild maintainer-update-website \
	_maintainer-update-apidocs _maintainer-update-htmldocs \
	maintainer-upload
