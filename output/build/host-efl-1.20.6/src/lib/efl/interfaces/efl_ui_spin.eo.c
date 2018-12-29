EOAPI EFL_VOID_FUNC_BODYV(efl_ui_spin_min_max_set, EFL_FUNC_CALL(min, max), double min, double max);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_ui_spin_min_max_get, EFL_FUNC_CALL(min, max), double *min, double *max);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_spin_step_set, EFL_FUNC_CALL(step), double step);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_spin_step_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_spin_value_set, EFL_FUNC_CALL(val), double val);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_spin_value_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_spin_interval_set, EFL_FUNC_CALL(interval), double interval);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_spin_interval_get, double, 0);

static Eina_Bool
_efl_ui_spin_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_SPIN_EXTRA_OPS
#define EFL_UI_SPIN_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_spin_min_max_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_min_max_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_step_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_step_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_value_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_value_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_interval_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_spin_interval_get, NULL),
      EFL_UI_SPIN_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_SPIN_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_SPIN_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_spin_class_desc = {
   EO_VERSION,
   "Efl.Ui.Spin",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_spin_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_spin_interface_get, &_efl_ui_spin_class_desc, NULL, NULL);
