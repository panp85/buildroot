EOAPI EFL_FUNC_BODYV(efl_config_set, Eina_Bool, 0, EFL_FUNC_CALL(name, val), const char *name, const Eina_Value *val);
EOAPI EFL_FUNC_BODYV_CONST(efl_config_get, Eina_Value *, NULL, EFL_FUNC_CALL(name), const char *name);
EOAPI EFL_FUNC_BODYV_CONST(efl_config_list_get, Eina_Iterator *, NULL, EFL_FUNC_CALL(name), const char *name);

static Eina_Bool
_efl_config_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CONFIG_EXTRA_OPS
#define EFL_CONFIG_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_config_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_config_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_config_list_get, NULL),
      EFL_CONFIG_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CONFIG_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CONFIG_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_config_class_desc = {
   EO_VERSION,
   "Efl.Config",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_config_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_config_interface_get, &_efl_config_class_desc, NULL, NULL);
