
void _efl_input_pointer_action_set(Eo *obj, Efl_Input_Pointer_Data *pd, Efl_Pointer_Action act);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_pointer_action_set, EFL_FUNC_CALL(act), Efl_Pointer_Action act);

Efl_Pointer_Action _efl_input_pointer_action_get(Eo *obj, Efl_Input_Pointer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_pointer_action_get, Efl_Pointer_Action, 0);

Eina_Bool _efl_input_pointer_value_has_get(Eo *obj, Efl_Input_Pointer_Data *pd, Efl_Input_Value key);

EOAPI EFL_FUNC_BODYV_CONST(efl_input_pointer_value_has_get, Eina_Bool, 0, EFL_FUNC_CALL(key), Efl_Input_Value key);

Eina_Bool _efl_input_pointer_value_set(Eo *obj, Efl_Input_Pointer_Data *pd, Efl_Input_Value key, double val);

EOAPI EFL_FUNC_BODYV(efl_input_pointer_value_set, Eina_Bool, 0, EFL_FUNC_CALL(key, val), Efl_Input_Value key, double val);

double _efl_input_pointer_value_get(Eo *obj, Efl_Input_Pointer_Data *pd, Efl_Input_Value key);

EOAPI EFL_FUNC_BODYV_CONST(efl_input_pointer_value_get, double, 0, EFL_FUNC_CALL(key), Efl_Input_Value key);

void _efl_input_pointer_button_set(Eo *obj, Efl_Input_Pointer_Data *pd, int but);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_pointer_button_set, EFL_FUNC_CALL(but), int but);

int _efl_input_pointer_button_get(Eo *obj, Efl_Input_Pointer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_pointer_button_get, int, 0);

void _efl_input_pointer_button_pressed_set(Eo *obj, Efl_Input_Pointer_Data *pd, int button, Eina_Bool pressed);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_pointer_button_pressed_set, EFL_FUNC_CALL(button, pressed), int button, Eina_Bool pressed);

Eina_Bool _efl_input_pointer_button_pressed_get(Eo *obj, Efl_Input_Pointer_Data *pd, int button);

EOAPI EFL_FUNC_BODYV_CONST(efl_input_pointer_button_pressed_get, Eina_Bool, 0, EFL_FUNC_CALL(button), int button);

void _efl_input_pointer_position_set(Eo *obj, Efl_Input_Pointer_Data *pd, int x, int y);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_pointer_position_set, EFL_FUNC_CALL(x, y), int x, int y);

void _efl_input_pointer_position_get(Eo *obj, Efl_Input_Pointer_Data *pd, int *x, int *y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_input_pointer_position_get, EFL_FUNC_CALL(x, y), int *x, int *y);

void _efl_input_pointer_previous_position_set(Eo *obj, Efl_Input_Pointer_Data *pd, int x, int y);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_pointer_previous_position_set, EFL_FUNC_CALL(x, y), int x, int y);

void _efl_input_pointer_previous_position_get(Eo *obj, Efl_Input_Pointer_Data *pd, int *x, int *y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_input_pointer_previous_position_get, EFL_FUNC_CALL(x, y), int *x, int *y);

void _efl_input_pointer_delta_get(Eo *obj, Efl_Input_Pointer_Data *pd, int *dx, int *dy);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_input_pointer_delta_get, EFL_FUNC_CALL(dx, dy), int *dx, int *dy);

void _efl_input_pointer_tool_set(Eo *obj, Efl_Input_Pointer_Data *pd, int id);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_pointer_tool_set, EFL_FUNC_CALL(id), int id);

int _efl_input_pointer_tool_get(Eo *obj, Efl_Input_Pointer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_pointer_tool_get, int, 0);

void _efl_input_pointer_source_set(Eo *obj, Efl_Input_Pointer_Data *pd, Efl_Object *src);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_pointer_source_set, EFL_FUNC_CALL(src), Efl_Object *src);

Efl_Object *_efl_input_pointer_source_get(Eo *obj, Efl_Input_Pointer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_pointer_source_get, Efl_Object *, NULL);

void _efl_input_pointer_button_flags_set(Eo *obj, Efl_Input_Pointer_Data *pd, Efl_Pointer_Flags flags);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_pointer_button_flags_set, EFL_FUNC_CALL(flags), Efl_Pointer_Flags flags);

Efl_Pointer_Flags _efl_input_pointer_button_flags_get(Eo *obj, Efl_Input_Pointer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_pointer_button_flags_get, Efl_Pointer_Flags, 0);

void _efl_input_pointer_double_click_set(Eo *obj, Efl_Input_Pointer_Data *pd, Eina_Bool val);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_pointer_double_click_set, EFL_FUNC_CALL(val), Eina_Bool val);

Eina_Bool _efl_input_pointer_double_click_get(Eo *obj, Efl_Input_Pointer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_pointer_double_click_get, Eina_Bool, 0);

void _efl_input_pointer_triple_click_set(Eo *obj, Efl_Input_Pointer_Data *pd, Eina_Bool val);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_pointer_triple_click_set, EFL_FUNC_CALL(val), Eina_Bool val);

Eina_Bool _efl_input_pointer_triple_click_get(Eo *obj, Efl_Input_Pointer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_pointer_triple_click_get, Eina_Bool, 0);

void _efl_input_pointer_wheel_direction_set(Eo *obj, Efl_Input_Pointer_Data *pd, Efl_Orient dir);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_pointer_wheel_direction_set, EFL_FUNC_CALL(dir), Efl_Orient dir);

Efl_Orient _efl_input_pointer_wheel_direction_get(Eo *obj, Efl_Input_Pointer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_pointer_wheel_direction_get, Efl_Orient, 0);

void _efl_input_pointer_wheel_delta_set(Eo *obj, Efl_Input_Pointer_Data *pd, int dist);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_pointer_wheel_delta_set, EFL_FUNC_CALL(dist), int dist);

int _efl_input_pointer_wheel_delta_get(Eo *obj, Efl_Input_Pointer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_pointer_wheel_delta_get, int, 0);

Efl_Object *_efl_input_pointer_efl_object_constructor(Eo *obj, Efl_Input_Pointer_Data *pd);


void _efl_input_pointer_efl_object_destructor(Eo *obj, Efl_Input_Pointer_Data *pd);


void _efl_input_pointer_efl_input_event_reset(Eo *obj, Efl_Input_Pointer_Data *pd);


Efl_Input_Event *_efl_input_pointer_efl_input_event_dup(Eo *obj, Efl_Input_Pointer_Data *pd);


void _efl_input_pointer_efl_input_event_timestamp_set(Eo *obj, Efl_Input_Pointer_Data *pd, double ms);


double _efl_input_pointer_efl_input_event_timestamp_get(Eo *obj, Efl_Input_Pointer_Data *pd);


Eina_Bool _efl_input_pointer_efl_input_event_fake_get(Eo *obj, Efl_Input_Pointer_Data *pd);


void _efl_input_pointer_efl_input_event_event_flags_set(Eo *obj, Efl_Input_Pointer_Data *pd, Efl_Input_Flags flags);


Efl_Input_Flags _efl_input_pointer_efl_input_event_event_flags_get(Eo *obj, Efl_Input_Pointer_Data *pd);


void _efl_input_pointer_efl_input_event_device_set(Eo *obj, Efl_Input_Pointer_Data *pd, Efl_Input_Device *dev);


Efl_Input_Device *_efl_input_pointer_efl_input_event_device_get(Eo *obj, Efl_Input_Pointer_Data *pd);


Eina_Bool _efl_input_pointer_efl_input_state_modifier_enabled_get(Eo *obj, Efl_Input_Pointer_Data *pd, Efl_Input_Modifier mod, const Efl_Input_Device *seat);


Eina_Bool _efl_input_pointer_efl_input_state_lock_enabled_get(Eo *obj, Efl_Input_Pointer_Data *pd, Efl_Input_Lock lock, const Efl_Input_Device *seat);


static Eina_Bool
_efl_input_pointer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_INPUT_POINTER_EXTRA_OPS
#define EFL_INPUT_POINTER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_input_pointer_action_set, _efl_input_pointer_action_set),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_action_get, _efl_input_pointer_action_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_value_has_get, _efl_input_pointer_value_has_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_value_set, _efl_input_pointer_value_set),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_value_get, _efl_input_pointer_value_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_button_set, _efl_input_pointer_button_set),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_button_get, _efl_input_pointer_button_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_button_pressed_set, _efl_input_pointer_button_pressed_set),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_button_pressed_get, _efl_input_pointer_button_pressed_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_position_set, _efl_input_pointer_position_set),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_position_get, _efl_input_pointer_position_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_previous_position_set, _efl_input_pointer_previous_position_set),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_previous_position_get, _efl_input_pointer_previous_position_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_delta_get, _efl_input_pointer_delta_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_tool_set, _efl_input_pointer_tool_set),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_tool_get, _efl_input_pointer_tool_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_source_set, _efl_input_pointer_source_set),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_source_get, _efl_input_pointer_source_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_button_flags_set, _efl_input_pointer_button_flags_set),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_button_flags_get, _efl_input_pointer_button_flags_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_double_click_set, _efl_input_pointer_double_click_set),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_double_click_get, _efl_input_pointer_double_click_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_triple_click_set, _efl_input_pointer_triple_click_set),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_triple_click_get, _efl_input_pointer_triple_click_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_wheel_direction_set, _efl_input_pointer_wheel_direction_set),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_wheel_direction_get, _efl_input_pointer_wheel_direction_get),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_wheel_delta_set, _efl_input_pointer_wheel_delta_set),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_wheel_delta_get, _efl_input_pointer_wheel_delta_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_input_pointer_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_input_pointer_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_input_reset, _efl_input_pointer_efl_input_event_reset),
      EFL_OBJECT_OP_FUNC(efl_input_dup, _efl_input_pointer_efl_input_event_dup),
      EFL_OBJECT_OP_FUNC(efl_input_timestamp_set, _efl_input_pointer_efl_input_event_timestamp_set),
      EFL_OBJECT_OP_FUNC(efl_input_timestamp_get, _efl_input_pointer_efl_input_event_timestamp_get),
      EFL_OBJECT_OP_FUNC(efl_input_fake_get, _efl_input_pointer_efl_input_event_fake_get),
      EFL_OBJECT_OP_FUNC(efl_input_event_flags_set, _efl_input_pointer_efl_input_event_event_flags_set),
      EFL_OBJECT_OP_FUNC(efl_input_event_flags_get, _efl_input_pointer_efl_input_event_event_flags_get),
      EFL_OBJECT_OP_FUNC(efl_input_device_set, _efl_input_pointer_efl_input_event_device_set),
      EFL_OBJECT_OP_FUNC(efl_input_device_get, _efl_input_pointer_efl_input_event_device_get),
      EFL_OBJECT_OP_FUNC(efl_input_modifier_enabled_get, _efl_input_pointer_efl_input_state_modifier_enabled_get),
      EFL_OBJECT_OP_FUNC(efl_input_lock_enabled_get, _efl_input_pointer_efl_input_state_lock_enabled_get),
      EFL_INPUT_POINTER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_INPUT_POINTER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_INPUT_POINTER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_input_pointer_class_desc = {
   EO_VERSION,
   "Efl.Input.Pointer",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Input_Pointer_Data),
   _efl_input_pointer_class_initializer,
   NULL,
   _efl_input_pointer_class_destructor
};

EFL_DEFINE_CLASS(efl_input_pointer_class_get, &_efl_input_pointer_class_desc, EFL_OBJECT_CLASS, EFL_INPUT_EVENT_MIXIN, EFL_INPUT_STATE_INTERFACE, NULL);
