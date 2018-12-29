EOAPI EFL_VOID_FUNC_BODYV(efl_control_priority_set, EFL_FUNC_CALL(priority), int priority);
EOAPI EFL_FUNC_BODY_CONST(efl_control_priority_get, int, 0);
EOAPI EFL_VOID_FUNC_BODYV(efl_control_suspend_set, EFL_FUNC_CALL(suspend), Eina_Bool suspend);
EOAPI EFL_FUNC_BODY_CONST(efl_control_suspend_get, Eina_Bool, 0);

static Eina_Bool
_efl_control_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CONTROL_EXTRA_OPS
#define EFL_CONTROL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_control_priority_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_control_priority_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_control_suspend_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_control_suspend_get, NULL),
      EFL_CONTROL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CONTROL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CONTROL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_control_class_desc = {
   EO_VERSION,
   "Efl.Control",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_control_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_control_interface_get, &_efl_control_class_desc, NULL, NULL);
