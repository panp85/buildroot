
const Eina_Value_Type *_efl_model_container_child_property_value_type_get(Eo *obj, Efl_Model_Container_Data *pd, const char *name);

EOAPI EFL_FUNC_BODYV(efl_model_container_child_property_value_type_get, const Eina_Value_Type *, NULL, EFL_FUNC_CALL(name), const char *name);

Eina_Iterator *_efl_model_container_child_property_values_get(Eo *obj, Efl_Model_Container_Data *pd, const char *name);

EOAPI EFL_FUNC_BODYV(efl_model_container_child_property_values_get, Eina_Iterator *, NULL, EFL_FUNC_CALL(name), const char *name);

Eina_Bool _efl_model_container_child_property_add(Eo *obj, Efl_Model_Container_Data *pd, const char *name, const Eina_Value_Type *type, Eina_Iterator *values);

EOAPI EFL_FUNC_BODYV(efl_model_container_child_property_add, Eina_Bool, 0, EFL_FUNC_CALL(name, type, values), const char *name, const Eina_Value_Type *type, Eina_Iterator *values);

Efl_Object *_efl_model_container_efl_object_constructor(Eo *obj, Efl_Model_Container_Data *pd);


void _efl_model_container_efl_object_destructor(Eo *obj, Efl_Model_Container_Data *pd);


const Eina_Array *_efl_model_container_efl_model_properties_get(Eo *obj, Efl_Model_Container_Data *pd);


Efl_Future *_efl_model_container_efl_model_property_set(Eo *obj, Efl_Model_Container_Data *pd, const char *property, const Eina_Value *value);


Efl_Future *_efl_model_container_efl_model_property_get(Eo *obj, Efl_Model_Container_Data *pd, const char *property);


Efl_Object *_efl_model_container_efl_model_child_add(Eo *obj, Efl_Model_Container_Data *pd);


void _efl_model_container_efl_model_child_del(Eo *obj, Efl_Model_Container_Data *pd, Efl_Object *child);


Efl_Future *_efl_model_container_efl_model_children_slice_get(Eo *obj, Efl_Model_Container_Data *pd, unsigned int start, unsigned int count);


Efl_Future *_efl_model_container_efl_model_children_count_get(Eo *obj, Efl_Model_Container_Data *pd);


static Eina_Bool
_efl_model_container_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_MODEL_CONTAINER_EXTRA_OPS
#define EFL_MODEL_CONTAINER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_model_container_child_property_value_type_get, _efl_model_container_child_property_value_type_get),
      EFL_OBJECT_OP_FUNC(efl_model_container_child_property_values_get, _efl_model_container_child_property_values_get),
      EFL_OBJECT_OP_FUNC(efl_model_container_child_property_add, _efl_model_container_child_property_add),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_model_container_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_model_container_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_model_properties_get, _efl_model_container_efl_model_properties_get),
      EFL_OBJECT_OP_FUNC(efl_model_property_set, _efl_model_container_efl_model_property_set),
      EFL_OBJECT_OP_FUNC(efl_model_property_get, _efl_model_container_efl_model_property_get),
      EFL_OBJECT_OP_FUNC(efl_model_child_add, _efl_model_container_efl_model_child_add),
      EFL_OBJECT_OP_FUNC(efl_model_child_del, _efl_model_container_efl_model_child_del),
      EFL_OBJECT_OP_FUNC(efl_model_children_slice_get, _efl_model_container_efl_model_children_slice_get),
      EFL_OBJECT_OP_FUNC(efl_model_children_count_get, _efl_model_container_efl_model_children_count_get),
      EFL_MODEL_CONTAINER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_MODEL_CONTAINER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_MODEL_CONTAINER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_model_container_class_desc = {
   EO_VERSION,
   "Efl.Model.Container",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Model_Container_Data),
   _efl_model_container_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_model_container_class_get, &_efl_model_container_class_desc, EFL_OBJECT_CLASS, EFL_MODEL_INTERFACE, NULL);
