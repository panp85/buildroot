EOAPI EFL_VOID_FUNC_BODYV(efl_input_timestamp_set, EFL_FUNC_CALL(ms), double ms);
EOAPI EFL_FUNC_BODY_CONST(efl_input_timestamp_get, double, 0);
EOAPI EFL_VOID_FUNC_BODY(efl_input_reset);
EOAPI EFL_FUNC_BODY(efl_input_dup, Efl_Input_Event *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_input_device_set, EFL_FUNC_CALL(dev), Efl_Input_Device *dev);
EOAPI EFL_FUNC_BODY_CONST(efl_input_device_get, Efl_Input_Device *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_input_event_flags_set, EFL_FUNC_CALL(flags), Efl_Input_Flags flags);
EOAPI EFL_FUNC_BODY_CONST(efl_input_event_flags_get, Efl_Input_Flags, 0);

void _efl_input_event_processed_set(Eo *obj, void *pd, Eina_Bool val);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_processed_set, EFL_FUNC_CALL(val), Eina_Bool val);

Eina_Bool _efl_input_event_processed_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_processed_get, Eina_Bool, 0);

void _efl_input_event_scrolling_set(Eo *obj, void *pd, Eina_Bool val);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_scrolling_set, EFL_FUNC_CALL(val), Eina_Bool val);

Eina_Bool _efl_input_event_scrolling_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_scrolling_get, Eina_Bool, 0);

Eina_Bool _efl_input_event_fake_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_fake_get, Eina_Bool, 0);

Efl_Object *_efl_input_event_efl_object_provider_find(Eo *obj, void *pd, const Efl_Object *klass);


static Eina_Bool
_efl_input_event_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_INPUT_EVENT_EXTRA_OPS
#define EFL_INPUT_EVENT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_input_timestamp_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_input_timestamp_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_input_reset, NULL),
      EFL_OBJECT_OP_FUNC(efl_input_dup, NULL),
      EFL_OBJECT_OP_FUNC(efl_input_device_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_input_device_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_input_event_flags_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_input_event_flags_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_input_processed_set, _efl_input_event_processed_set),
      EFL_OBJECT_OP_FUNC(efl_input_processed_get, _efl_input_event_processed_get),
      EFL_OBJECT_OP_FUNC(efl_input_scrolling_set, _efl_input_event_scrolling_set),
      EFL_OBJECT_OP_FUNC(efl_input_scrolling_get, _efl_input_event_scrolling_get),
      EFL_OBJECT_OP_FUNC(efl_input_fake_get, _efl_input_event_fake_get),
      EFL_OBJECT_OP_FUNC(efl_provider_find, _efl_input_event_efl_object_provider_find),
      EFL_INPUT_EVENT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_INPUT_EVENT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_INPUT_EVENT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_input_event_class_desc = {
   EO_VERSION,
   "Efl.Input.Event",
   EFL_CLASS_TYPE_MIXIN,
   0,
   _efl_input_event_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_input_event_mixin_get, &_efl_input_event_class_desc, EFL_INTERFACE_INTERFACE, EFL_OBJECT_CLASS, NULL);
