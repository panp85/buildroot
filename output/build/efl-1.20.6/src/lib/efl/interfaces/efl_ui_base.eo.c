EOAPI EFL_VOID_FUNC_BODYV(efl_ui_mirrored_set, EFL_FUNC_CALL(rtl), Eina_Bool rtl);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_mirrored_get, Eina_Bool, EINA_FALSE /* false */);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_mirrored_automatic_set, EFL_FUNC_CALL(automatic), Eina_Bool automatic);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_mirrored_automatic_get, Eina_Bool, EINA_TRUE /* true */);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_language_set, EFL_FUNC_CALL(language), const char *language);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_language_get, const char *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_scale_set, EFL_FUNC_CALL(scale), double scale);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_scale_get, double, 0.000000);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_base_scale_get, double, 1.000000);

static Eina_Bool
_efl_ui_base_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_BASE_EXTRA_OPS
#define EFL_UI_BASE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_mirrored_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_mirrored_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_mirrored_automatic_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_mirrored_automatic_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_language_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_language_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_scale_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_scale_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_base_scale_get, NULL),
      EFL_UI_BASE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_BASE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_BASE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_base_class_desc = {
   EO_VERSION,
   "Efl.Ui.Base",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_base_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_base_interface_get, &_efl_ui_base_class_desc, NULL, NULL);
