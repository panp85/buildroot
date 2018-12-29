
void _efl_model_container_item_define(Eo *obj, Efl_Model_Container_Item_Data *pd, void *parent_data, unsigned int index);

EOAPI EFL_VOID_FUNC_BODYV(efl_model_container_item_define, EFL_FUNC_CALL(parent_data, index), void *parent_data, unsigned int index);

void _efl_model_container_item_invalidate(Eo *obj, Efl_Model_Container_Item_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_model_container_item_invalidate);

const Eina_Array *_efl_model_container_item_efl_model_properties_get(Eo *obj, Efl_Model_Container_Item_Data *pd);


Efl_Future *_efl_model_container_item_efl_model_property_set(Eo *obj, Efl_Model_Container_Item_Data *pd, const char *property, const Eina_Value *value);


Efl_Future *_efl_model_container_item_efl_model_property_get(Eo *obj, Efl_Model_Container_Item_Data *pd, const char *property);


Efl_Object *_efl_model_container_item_efl_model_child_add(Eo *obj, Efl_Model_Container_Item_Data *pd);


void _efl_model_container_item_efl_model_child_del(Eo *obj, Efl_Model_Container_Item_Data *pd, Efl_Object *child);


Efl_Future *_efl_model_container_item_efl_model_children_slice_get(Eo *obj, Efl_Model_Container_Item_Data *pd, unsigned int start, unsigned int count);


Efl_Future *_efl_model_container_item_efl_model_children_count_get(Eo *obj, Efl_Model_Container_Item_Data *pd);


static Eina_Bool
_efl_model_container_item_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_MODEL_CONTAINER_ITEM_EXTRA_OPS
#define EFL_MODEL_CONTAINER_ITEM_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_model_container_item_define, _efl_model_container_item_define),
      EFL_OBJECT_OP_FUNC(efl_model_container_item_invalidate, _efl_model_container_item_invalidate),
      EFL_OBJECT_OP_FUNC(efl_model_properties_get, _efl_model_container_item_efl_model_properties_get),
      EFL_OBJECT_OP_FUNC(efl_model_property_set, _efl_model_container_item_efl_model_property_set),
      EFL_OBJECT_OP_FUNC(efl_model_property_get, _efl_model_container_item_efl_model_property_get),
      EFL_OBJECT_OP_FUNC(efl_model_child_add, _efl_model_container_item_efl_model_child_add),
      EFL_OBJECT_OP_FUNC(efl_model_child_del, _efl_model_container_item_efl_model_child_del),
      EFL_OBJECT_OP_FUNC(efl_model_children_slice_get, _efl_model_container_item_efl_model_children_slice_get),
      EFL_OBJECT_OP_FUNC(efl_model_children_count_get, _efl_model_container_item_efl_model_children_count_get),
      EFL_MODEL_CONTAINER_ITEM_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_MODEL_CONTAINER_ITEM_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_MODEL_CONTAINER_ITEM_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_model_container_item_class_desc = {
   EO_VERSION,
   "Efl.Model.Container.Item",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Model_Container_Item_Data),
   _efl_model_container_item_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_model_container_item_class_get, &_efl_model_container_item_class_desc, EFL_OBJECT_CLASS, EFL_MODEL_INTERFACE, NULL);
