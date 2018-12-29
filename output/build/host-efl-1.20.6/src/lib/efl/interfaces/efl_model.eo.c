EWAPI const Efl_Event_Description _EFL_MODEL_EVENT_PROPERTIES_CHANGED =
   EFL_EVENT_DESCRIPTION("properties,changed");
EWAPI const Efl_Event_Description _EFL_MODEL_EVENT_CHILD_ADDED =
   EFL_EVENT_DESCRIPTION("child,added");
EWAPI const Efl_Event_Description _EFL_MODEL_EVENT_CHILD_REMOVED =
   EFL_EVENT_DESCRIPTION("child,removed");
EWAPI const Efl_Event_Description _EFL_MODEL_EVENT_CHILDREN_COUNT_CHANGED =
   EFL_EVENT_DESCRIPTION("children,count,changed");
EOAPI EFL_FUNC_BODY_CONST(efl_model_properties_get, const Eina_Array *, NULL);
EOAPI EFL_FUNC_BODYV(efl_model_property_set, Efl_Future *, NULL, EFL_FUNC_CALL(property, value), const char *property, const Eina_Value *value);
EOAPI EFL_FUNC_BODYV(efl_model_property_get, Efl_Future *, NULL, EFL_FUNC_CALL(property), const char *property);
EOAPI EFL_FUNC_BODYV(efl_model_children_slice_get, Efl_Future *, NULL, EFL_FUNC_CALL(start, count), unsigned int start, unsigned int count);
EOAPI EFL_FUNC_BODY(efl_model_children_count_get, Efl_Future *, NULL);
EOAPI EFL_FUNC_BODY(efl_model_child_add, Efl_Object *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_model_child_del, EFL_FUNC_CALL(child), Efl_Object *child);

static Eina_Bool
_efl_model_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_MODEL_EXTRA_OPS
#define EFL_MODEL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_model_properties_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_model_property_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_model_property_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_model_children_slice_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_model_children_count_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_model_child_add, NULL),
      EFL_OBJECT_OP_FUNC(efl_model_child_del, NULL),
      EFL_MODEL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_MODEL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_MODEL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_model_class_desc = {
   EO_VERSION,
   "Efl.Model",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_model_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_model_interface_get, &_efl_model_class_desc, NULL, NULL);
