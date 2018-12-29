EOAPI EFL_VOID_FUNC_BODYV(efl_text_properties_font_set, EFL_FUNC_CALL(font, size), const char *font, Efl_Font_Size size);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_text_properties_font_get, EFL_FUNC_CALL(font, size), const char **font, Efl_Font_Size *size);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_properties_font_source_set, EFL_FUNC_CALL(font_source), const char *font_source);
EOAPI EFL_FUNC_BODY_CONST(efl_text_properties_font_source_get, const char *, NULL);

static Eina_Bool
_efl_text_properties_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_TEXT_PROPERTIES_EXTRA_OPS
#define EFL_TEXT_PROPERTIES_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_text_properties_font_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_properties_font_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_properties_font_source_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_properties_font_source_get, NULL),
      EFL_TEXT_PROPERTIES_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_TEXT_PROPERTIES_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_TEXT_PROPERTIES_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_text_properties_class_desc = {
   EO_VERSION,
   "Efl.Text.Properties",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_text_properties_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_text_properties_interface_get, &_efl_text_properties_class_desc, NULL, NULL);
