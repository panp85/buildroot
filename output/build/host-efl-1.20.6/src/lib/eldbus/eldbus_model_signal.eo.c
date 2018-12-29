
void _eldbus_model_signal_constructor(Eo *obj, Eldbus_Model_Signal_Data *pd, Eldbus_Proxy *proxy, const Eldbus_Introspection_Signal *signal);

EOAPI EFL_VOID_FUNC_BODYV(eldbus_model_signal_constructor, EFL_FUNC_CALL(proxy, signal), Eldbus_Proxy *proxy, const Eldbus_Introspection_Signal *signal);

Efl_Object *_eldbus_model_signal_efl_object_constructor(Eo *obj, Eldbus_Model_Signal_Data *pd);


void _eldbus_model_signal_efl_object_destructor(Eo *obj, Eldbus_Model_Signal_Data *pd);


static Eina_Bool
_eldbus_model_signal_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELDBUS_MODEL_SIGNAL_EXTRA_OPS
#define ELDBUS_MODEL_SIGNAL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(eldbus_model_signal_constructor, _eldbus_model_signal_constructor),
      EFL_OBJECT_OP_FUNC(efl_constructor, _eldbus_model_signal_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _eldbus_model_signal_efl_object_destructor),
      ELDBUS_MODEL_SIGNAL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELDBUS_MODEL_SIGNAL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELDBUS_MODEL_SIGNAL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _eldbus_model_signal_class_desc = {
   EO_VERSION,
   "Eldbus.Model.Signal",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Eldbus_Model_Signal_Data),
   _eldbus_model_signal_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(eldbus_model_signal_class_get, &_eldbus_model_signal_class_desc, ELDBUS_MODEL_ARGUMENTS_CLASS, NULL);
