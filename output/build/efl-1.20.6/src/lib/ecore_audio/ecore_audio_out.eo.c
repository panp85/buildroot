
Eina_Bool _ecore_audio_out_input_attach(Eo *obj, Ecore_Audio_Output *pd, Ecore_Audio_In *input);

EOAPI EFL_FUNC_BODYV(ecore_audio_obj_out_input_attach, Eina_Bool, 0, EFL_FUNC_CALL(input), Ecore_Audio_In *input);

Eina_Bool _ecore_audio_out_input_detach(Eo *obj, Ecore_Audio_Output *pd, Ecore_Audio_In *input);

EOAPI EFL_FUNC_BODYV(ecore_audio_obj_out_input_detach, Eina_Bool, 0, EFL_FUNC_CALL(input), Ecore_Audio_In *input);

Eina_List *_ecore_audio_out_inputs_get(Eo *obj, Ecore_Audio_Output *pd);

EOAPI EFL_FUNC_BODY(ecore_audio_obj_out_inputs_get, Eina_List *, NULL);

Efl_Object *_ecore_audio_out_efl_object_constructor(Eo *obj, Ecore_Audio_Output *pd);


void _ecore_audio_out_efl_object_destructor(Eo *obj, Ecore_Audio_Output *pd);


void _ecore_audio_out_ecore_audio_vio_set(Eo *obj, Ecore_Audio_Output *pd, Ecore_Audio_Vio *vio, void *data, efl_key_data_free_func free_func);


static Eina_Bool
_ecore_audio_out_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECORE_AUDIO_OUT_EXTRA_OPS
#define ECORE_AUDIO_OUT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_out_input_attach, _ecore_audio_out_input_attach),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_out_input_detach, _ecore_audio_out_input_detach),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_out_inputs_get, _ecore_audio_out_inputs_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _ecore_audio_out_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _ecore_audio_out_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_vio_set, _ecore_audio_out_ecore_audio_vio_set),
      ECORE_AUDIO_OUT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECORE_AUDIO_OUT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECORE_AUDIO_OUT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ecore_audio_out_class_desc = {
   EO_VERSION,
   "Ecore.Audio.Out",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Ecore_Audio_Output),
   _ecore_audio_out_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ecore_audio_out_class_get, &_ecore_audio_out_class_desc, ECORE_AUDIO_CLASS, NULL);
