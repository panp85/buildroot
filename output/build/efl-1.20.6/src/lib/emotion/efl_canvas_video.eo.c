EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_FRAME_DECODE =
   EFL_EVENT_DESCRIPTION("frame,decode");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_CHANGE =
   EFL_EVENT_DESCRIPTION("position,change");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_LENGTH_CHANGE =
   EFL_EVENT_DESCRIPTION("length,change");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_FRAME_RESIZE =
   EFL_EVENT_DESCRIPTION("frame,resize");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_PLAYBACK_START =
   EFL_EVENT_DESCRIPTION("playback,start");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_PLAYBACK_STOP =
   EFL_EVENT_DESCRIPTION("playback,stop");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_VOLUME_CHANGE =
   EFL_EVENT_DESCRIPTION("volume,change");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_CHANNELS_CHANGE =
   EFL_EVENT_DESCRIPTION("channels,change");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_TITLE_CHANGE =
   EFL_EVENT_DESCRIPTION("title,change");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_PROGRESS_CHANGE =
   EFL_EVENT_DESCRIPTION("progress,change");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_REF_CHANGE =
   EFL_EVENT_DESCRIPTION("ref,change");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_BUTTON_NUM_CHANGE =
   EFL_EVENT_DESCRIPTION("button,num,change");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_BUTTON_CHANGE =
   EFL_EVENT_DESCRIPTION("button,change");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_OPEN_DONE =
   EFL_EVENT_DESCRIPTION("open,done");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_SAVE_DONE =
   EFL_EVENT_DESCRIPTION("position,save,done");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_SAVE_FAIL =
   EFL_EVENT_DESCRIPTION("position,save,fail");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_LOAD_DONE =
   EFL_EVENT_DESCRIPTION("position,load,done");
EWAPI const Efl_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_LOAD_FAIL =
   EFL_EVENT_DESCRIPTION("position,load,fail");

void _efl_canvas_video_option_set(Eo *obj, Efl_Canvas_Video_Data *pd, const char *opt, const char *val);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_video_option_set, EFL_FUNC_CALL(opt, val), const char *opt, const char *val);

Eina_Bool _efl_canvas_video_engine_set(Eo *obj, Efl_Canvas_Video_Data *pd, const char *module_filename);

EOAPI EFL_FUNC_BODYV(efl_canvas_video_engine_set, Eina_Bool, 0, EFL_FUNC_CALL(module_filename), const char *module_filename);

Efl_Object *_efl_canvas_video_efl_object_constructor(Eo *obj, Efl_Canvas_Video_Data *pd);


void _efl_canvas_video_efl_gfx_color_set(Eo *obj, Efl_Canvas_Video_Data *pd, int r, int g, int b, int a);


void _efl_canvas_video_efl_gfx_visible_set(Eo *obj, Efl_Canvas_Video_Data *pd, Eina_Bool v);


void _efl_canvas_video_efl_gfx_position_set(Eo *obj, Efl_Canvas_Video_Data *pd, int x, int y);


void _efl_canvas_video_efl_gfx_size_set(Eo *obj, Efl_Canvas_Video_Data *pd, int w, int h);


void _efl_canvas_video_efl_canvas_object_clip_set(Eo *obj, Efl_Canvas_Video_Data *pd, Efl_Canvas_Object *clip);


Eina_Bool _efl_canvas_video_efl_file_file_set(Eo *obj, Efl_Canvas_Video_Data *pd, const char *file, const char *key);


void _efl_canvas_video_efl_file_file_get(Eo *obj, Efl_Canvas_Video_Data *pd, const char **file, const char **key);


void _efl_canvas_video_efl_player_play_set(Eo *obj, Efl_Canvas_Video_Data *pd, Eina_Bool play);


Eina_Bool _efl_canvas_video_efl_player_play_get(Eo *obj, Efl_Canvas_Video_Data *pd);


void _efl_canvas_video_efl_player_position_set(Eo *obj, Efl_Canvas_Video_Data *pd, double sec);


double _efl_canvas_video_efl_player_position_get(Eo *obj, Efl_Canvas_Video_Data *pd);


double _efl_canvas_video_efl_player_progress_get(Eo *obj, Efl_Canvas_Video_Data *pd);


void _efl_canvas_video_efl_player_volume_set(Eo *obj, Efl_Canvas_Video_Data *pd, double volume);


double _efl_canvas_video_efl_player_volume_get(Eo *obj, Efl_Canvas_Video_Data *pd);


void _efl_canvas_video_efl_player_mute_set(Eo *obj, Efl_Canvas_Video_Data *pd, Eina_Bool mute);


Eina_Bool _efl_canvas_video_efl_player_mute_get(Eo *obj, Efl_Canvas_Video_Data *pd);


double _efl_canvas_video_efl_player_length_get(Eo *obj, Efl_Canvas_Video_Data *pd);


Eina_Bool _efl_canvas_video_efl_player_seekable_get(Eo *obj, Efl_Canvas_Video_Data *pd);


void _efl_canvas_video_efl_image_load_load_size_get(Eo *obj, Efl_Canvas_Video_Data *pd, int *w, int *h);


double _efl_canvas_video_efl_image_ratio_get(Eo *obj, Efl_Canvas_Video_Data *pd);


void _efl_canvas_video_efl_image_smooth_scale_set(Eo *obj, Efl_Canvas_Video_Data *pd, Eina_Bool smooth_scale);


Eina_Bool _efl_canvas_video_efl_image_smooth_scale_get(Eo *obj, Efl_Canvas_Video_Data *pd);


static Eina_Bool
_efl_canvas_video_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_VIDEO_EXTRA_OPS
#define EFL_CANVAS_VIDEO_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_canvas_video_option_set, _efl_canvas_video_option_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_video_engine_set, _efl_canvas_video_engine_set),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_canvas_video_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_set, _efl_canvas_video_efl_gfx_color_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _efl_canvas_video_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _efl_canvas_video_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _efl_canvas_video_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_clip_set, _efl_canvas_video_efl_canvas_object_clip_set),
      EFL_OBJECT_OP_FUNC(efl_file_set, _efl_canvas_video_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_get, _efl_canvas_video_efl_file_file_get),
      EFL_OBJECT_OP_FUNC(efl_player_play_set, _efl_canvas_video_efl_player_play_set),
      EFL_OBJECT_OP_FUNC(efl_player_play_get, _efl_canvas_video_efl_player_play_get),
      EFL_OBJECT_OP_FUNC(efl_player_position_set, _efl_canvas_video_efl_player_position_set),
      EFL_OBJECT_OP_FUNC(efl_player_position_get, _efl_canvas_video_efl_player_position_get),
      EFL_OBJECT_OP_FUNC(efl_player_progress_get, _efl_canvas_video_efl_player_progress_get),
      EFL_OBJECT_OP_FUNC(efl_player_volume_set, _efl_canvas_video_efl_player_volume_set),
      EFL_OBJECT_OP_FUNC(efl_player_volume_get, _efl_canvas_video_efl_player_volume_get),
      EFL_OBJECT_OP_FUNC(efl_player_mute_set, _efl_canvas_video_efl_player_mute_set),
      EFL_OBJECT_OP_FUNC(efl_player_mute_get, _efl_canvas_video_efl_player_mute_get),
      EFL_OBJECT_OP_FUNC(efl_player_length_get, _efl_canvas_video_efl_player_length_get),
      EFL_OBJECT_OP_FUNC(efl_player_seekable_get, _efl_canvas_video_efl_player_seekable_get),
      EFL_OBJECT_OP_FUNC(efl_image_load_size_get, _efl_canvas_video_efl_image_load_load_size_get),
      EFL_OBJECT_OP_FUNC(efl_image_ratio_get, _efl_canvas_video_efl_image_ratio_get),
      EFL_OBJECT_OP_FUNC(efl_image_smooth_scale_set, _efl_canvas_video_efl_image_smooth_scale_set),
      EFL_OBJECT_OP_FUNC(efl_image_smooth_scale_get, _efl_canvas_video_efl_image_smooth_scale_get),
      EFL_CANVAS_VIDEO_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_VIDEO_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_VIDEO_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_video_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Video",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Canvas_Video_Data),
   _efl_canvas_video_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_video_class_get, &_efl_canvas_video_class_desc, EFL_CANVAS_GROUP_CLASS, EFL_FILE_INTERFACE, EFL_PLAYER_INTERFACE, EFL_IMAGE_INTERFACE, EFL_IMAGE_LOAD_INTERFACE, NULL);

EAPI void
emotion_object_module_option_set(Efl_Canvas_Video *obj, const char *opt, const char *val)
{
   efl_canvas_video_option_set(obj, opt, val);
}

EAPI Eina_Bool
emotion_object_init(Efl_Canvas_Video *obj, const char *module_filename)
{
   return efl_canvas_video_engine_set(obj, module_filename);
}
