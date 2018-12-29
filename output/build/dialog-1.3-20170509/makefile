# $Id: makefile.in,v 1.96 2017/01/24 10:14:26 tom Exp $
# template makefile for DIALOG
##############################################################################
# Copyright (c) 1999-2016,2017 Thomas E. Dickey                              #
#                                                                            #
# Permission is hereby granted, free of charge, to any person obtaining a    #
# copy of this software and associated documentation files (the "Software"), #
# to deal in the Software without restriction, including without limitation  #
# the rights to use, copy, modify, merge, publish, distribute, distribute    #
# with modifications, sublicense, and/or sell copies of the Software, and to #
# permit persons to whom the Software is furnished to do so, subject to the  #
# following conditions:                                                      #
#                                                                            #
# The above copyright notice and this permission notice shall be included in #
# all copies or substantial portions of the Software.                        #
#                                                                            #
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR #
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,   #
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL    #
# THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER      #
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING    #
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER        #
# DEALINGS IN THE SOFTWARE.                                                  #
#                                                                            #
# Except as contained in this notice, the name(s) of the above copyright     #
# holders shall not be used in advertising or otherwise to promote the sale, #
# use or other dealings in this Software without prior written               #
# authorization.                                                             #
##############################################################################
#
SHELL		= /bin/sh

srcdir		= .
top_srcdir	= .


prefix		= /usr
exec_prefix	= /usr
datarootdir	= ${prefix}/share

top_builddir	= .

x		= 
o		= .o

DESTDIR		= 

THIS		= dialog

CFG_ROOTNAME	= dialog
HDR_ROOTNAME	= dialog
LIB_ROOTNAME	= dialog
LIB_PREFIX	= lib
LIB_SUFFIX	= .a

VERSION_MAJOR	= 1
VERSION_MINOR	= 3
VERSION		= $(VERSION_MAJOR).$(VERSION_MINOR)
REL_VERSION	= 1.3
ABI_VERSION	= 14.0.0
LIB_ROOTNAME	= dialog

RESULTING_SYMS	= 
VERSIONED_SYMS	= 

# begin CF__DEFINE_SHLIB_VARS
LIB_BASENAME	= ${LIB_PREFIX}${LIB_ROOTNAME}${LIB_SUFFIX}
LIB_REL_NAME	= ${LIB_BASENAME}.${REL_VERSION}
LIB_ABI_NAME	= ${LIB_BASENAME}.${ABI_VERSION}
LIB_TARGET	= ${LIB_BASENAME}
RM_SHARED_OPTS	= 
# end CF__DEFINE_SHLIB_VARS

bindir		= ${exec_prefix}/bin
includedir	= ${prefix}/include
libdir		= ${exec_prefix}/lib
mandir		= ${datarootdir}/man
manext		= 1
libext		= 3

BINDIR		= $(DESTDIR)$(bindir)
INCLUDEDIR	= $(DESTDIR)$(includedir)
LIBDIR		= $(DESTDIR)$(libdir)
MANDIR		= $(DESTDIR)$(mandir)

MAN1DIR		= $(MANDIR)/man1
MAN3DIR		= $(MANDIR)/man3

# see po/makefile
localedir       = $(prefix)/share/locale

CFLAGS		= -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64  -Os 
CPPFLAGS	= -I. -I$(srcdir) -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -D_GNU_SOURCE -D_DEFAULT_SOURCE -I/media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/include -D_GNU_SOURCE   -DHAVE_CONFIG_H -DLOCALEDIR=\"$(localedir)\"
EXTRA_CFLAGS	= 
CC		= /media/panpan/tools/buildroot-2018.02.8/output/host/bin/arm-linux-gnueabihf-gcc
CPP		= /media/panpan/tools/buildroot-2018.02.8/output/host/bin/arm-linux-gnueabihf-cpp
AR		= /media/panpan/tools/buildroot-2018.02.8/output/host/bin/arm-linux-gnueabihf-ar
ARFLAGS		= -curvU
LDFLAGS		=  -L/media/panpan/tools/buildroot-2018.02.8/output/host/arm-buildroot-linux-gnueabihf/sysroot/usr/lib 
LIBS		= -lncurses   -lm 
RANLIB		= /media/panpan/tools/buildroot-2018.02.8/output/host/bin/arm-linux-gnueabihf-ranlib

RM		= rm -f
LN_S		= ln -s -f
LINT		= 
LINT_OPTS	= 

CTAGS		= 
ETAGS		= 

LIBTOOL		=  
LIBTOOL_OPTS	= 
LIBTOOL_CLEAN	= 
LIBTOOL_COMPILE	= 
LIBTOOL_CREATE	= ${AR} -cr $@
LIBTOOL_LINK	= ${CC}
LIBTOOL_INSTALL	= 
LIBTOOL_UNINSTALL = 
LIBTOOL_VERSION = -version-number

INSTALL		= /usr/bin/install -c
INSTALL_PROGRAM	= $(LIBTOOL_INSTALL) ${INSTALL}
INSTALL_SCRIPT	= ${INSTALL}
INSTALL_DATA	= ${INSTALL} -m 644

LINK		= $(LIBTOOL_LINK)

# The library is always named for the package, but the program can be further
# renamed at install time, starting with the package name.
PACKAGE		= dialog
ACTUAL_PROG	= `echo $(PACKAGE) |sed s,^,,`
LIB_CONFIG	= $(CFG_ROOTNAME)-config

# The library name $(LIB) is set at configure/make time, since it is used as a
# makefile target.  Ditto for $(PROG).
LIB		= ${LIB_BASENAME}
PROG		= dialog$x
#
# Standard .c to .o compile line.
#
.SUFFIXES: .c .i $o .1 .man .txt  .html  .ps .pdf 
.c.i :
	
	$(CPP) $(CPPFLAGS) -c $< >$@
.c$o :
	
	$(LIBTOOL_COMPILE) $(CC) $(CFLAGS) $(EXTRA_CFLAGS) $(CPPFLAGS) -c $<

.1.txt :
	GROFF_NO_SGR=stupid $(SHELL) -c "tbl $< | nroff -Tascii -man | col -bx" >$@

.1.html :
	./man2html.tmp $* 1 man >$@

.1.ps :
	$(SHELL) -c "tbl $< | groff -man" >$@

.ps.pdf :
	ps2pdf $*.ps

EXTRAOBJS =  trace$o rc$o calendar$o fselect$o timebox$o buildlist$o rangebox$o treeview$o formbox$o guage$o pause$o prgbox$o progressbox$o tailbox$o mixedform$o mixedgauge$o
OBJECTS = $(EXTRAOBJS) \
	argv$o \
	arrows$o \
	buttons$o \
	checklist$o \
	columns$o \
	dlg_keys$o \
	editbox$o \
	help$o \
	inputbox$o \
	inputstr$o \
	menubox$o \
	mouse$o \
	mousewget$o \
	msgbox$o \
	textbox$o \
	ui_getc$o \
	util$o \
	version$o \
	yesno$o

LIB_OBJECT = ${OBJECTS}

SRCS = $(OBJECTS:$o=.c)
HDRS = \
	dialog.h \
	dlg_colors.h \
	dlg_config.h \
	dlg_keys.h

ALL		= $(LIB) $(PROG)

BIN_DIRS	= $(BINDIR) $(MAN1DIR)
LIB_DIRS	= $(LIBDIR) $(INCLUDEDIR)

PO_DIR		= $(srcdir)/po

all	:: $(ALL)

#install	:: install-lib
#uninstall	:: uninstall-lib

# :
#	@echo "Building GNU gettext library..."
#	@cd intl && $(MAKE) -${MAKEFLAGS}

dialog$o \
$(OBJECTS) : $(srcdir)/dialog.h $(srcdir)/dlg_keys.h dlg_config.h VERSION

$(PROG)$x : $(LIB) dialog$o # 
	$(LINK) -o $@ dialog$o -L. -ldialog $(CFLAGS) $(LDFLAGS) $(LIBS)

clean	\
distclean \
install \
install-full \
install-strip \
uninstall ::
	@echo making $@
#	@-test -f intl/makefile && cd intl && $(MAKE) -${MAKEFLAGS} $@
#	@-test -f po/makefile && cd po && $(MAKE) -${MAKEFLAGS} $@

clean	::
	@- $(RM) -r autom4te.cache
	- $(RM) *.*cov *.da *.bb *.bbg
	- $(LIBTOOL_CLEAN) $(RM) *.i *$o $(ALL)
	- $(RM) headers.sed
	- $(RM) *.html *.pdf *.png *.ps *.txt dialog_lib.1
	- $(RM) core *~ tags TAGS

distclean :: clean
	$(RM) intl/libintl.h intl/po2tbl.sed
	$(RM) makefile dlg_config.h config.cache config.log config.status
	$(RM) samples/install/makefile
	$(RM) headers-sh
	$(RM) man2html.*
	$(RM) dialog-config

install :: install-bin install-man
	@echo "made $@"

install-full :: install-lib install-bin install-man
	@echo "made $@"

install-strip :: $(PROG) $(BINDIR)
	$(INSTALL_PROGRAM) -s $(PROG) $(BINDIR)

uninstall :: uninstall-bin uninstall-man
	@echo "made $@"

uninstall-full :: uninstall-bin uninstall-man uninstall-lib
	@echo "made $@"

install-bin : $(PROG) $(BINDIR)
	$(INSTALL_PROGRAM) $(PROG) $(BINDIR)/$(ACTUAL_PROG)$x

uninstall-bin :
	$(RM) $(BINDIR)/$(ACTUAL_PROG)$x

install-man :: $(MAN1DIR)
	@ echo "** installing $(ACTUAL_PROG).$(manext)"
	@ $(SHELL) $(srcdir)/rename.sh \
		$(srcdir)/dialog.1 \
		$(MAN1DIR)/$(ACTUAL_PROG).$(manext) \
		$(ACTUAL_PROG) \
		dialog \
		$(INSTALL_DATA)

uninstall-man ::
	$(RM) $(MAN1DIR)/$(ACTUAL_PROG).$(manext)

# most users do not want/need the library, so the install rules are distinct.
install-lib :: $(BINDIR) dialog-config
	@ echo "** installing config script in $(BINDIR)"
	@ $(INSTALL_SCRIPT) dialog-config $(BINDIR)/$(LIB_CONFIG)

install-lib :: $(LIB_DIRS) $(LIB) headers.sed
	@ echo "** installing library in $(LIBDIR)"
	@ $(LIBTOOL_INSTALL) $(INSTALL_DATA) $(LIB) $(LIBDIR)
	@ echo "** installing headers in $(INCLUDEDIR)"
	@ $(SHELL) headers-sh $(INSTALL_DATA) $(INCLUDEDIR) $(srcdir) dialog.h
	@ $(SHELL) headers-sh $(INSTALL_DATA) $(INCLUDEDIR) $(srcdir) dlg_colors.h
	@ $(SHELL) headers-sh $(INSTALL_DATA) $(INCLUDEDIR) $(srcdir) dlg_keys.h
	@ $(SHELL) headers-sh $(INSTALL_DATA) $(INCLUDEDIR) .         dlg_config.h

uninstall-lib :: $(BINDIR)
	$(RM) $(BINDIR)/$(LIB_CONFIG)

uninstall-lib :: $(LIB_DIRS)
	- $(LIBTOOL_UNINSTALL) $(RM) $(LIBDIR)/$(LIB)
	@ $(SHELL) headers-sh $(RM) $(INCLUDEDIR) $(srcdir) dialog.h
	@ $(SHELL) headers-sh $(RM) $(INCLUDEDIR) $(srcdir) dlg_colors.h
	@ $(SHELL) headers-sh $(RM) $(INCLUDEDIR) $(srcdir) dlg_keys.h
	@ $(SHELL) headers-sh $(RM) $(INCLUDEDIR) .         dlg_config.h

install-lib :: $(MAN3DIR)
	@ echo "** installing dialog.$(libext)"
	@ $(SHELL) $(srcdir)/rename.sh \
		$(srcdir)/dialog.3 \
		$(MAN3DIR)/dialog.$(libext) \
		$(ACTUAL_PROG) \
		dialog \
		$(INSTALL_DATA)

uninstall-lib ::
	$(RM) $(MAN3DIR)/dialog.$(libext)

headers.sed : headers-sh
	$(SHELL) headers-sh $(INCLUDEDIR) $(srcdir)

################################################################################
TOP_DOCS = \
	dialog.txt \
	dialog.html \
	dialog.pdf \
	dialog.ps

dialog.html : dialog.1
dialog.pdf : dialog.ps
dialog.ps : dialog.1
dialog.txt : dialog.1
################################################################################
# rename, to use suffix-rules
dialog_lib.1 : dialog.3
	-$(RM) $@
	cp dialog.3 $@

LIB_DOCS = \
	dialog_lib.1 \
	dialog_lib.txt \
	dialog_lib.html \
	dialog_lib.pdf \
	dialog_lib.ps

dialog_lib.html : dialog_lib.1
dialog_lib.pdf : dialog_lib.ps
dialog_lib.ps : dialog_lib.1
dialog_lib.txt : dialog_lib.1
################################################################################
docs: $(TOP_DOCS) $(LIB_DOCS)
clean-docs:
	-$(RM) $(TOP_DOCS) $(LIB_DOCS)
################################################################################

$(MAN1DIR) \
$(MAN3DIR) \
$(BINDIR) \
$(INCLUDEDIR) \
$(LIBDIR) : ; mkdir -p $@

#tags :
#	$(CTAGS) $(SRCS) $(HDRS)

#TAGS :
#	$(ETAGS) $(SRCS) $(HDRS)

update-po:
	rsync -Lrtvz  translationproject.org::tp/latest/dialog/  $(PO_DIR)
	test -f $(PO_DIR)/makefile && cd $(PO_DIR) && $(MAKE) $@

lint:
	$(LINT) $(LINT_OPTS) $(CPPFLAGS) *.c

# generated by CF__ADD_SHLIB_RULES
# libmodel: static
# symlinks: 
# shlibver: 

${LIB_BASENAME} :: \
		${LIB_OBJECT}
	@echo linking $@
	$(LIBTOOL_CREATE) ${LIB_OBJECT} 

install \
install.libs :: $(DESTDIR)$(libdir)/${LIB_BASENAME}

$(DESTDIR)$(libdir)/${LIB_BASENAME} :: \
		$(DESTDIR)$(libdir) \
		${LIB_OBJECT}
	@echo linking $@
	$(LIBTOOL_CREATE) ${LIB_OBJECT} 

uninstall \
uninstall.libs ::
	@echo uninstalling $(DESTDIR)$(libdir)/${LIB_BASENAME}
	-rm -f $(DESTDIR)$(libdir)/${LIB_BASENAME}

clean \
clean.libs ::
	-rm -f ${LIB_BASENAME}

mostlyclean::
	-rm -f ${LIB_OBJECT}
# end generated by CF__ADD_SHLIB_RULES
