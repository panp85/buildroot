
void _efl_input_focus_object_set(Eo *obj, Efl_Input_Focus_Data *pd, Efl_Object *object);

EOAPI EFL_VOID_FUNC_BODYV(efl_input_focus_object_set, EFL_FUNC_CALL(object), Efl_Object *object);

Efl_Object *_efl_input_focus_object_get(Eo *obj, Efl_Input_Focus_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_input_focus_object_get, Efl_Object *, NULL);

Efl_Object *_efl_input_focus_efl_object_constructor(Eo *obj, Efl_Input_Focus_Data *pd);


void _efl_input_focus_efl_object_destructor(Eo *obj, Efl_Input_Focus_Data *pd);


void _efl_input_focus_efl_input_event_device_set(Eo *obj, Efl_Input_Focus_Data *pd, Efl_Input_Device *dev);


Efl_Input_Device *_efl_input_focus_efl_input_event_device_get(Eo *obj, Efl_Input_Focus_Data *pd);


void _efl_input_focus_efl_input_event_reset(Eo *obj, Efl_Input_Focus_Data *pd);


Efl_Input_Event *_efl_input_focus_efl_input_event_dup(Eo *obj, Efl_Input_Focus_Data *pd);


void _efl_input_focus_efl_input_event_timestamp_set(Eo *obj, Efl_Input_Focus_Data *pd, double ms);


double _efl_input_focus_efl_input_event_timestamp_get(Eo *obj, Efl_Input_Focus_Data *pd);


static Eina_Bool
_efl_input_focus_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_INPUT_FOCUS_EXTRA_OPS
#define EFL_INPUT_FOCUS_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_input_focus_object_set, _efl_input_focus_object_set),
      EFL_OBJECT_OP_FUNC(efl_input_focus_object_get, _efl_input_focus_object_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_input_focus_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_input_focus_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_input_device_set, _efl_input_focus_efl_input_event_device_set),
      EFL_OBJECT_OP_FUNC(efl_input_device_get, _efl_input_focus_efl_input_event_device_get),
      EFL_OBJECT_OP_FUNC(efl_input_reset, _efl_input_focus_efl_input_event_reset),
      EFL_OBJECT_OP_FUNC(efl_input_dup, _efl_input_focus_efl_input_event_dup),
      EFL_OBJECT_OP_FUNC(efl_input_timestamp_set, _efl_input_focus_efl_input_event_timestamp_set),
      EFL_OBJECT_OP_FUNC(efl_input_timestamp_get, _efl_input_focus_efl_input_event_timestamp_get),
      EFL_INPUT_FOCUS_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_INPUT_FOCUS_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_INPUT_FOCUS_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_input_focus_class_desc = {
   EO_VERSION,
   "Efl.Input.Focus",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Input_Focus_Data),
   _efl_input_focus_class_initializer,
   NULL,
   _efl_input_focus_class_destructor
};

EFL_DEFINE_CLASS(efl_input_focus_class_get, &_efl_input_focus_class_desc, EFL_OBJECT_CLASS, EFL_INPUT_EVENT_MIXIN, NULL);
