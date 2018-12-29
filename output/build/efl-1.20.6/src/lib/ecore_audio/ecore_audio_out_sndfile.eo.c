
Efl_Object *_ecore_audio_out_sndfile_efl_object_constructor(Eo *obj, Ecore_Audio_Out_Sndfile_Data *pd);


void _ecore_audio_out_sndfile_efl_object_destructor(Eo *obj, Ecore_Audio_Out_Sndfile_Data *pd);


Eina_Bool _ecore_audio_out_sndfile_ecore_audio_source_set(Eo *obj, Ecore_Audio_Out_Sndfile_Data *pd, const char *source);


const char *_ecore_audio_out_sndfile_ecore_audio_source_get(Eo *obj, Ecore_Audio_Out_Sndfile_Data *pd);


Eina_Bool _ecore_audio_out_sndfile_ecore_audio_format_set(Eo *obj, Ecore_Audio_Out_Sndfile_Data *pd, Ecore_Audio_Format format);


Ecore_Audio_Format _ecore_audio_out_sndfile_ecore_audio_format_get(Eo *obj, Ecore_Audio_Out_Sndfile_Data *pd);


Eina_Bool _ecore_audio_out_sndfile_ecore_audio_out_input_attach(Eo *obj, Ecore_Audio_Out_Sndfile_Data *pd, Ecore_Audio_In *input);


static Eina_Bool
_ecore_audio_out_sndfile_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECORE_AUDIO_OUT_SNDFILE_EXTRA_OPS
#define ECORE_AUDIO_OUT_SNDFILE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _ecore_audio_out_sndfile_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _ecore_audio_out_sndfile_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_source_set, _ecore_audio_out_sndfile_ecore_audio_source_set),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_source_get, _ecore_audio_out_sndfile_ecore_audio_source_get),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_format_set, _ecore_audio_out_sndfile_ecore_audio_format_set),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_format_get, _ecore_audio_out_sndfile_ecore_audio_format_get),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_out_input_attach, _ecore_audio_out_sndfile_ecore_audio_out_input_attach),
      ECORE_AUDIO_OUT_SNDFILE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECORE_AUDIO_OUT_SNDFILE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECORE_AUDIO_OUT_SNDFILE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ecore_audio_out_sndfile_class_desc = {
   EO_VERSION,
   "Ecore.Audio.Out.Sndfile",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Ecore_Audio_Out_Sndfile_Data),
   _ecore_audio_out_sndfile_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ecore_audio_out_sndfile_class_get, &_ecore_audio_out_sndfile_class_desc, ECORE_AUDIO_OUT_CLASS, NULL);
