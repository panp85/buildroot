
void _ecore_audio_name_set(Eo *obj, Ecore_Audio_Object *pd, const char *name);

EOAPI EFL_VOID_FUNC_BODYV(ecore_audio_obj_name_set, EFL_FUNC_CALL(name), const char *name);

const char *_ecore_audio_name_get(Eo *obj, Ecore_Audio_Object *pd);

EOAPI EFL_FUNC_BODY_CONST(ecore_audio_obj_name_get, const char *, NULL);

void _ecore_audio_paused_set(Eo *obj, Ecore_Audio_Object *pd, Eina_Bool paused);

EOAPI EFL_VOID_FUNC_BODYV(ecore_audio_obj_paused_set, EFL_FUNC_CALL(paused), Eina_Bool paused);

Eina_Bool _ecore_audio_paused_get(Eo *obj, Ecore_Audio_Object *pd);

EOAPI EFL_FUNC_BODY_CONST(ecore_audio_obj_paused_get, Eina_Bool, 0);

void _ecore_audio_volume_set(Eo *obj, Ecore_Audio_Object *pd, double volume);

EOAPI EFL_VOID_FUNC_BODYV(ecore_audio_obj_volume_set, EFL_FUNC_CALL(volume), double volume);

double _ecore_audio_volume_get(Eo *obj, Ecore_Audio_Object *pd);

EOAPI EFL_FUNC_BODY_CONST(ecore_audio_obj_volume_get, double, 0);
EOAPI EFL_FUNC_BODYV(ecore_audio_obj_source_set, Eina_Bool, 0, EFL_FUNC_CALL(source), const char *source);
EOAPI EFL_FUNC_BODY_CONST(ecore_audio_obj_source_get, const char *, NULL);
EOAPI EFL_FUNC_BODYV(ecore_audio_obj_format_set, Eina_Bool, 0, EFL_FUNC_CALL(format), Ecore_Audio_Format format);
EOAPI EFL_FUNC_BODY_CONST(ecore_audio_obj_format_get, Ecore_Audio_Format, 0);
EOAPI EFL_VOID_FUNC_BODYV(ecore_audio_obj_vio_set, EFL_FUNC_CALL(vio, data, free_func), Ecore_Audio_Vio *vio, void *data, efl_key_data_free_func free_func);

Efl_Object *_ecore_audio_efl_object_constructor(Eo *obj, Ecore_Audio_Object *pd);


static Eina_Bool
_ecore_audio_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECORE_AUDIO_EXTRA_OPS
#define ECORE_AUDIO_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_name_set, _ecore_audio_name_set),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_name_get, _ecore_audio_name_get),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_paused_set, _ecore_audio_paused_set),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_paused_get, _ecore_audio_paused_get),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_volume_set, _ecore_audio_volume_set),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_volume_get, _ecore_audio_volume_get),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_source_set, NULL),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_source_get, NULL),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_format_set, NULL),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_format_get, NULL),
      EFL_OBJECT_OP_FUNC(ecore_audio_obj_vio_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_constructor, _ecore_audio_efl_object_constructor),
      ECORE_AUDIO_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECORE_AUDIO_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECORE_AUDIO_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ecore_audio_class_desc = {
   EO_VERSION,
   "Ecore.Audio",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Ecore_Audio_Object),
   _ecore_audio_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ecore_audio_class_get, &_ecore_audio_class_desc, EFL_OBJECT_CLASS, NULL);
