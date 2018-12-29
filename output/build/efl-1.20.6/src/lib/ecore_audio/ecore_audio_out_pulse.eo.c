EWAPI const Efl_Event_Description _ECORE_AUDIO_OUT_PULSE_EVENT_CONTEXT_READY =
   EFL_EVENT_DESCRIPTION("context,ready");
EWAPI const Efl_Event_Description _ECORE_AUDIO_OUT_PULSE_EVENT_CONTEXT_FAIL =
   EFL_EVENT_DESCRIPTION("context,fail");

Efl_Object *_ecore_audio_out_pulse_efl_object_constructor(Eo *obj, Ecore_Audio_Out_Pulse_Data *pd);


void _ecore_audio_out_pulse_efl_object_destructor(Eo *obj, Ecore_Audio_Out_Pulse_Data *pd);


void _ecore_audio_out_pulse_ecore_audio_volume_set(Eo *obj, Ecore_Audio_Out_Pulse_Data *pd, double volume);


Eina_Bool _ecore_audio_out_pulse_ecore_audio_out_input_attach(Eo *obj, Ecore_Audio_Out_Pulse_Data *pd, Ecore_Audio_In *input);


Eina_Bool _ecore_audio_out_pulse_ecore_audio_out_input_detach(Eo *obj, Ecore_Audio_Out_Pulse_Data *pd, Ecore_Audio_In *input);


static Eina_Bool
_ecore_audio_out_pulse_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECORE_AUDIO_OUT_PULSE_EXTRA_OPS
#define ECORE_AUDIO_OUT_PULSE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _ecore_audio_out_pulse_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _ecore_audio_out_pulse_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_volume_set, _ecore_audio_out_pulse_ecore_audio_volume_set),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_out_input_attach, _ecore_audio_out_pulse_ecore_audio_out_input_attach),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_out_input_detach, _ecore_audio_out_pulse_ecore_audio_out_input_detach),
      ECORE_AUDIO_OUT_PULSE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECORE_AUDIO_OUT_PULSE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECORE_AUDIO_OUT_PULSE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ecore_audio_out_pulse_class_desc = {
   EO_VERSION,
   "Ecore.Audio.Out.Pulse",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Ecore_Audio_Out_Pulse_Data),
   _ecore_audio_out_pulse_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ecore_audio_out_pulse_class_get, &_ecore_audio_out_pulse_class_desc, ECORE_AUDIO_OUT_CLASS, NULL);
