
Efl_Object *_efl_ui_button_efl_object_constructor(Eo *obj, Efl_Ui_Button_Data *pd);


void _efl_ui_button_efl_ui_autorepeat_autorepeat_initial_timeout_set(Eo *obj, Efl_Ui_Button_Data *pd, double t);


double _efl_ui_button_efl_ui_autorepeat_autorepeat_initial_timeout_get(Eo *obj, Efl_Ui_Button_Data *pd);


void _efl_ui_button_efl_ui_autorepeat_autorepeat_gap_timeout_set(Eo *obj, Efl_Ui_Button_Data *pd, double t);


double _efl_ui_button_efl_ui_autorepeat_autorepeat_gap_timeout_get(Eo *obj, Efl_Ui_Button_Data *pd);


void _efl_ui_button_efl_ui_autorepeat_autorepeat_enabled_set(Eo *obj, Efl_Ui_Button_Data *pd, Eina_Bool on);


Eina_Bool _efl_ui_button_efl_ui_autorepeat_autorepeat_enabled_get(Eo *obj, Efl_Ui_Button_Data *pd);


Eina_Bool _efl_ui_button_efl_ui_autorepeat_autorepeat_supported_get(Eo *obj, Efl_Ui_Button_Data *pd);


Eina_Bool _efl_ui_button_elm_widget_activate(Eo *obj, Efl_Ui_Button_Data *pd, Elm_Activate act);


Eina_Bool _efl_ui_button_elm_widget_focus_next_manager_is(Eo *obj, Efl_Ui_Button_Data *pd);


Eina_Bool _efl_ui_button_elm_widget_focus_direction_manager_is(Eo *obj, Efl_Ui_Button_Data *pd);


Elm_Theme_Apply _efl_ui_button_elm_widget_theme_apply(Eo *obj, Efl_Ui_Button_Data *pd);


Eina_Bool _efl_ui_button_elm_widget_sub_object_del(Eo *obj, Efl_Ui_Button_Data *pd, Efl_Canvas_Object *sobj);


Eina_Bool _efl_ui_button_elm_widget_widget_event(Eo *obj, Efl_Ui_Button_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


const Elm_Layout_Part_Alias_Description *_efl_ui_button_elm_layout_text_aliases_get(Eo *obj, Efl_Ui_Button_Data *pd);


const Elm_Layout_Part_Alias_Description *_efl_ui_button_elm_layout_content_aliases_get(Eo *obj, Efl_Ui_Button_Data *pd);


void _efl_ui_button_elm_layout_sizing_eval(Eo *obj, Efl_Ui_Button_Data *pd);


const Elm_Atspi_Action *_efl_ui_button_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Efl_Ui_Button_Data *pd);


Efl_Object *_efl_ui_button_efl_part_part(const Eo *obj, Efl_Ui_Button_Data *pd, const char *name);


void _efl_ui_button_efl_text_text_set(Eo *obj, Efl_Ui_Button_Data *pd, const char *text);


const char *_efl_ui_button_efl_text_text_get(Eo *obj, Efl_Ui_Button_Data *pd);


static Eina_Bool
_efl_ui_button_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_BUTTON_EXTRA_OPS
#define EFL_UI_BUTTON_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_button_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_initial_timeout_set, _efl_ui_button_efl_ui_autorepeat_autorepeat_initial_timeout_set),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_initial_timeout_get, _efl_ui_button_efl_ui_autorepeat_autorepeat_initial_timeout_get),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_gap_timeout_set, _efl_ui_button_efl_ui_autorepeat_autorepeat_gap_timeout_set),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_gap_timeout_get, _efl_ui_button_efl_ui_autorepeat_autorepeat_gap_timeout_get),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_enabled_set, _efl_ui_button_efl_ui_autorepeat_autorepeat_enabled_set),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_enabled_get, _efl_ui_button_efl_ui_autorepeat_autorepeat_enabled_get),
      EFL_OBJECT_OP_FUNC(efl_ui_autorepeat_supported_get, _efl_ui_button_efl_ui_autorepeat_autorepeat_supported_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_activate, _efl_ui_button_elm_widget_activate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _efl_ui_button_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _efl_ui_button_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _efl_ui_button_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _efl_ui_button_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _efl_ui_button_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_text_aliases_get, _efl_ui_button_elm_layout_text_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_content_aliases_get, _efl_ui_button_elm_layout_content_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _efl_ui_button_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _efl_ui_button_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(efl_part, _efl_ui_button_efl_part_part),
      EFL_OBJECT_OP_FUNC(efl_text_set, _efl_ui_button_efl_text_text_set),
      EFL_OBJECT_OP_FUNC(efl_text_get, _efl_ui_button_efl_text_text_get),
      EFL_UI_BUTTON_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_BUTTON_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_BUTTON_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_button_class_desc = {
   EO_VERSION,
   "Efl.Ui.Button",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Button_Data),
   _efl_ui_button_class_initializer,
   _efl_ui_button_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_button_class_get, &_efl_ui_button_class_desc, ELM_LAYOUT_CLASS, EFL_UI_CLICKABLE_INTERFACE, EFL_UI_AUTOREPEAT_INTERFACE, EFL_TEXT_INTERFACE, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);
