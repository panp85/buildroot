Json-1.0.gir: Json_1_0_gir_list 
	@-echo Generating $@...
	$(PYTHON) $(G_IR_SCANNER)	\
	--verbose -no-libtool	\
	--namespace=Json	\
	--nsversion=1.0	\
		\
	--library=json-glib-1.0	\
		\
	--add-include-path=$(G_IR_INCLUDEDIR)	\
	--include=GObject-2.0 --include=Gio-2.0	\
		\
	--cflags-begin	\
	-DJSON_COMPILATION=1 -I..\..	\
	--cflags-end	\
	--warn-all --pkg-export json-glib-1.0 --c-include json-glib/json-glib.h	\
	--filelist=Json_1_0_gir_list	\
	-o $@

Json-1.0.typelib: Json-1.0.gir
	@-echo Compiling $@...
	$(G_IR_COMPILER)	\
	--includedir=. --debug --verbose	\
	Json-1.0.gir	\
	-o $@

