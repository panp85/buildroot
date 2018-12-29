
void _ecore_audio_in_sndfile_efl_object_destructor(Eo *obj, Ecore_Audio_In_Sndfile_Data *pd);


Eina_Bool _ecore_audio_in_sndfile_ecore_audio_source_set(Eo *obj, Ecore_Audio_In_Sndfile_Data *pd, const char *source);


const char *_ecore_audio_in_sndfile_ecore_audio_source_get(Eo *obj, Ecore_Audio_In_Sndfile_Data *pd);


Eina_Bool _ecore_audio_in_sndfile_ecore_audio_format_set(Eo *obj, Ecore_Audio_In_Sndfile_Data *pd, Ecore_Audio_Format format);


Ecore_Audio_Format _ecore_audio_in_sndfile_ecore_audio_format_get(Eo *obj, Ecore_Audio_In_Sndfile_Data *pd);


void _ecore_audio_in_sndfile_ecore_audio_vio_set(Eo *obj, Ecore_Audio_In_Sndfile_Data *pd, Ecore_Audio_Vio *vio, void *data, efl_key_data_free_func free_func);


double _ecore_audio_in_sndfile_ecore_audio_in_seek(Eo *obj, Ecore_Audio_In_Sndfile_Data *pd, double offs, int mode);


ssize_t _ecore_audio_in_sndfile_ecore_audio_in_read_internal(Eo *obj, Ecore_Audio_In_Sndfile_Data *pd, void *buf, size_t len);


static Eina_Bool
_ecore_audio_in_sndfile_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECORE_AUDIO_IN_SNDFILE_EXTRA_OPS
#define ECORE_AUDIO_IN_SNDFILE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_destructor, _ecore_audio_in_sndfile_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_source_set, _ecore_audio_in_sndfile_ecore_audio_source_set),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_source_get, _ecore_audio_in_sndfile_ecore_audio_source_get),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_format_set, _ecore_audio_in_sndfile_ecore_audio_format_set),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_format_get, _ecore_audio_in_sndfile_ecore_audio_format_get),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_vio_set, _ecore_audio_in_sndfile_ecore_audio_vio_set),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_seek, _ecore_audio_in_sndfile_ecore_audio_in_seek),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_read_internal, _ecore_audio_in_sndfile_ecore_audio_in_read_internal),
      ECORE_AUDIO_IN_SNDFILE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECORE_AUDIO_IN_SNDFILE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECORE_AUDIO_IN_SNDFILE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ecore_audio_in_sndfile_class_desc = {
   EO_VERSION,
   "Ecore.Audio.In.Sndfile",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Ecore_Audio_In_Sndfile_Data),
   _ecore_audio_in_sndfile_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ecore_audio_in_sndfile_class_get, &_ecore_audio_in_sndfile_class_desc, ECORE_AUDIO_IN_CLASS, NULL);
