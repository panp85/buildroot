
void _eldbus_model_arguments_constructor(Eo *obj, Eldbus_Model_Arguments_Data *pd, Eldbus_Proxy *proxy, const char *name, const Eina_List *arguments);

EOAPI EFL_VOID_FUNC_BODYV(eldbus_model_arguments_constructor, EFL_FUNC_CALL(proxy, name, arguments), Eldbus_Proxy *proxy, const char *name, const Eina_List *arguments);

const char *_eldbus_model_arguments_name_get(Eo *obj, Eldbus_Model_Arguments_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(eldbus_model_arguments_name_get, const char *, NULL);

Efl_Object *_eldbus_model_arguments_efl_object_constructor(Eo *obj, Eldbus_Model_Arguments_Data *pd);


void _eldbus_model_arguments_efl_object_destructor(Eo *obj, Eldbus_Model_Arguments_Data *pd);


const Eina_Array *_eldbus_model_arguments_efl_model_properties_get(Eo *obj, Eldbus_Model_Arguments_Data *pd);


Efl_Future *_eldbus_model_arguments_efl_model_property_set(Eo *obj, Eldbus_Model_Arguments_Data *pd, const char *property, const Eina_Value *value);


Efl_Future *_eldbus_model_arguments_efl_model_property_get(Eo *obj, Eldbus_Model_Arguments_Data *pd, const char *property);


Efl_Object *_eldbus_model_arguments_efl_model_child_add(Eo *obj, Eldbus_Model_Arguments_Data *pd);


void _eldbus_model_arguments_efl_model_child_del(Eo *obj, Eldbus_Model_Arguments_Data *pd, Efl_Object *child);


Efl_Future *_eldbus_model_arguments_efl_model_children_slice_get(Eo *obj, Eldbus_Model_Arguments_Data *pd, unsigned int start, unsigned int count);


Efl_Future *_eldbus_model_arguments_efl_model_children_count_get(Eo *obj, Eldbus_Model_Arguments_Data *pd);


static Eina_Bool
_eldbus_model_arguments_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELDBUS_MODEL_ARGUMENTS_EXTRA_OPS
#define ELDBUS_MODEL_ARGUMENTS_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(eldbus_model_arguments_constructor, _eldbus_model_arguments_constructor),
      EFL_OBJECT_OP_FUNC(eldbus_model_arguments_name_get, _eldbus_model_arguments_name_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _eldbus_model_arguments_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _eldbus_model_arguments_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_model_properties_get, _eldbus_model_arguments_efl_model_properties_get),
      EFL_OBJECT_OP_FUNC(efl_model_property_set, _eldbus_model_arguments_efl_model_property_set),
      EFL_OBJECT_OP_FUNC(efl_model_property_get, _eldbus_model_arguments_efl_model_property_get),
      EFL_OBJECT_OP_FUNC(efl_model_child_add, _eldbus_model_arguments_efl_model_child_add),
      EFL_OBJECT_OP_FUNC(efl_model_child_del, _eldbus_model_arguments_efl_model_child_del),
      EFL_OBJECT_OP_FUNC(efl_model_children_slice_get, _eldbus_model_arguments_efl_model_children_slice_get),
      EFL_OBJECT_OP_FUNC(efl_model_children_count_get, _eldbus_model_arguments_efl_model_children_count_get),
      ELDBUS_MODEL_ARGUMENTS_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELDBUS_MODEL_ARGUMENTS_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELDBUS_MODEL_ARGUMENTS_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _eldbus_model_arguments_class_desc = {
   EO_VERSION,
   "Eldbus.Model.Arguments",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Eldbus_Model_Arguments_Data),
   _eldbus_model_arguments_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(eldbus_model_arguments_class_get, &_eldbus_model_arguments_class_desc, EFL_OBJECT_CLASS, EFL_MODEL_INTERFACE, NULL);
