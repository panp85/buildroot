
static Eina_Bool
_efl_object_override_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifdef EFL_OBJECT_OVERRIDE_EXTRA_OPS
   EFL_OPS_DEFINE(ops, EFL_OBJECT_OVERRIDE_EXTRA_OPS);
   opsp = &ops;
#endif

#ifdef EFL_OBJECT_OVERRIDE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_OBJECT_OVERRIDE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_object_override_class_desc = {
   EO_VERSION,
   "Efl.Object.Override",
   EFL_CLASS_TYPE_REGULAR_NO_INSTANT,
   0,
   _efl_object_override_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_object_override_class_get, &_efl_object_override_class_desc, NULL, NULL);
