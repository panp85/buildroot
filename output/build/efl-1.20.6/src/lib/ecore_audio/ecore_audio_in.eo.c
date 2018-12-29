EWAPI const Efl_Event_Description _ECORE_AUDIO_IN_EVENT_IN_LOOPED =
   EFL_EVENT_DESCRIPTION("in,looped");
EWAPI const Efl_Event_Description _ECORE_AUDIO_IN_EVENT_IN_STOPPED =
   EFL_EVENT_DESCRIPTION("in,stopped");
EWAPI const Efl_Event_Description _ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED =
   EFL_EVENT_DESCRIPTION("in,samplerate,changed");

void _ecore_audio_in_speed_set(Eo *obj, Ecore_Audio_Input *pd, double speed);

EOAPI EFL_VOID_FUNC_BODYV(ecore_audio_obj_in_speed_set, EFL_FUNC_CALL(speed), double speed);

double _ecore_audio_in_speed_get(Eo *obj, Ecore_Audio_Input *pd);

EOAPI EFL_FUNC_BODY_CONST(ecore_audio_obj_in_speed_get, double, 0);

void _ecore_audio_in_samplerate_set(Eo *obj, Ecore_Audio_Input *pd, int samplerate);

EOAPI EFL_VOID_FUNC_BODYV(ecore_audio_obj_in_samplerate_set, EFL_FUNC_CALL(samplerate), int samplerate);

int _ecore_audio_in_samplerate_get(Eo *obj, Ecore_Audio_Input *pd);

EOAPI EFL_FUNC_BODY_CONST(ecore_audio_obj_in_samplerate_get, int, 0);

void _ecore_audio_in_channels_set(Eo *obj, Ecore_Audio_Input *pd, int channels);

EOAPI EFL_VOID_FUNC_BODYV(ecore_audio_obj_in_channels_set, EFL_FUNC_CALL(channels), int channels);

int _ecore_audio_in_channels_get(Eo *obj, Ecore_Audio_Input *pd);

EOAPI EFL_FUNC_BODY_CONST(ecore_audio_obj_in_channels_get, int, 0);
EOAPI EFL_VOID_FUNC_BODYV(ecore_audio_obj_in_preloaded_set, EFL_FUNC_CALL(preloaded), Eina_Bool preloaded);
EOAPI EFL_FUNC_BODY_CONST(ecore_audio_obj_in_preloaded_get, Eina_Bool, 0);

void _ecore_audio_in_looped_set(Eo *obj, Ecore_Audio_Input *pd, Eina_Bool looped);

EOAPI EFL_VOID_FUNC_BODYV(ecore_audio_obj_in_looped_set, EFL_FUNC_CALL(looped), Eina_Bool looped);

Eina_Bool _ecore_audio_in_looped_get(Eo *obj, Ecore_Audio_Input *pd);

EOAPI EFL_FUNC_BODY_CONST(ecore_audio_obj_in_looped_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV(ecore_audio_obj_in_length_set, EFL_FUNC_CALL(length), double length);

double _ecore_audio_in_length_get(Eo *obj, Ecore_Audio_Input *pd);

EOAPI EFL_FUNC_BODY_CONST(ecore_audio_obj_in_length_get, double, 0);

Ecore_Audio *_ecore_audio_in_output_get(Eo *obj, Ecore_Audio_Input *pd);

EOAPI EFL_FUNC_BODY_CONST(ecore_audio_obj_in_output_get, Ecore_Audio *, NULL);

double _ecore_audio_in_remaining_get(Eo *obj, Ecore_Audio_Input *pd);

EOAPI EFL_FUNC_BODY_CONST(ecore_audio_obj_in_remaining_get, double, 0);

ssize_t _ecore_audio_in_read(Eo *obj, Ecore_Audio_Input *pd, void *buf, size_t len);

EOAPI EFL_FUNC_BODYV(ecore_audio_obj_in_read, ssize_t, 0, EFL_FUNC_CALL(buf, len), void *buf, size_t len);

ssize_t _ecore_audio_in_read_internal(Eo *obj, Ecore_Audio_Input *pd, void *buf, size_t len);

EOAPI EFL_FUNC_BODYV(ecore_audio_obj_in_read_internal, ssize_t, 0, EFL_FUNC_CALL(buf, len), void *buf, size_t len);
EOAPI EFL_FUNC_BODYV(ecore_audio_obj_in_seek, double, 0, EFL_FUNC_CALL(offs, mode), double offs, int mode);

Efl_Object *_ecore_audio_in_efl_object_constructor(Eo *obj, Ecore_Audio_Input *pd);


void _ecore_audio_in_efl_object_destructor(Eo *obj, Ecore_Audio_Input *pd);


void _ecore_audio_in_ecore_audio_vio_set(Eo *obj, Ecore_Audio_Input *pd, Ecore_Audio_Vio *vio, void *data, efl_key_data_free_func free_func);


static Eina_Bool
_ecore_audio_in_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECORE_AUDIO_IN_EXTRA_OPS
#define ECORE_AUDIO_IN_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_speed_set, _ecore_audio_in_speed_set),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_speed_get, _ecore_audio_in_speed_get),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_samplerate_set, _ecore_audio_in_samplerate_set),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_samplerate_get, _ecore_audio_in_samplerate_get),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_channels_set, _ecore_audio_in_channels_set),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_channels_get, _ecore_audio_in_channels_get),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_preloaded_set, NULL),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_preloaded_get, NULL),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_looped_set, _ecore_audio_in_looped_set),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_looped_get, _ecore_audio_in_looped_get),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_length_set, NULL),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_length_get, _ecore_audio_in_length_get),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_output_get, _ecore_audio_in_output_get),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_remaining_get, _ecore_audio_in_remaining_get),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_read, _ecore_audio_in_read),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_read_internal, _ecore_audio_in_read_internal),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_in_seek, NULL),
      EFL_OBJECT_OP_FUNC(efl_constructor, _ecore_audio_in_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _ecore_audio_in_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_vio_set, _ecore_audio_in_ecore_audio_vio_set),
      ECORE_AUDIO_IN_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECORE_AUDIO_IN_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECORE_AUDIO_IN_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ecore_audio_in_class_desc = {
   EO_VERSION,
   "Ecore.Audio.In",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Ecore_Audio_Input),
   _ecore_audio_in_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ecore_audio_in_class_get, &_ecore_audio_in_class_desc, ECORE_AUDIO_CLASS, NULL);
