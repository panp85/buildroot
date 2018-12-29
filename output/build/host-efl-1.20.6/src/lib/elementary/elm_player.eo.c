EWAPI const Efl_Event_Description _ELM_PLAYER_EVENT_FORWARD_CLICKED =
   EFL_EVENT_DESCRIPTION("forward,clicked");
EWAPI const Efl_Event_Description _ELM_PLAYER_EVENT_INFO_CLICKED =
   EFL_EVENT_DESCRIPTION("info,clicked");
EWAPI const Efl_Event_Description _ELM_PLAYER_EVENT_NEXT_CLICKED =
   EFL_EVENT_DESCRIPTION("next,clicked");
EWAPI const Efl_Event_Description _ELM_PLAYER_EVENT_PAUSE_CLICKED =
   EFL_EVENT_DESCRIPTION("pause,clicked");
EWAPI const Efl_Event_Description _ELM_PLAYER_EVENT_PLAY_CLICKED =
   EFL_EVENT_DESCRIPTION("play,clicked");
EWAPI const Efl_Event_Description _ELM_PLAYER_EVENT_PREV_CLICKED =
   EFL_EVENT_DESCRIPTION("prev,clicked");
EWAPI const Efl_Event_Description _ELM_PLAYER_EVENT_REWIND_CLICKED =
   EFL_EVENT_DESCRIPTION("rewind,clicked");
EWAPI const Efl_Event_Description _ELM_PLAYER_EVENT_QUALITY_CLICKED =
   EFL_EVENT_DESCRIPTION("quality,clicked");
EWAPI const Efl_Event_Description _ELM_PLAYER_EVENT_EJECT_CLICKED =
   EFL_EVENT_DESCRIPTION("eject,clicked");
EWAPI const Efl_Event_Description _ELM_PLAYER_EVENT_VOLUME_CLICKED =
   EFL_EVENT_DESCRIPTION("volume,clicked");
EWAPI const Efl_Event_Description _ELM_PLAYER_EVENT_MUTE_CLICKED =
   EFL_EVENT_DESCRIPTION("mute,clicked");

Efl_Object *_elm_player_efl_object_constructor(Eo *obj, Elm_Player_Data *pd);


Elm_Theme_Apply _elm_player_elm_widget_theme_apply(Eo *obj, Elm_Player_Data *pd);


Eina_Bool _elm_player_elm_widget_widget_event(Eo *obj, Elm_Player_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _elm_player_elm_layout_sizing_eval(Eo *obj, Elm_Player_Data *pd);


const Elm_Atspi_Action *_elm_player_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Player_Data *pd);


Efl_Object *_elm_player_efl_part_part(const Eo *obj, Elm_Player_Data *pd, const char *name);


static Eina_Bool
_elm_player_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_PLAYER_EXTRA_OPS
#define ELM_PLAYER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_player_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_player_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_player_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_player_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_player_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_player_efl_part_part),
      ELM_PLAYER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_PLAYER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_PLAYER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_player_class_desc = {
   EO_VERSION,
   "Elm.Player",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Player_Data),
   _elm_player_class_initializer,
   _elm_player_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_player_class_get, &_elm_player_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);
