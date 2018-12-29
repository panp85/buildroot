
Efl_Object *_efl_model_item_efl_object_constructor(Eo *obj, Efl_Model_Item_Data *pd);


void _efl_model_item_efl_object_destructor(Eo *obj, Efl_Model_Item_Data *pd);


const Eina_Array *_efl_model_item_efl_model_properties_get(Eo *obj, Efl_Model_Item_Data *pd);


Efl_Future *_efl_model_item_efl_model_property_set(Eo *obj, Efl_Model_Item_Data *pd, const char *property, const Eina_Value *value);


Efl_Future *_efl_model_item_efl_model_property_get(Eo *obj, Efl_Model_Item_Data *pd, const char *property);


Efl_Object *_efl_model_item_efl_model_child_add(Eo *obj, Efl_Model_Item_Data *pd);


void _efl_model_item_efl_model_child_del(Eo *obj, Efl_Model_Item_Data *pd, Efl_Object *child);


Efl_Future *_efl_model_item_efl_model_children_slice_get(Eo *obj, Efl_Model_Item_Data *pd, unsigned int start, unsigned int count);


Efl_Future *_efl_model_item_efl_model_children_count_get(Eo *obj, Efl_Model_Item_Data *pd);


static Eina_Bool
_efl_model_item_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_MODEL_ITEM_EXTRA_OPS
#define EFL_MODEL_ITEM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_model_item_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_model_item_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_model_properties_get, _efl_model_item_efl_model_properties_get),
      EFL_OBJECT_OP_FUNC(efl_model_property_set, _efl_model_item_efl_model_property_set),
      EFL_OBJECT_OP_FUNC(efl_model_property_get, _efl_model_item_efl_model_property_get),
      EFL_OBJECT_OP_FUNC(efl_model_child_add, _efl_model_item_efl_model_child_add),
      EFL_OBJECT_OP_FUNC(efl_model_child_del, _efl_model_item_efl_model_child_del),
      EFL_OBJECT_OP_FUNC(efl_model_children_slice_get, _efl_model_item_efl_model_children_slice_get),
      EFL_OBJECT_OP_FUNC(efl_model_children_count_get, _efl_model_item_efl_model_children_count_get),
      EFL_MODEL_ITEM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_MODEL_ITEM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_MODEL_ITEM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_model_item_class_desc = {
   EO_VERSION,
   "Efl.Model.Item",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Model_Item_Data),
   _efl_model_item_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_model_item_class_get, &_efl_model_item_class_desc, EFL_OBJECT_CLASS, EFL_MODEL_INTERFACE, NULL);
