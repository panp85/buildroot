EOAPI EFL_FUNC_BODYV(elm_interface_atspi_value_and_text_set, Eina_Bool, 0, EFL_FUNC_CALL(value, text), double value, const char *text);
EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_atspi_value_and_text_get, EFL_FUNC_CALL(value, text), double *value, const char **text);
EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_atspi_value_range_get, EFL_FUNC_CALL(lower_limit, upper_limit, description), double *lower_limit, double *upper_limit, const char **description);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_value_increment_get, double, 0);

static Eina_Bool
_elm_interface_atspi_value_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_INTERFACE_ATSPI_VALUE_EXTRA_OPS
#define ELM_INTERFACE_ATSPI_VALUE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_value_and_text_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_value_and_text_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_value_range_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_value_increment_get, NULL),
      ELM_INTERFACE_ATSPI_VALUE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_INTERFACE_ATSPI_VALUE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_INTERFACE_ATSPI_VALUE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_interface_atspi_value_class_desc = {
   EO_VERSION,
   "Elm.Interface.Atspi.Value",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _elm_interface_atspi_value_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_interface_atspi_value_interface_get, &_elm_interface_atspi_value_class_desc, NULL, NULL);
