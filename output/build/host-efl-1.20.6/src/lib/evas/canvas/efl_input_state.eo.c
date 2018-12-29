EOAPI EFL_FUNC_BODYV_CONST(efl_input_modifier_enabled_get, Eina_Bool, 0, EFL_FUNC_CALL(mod, seat), Efl_Input_Modifier mod, const Efl_Input_Device *seat);
EOAPI EFL_FUNC_BODYV_CONST(efl_input_lock_enabled_get, Eina_Bool, 0, EFL_FUNC_CALL(lock, seat), Efl_Input_Lock lock, const Efl_Input_Device *seat);

static Eina_Bool
_efl_input_state_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_INPUT_STATE_EXTRA_OPS
#define EFL_INPUT_STATE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_input_modifier_enabled_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_input_lock_enabled_get, NULL),
      EFL_INPUT_STATE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_INPUT_STATE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_INPUT_STATE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_input_state_class_desc = {
   EO_VERSION,
   "Efl.Input.State",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_input_state_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_input_state_interface_get, &_efl_input_state_class_desc, NULL, NULL);
