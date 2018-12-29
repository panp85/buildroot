
static Eina_Bool
_efl_interface_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifdef EFL_INTERFACE_EXTRA_OPS
   EFL_OPS_DEFINE(ops, EFL_INTERFACE_EXTRA_OPS);
   opsp = &ops;
#endif

#ifdef EFL_INTERFACE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_INTERFACE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_interface_class_desc = {
   EO_VERSION,
   "Efl.Interface",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_interface_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_interface_interface_get, &_efl_interface_class_desc, NULL, NULL);
