EWAPI const Efl_Event_Description _EFL_EVENT_POINTER_MOVE =
   EFL_EVENT_DESCRIPTION("pointer,move");
EWAPI const Efl_Event_Description _EFL_EVENT_POINTER_DOWN =
   EFL_EVENT_DESCRIPTION("pointer,down");
EWAPI const Efl_Event_Description _EFL_EVENT_POINTER_UP =
   EFL_EVENT_DESCRIPTION("pointer,up");
EWAPI const Efl_Event_Description _EFL_EVENT_POINTER_CANCEL =
   EFL_EVENT_DESCRIPTION("pointer,cancel");
EWAPI const Efl_Event_Description _EFL_EVENT_POINTER_IN =
   EFL_EVENT_DESCRIPTION("pointer,in");
EWAPI const Efl_Event_Description _EFL_EVENT_POINTER_OUT =
   EFL_EVENT_DESCRIPTION("pointer,out");
EWAPI const Efl_Event_Description _EFL_EVENT_POINTER_WHEEL =
   EFL_EVENT_DESCRIPTION("pointer,wheel");
EWAPI const Efl_Event_Description _EFL_EVENT_POINTER_AXIS =
   EFL_EVENT_DESCRIPTION("pointer,axis");
EWAPI const Efl_Event_Description _EFL_EVENT_FINGER_MOVE =
   EFL_EVENT_DESCRIPTION("finger,move");
EWAPI const Efl_Event_Description _EFL_EVENT_FINGER_DOWN =
   EFL_EVENT_DESCRIPTION("finger,down");
EWAPI const Efl_Event_Description _EFL_EVENT_FINGER_UP =
   EFL_EVENT_DESCRIPTION("finger,up");
EWAPI const Efl_Event_Description _EFL_EVENT_KEY_DOWN =
   EFL_EVENT_DESCRIPTION("key,down");
EWAPI const Efl_Event_Description _EFL_EVENT_KEY_UP =
   EFL_EVENT_DESCRIPTION("key,up");
EWAPI const Efl_Event_Description _EFL_EVENT_HOLD =
   EFL_EVENT_DESCRIPTION("hold");
EWAPI const Efl_Event_Description _EFL_EVENT_FOCUS_IN =
   EFL_EVENT_DESCRIPTION("focus,in");
EWAPI const Efl_Event_Description _EFL_EVENT_FOCUS_OUT =
   EFL_EVENT_DESCRIPTION("focus,out");
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_input_pointer_xy_get, EFL_FUNC_CALL(x, y), int *x, int *y);
EOAPI EFL_FUNC_BODY_CONST(efl_input_pointer_inside_get, Eina_Bool, 0);
EOAPI EFL_FUNC_BODYV_CONST(efl_input_pointer_iterate, Eina_Iterator *, NULL, EFL_FUNC_CALL(hover), Eina_Bool hover);
EOAPI EFL_VOID_FUNC_BODYV(efl_input_seat_event_filter_set, EFL_FUNC_CALL(seat, enable), Efl_Input_Device *seat, Eina_Bool enable);
EOAPI EFL_FUNC_BODYV_CONST(efl_input_seat_event_filter_get, Eina_Bool, 0, EFL_FUNC_CALL(seat), Efl_Input_Device *seat);

static Eina_Bool
_efl_input_interface_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_INPUT_INTERFACE_EXTRA_OPS
#define EFL_INPUT_INTERFACE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_input_pointer_xy_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_inside_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_input_pointer_iterate, NULL),
      EFL_OBJECT_OP_FUNC(efl_input_seat_event_filter_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_input_seat_event_filter_get, NULL),
      EFL_INPUT_INTERFACE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_INPUT_INTERFACE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_INPUT_INTERFACE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_input_interface_class_desc = {
   EO_VERSION,
   "Efl.Input.Interface",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_input_interface_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_input_interface_interface_get, &_efl_input_interface_class_desc, NULL, NULL);
