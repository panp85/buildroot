EWAPI const Efl_Event_Description _EFL_UI_RADIO_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");

void _efl_ui_radio_state_value_set(Eo *obj, Efl_Ui_Radio_Data *pd, int value);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_radio_state_value_set, EFL_FUNC_CALL(value), int value);

int _efl_ui_radio_state_value_get(Eo *obj, Efl_Ui_Radio_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_radio_state_value_get, int, 0);

void _efl_ui_radio_value_set(Eo *obj, Efl_Ui_Radio_Data *pd, int value);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_radio_value_set, EFL_FUNC_CALL(value), int value);

int _efl_ui_radio_value_get(Eo *obj, Efl_Ui_Radio_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_radio_value_get, int, 0);

void _efl_ui_radio_value_pointer_set(Eo *obj, Efl_Ui_Radio_Data *pd, int *valuep);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_radio_value_pointer_set, EFL_FUNC_CALL(valuep), int *valuep);

Efl_Canvas_Object *_efl_ui_radio_selected_object_get(Eo *obj, Efl_Ui_Radio_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_radio_selected_object_get, Efl_Canvas_Object *, NULL);

void _efl_ui_radio_group_add(Eo *obj, Efl_Ui_Radio_Data *pd, Efl_Ui_Radio *group);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_radio_group_add, EFL_FUNC_CALL(group), Efl_Ui_Radio *group);

Efl_Object *_efl_ui_radio_efl_object_constructor(Eo *obj, Efl_Ui_Radio_Data *pd);


Elm_Theme_Apply _efl_ui_radio_elm_widget_theme_apply(Eo *obj, Efl_Ui_Radio_Data *pd);


Eina_Bool _efl_ui_radio_elm_widget_activate(Eo *obj, Efl_Ui_Radio_Data *pd, Elm_Activate act);


Eina_Bool _efl_ui_radio_elm_widget_widget_event(Eo *obj, Efl_Ui_Radio_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


const Elm_Layout_Part_Alias_Description *_efl_ui_radio_elm_layout_text_aliases_get(Eo *obj, Efl_Ui_Radio_Data *pd);


Elm_Atspi_State_Set _efl_ui_radio_elm_interface_atspi_accessible_state_set_get(Eo *obj, Efl_Ui_Radio_Data *pd);


const Elm_Atspi_Action *_efl_ui_radio_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Efl_Ui_Radio_Data *pd);


static Eina_Bool
_efl_ui_radio_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_RADIO_EXTRA_OPS
#define EFL_UI_RADIO_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_radio_state_value_set, _efl_ui_radio_state_value_set),
      EFL_OBJECT_OP_FUNC(efl_ui_radio_state_value_get, _efl_ui_radio_state_value_get),
      EFL_OBJECT_OP_FUNC(efl_ui_radio_value_set, _efl_ui_radio_value_set),
      EFL_OBJECT_OP_FUNC(efl_ui_radio_value_get, _efl_ui_radio_value_get),
      EFL_OBJECT_OP_FUNC(efl_ui_radio_value_pointer_set, _efl_ui_radio_value_pointer_set),
      EFL_OBJECT_OP_FUNC(efl_ui_radio_selected_object_get, _efl_ui_radio_selected_object_get),
      EFL_OBJECT_OP_FUNC(efl_ui_radio_group_add, _efl_ui_radio_group_add),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_radio_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _efl_ui_radio_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_activate, _efl_ui_radio_elm_widget_activate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _efl_ui_radio_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_text_aliases_get, _efl_ui_radio_elm_layout_text_aliases_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _efl_ui_radio_elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _efl_ui_radio_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_UI_RADIO_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_RADIO_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_RADIO_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_radio_class_desc = {
   EO_VERSION,
   "Efl.Ui.Radio",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Radio_Data),
   _efl_ui_radio_class_initializer,
   _efl_ui_radio_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_radio_class_get, &_efl_ui_radio_class_desc, EFL_UI_CHECK_CLASS, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);

EAPI void
elm_radio_state_value_set(Efl_Ui_Radio *obj, int value)
{
   efl_ui_radio_state_value_set(obj, value);
}

EAPI int
elm_radio_state_value_get(const Efl_Ui_Radio *obj)
{
   return efl_ui_radio_state_value_get(obj);
}

EAPI void
elm_radio_value_set(Efl_Ui_Radio *obj, int value)
{
   efl_ui_radio_value_set(obj, value);
}

EAPI int
elm_radio_value_get(const Efl_Ui_Radio *obj)
{
   return efl_ui_radio_value_get(obj);
}

EAPI void
elm_radio_value_pointer_set(Efl_Ui_Radio *obj, int *valuep)
{
   efl_ui_radio_value_pointer_set(obj, valuep);
}

EAPI Efl_Canvas_Object *
elm_radio_selected_object_get(const Efl_Ui_Radio *obj)
{
   return efl_ui_radio_selected_object_get(obj);
}

EAPI void
elm_radio_group_add(Efl_Ui_Radio *obj, Efl_Ui_Radio *group)
{
   efl_ui_radio_group_add(obj, group);
}
