
void _eio_model_children_filter_set(Eo *obj, Eio_Model_Data *pd, Eio_Filter_Direct_Cb filter_cb, void *userdata);

EOAPI EFL_VOID_FUNC_BODYV(eio_model_children_filter_set, EFL_FUNC_CALL(filter_cb, userdata), Eio_Filter_Direct_Cb filter_cb, void *userdata);

void _eio_model_path_set(Eo *obj, Eio_Model_Data *pd, const char *path);

EOAPI EFL_VOID_FUNC_BODYV(eio_model_path_set, EFL_FUNC_CALL(path), const char *path);

Efl_Object *_eio_model_efl_object_constructor(Eo *obj, Eio_Model_Data *pd);


void _eio_model_efl_object_destructor(Eo *obj, Eio_Model_Data *pd);


Efl_Object *_eio_model_efl_object_parent_get(Eo *obj, Eio_Model_Data *pd);


Efl_Object *_eio_model_efl_object_provider_find(Eo *obj, Eio_Model_Data *pd, const Efl_Object *klass);


const Eina_Array *_eio_model_efl_model_properties_get(Eo *obj, Eio_Model_Data *pd);


Efl_Future *_eio_model_efl_model_property_set(Eo *obj, Eio_Model_Data *pd, const char *property, const Eina_Value *value);


Efl_Future *_eio_model_efl_model_property_get(Eo *obj, Eio_Model_Data *pd, const char *property);


Efl_Object *_eio_model_efl_model_child_add(Eo *obj, Eio_Model_Data *pd);


void _eio_model_efl_model_child_del(Eo *obj, Eio_Model_Data *pd, Efl_Object *child);


Efl_Future *_eio_model_efl_model_children_slice_get(Eo *obj, Eio_Model_Data *pd, unsigned int start, unsigned int count);


Efl_Future *_eio_model_efl_model_children_count_get(Eo *obj, Eio_Model_Data *pd);


static Eina_Bool
_eio_model_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EIO_MODEL_EXTRA_OPS
#define EIO_MODEL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(eio_model_children_filter_set, _eio_model_children_filter_set),
      EFL_OBJECT_OP_FUNC(eio_model_path_set, _eio_model_path_set),
      EFL_OBJECT_OP_FUNC(efl_constructor, _eio_model_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _eio_model_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_parent_get, _eio_model_efl_object_parent_get),
      EFL_OBJECT_OP_FUNC(efl_provider_find, _eio_model_efl_object_provider_find),
      EFL_OBJECT_OP_FUNC(efl_model_properties_get, _eio_model_efl_model_properties_get),
      EFL_OBJECT_OP_FUNC(efl_model_property_set, _eio_model_efl_model_property_set),
      EFL_OBJECT_OP_FUNC(efl_model_property_get, _eio_model_efl_model_property_get),
      EFL_OBJECT_OP_FUNC(efl_model_child_add, _eio_model_efl_model_child_add),
      EFL_OBJECT_OP_FUNC(efl_model_child_del, _eio_model_efl_model_child_del),
      EFL_OBJECT_OP_FUNC(efl_model_children_slice_get, _eio_model_efl_model_children_slice_get),
      EFL_OBJECT_OP_FUNC(efl_model_children_count_get, _eio_model_efl_model_children_count_get),
      EIO_MODEL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EIO_MODEL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EIO_MODEL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _eio_model_class_desc = {
   EO_VERSION,
   "Eio.Model",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Eio_Model_Data),
   _eio_model_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(eio_model_class_get, &_eio_model_class_desc, EFL_OBJECT_CLASS, EFL_MODEL_INTERFACE, NULL);
