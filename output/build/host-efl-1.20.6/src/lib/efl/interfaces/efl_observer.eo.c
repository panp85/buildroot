EOAPI EFL_VOID_FUNC_BODYV(efl_observer_update, EFL_FUNC_CALL(obs, key, data), Efl_Object *obs, const char *key, void *data);

static Eina_Bool
_efl_observer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_OBSERVER_EXTRA_OPS
#define EFL_OBSERVER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_observer_update, NULL),
      EFL_OBSERVER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_OBSERVER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_OBSERVER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_observer_class_desc = {
   EO_VERSION,
   "Efl.Observer",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_observer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_observer_interface_get, &_efl_observer_class_desc, NULL, NULL);
