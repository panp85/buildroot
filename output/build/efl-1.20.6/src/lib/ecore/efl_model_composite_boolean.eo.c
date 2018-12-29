
void _efl_model_composite_boolean_composite_model_set(Eo *obj, Efl_Model_Composite_Boolean_Data *pd, Efl_Model *model);

EOAPI EFL_VOID_FUNC_BODYV(efl_model_composite_boolean_composite_model_set, EFL_FUNC_CALL(model), Efl_Model *model);

Efl_Model *_efl_model_composite_boolean_composite_model_get(Eo *obj, Efl_Model_Composite_Boolean_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_model_composite_boolean_composite_model_get, Efl_Model *, NULL);

void _efl_model_composite_boolean_property_add(Eo *obj, Efl_Model_Composite_Boolean_Data *pd, const char *name, Eina_Bool initial_value);

EOAPI EFL_VOID_FUNC_BODYV(efl_model_composite_boolean_property_add, EFL_FUNC_CALL(name, initial_value), const char *name, Eina_Bool initial_value);

void _efl_model_composite_boolean_efl_object_destructor(Eo *obj, Efl_Model_Composite_Boolean_Data *pd);


const Eina_Array *_efl_model_composite_boolean_efl_model_properties_get(Eo *obj, Efl_Model_Composite_Boolean_Data *pd);


Efl_Future *_efl_model_composite_boolean_efl_model_property_get(Eo *obj, Efl_Model_Composite_Boolean_Data *pd, const char *property);


Efl_Future *_efl_model_composite_boolean_efl_model_property_set(Eo *obj, Efl_Model_Composite_Boolean_Data *pd, const char *property, const Eina_Value *value);


Efl_Future *_efl_model_composite_boolean_efl_model_children_slice_get(Eo *obj, Efl_Model_Composite_Boolean_Data *pd, unsigned int start, unsigned int count);


Efl_Future *_efl_model_composite_boolean_efl_model_children_count_get(Eo *obj, Efl_Model_Composite_Boolean_Data *pd);


Efl_Object *_efl_model_composite_boolean_efl_model_child_add(Eo *obj, Efl_Model_Composite_Boolean_Data *pd);


void _efl_model_composite_boolean_efl_model_child_del(Eo *obj, Efl_Model_Composite_Boolean_Data *pd, Efl_Object *child);


static Eina_Bool
_efl_model_composite_boolean_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_MODEL_COMPOSITE_BOOLEAN_EXTRA_OPS
#define EFL_MODEL_COMPOSITE_BOOLEAN_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_model_composite_boolean_composite_model_set, _efl_model_composite_boolean_composite_model_set),
      EFL_OBJECT_OP_FUNC(efl_model_composite_boolean_composite_model_get, _efl_model_composite_boolean_composite_model_get),
      EFL_OBJECT_OP_FUNC(efl_model_composite_boolean_property_add, _efl_model_composite_boolean_property_add),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_model_composite_boolean_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_model_properties_get, _efl_model_composite_boolean_efl_model_properties_get),
      EFL_OBJECT_OP_FUNC(efl_model_property_get, _efl_model_composite_boolean_efl_model_property_get),
      EFL_OBJECT_OP_FUNC(efl_model_property_set, _efl_model_composite_boolean_efl_model_property_set),
      EFL_OBJECT_OP_FUNC(efl_model_children_slice_get, _efl_model_composite_boolean_efl_model_children_slice_get),
      EFL_OBJECT_OP_FUNC(efl_model_children_count_get, _efl_model_composite_boolean_efl_model_children_count_get),
      EFL_OBJECT_OP_FUNC(efl_model_child_add, _efl_model_composite_boolean_efl_model_child_add),
      EFL_OBJECT_OP_FUNC(efl_model_child_del, _efl_model_composite_boolean_efl_model_child_del),
      EFL_MODEL_COMPOSITE_BOOLEAN_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_MODEL_COMPOSITE_BOOLEAN_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_MODEL_COMPOSITE_BOOLEAN_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_model_composite_boolean_class_desc = {
   EO_VERSION,
   "Efl.Model.Composite.Boolean",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Model_Composite_Boolean_Data),
   _efl_model_composite_boolean_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_model_composite_boolean_class_get, &_efl_model_composite_boolean_class_desc, EFL_OBJECT_CLASS, EFL_MODEL_INTERFACE, NULL);
