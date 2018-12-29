EWAPI const Efl_Event_Description _EFL_EVENT_ANIMATOR_TICK =
   EFL_EVENT_DESCRIPTION("animator,tick");

static Eina_Bool
_efl_animator_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifdef EFL_ANIMATOR_EXTRA_OPS
   EFL_OPS_DEFINE(ops, EFL_ANIMATOR_EXTRA_OPS);
   opsp = &ops;
#endif

#ifdef EFL_ANIMATOR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_ANIMATOR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_animator_class_desc = {
   EO_VERSION,
   "Efl.Animator",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_animator_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_animator_interface_get, &_efl_animator_class_desc, NULL, NULL);
