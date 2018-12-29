
void _efl_ui_video_remember_position_set(Eo *obj, Efl_Ui_Video_Data *pd, Eina_Bool remember);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_video_remember_position_set, EFL_FUNC_CALL(remember), Eina_Bool remember);

Eina_Bool _efl_ui_video_remember_position_get(Eo *obj, Efl_Ui_Video_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_video_remember_position_get, Eina_Bool, 0);

Eina_Bool _efl_ui_video_is_playing_get(Eo *obj, Efl_Ui_Video_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_video_is_playing_get, Eina_Bool, 0);

Efl_Canvas_Object *_efl_ui_video_emotion_get(Eo *obj, Efl_Ui_Video_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_video_emotion_get, Efl_Canvas_Object *, NULL);

const char *_efl_ui_video_title_get(Eo *obj, Efl_Ui_Video_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_video_title_get, const char *, NULL);

void _efl_ui_video_play(Eo *obj, Efl_Ui_Video_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_ui_video_play);

void _efl_ui_video_pause(Eo *obj, Efl_Ui_Video_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_ui_video_pause);

void _efl_ui_video_stop(Eo *obj, Efl_Ui_Video_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_ui_video_stop);

Efl_Object *_efl_ui_video_efl_object_constructor(Eo *obj, Efl_Ui_Video_Data *pd);


Eina_Bool _efl_ui_video_efl_file_file_set(Eo *obj, Efl_Ui_Video_Data *pd, const char *file, const char *key);


void _efl_ui_video_efl_file_file_get(Eo *obj, Efl_Ui_Video_Data *pd, const char **file, const char **key);


Eina_Bool _efl_ui_video_elm_widget_focus_next_manager_is(Eo *obj, Efl_Ui_Video_Data *pd);


Eina_Bool _efl_ui_video_elm_widget_focus_direction_manager_is(Eo *obj, Efl_Ui_Video_Data *pd);


Eina_Bool _efl_ui_video_elm_widget_widget_event(Eo *obj, Efl_Ui_Video_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _efl_ui_video_elm_layout_sizing_eval(Eo *obj, Efl_Ui_Video_Data *pd);


const Elm_Atspi_Action *_efl_ui_video_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Efl_Ui_Video_Data *pd);


static Eina_Bool
_efl_ui_video_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_VIDEO_EXTRA_OPS
#define EFL_UI_VIDEO_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_video_remember_position_set, _efl_ui_video_remember_position_set),
      EFL_OBJECT_OP_FUNC(efl_ui_video_remember_position_get, _efl_ui_video_remember_position_get),
      EFL_OBJECT_OP_FUNC(efl_ui_video_is_playing_get, _efl_ui_video_is_playing_get),
      EFL_OBJECT_OP_FUNC(efl_ui_video_emotion_get, _efl_ui_video_emotion_get),
      EFL_OBJECT_OP_FUNC(efl_ui_video_title_get, _efl_ui_video_title_get),
      EFL_OBJECT_OP_FUNC(efl_ui_video_play, _efl_ui_video_play),
      EFL_OBJECT_OP_FUNC(efl_ui_video_pause, _efl_ui_video_pause),
      EFL_OBJECT_OP_FUNC(efl_ui_video_stop, _efl_ui_video_stop),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_video_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_file_set, _efl_ui_video_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_get, _efl_ui_video_efl_file_file_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _efl_ui_video_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _efl_ui_video_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _efl_ui_video_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _efl_ui_video_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _efl_ui_video_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_UI_VIDEO_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_VIDEO_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_VIDEO_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_video_class_desc = {
   EO_VERSION,
   "Efl.Ui.Video",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Video_Data),
   _efl_ui_video_class_initializer,
   _efl_ui_video_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_video_class_get, &_efl_ui_video_class_desc, ELM_LAYOUT_CLASS, EFL_FILE_INTERFACE, EFL_PLAYER_INTERFACE, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);

EAPI void
elm_video_remember_position_set(Efl_Ui_Video *obj, Eina_Bool remember)
{
   efl_ui_video_remember_position_set(obj, remember);
}

EAPI Eina_Bool
elm_video_remember_position_get(const Efl_Ui_Video *obj)
{
   return efl_ui_video_remember_position_get(obj);
}

EAPI Eina_Bool
elm_video_is_playing_get(const Efl_Ui_Video *obj)
{
   return efl_ui_video_is_playing_get(obj);
}

EAPI Efl_Canvas_Object *
elm_video_emotion_get(const Efl_Ui_Video *obj)
{
   return efl_ui_video_emotion_get(obj);
}

EAPI const char *
elm_video_title_get(const Efl_Ui_Video *obj)
{
   return efl_ui_video_title_get(obj);
}

EAPI void
elm_video_play(Efl_Ui_Video *obj)
{
   efl_ui_video_play(obj);
}

EAPI void
elm_video_pause(Efl_Ui_Video *obj)
{
   efl_ui_video_pause(obj);
}

EAPI void
elm_video_stop(Efl_Ui_Video *obj)
{
   efl_ui_video_stop(obj);
}
