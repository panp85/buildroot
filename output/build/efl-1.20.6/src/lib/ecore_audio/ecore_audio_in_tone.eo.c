
Efl_Object *_ecore_audio_in_tone_efl_object_constructor(Eo *obj, Ecore_Audio_In_Tone_Data *pd);


void _ecore_audio_in_tone_ecore_audio_in_length_set(Eo *obj, Ecore_Audio_In_Tone_Data *pd, double length);


double _ecore_audio_in_tone_ecore_audio_in_seek(Eo *obj, Ecore_Audio_In_Tone_Data *pd, double offs, int mode);


ssize_t _ecore_audio_in_tone_ecore_audio_in_read_internal(Eo *obj, Ecore_Audio_In_Tone_Data *pd, void *buf, size_t len);


static Eina_Bool
_ecore_audio_in_tone_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECORE_AUDIO_IN_TONE_EXTRA_OPS
#define ECORE_AUDIO_IN_TONE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _ecore_audio_in_tone_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_length_set, _ecore_audio_in_tone_ecore_audio_in_length_set),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_seek, _ecore_audio_in_tone_ecore_audio_in_seek),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_read_internal, _ecore_audio_in_tone_ecore_audio_in_read_internal),
      ECORE_AUDIO_IN_TONE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECORE_AUDIO_IN_TONE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECORE_AUDIO_IN_TONE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ecore_audio_in_tone_class_desc = {
   EO_VERSION,
   "Ecore.Audio.In.Tone",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Ecore_Audio_In_Tone_Data),
   _ecore_audio_in_tone_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ecore_audio_in_tone_class_get, &_ecore_audio_in_tone_class_desc, ECORE_AUDIO_IN_CLASS, NULL);
