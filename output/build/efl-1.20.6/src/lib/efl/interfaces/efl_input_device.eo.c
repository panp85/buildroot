
void _efl_input_device_device_type_set(Eo *obj, Efl_Input_Device_Data *pd, Efl_Input_Device_Type klass);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_device_type_set, EFL_FUNC_CALL(klass), Efl_Input_Device_Type klass);

Efl_Input_Device_Type _efl_input_device_device_type_get(Eo *obj, Efl_Input_Device_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_device_type_get, Efl_Input_Device_Type, 0);

void _efl_input_device_source_set(Eo *obj, Efl_Input_Device_Data *pd, Efl_Input_Device *src);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_device_source_set, EFL_FUNC_CALL(src), Efl_Input_Device *src);

Efl_Input_Device *_efl_input_device_source_get(Eo *obj, Efl_Input_Device_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_device_source_get, Efl_Input_Device *, NULL);

Efl_Input_Device *_efl_input_device_seat_get(Eo *obj, Efl_Input_Device_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_device_seat_get, Efl_Input_Device *, NULL);

void _efl_input_device_seat_id_set(Eo *obj, Efl_Input_Device_Data *pd, unsigned int id);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_device_seat_id_set, EFL_FUNC_CALL(id), unsigned int id);

unsigned int _efl_input_device_seat_id_get(Eo *obj, Efl_Input_Device_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_device_seat_id_get, unsigned int, 0);

Eina_Iterator *_efl_input_device_children_iterate(Eo *obj, Efl_Input_Device_Data *pd);

EOAPI EFL_FUNC_BODY(efl_input_device_children_iterate, Eina_Iterator *, NULL);

unsigned int _efl_input_device_has_pointer_caps(Eo *obj, Efl_Input_Device_Data *pd);

EOAPI EFL_FUNC_BODY(efl_input_device_has_pointer_caps, unsigned int, 0);

Efl_Object *_efl_input_device_efl_object_constructor(Eo *obj, Efl_Input_Device_Data *pd);


void _efl_input_device_efl_object_destructor(Eo *obj, Efl_Input_Device_Data *pd);


void _efl_input_device_efl_object_parent_set(Eo *obj, Efl_Input_Device_Data *pd, Efl_Object *parent);


static Eina_Bool
_efl_input_device_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_INPUT_DEVICE_EXTRA_OPS
#define EFL_INPUT_DEVICE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_input_device_type_set, _efl_input_device_device_type_set),
      EFL_OBJECT_OP_FUNC(efl_input_device_type_get, _efl_input_device_device_type_get),
      EFL_OBJECT_OP_FUNC(efl_input_device_source_set, _efl_input_device_source_set),
      EFL_OBJECT_OP_FUNC(efl_input_device_source_get, _efl_input_device_source_get),
      EFL_OBJECT_OP_FUNC(efl_input_device_seat_get, _efl_input_device_seat_get),
      EFL_OBJECT_OP_FUNC(efl_input_device_seat_id_set, _efl_input_device_seat_id_set),
      EFL_OBJECT_OP_FUNC(efl_input_device_seat_id_get, _efl_input_device_seat_id_get),
      EFL_OBJECT_OP_FUNC(efl_input_device_children_iterate, _efl_input_device_children_iterate),
      EFL_OBJECT_OP_FUNC(efl_input_device_has_pointer_caps, _efl_input_device_has_pointer_caps),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_input_device_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_input_device_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_parent_set, _efl_input_device_efl_object_parent_set),
      EFL_INPUT_DEVICE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_INPUT_DEVICE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_INPUT_DEVICE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_input_device_class_desc = {
   EO_VERSION,
   "Efl.Input.Device",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Input_Device_Data),
   _efl_input_device_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_input_device_class_get, &_efl_input_device_class_desc, EFL_OBJECT_CLASS, NULL);
