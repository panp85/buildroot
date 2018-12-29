EOAPI EFL_VOID_FUNC_BODYV(efl_ui_autorepeat_initial_timeout_set, EFL_FUNC_CALL(t), double t);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_autorepeat_initial_timeout_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_autorepeat_gap_timeout_set, EFL_FUNC_CALL(t), double t);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_autorepeat_gap_timeout_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_autorepeat_enabled_set, EFL_FUNC_CALL(on), Eina_Bool on);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_autorepeat_enabled_get, Eina_Bool, 0);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_autorepeat_supported_get, Eina_Bool, 0);

static Eina_Bool
_efl_ui_autorepeat_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_AUTOREPEAT_EXTRA_OPS
#define EFL_UI_AUTOREPEAT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_initial_timeout_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_initial_timeout_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_gap_timeout_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_gap_timeout_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_enabled_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_enabled_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_supported_get, NULL),
      EFL_UI_AUTOREPEAT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_AUTOREPEAT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_AUTOREPEAT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_autorepeat_class_desc = {
   EO_VERSION,
   "Efl.Ui.Autorepeat",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_autorepeat_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_autorepeat_interface_get, &_efl_ui_autorepeat_class_desc, NULL, NULL);
