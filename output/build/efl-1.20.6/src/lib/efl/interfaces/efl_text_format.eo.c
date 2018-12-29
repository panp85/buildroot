EOAPI EFL_VOID_FUNC_BODYV(efl_text_ellipsis_set, EFL_FUNC_CALL(value), double value);
EOAPI EFL_FUNC_BODY_CONST(efl_text_ellipsis_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_wrap_set, EFL_FUNC_CALL(wrap), Efl_Text_Format_Wrap wrap);
EOAPI EFL_FUNC_BODY_CONST(efl_text_wrap_get, Efl_Text_Format_Wrap, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_multiline_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);
EOAPI EFL_FUNC_BODY_CONST(efl_text_multiline_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_halign_set, EFL_FUNC_CALL(value), Efl_Text_Format_Horizontal_Alignment_Type value);
EOAPI EFL_FUNC_BODY_CONST(efl_text_halign_get, Efl_Text_Format_Horizontal_Alignment_Type, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_valign_set, EFL_FUNC_CALL(value), Efl_Text_Format_Vertical_Alignment_Type value);
EOAPI EFL_FUNC_BODY_CONST(efl_text_valign_get, Efl_Text_Format_Vertical_Alignment_Type, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_linegap_set, EFL_FUNC_CALL(value), double value);
EOAPI EFL_FUNC_BODY_CONST(efl_text_linegap_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_linerelgap_set, EFL_FUNC_CALL(value), double value);
EOAPI EFL_FUNC_BODY_CONST(efl_text_linerelgap_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_tabstops_set, EFL_FUNC_CALL(value), int value);
EOAPI EFL_FUNC_BODY_CONST(efl_text_tabstops_get, int, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_password_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);
EOAPI EFL_FUNC_BODY_CONST(efl_text_password_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_text_replacement_char_set, EFL_FUNC_CALL(repch), const char *repch);
EOAPI EFL_FUNC_BODY_CONST(efl_text_replacement_char_get, const char *, NULL);

static Eina_Bool
_efl_text_format_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_TEXT_FORMAT_EXTRA_OPS
#define EFL_TEXT_FORMAT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_text_ellipsis_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_ellipsis_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_wrap_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_wrap_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_multiline_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_multiline_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_halign_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_halign_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_valign_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_valign_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_linegap_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_linegap_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_linerelgap_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_linerelgap_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_tabstops_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_tabstops_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_password_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_password_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_replacement_char_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_text_replacement_char_get, NULL),
      EFL_TEXT_FORMAT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_TEXT_FORMAT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_TEXT_FORMAT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_text_format_class_desc = {
   EO_VERSION,
   "Efl.Text.Format",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_text_format_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_text_format_interface_get, &_efl_text_format_class_desc, NULL, NULL);
