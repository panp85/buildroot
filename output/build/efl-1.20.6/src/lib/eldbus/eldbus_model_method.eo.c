EWAPI const Efl_Event_Description _ELDBUS_MODEL_METHOD_EVENT_SUCCESSFUL_CALL =
   EFL_EVENT_DESCRIPTION("successful,call");

void _eldbus_model_method_constructor(Eo *obj, Eldbus_Model_Method_Data *pd, Eldbus_Proxy *proxy, const Eldbus_Introspection_Method *method);

EOAPI EFL_VOID_FUNC_BODYV(eldbus_model_method_constructor, EFL_FUNC_CALL(proxy, method), Eldbus_Proxy *proxy, const Eldbus_Introspection_Method *method);

void _eldbus_model_method_call(Eo *obj, Eldbus_Model_Method_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(eldbus_model_method_call);

Efl_Object *_eldbus_model_method_efl_object_constructor(Eo *obj, Eldbus_Model_Method_Data *pd);


static Eina_Bool
_eldbus_model_method_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELDBUS_MODEL_METHOD_EXTRA_OPS
#define ELDBUS_MODEL_METHOD_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(eldbus_model_method_constructor, _eldbus_model_method_constructor),
      EFL_OBJECT_OP_FUNC(eldbus_model_method_call, _eldbus_model_method_call),
      EFL_OBJECT_OP_FUNC(efl_constructor, _eldbus_model_method_efl_object_constructor),
      ELDBUS_MODEL_METHOD_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELDBUS_MODEL_METHOD_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELDBUS_MODEL_METHOD_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _eldbus_model_method_class_desc = {
   EO_VERSION,
   "Eldbus.Model.Method",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Eldbus_Model_Method_Data),
   _eldbus_model_method_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(eldbus_model_method_class_get, &_eldbus_model_method_class_desc, ELDBUS_MODEL_ARGUMENTS_CLASS, NULL);
