EOAPI EFL_VOID_FUNC_BODYV(efl_text_font_set, EFL_FUNC_CALL(font, size), const char *font, int size);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_text_font_get, EFL_FUNC_CALL(font, size), const char **font, int *size);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_font_source_set, EFL_FUNC_CALL(font_source), const char *font_source);
EOAPI EFL_FUNC_BODY_CONST(efl_text_font_source_get, const char *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_font_fallbacks_set, EFL_FUNC_CALL(font_fallbacks), const char *font_fallbacks);
EOAPI EFL_FUNC_BODY_CONST(efl_text_font_fallbacks_get, const char *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_font_weight_set, EFL_FUNC_CALL(font_weight), Efl_Text_Font_Weight font_weight);
EOAPI EFL_FUNC_BODY_CONST(efl_text_font_weight_get, Efl_Text_Font_Weight, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_font_slant_set, EFL_FUNC_CALL(style), Efl_Text_Font_Slant style);
EOAPI EFL_FUNC_BODY_CONST(efl_text_font_slant_get, Efl_Text_Font_Slant, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_font_width_set, EFL_FUNC_CALL(width), Efl_Text_Font_Width width);
EOAPI EFL_FUNC_BODY_CONST(efl_text_font_width_get, Efl_Text_Font_Width, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_font_lang_set, EFL_FUNC_CALL(lang), const char *lang);
EOAPI EFL_FUNC_BODY_CONST(efl_text_font_lang_get, const char *, NULL);

static Eina_Bool
_efl_text_font_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_TEXT_FONT_EXTRA_OPS
#define EFL_TEXT_FONT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_text_font_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_font_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_font_source_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_font_source_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_font_fallbacks_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_font_fallbacks_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_font_weight_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_font_weight_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_font_slant_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_font_slant_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_font_width_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_font_width_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_font_lang_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_font_lang_get, NULL),
      EFL_TEXT_FONT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_TEXT_FONT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_TEXT_FONT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_text_font_class_desc = {
   EO_VERSION,
   "Efl.Text.Font",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_text_font_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_text_font_interface_get, &_efl_text_font_class_desc, NULL, NULL);
