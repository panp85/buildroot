EWAPI const Efl_Event_Description _ELM_POPUP_EVENT_BLOCK_CLICKED =
   EFL_EVENT_DESCRIPTION("block,clicked");
EWAPI const Efl_Event_Description _ELM_POPUP_EVENT_TIMEOUT =
   EFL_EVENT_DESCRIPTION("timeout");
EWAPI const Efl_Event_Description _ELM_POPUP_EVENT_ITEM_FOCUSED =
   EFL_EVENT_DESCRIPTION("item,focused");
EWAPI const Efl_Event_Description _ELM_POPUP_EVENT_ITEM_UNFOCUSED =
   EFL_EVENT_DESCRIPTION("item,unfocused");
EWAPI const Efl_Event_Description _ELM_POPUP_EVENT_DISMISSED =
   EFL_EVENT_DESCRIPTION("dismissed");

void _elm_popup_align_set(Eo *obj, Elm_Popup_Data *pd, double horizontal, double vertical);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_popup_align_set, EFL_FUNC_CALL(horizontal, vertical), double horizontal, double vertical);

void _elm_popup_align_get(Eo *obj, Elm_Popup_Data *pd, double *horizontal, double *vertical);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_popup_align_get, EFL_FUNC_CALL(horizontal, vertical), double *horizontal, double *vertical);

void _elm_popup_allow_events_set(Eo *obj, Elm_Popup_Data *pd, Eina_Bool allow);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_popup_allow_events_set, EFL_FUNC_CALL(allow), Eina_Bool allow);

Eina_Bool _elm_popup_allow_events_get(Eo *obj, Elm_Popup_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_popup_allow_events_get, Eina_Bool, 0);

void _elm_popup_content_text_wrap_type_set(Eo *obj, Elm_Popup_Data *pd, Elm_Wrap_Type wrap);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_popup_content_text_wrap_type_set, EFL_FUNC_CALL(wrap), Elm_Wrap_Type wrap);

Elm_Wrap_Type _elm_popup_content_text_wrap_type_get(Eo *obj, Elm_Popup_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_popup_content_text_wrap_type_get, Elm_Wrap_Type, 0);

void _elm_popup_orient_set(Eo *obj, Elm_Popup_Data *pd, Elm_Popup_Orient orient);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_popup_orient_set, EFL_FUNC_CALL(orient), Elm_Popup_Orient orient);

Elm_Popup_Orient _elm_popup_orient_get(Eo *obj, Elm_Popup_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_popup_orient_get, Elm_Popup_Orient, 0);

void _elm_popup_timeout_set(Eo *obj, Elm_Popup_Data *pd, double timeout);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_popup_timeout_set, EFL_FUNC_CALL(timeout), double timeout);

double _elm_popup_timeout_get(Eo *obj, Elm_Popup_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_popup_timeout_get, double, 0);

void _elm_popup_scrollable_set(Eo *obj, Elm_Popup_Data *pd, Eina_Bool scroll);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_popup_scrollable_set, EFL_FUNC_CALL(scroll), Eina_Bool scroll);

Eina_Bool _elm_popup_scrollable_get(Eo *obj, Elm_Popup_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_popup_scrollable_get, Eina_Bool, 0);

Elm_Widget_Item *_elm_popup_item_append(Eo *obj, Elm_Popup_Data *pd, const char *label, Efl_Canvas_Object *icon, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_popup_item_append, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(label, icon, func, data), const char *label, Efl_Canvas_Object *icon, Evas_Smart_Cb func, const void *data);

void _elm_popup_dismiss(Eo *obj, Elm_Popup_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_popup_dismiss);

Efl_Object *_elm_popup_efl_object_constructor(Eo *obj, Elm_Popup_Data *pd);


Eina_Bool _elm_popup_elm_widget_focus_direction(Eo *obj, Elm_Popup_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _elm_popup_elm_widget_focus_next_manager_is(Eo *obj, Elm_Popup_Data *pd);


Elm_Theme_Apply _elm_popup_elm_widget_theme_apply(Eo *obj, Elm_Popup_Data *pd);


Eina_Bool _elm_popup_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Popup_Data *pd);


void _elm_popup_elm_widget_access(Eo *obj, Elm_Popup_Data *pd, Eina_Bool acs);


Eina_Bool _elm_popup_elm_widget_focus_next(Eo *obj, Elm_Popup_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


void _elm_popup_elm_widget_widget_parent_set(Eo *obj, Elm_Popup_Data *pd, Efl_Canvas_Object *parent);


Eina_Bool _elm_popup_elm_widget_translate(Eo *obj, Elm_Popup_Data *pd);


Eina_Bool _elm_popup_elm_widget_sub_object_del(Eo *obj, Elm_Popup_Data *pd, Efl_Canvas_Object *sobj);


Eina_Bool _elm_popup_elm_widget_widget_event(Eo *obj, Elm_Popup_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _elm_popup_elm_layout_sizing_eval(Eo *obj, Elm_Popup_Data *pd);


void _elm_popup_elm_layout_signal_emit(Eo *obj, Elm_Popup_Data *pd, const char *emission, const char *source);


const Elm_Atspi_Action *_elm_popup_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Popup_Data *pd);


Elm_Atspi_State_Set _elm_popup_elm_interface_atspi_accessible_state_set_get(Eo *obj, Elm_Popup_Data *pd);


Efl_Object *_elm_popup_efl_part_part(const Eo *obj, Elm_Popup_Data *pd, const char *name);


static Eina_Bool
_elm_popup_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_POPUP_EXTRA_OPS
#define ELM_POPUP_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_popup_align_set, _elm_popup_align_set),
      EFL_OBJECT_OP_FUNC(elm_obj_popup_align_get, _elm_popup_align_get),
      EFL_OBJECT_OP_FUNC(elm_obj_popup_allow_events_set, _elm_popup_allow_events_set),
      EFL_OBJECT_OP_FUNC(elm_obj_popup_allow_events_get, _elm_popup_allow_events_get),
      EFL_OBJECT_OP_FUNC(elm_obj_popup_content_text_wrap_type_set, _elm_popup_content_text_wrap_type_set),
      EFL_OBJECT_OP_FUNC(elm_obj_popup_content_text_wrap_type_get, _elm_popup_content_text_wrap_type_get),
      EFL_OBJECT_OP_FUNC(elm_obj_popup_orient_set, _elm_popup_orient_set),
      EFL_OBJECT_OP_FUNC(elm_obj_popup_orient_get, _elm_popup_orient_get),
      EFL_OBJECT_OP_FUNC(elm_obj_popup_timeout_set, _elm_popup_timeout_set),
      EFL_OBJECT_OP_FUNC(elm_obj_popup_timeout_get, _elm_popup_timeout_get),
      EFL_OBJECT_OP_FUNC(elm_obj_popup_scrollable_set, _elm_popup_scrollable_set),
      EFL_OBJECT_OP_FUNC(elm_obj_popup_scrollable_get, _elm_popup_scrollable_get),
      EFL_OBJECT_OP_FUNC(elm_obj_popup_item_append, _elm_popup_item_append),
      EFL_OBJECT_OP_FUNC(elm_obj_popup_dismiss, _elm_popup_dismiss),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_popup_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _elm_popup_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_popup_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_popup_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_popup_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_popup_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_popup_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent_set, _elm_popup_elm_widget_widget_parent_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translate, _elm_popup_elm_widget_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _elm_popup_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_popup_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_popup_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_signal_emit, _elm_popup_elm_layout_signal_emit),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_popup_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _elm_popup_elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_popup_efl_part_part),
      ELM_POPUP_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_POPUP_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_POPUP_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_popup_class_desc = {
   EO_VERSION,
   "Elm.Popup",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Popup_Data),
   _elm_popup_class_initializer,
   _elm_popup_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_popup_class_get, &_elm_popup_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);

EAPI void
elm_popup_align_set(Elm_Popup *obj, double horizontal, double vertical)
{
   elm_obj_popup_align_set(obj, horizontal, vertical);
}

EAPI void
elm_popup_align_get(const Elm_Popup *obj, double *horizontal, double *vertical)
{
   elm_obj_popup_align_get(obj, horizontal, vertical);
}

EAPI void
elm_popup_allow_events_set(Elm_Popup *obj, Eina_Bool allow)
{
   elm_obj_popup_allow_events_set(obj, allow);
}

EAPI Eina_Bool
elm_popup_allow_events_get(const Elm_Popup *obj)
{
   return elm_obj_popup_allow_events_get(obj);
}

EAPI void
elm_popup_content_text_wrap_type_set(Elm_Popup *obj, Elm_Wrap_Type wrap)
{
   elm_obj_popup_content_text_wrap_type_set(obj, wrap);
}

EAPI Elm_Wrap_Type
elm_popup_content_text_wrap_type_get(const Elm_Popup *obj)
{
   return elm_obj_popup_content_text_wrap_type_get(obj);
}

EAPI void
elm_popup_orient_set(Elm_Popup *obj, Elm_Popup_Orient orient)
{
   elm_obj_popup_orient_set(obj, orient);
}

EAPI Elm_Popup_Orient
elm_popup_orient_get(const Elm_Popup *obj)
{
   return elm_obj_popup_orient_get(obj);
}

EAPI void
elm_popup_timeout_set(Elm_Popup *obj, double timeout)
{
   elm_obj_popup_timeout_set(obj, timeout);
}

EAPI double
elm_popup_timeout_get(const Elm_Popup *obj)
{
   return elm_obj_popup_timeout_get(obj);
}

EAPI void
elm_popup_scrollable_set(Elm_Popup *obj, Eina_Bool scroll)
{
   elm_obj_popup_scrollable_set(obj, scroll);
}

EAPI Eina_Bool
elm_popup_scrollable_get(const Elm_Popup *obj)
{
   return elm_obj_popup_scrollable_get(obj);
}

EAPI Elm_Widget_Item *
elm_popup_item_append(Elm_Popup *obj, const char *label, Efl_Canvas_Object *icon, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_popup_item_append(obj, label, icon, func, data);
}

EAPI void
elm_popup_dismiss(Elm_Popup *obj)
{
   elm_obj_popup_dismiss(obj);
}
