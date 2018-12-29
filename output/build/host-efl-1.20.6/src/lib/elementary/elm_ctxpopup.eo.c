EWAPI const Efl_Event_Description _ELM_CTXPOPUP_EVENT_DISMISSED =
   EFL_EVENT_DESCRIPTION("dismissed");
EWAPI const Efl_Event_Description _ELM_CTXPOPUP_EVENT_GEOMETRY_UPDATE =
   EFL_EVENT_DESCRIPTION("geometry,update");

void _elm_ctxpopup_auto_hide_disabled_set(Eo *obj, Elm_Ctxpopup_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_ctxpopup_auto_hide_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _elm_ctxpopup_auto_hide_disabled_get(Eo *obj, Elm_Ctxpopup_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_ctxpopup_auto_hide_disabled_get, Eina_Bool, 0);

void _elm_ctxpopup_hover_parent_set(Eo *obj, Elm_Ctxpopup_Data *pd, Efl_Canvas_Object *parent);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_ctxpopup_hover_parent_set, EFL_FUNC_CALL(parent), Efl_Canvas_Object *parent);

Efl_Canvas_Object *_elm_ctxpopup_hover_parent_get(Eo *obj, Elm_Ctxpopup_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_ctxpopup_hover_parent_get, Efl_Canvas_Object *, NULL);

void _elm_ctxpopup_direction_priority_set(Eo *obj, Elm_Ctxpopup_Data *pd, Elm_Ctxpopup_Direction first, Elm_Ctxpopup_Direction second, Elm_Ctxpopup_Direction third, Elm_Ctxpopup_Direction fourth);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_ctxpopup_direction_priority_set, EFL_FUNC_CALL(first, second, third, fourth), Elm_Ctxpopup_Direction first, Elm_Ctxpopup_Direction second, Elm_Ctxpopup_Direction third, Elm_Ctxpopup_Direction fourth);

void _elm_ctxpopup_direction_priority_get(Eo *obj, Elm_Ctxpopup_Data *pd, Elm_Ctxpopup_Direction *first, Elm_Ctxpopup_Direction *second, Elm_Ctxpopup_Direction *third, Elm_Ctxpopup_Direction *fourth);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_ctxpopup_direction_priority_get, EFL_FUNC_CALL(first, second, third, fourth), Elm_Ctxpopup_Direction *first, Elm_Ctxpopup_Direction *second, Elm_Ctxpopup_Direction *third, Elm_Ctxpopup_Direction *fourth);

Elm_Ctxpopup_Direction _elm_ctxpopup_direction_get(Eo *obj, Elm_Ctxpopup_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_ctxpopup_direction_get, Elm_Ctxpopup_Direction, 4 /* Elm.Ctxpopup.Direction.unknown */);

void _elm_ctxpopup_dismiss(Eo *obj, Elm_Ctxpopup_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_ctxpopup_dismiss);

void _elm_ctxpopup_clear(Eo *obj, Elm_Ctxpopup_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_ctxpopup_clear);

Elm_Widget_Item *_elm_ctxpopup_item_append(Eo *obj, Elm_Ctxpopup_Data *pd, const char *label, Efl_Canvas_Object *icon, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_ctxpopup_item_append, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(label, icon, func, data), const char *label, Efl_Canvas_Object *icon, Evas_Smart_Cb func, const void *data);

Elm_Widget_Item *_elm_ctxpopup_item_prepend(Eo *obj, Elm_Ctxpopup_Data *pd, const char *label, Efl_Canvas_Object *icon, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_ctxpopup_item_prepend, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(label, icon, func, data), const char *label, Efl_Canvas_Object *icon, Evas_Smart_Cb func, const void *data);

Efl_Object *_elm_ctxpopup_efl_object_constructor(Eo *obj, Elm_Ctxpopup_Data *pd);


void _elm_ctxpopup_elm_widget_widget_parent_set(Eo *obj, Elm_Ctxpopup_Data *pd, Efl_Canvas_Object *parent);


Eina_Bool _elm_ctxpopup_elm_widget_focus_direction(Eo *obj, Elm_Ctxpopup_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _elm_ctxpopup_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Ctxpopup_Data *pd);


Eina_Bool _elm_ctxpopup_elm_widget_focus_next_manager_is(Eo *obj, Elm_Ctxpopup_Data *pd);


Eina_Bool _elm_ctxpopup_elm_widget_focus_next(Eo *obj, Elm_Ctxpopup_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_ctxpopup_elm_widget_disable(Eo *obj, Elm_Ctxpopup_Data *pd);


Eina_Bool _elm_ctxpopup_elm_widget_translate(Eo *obj, Elm_Ctxpopup_Data *pd);


Elm_Theme_Apply _elm_ctxpopup_elm_widget_theme_apply(Eo *obj, Elm_Ctxpopup_Data *pd);


Eina_Bool _elm_ctxpopup_elm_widget_widget_event(Eo *obj, Elm_Ctxpopup_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


Efl_Ui_Item *_elm_ctxpopup_efl_ui_menu_selected_item_get(Eo *obj, Elm_Ctxpopup_Data *pd);


Efl_Ui_Item *_elm_ctxpopup_efl_ui_menu_first_item_get(Eo *obj, Elm_Ctxpopup_Data *pd);


Efl_Ui_Item *_elm_ctxpopup_efl_ui_menu_last_item_get(Eo *obj, Elm_Ctxpopup_Data *pd);


Eina_Iterator *_elm_ctxpopup_efl_ui_menu_items_get(Eo *obj, Elm_Ctxpopup_Data *pd);


Eina_Bool _elm_ctxpopup_elm_layout_sub_object_add_enable(Eo *obj, Elm_Ctxpopup_Data *pd);


void _elm_ctxpopup_elm_layout_sizing_eval(Eo *obj, Elm_Ctxpopup_Data *pd);


const Elm_Atspi_Action *_elm_ctxpopup_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Ctxpopup_Data *pd);


Elm_Atspi_State_Set _elm_ctxpopup_elm_interface_atspi_accessible_state_set_get(Eo *obj, Elm_Ctxpopup_Data *pd);


void _elm_ctxpopup_efl_orientation_orientation_set(Eo *obj, Elm_Ctxpopup_Data *pd, Efl_Orient dir);


Efl_Orient _elm_ctxpopup_efl_orientation_orientation_get(Eo *obj, Elm_Ctxpopup_Data *pd);


Efl_Object *_elm_ctxpopup_efl_part_part(const Eo *obj, Elm_Ctxpopup_Data *pd, const char *name);


static Eina_Bool
_elm_ctxpopup_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_CTXPOPUP_EXTRA_OPS
#define ELM_CTXPOPUP_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_ctxpopup_auto_hide_disabled_set, _elm_ctxpopup_auto_hide_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_ctxpopup_auto_hide_disabled_get, _elm_ctxpopup_auto_hide_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_ctxpopup_hover_parent_set, _elm_ctxpopup_hover_parent_set),
      EFL_OBJECT_OP_FUNC(elm_obj_ctxpopup_hover_parent_get, _elm_ctxpopup_hover_parent_get),
      EFL_OBJECT_OP_FUNC(elm_obj_ctxpopup_direction_priority_set, _elm_ctxpopup_direction_priority_set),
      EFL_OBJECT_OP_FUNC(elm_obj_ctxpopup_direction_priority_get, _elm_ctxpopup_direction_priority_get),
      EFL_OBJECT_OP_FUNC(elm_obj_ctxpopup_direction_get, _elm_ctxpopup_direction_get),
      EFL_OBJECT_OP_FUNC(elm_obj_ctxpopup_dismiss, _elm_ctxpopup_dismiss),
      EFL_OBJECT_OP_FUNC(elm_obj_ctxpopup_clear, _elm_ctxpopup_clear),
      EFL_OBJECT_OP_FUNC(elm_obj_ctxpopup_item_append, _elm_ctxpopup_item_append),
      EFL_OBJECT_OP_FUNC(elm_obj_ctxpopup_item_prepend, _elm_ctxpopup_item_prepend),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_ctxpopup_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent_set, _elm_ctxpopup_elm_widget_widget_parent_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _elm_ctxpopup_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_ctxpopup_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_ctxpopup_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_ctxpopup_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_disable, _elm_ctxpopup_elm_widget_disable),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translate, _elm_ctxpopup_elm_widget_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_ctxpopup_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_ctxpopup_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_selected_item_get, _elm_ctxpopup_efl_ui_menu_selected_item_get),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_first_item_get, _elm_ctxpopup_efl_ui_menu_first_item_get),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_last_item_get, _elm_ctxpopup_efl_ui_menu_last_item_get),
      EFL_OBJECT_OP_FUNC(efl_ui_menu_items_get, _elm_ctxpopup_efl_ui_menu_items_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sub_object_add_enable, _elm_ctxpopup_elm_layout_sub_object_add_enable),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_ctxpopup_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_ctxpopup_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _elm_ctxpopup_elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(efl_orientation_set, _elm_ctxpopup_efl_orientation_orientation_set),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, _elm_ctxpopup_efl_orientation_orientation_get),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_ctxpopup_efl_part_part),
      ELM_CTXPOPUP_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_CTXPOPUP_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_CTXPOPUP_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_ctxpopup_class_desc = {
   EO_VERSION,
   "Elm.Ctxpopup",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Ctxpopup_Data),
   _elm_ctxpopup_class_initializer,
   _elm_ctxpopup_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_ctxpopup_class_get, &_elm_ctxpopup_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, EFL_ORIENTATION_INTERFACE, EFL_UI_MENU_INTERFACE, NULL);

EAPI void
elm_ctxpopup_auto_hide_disabled_set(Elm_Ctxpopup *obj, Eina_Bool disabled)
{
   elm_obj_ctxpopup_auto_hide_disabled_set(obj, disabled);
}

EAPI Eina_Bool
elm_ctxpopup_auto_hide_disabled_get(const Elm_Ctxpopup *obj)
{
   return elm_obj_ctxpopup_auto_hide_disabled_get(obj);
}

EAPI void
elm_ctxpopup_hover_parent_set(Elm_Ctxpopup *obj, Efl_Canvas_Object *parent)
{
   elm_obj_ctxpopup_hover_parent_set(obj, parent);
}

EAPI Efl_Canvas_Object *
elm_ctxpopup_hover_parent_get(const Elm_Ctxpopup *obj)
{
   return elm_obj_ctxpopup_hover_parent_get(obj);
}

EAPI void
elm_ctxpopup_direction_priority_set(Elm_Ctxpopup *obj, Elm_Ctxpopup_Direction first, Elm_Ctxpopup_Direction second, Elm_Ctxpopup_Direction third, Elm_Ctxpopup_Direction fourth)
{
   elm_obj_ctxpopup_direction_priority_set(obj, first, second, third, fourth);
}

EAPI void
elm_ctxpopup_direction_priority_get(const Elm_Ctxpopup *obj, Elm_Ctxpopup_Direction *first, Elm_Ctxpopup_Direction *second, Elm_Ctxpopup_Direction *third, Elm_Ctxpopup_Direction *fourth)
{
   elm_obj_ctxpopup_direction_priority_get(obj, first, second, third, fourth);
}

EAPI Elm_Ctxpopup_Direction
elm_ctxpopup_direction_get(const Elm_Ctxpopup *obj)
{
   return elm_obj_ctxpopup_direction_get(obj);
}

EAPI void
elm_ctxpopup_dismiss(Elm_Ctxpopup *obj)
{
   elm_obj_ctxpopup_dismiss(obj);
}

EAPI void
elm_ctxpopup_clear(Elm_Ctxpopup *obj)
{
   elm_obj_ctxpopup_clear(obj);
}

EAPI Elm_Widget_Item *
elm_ctxpopup_item_append(Elm_Ctxpopup *obj, const char *label, Efl_Canvas_Object *icon, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_ctxpopup_item_append(obj, label, icon, func, data);
}

EAPI Elm_Widget_Item *
elm_ctxpopup_item_prepend(Elm_Ctxpopup *obj, const char *label, Efl_Canvas_Object *icon, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_ctxpopup_item_prepend(obj, label, icon, func, data);
}
