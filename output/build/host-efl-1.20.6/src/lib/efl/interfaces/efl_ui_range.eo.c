EOAPI EFL_VOID_FUNC_BODYV(efl_ui_range_span_size_set, EFL_FUNC_CALL(size), int size);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_range_span_size_get, int, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_range_value_set, EFL_FUNC_CALL(val), double val);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_range_value_get, double, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_range_min_max_set, EFL_FUNC_CALL(min, max), double min, double max);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_ui_range_min_max_get, EFL_FUNC_CALL(min, max), double *min, double *max);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_range_unit_format_set, EFL_FUNC_CALL(units), const char *units);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_range_unit_format_get, const char *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_range_interval_enabled_set, EFL_FUNC_CALL(enable), Eina_Bool enable);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_range_interval_enabled_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_range_interval_set, EFL_FUNC_CALL(from, to), double from, double to);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_ui_range_interval_get, EFL_FUNC_CALL(from, to), double *from, double *to);

static Eina_Bool
_efl_ui_range_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_RANGE_EXTRA_OPS
#define EFL_UI_RANGE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_range_span_size_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_range_span_size_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_range_value_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_range_value_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_range_min_max_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_range_min_max_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_range_unit_format_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_range_unit_format_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_range_interval_enabled_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_range_interval_enabled_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_range_interval_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_range_interval_get, NULL),
      EFL_UI_RANGE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_RANGE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_RANGE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_range_class_desc = {
   EO_VERSION,
   "Efl.Ui.Range",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_range_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_range_interface_get, &_efl_ui_range_class_desc, NULL, NULL);
