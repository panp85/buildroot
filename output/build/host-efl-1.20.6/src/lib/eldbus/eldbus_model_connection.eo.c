
void _eldbus_model_connection_constructor(Eo *obj, Eldbus_Model_Connection_Data *pd, Eldbus_Connection_Type type, const char *address, Eina_Bool private_);

EOAPI EFL_VOID_FUNC_BODYV(eldbus_model_connection_constructor, EFL_FUNC_CALL(type, address, private_), Eldbus_Connection_Type type, const char *address, Eina_Bool private_);

Eldbus_Connection_Type _eldbus_model_connection_type_get(Eo *obj, Eldbus_Model_Connection_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(eldbus_model_connection_type_get, Eldbus_Connection_Type, 0);

const char *_eldbus_model_connection_address_get(Eo *obj, Eldbus_Model_Connection_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(eldbus_model_connection_address_get, const char *, NULL);

Eina_Bool _eldbus_model_connection_private_get(Eo *obj, Eldbus_Model_Connection_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(eldbus_model_connection_private_get, Eina_Bool, 0);

Efl_Object *_eldbus_model_connection_efl_object_constructor(Eo *obj, Eldbus_Model_Connection_Data *pd);


void _eldbus_model_connection_efl_object_destructor(Eo *obj, Eldbus_Model_Connection_Data *pd);


const Eina_Array *_eldbus_model_connection_efl_model_properties_get(Eo *obj, Eldbus_Model_Connection_Data *pd);


Efl_Future *_eldbus_model_connection_efl_model_property_set(Eo *obj, Eldbus_Model_Connection_Data *pd, const char *property, const Eina_Value *value);


Efl_Future *_eldbus_model_connection_efl_model_property_get(Eo *obj, Eldbus_Model_Connection_Data *pd, const char *property);


Efl_Object *_eldbus_model_connection_efl_model_child_add(Eo *obj, Eldbus_Model_Connection_Data *pd);


void _eldbus_model_connection_efl_model_child_del(Eo *obj, Eldbus_Model_Connection_Data *pd, Efl_Object *child);


Efl_Future *_eldbus_model_connection_efl_model_children_slice_get(Eo *obj, Eldbus_Model_Connection_Data *pd, unsigned int start, unsigned int count);


Efl_Future *_eldbus_model_connection_efl_model_children_count_get(Eo *obj, Eldbus_Model_Connection_Data *pd);


static Eina_Bool
_eldbus_model_connection_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELDBUS_MODEL_CONNECTION_EXTRA_OPS
#define ELDBUS_MODEL_CONNECTION_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(eldbus_model_connection_constructor, _eldbus_model_connection_constructor),
      EFL_OBJECT_OP_FUNC(eldbus_model_connection_type_get, _eldbus_model_connection_type_get),
      EFL_OBJECT_OP_FUNC(eldbus_model_connection_address_get, _eldbus_model_connection_address_get),
      EFL_OBJECT_OP_FUNC(eldbus_model_connection_private_get, _eldbus_model_connection_private_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _eldbus_model_connection_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _eldbus_model_connection_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_model_properties_get, _eldbus_model_connection_efl_model_properties_get),
      EFL_OBJECT_OP_FUNC(efl_model_property_set, _eldbus_model_connection_efl_model_property_set),
      EFL_OBJECT_OP_FUNC(efl_model_property_get, _eldbus_model_connection_efl_model_property_get),
      EFL_OBJECT_OP_FUNC(efl_model_child_add, _eldbus_model_connection_efl_model_child_add),
      EFL_OBJECT_OP_FUNC(efl_model_child_del, _eldbus_model_connection_efl_model_child_del),
      EFL_OBJECT_OP_FUNC(efl_model_children_slice_get, _eldbus_model_connection_efl_model_children_slice_get),
      EFL_OBJECT_OP_FUNC(efl_model_children_count_get, _eldbus_model_connection_efl_model_children_count_get),
      ELDBUS_MODEL_CONNECTION_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELDBUS_MODEL_CONNECTION_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELDBUS_MODEL_CONNECTION_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _eldbus_model_connection_class_desc = {
   EO_VERSION,
   "Eldbus.Model.Connection",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Eldbus_Model_Connection_Data),
   _eldbus_model_connection_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(eldbus_model_connection_class_get, &_eldbus_model_connection_class_desc, EFL_OBJECT_CLASS, EFL_MODEL_INTERFACE, NULL);
