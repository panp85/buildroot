EWAPI const Efl_Event_Description _EFL_UI_CHECK_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");

void _efl_ui_check_selected_set(Eo *obj, Efl_Ui_Check_Data *pd, Eina_Bool value);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_check_selected_set, EFL_FUNC_CALL(value), Eina_Bool value);

Eina_Bool _efl_ui_check_selected_get(Eo *obj, Efl_Ui_Check_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_check_selected_get, Eina_Bool, 0);

Efl_Object *_efl_ui_check_efl_object_constructor(Eo *obj, Efl_Ui_Check_Data *pd);


Eina_Bool _efl_ui_check_elm_widget_activate(Eo *obj, Efl_Ui_Check_Data *pd, Elm_Activate act);


Elm_Theme_Apply _efl_ui_check_elm_widget_theme_apply(Eo *obj, Efl_Ui_Check_Data *pd);


Eina_Bool _efl_ui_check_elm_widget_sub_object_del(Eo *obj, Efl_Ui_Check_Data *pd, Efl_Canvas_Object *sobj);


Eina_Bool _efl_ui_check_elm_widget_widget_event(Eo *obj, Efl_Ui_Check_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


const Elm_Layout_Part_Alias_Description *_efl_ui_check_elm_layout_text_aliases_get(Eo *obj, Efl_Ui_Check_Data *pd);


void _efl_ui_check_efl_ui_nstate_count_set(Eo *obj, Efl_Ui_Check_Data *pd, int nstate);


void _efl_ui_check_efl_ui_nstate_value_set(Eo *obj, Efl_Ui_Check_Data *pd, int state);


Elm_Atspi_State_Set _efl_ui_check_elm_interface_atspi_accessible_state_set_get(Eo *obj, Efl_Ui_Check_Data *pd);


const Elm_Atspi_Action *_efl_ui_check_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Efl_Ui_Check_Data *pd);


static Eina_Bool
_efl_ui_check_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_CHECK_EXTRA_OPS
#define EFL_UI_CHECK_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_check_selected_set, _efl_ui_check_selected_set),
      EFL_OBJECT_OP_FUNC(efl_ui_check_selected_get, _efl_ui_check_selected_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_check_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_activate, _efl_ui_check_elm_widget_activate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _efl_ui_check_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _efl_ui_check_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _efl_ui_check_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_text_aliases_get, _efl_ui_check_elm_layout_text_aliases_get),
      EFL_OBJECT_OP_FUNC(efl_ui_nstate_count_set, _efl_ui_check_efl_ui_nstate_count_set),
      EFL_OBJECT_OP_FUNC(efl_ui_nstate_value_set, _efl_ui_check_efl_ui_nstate_value_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _efl_ui_check_elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _efl_ui_check_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_UI_CHECK_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_CHECK_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_CHECK_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_check_class_desc = {
   EO_VERSION,
   "Efl.Ui.Check",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Check_Data),
   _efl_ui_check_class_initializer,
   _efl_ui_check_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_check_class_get, &_efl_ui_check_class_desc, EFL_UI_NSTATE_CLASS, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);

EAPI void
elm_check_selected_set(Efl_Ui_Check *obj, Eina_Bool value)
{
   efl_ui_check_selected_set(obj, value);
}

EAPI Eina_Bool
elm_check_selected_get(const Efl_Ui_Check *obj)
{
   return efl_ui_check_selected_get(obj);
}
