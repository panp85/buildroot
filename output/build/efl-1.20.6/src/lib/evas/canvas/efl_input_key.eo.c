
void _efl_input_key_pressed_set(Eo *obj, Efl_Input_Key_Data *pd, Eina_Bool val);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_key_pressed_set, EFL_FUNC_CALL(val), Eina_Bool val);

Eina_Bool _efl_input_key_pressed_get(Eo *obj, Efl_Input_Key_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_key_pressed_get, Eina_Bool, 0);

void _efl_input_key_key_name_set(Eo *obj, Efl_Input_Key_Data *pd, const char *val);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_key_name_set, EFL_FUNC_CALL(val), const char *val);

const char *_efl_input_key_key_name_get(Eo *obj, Efl_Input_Key_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_key_name_get, const char *, NULL);

void _efl_input_key_key_set(Eo *obj, Efl_Input_Key_Data *pd, const char *val);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_key_set, EFL_FUNC_CALL(val), const char *val);

const char *_efl_input_key_key_get(Eo *obj, Efl_Input_Key_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_key_get, const char *, NULL);

void _efl_input_key_string_set(Eo *obj, Efl_Input_Key_Data *pd, const char *val);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_key_string_set, EFL_FUNC_CALL(val), const char *val);

const char *_efl_input_key_string_get(Eo *obj, Efl_Input_Key_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_key_string_get, const char *, NULL);

void _efl_input_key_compose_set(Eo *obj, Efl_Input_Key_Data *pd, const char *val);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_key_compose_set, EFL_FUNC_CALL(val), const char *val);

const char *_efl_input_key_compose_get(Eo *obj, Efl_Input_Key_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_key_compose_get, const char *, NULL);

void _efl_input_key_key_code_set(Eo *obj, Efl_Input_Key_Data *pd, int val);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_key_code_set, EFL_FUNC_CALL(val), int val);

int _efl_input_key_key_code_get(Eo *obj, Efl_Input_Key_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_key_code_get, int, 0);

Efl_Object *_efl_input_key_efl_object_constructor(Eo *obj, Efl_Input_Key_Data *pd);


void _efl_input_key_efl_object_destructor(Eo *obj, Efl_Input_Key_Data *pd);


void _efl_input_key_efl_input_event_reset(Eo *obj, Efl_Input_Key_Data *pd);


Efl_Input_Event *_efl_input_key_efl_input_event_dup(Eo *obj, Efl_Input_Key_Data *pd);


void _efl_input_key_efl_input_event_timestamp_set(Eo *obj, Efl_Input_Key_Data *pd, double ms);


double _efl_input_key_efl_input_event_timestamp_get(Eo *obj, Efl_Input_Key_Data *pd);


Eina_Bool _efl_input_key_efl_input_event_fake_get(Eo *obj, Efl_Input_Key_Data *pd);


void _efl_input_key_efl_input_event_event_flags_set(Eo *obj, Efl_Input_Key_Data *pd, Efl_Input_Flags flags);


Efl_Input_Flags _efl_input_key_efl_input_event_event_flags_get(Eo *obj, Efl_Input_Key_Data *pd);


void _efl_input_key_efl_input_event_device_set(Eo *obj, Efl_Input_Key_Data *pd, Efl_Input_Device *dev);


Efl_Input_Device *_efl_input_key_efl_input_event_device_get(Eo *obj, Efl_Input_Key_Data *pd);


Eina_Bool _efl_input_key_efl_input_state_modifier_enabled_get(Eo *obj, Efl_Input_Key_Data *pd, Efl_Input_Modifier mod, const Efl_Input_Device *seat);


Eina_Bool _efl_input_key_efl_input_state_lock_enabled_get(Eo *obj, Efl_Input_Key_Data *pd, Efl_Input_Lock lock, const Efl_Input_Device *seat);


static Eina_Bool
_efl_input_key_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_INPUT_KEY_EXTRA_OPS
#define EFL_INPUT_KEY_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_input_key_pressed_set, _efl_input_key_pressed_set),
      EFL_OBJECT_OP_FUNC(efl_input_key_pressed_get, _efl_input_key_pressed_get),
      EFL_OBJECT_OP_FUNC(efl_input_key_name_set, _efl_input_key_key_name_set),
      EFL_OBJECT_OP_FUNC(efl_input_key_name_get, _efl_input_key_key_name_get),
      EFL_OBJECT_OP_FUNC(efl_input_key_set, _efl_input_key_key_set),
      EFL_OBJECT_OP_FUNC(efl_input_key_get, _efl_input_key_key_get),
      EFL_OBJECT_OP_FUNC(efl_input_key_string_set, _efl_input_key_string_set),
      EFL_OBJECT_OP_FUNC(efl_input_key_string_get, _efl_input_key_string_get),
      EFL_OBJECT_OP_FUNC(efl_input_key_compose_set, _efl_input_key_compose_set),
      EFL_OBJECT_OP_FUNC(efl_input_key_compose_get, _efl_input_key_compose_get),
      EFL_OBJECT_OP_FUNC(efl_input_key_code_set, _efl_input_key_key_code_set),
      EFL_OBJECT_OP_FUNC(efl_input_key_code_get, _efl_input_key_key_code_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_input_key_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_input_key_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_input_reset, _efl_input_key_efl_input_event_reset),
      EFL_OBJECT_OP_FUNC(efl_input_dup, _efl_input_key_efl_input_event_dup),
      EFL_OBJECT_OP_FUNC(efl_input_timestamp_set, _efl_input_key_efl_input_event_timestamp_set),
      EFL_OBJECT_OP_FUNC(efl_input_timestamp_get, _efl_input_key_efl_input_event_timestamp_get),
      EFL_OBJECT_OP_FUNC(efl_input_fake_get, _efl_input_key_efl_input_event_fake_get),
      EFL_OBJECT_OP_FUNC(efl_input_event_flags_set, _efl_input_key_efl_input_event_event_flags_set),
      EFL_OBJECT_OP_FUNC(efl_input_event_flags_get, _efl_input_key_efl_input_event_event_flags_get),
      EFL_OBJECT_OP_FUNC(efl_input_device_set, _efl_input_key_efl_input_event_device_set),
      EFL_OBJECT_OP_FUNC(efl_input_device_get, _efl_input_key_efl_input_event_device_get),
      EFL_OBJECT_OP_FUNC(efl_input_modifier_enabled_get, _efl_input_key_efl_input_state_modifier_enabled_get),
      EFL_OBJECT_OP_FUNC(efl_input_lock_enabled_get, _efl_input_key_efl_input_state_lock_enabled_get),
      EFL_INPUT_KEY_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_INPUT_KEY_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_INPUT_KEY_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_input_key_class_desc = {
   EO_VERSION,
   "Efl.Input.Key",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Input_Key_Data),
   _efl_input_key_class_initializer,
   NULL,
   _efl_input_key_class_destructor
};

EFL_DEFINE_CLASS(efl_input_key_class_get, &_efl_input_key_class_desc, EFL_OBJECT_CLASS, EFL_INPUT_EVENT_MIXIN, EFL_INPUT_STATE_INTERFACE, EFL_INPUT_EVENT_MIXIN, NULL);
