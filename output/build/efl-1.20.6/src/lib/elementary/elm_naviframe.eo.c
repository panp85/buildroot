EWAPI const Efl_Event_Description _ELM_NAVIFRAME_EVENT_TRANSITION_FINISHED =
   EFL_EVENT_DESCRIPTION("transition,finished");
EWAPI const Efl_Event_Description _ELM_NAVIFRAME_EVENT_TITLE_TRANSITION_FINISHED =
   EFL_EVENT_DESCRIPTION("title,transition,finished");
EWAPI const Efl_Event_Description _ELM_NAVIFRAME_EVENT_TITLE_CLICKED =
   EFL_EVENT_DESCRIPTION("title,clicked");
EWAPI const Efl_Event_Description _ELM_NAVIFRAME_EVENT_ITEM_ACTIVATED =
   EFL_EVENT_DESCRIPTION("item,activated");

void _elm_naviframe_event_enabled_set(Eo *obj, Elm_Naviframe_Data *pd, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_naviframe_event_enabled_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);

Eina_Bool _elm_naviframe_event_enabled_get(Eo *obj, Elm_Naviframe_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_naviframe_event_enabled_get, Eina_Bool, 0);

void _elm_naviframe_content_preserve_on_pop_set(Eo *obj, Elm_Naviframe_Data *pd, Eina_Bool preserve);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_naviframe_content_preserve_on_pop_set, EFL_FUNC_CALL(preserve), Eina_Bool preserve);

Eina_Bool _elm_naviframe_content_preserve_on_pop_get(Eo *obj, Elm_Naviframe_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_naviframe_content_preserve_on_pop_get, Eina_Bool, 0);

void _elm_naviframe_prev_btn_auto_pushed_set(Eo *obj, Elm_Naviframe_Data *pd, Eina_Bool auto_pushed);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_naviframe_prev_btn_auto_pushed_set, EFL_FUNC_CALL(auto_pushed), Eina_Bool auto_pushed);

Eina_Bool _elm_naviframe_prev_btn_auto_pushed_get(Eo *obj, Elm_Naviframe_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_naviframe_prev_btn_auto_pushed_get, Eina_Bool, 0);

Eina_List *_elm_naviframe_items_get(Eo *obj, Elm_Naviframe_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_naviframe_items_get, Eina_List *, NULL);

Elm_Widget_Item *_elm_naviframe_top_item_get(Eo *obj, Elm_Naviframe_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_naviframe_top_item_get, Elm_Widget_Item *, NULL);

Elm_Widget_Item *_elm_naviframe_bottom_item_get(Eo *obj, Elm_Naviframe_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_naviframe_bottom_item_get, Elm_Widget_Item *, NULL);

Efl_Canvas_Object *_elm_naviframe_item_pop(Eo *obj, Elm_Naviframe_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_naviframe_item_pop, Efl_Canvas_Object *, NULL);

Elm_Widget_Item *_elm_naviframe_item_insert_before(Eo *obj, Elm_Naviframe_Data *pd, Elm_Widget_Item *before, const char *title_label, Efl_Canvas_Object *prev_btn, Efl_Canvas_Object *next_btn, Efl_Canvas_Object *content, const char *item_style);

EOAPI EFL_FUNC_BODYV(elm_obj_naviframe_item_insert_before, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(before, title_label, prev_btn, next_btn, content, item_style), Elm_Widget_Item *before, const char *title_label, Efl_Canvas_Object *prev_btn, Efl_Canvas_Object *next_btn, Efl_Canvas_Object *content, const char *item_style);

Elm_Widget_Item *_elm_naviframe_item_push(Eo *obj, Elm_Naviframe_Data *pd, const char *title_label, Efl_Canvas_Object *prev_btn, Efl_Canvas_Object *next_btn, Efl_Canvas_Object *content, const char *item_style);

EOAPI EFL_FUNC_BODYV(elm_obj_naviframe_item_push, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(title_label, prev_btn, next_btn, content, item_style), const char *title_label, Efl_Canvas_Object *prev_btn, Efl_Canvas_Object *next_btn, Efl_Canvas_Object *content, const char *item_style);

void _elm_naviframe_item_simple_promote(Eo *obj, Elm_Naviframe_Data *pd, Efl_Canvas_Object *content);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_naviframe_item_simple_promote, EFL_FUNC_CALL(content), Efl_Canvas_Object *content);

Elm_Widget_Item *_elm_naviframe_item_insert_after(Eo *obj, Elm_Naviframe_Data *pd, Elm_Widget_Item *after, const char *title_label, Efl_Canvas_Object *prev_btn, Efl_Canvas_Object *next_btn, Efl_Canvas_Object *content, const char *item_style);

EOAPI EFL_FUNC_BODYV(elm_obj_naviframe_item_insert_after, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(after, title_label, prev_btn, next_btn, content, item_style), Elm_Widget_Item *after, const char *title_label, Efl_Canvas_Object *prev_btn, Efl_Canvas_Object *next_btn, Efl_Canvas_Object *content, const char *item_style);

Efl_Object *_elm_naviframe_efl_object_constructor(Eo *obj, Elm_Naviframe_Data *pd);


void _elm_naviframe_efl_gfx_visible_set(Eo *obj, Elm_Naviframe_Data *pd, Eina_Bool v);


Eina_Bool _elm_naviframe_elm_widget_focus_direction(Eo *obj, Elm_Naviframe_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _elm_naviframe_elm_widget_focus_next_manager_is(Eo *obj, Elm_Naviframe_Data *pd);


Eina_Bool _elm_naviframe_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Naviframe_Data *pd);


void _elm_naviframe_elm_widget_access(Eo *obj, Elm_Naviframe_Data *pd, Eina_Bool acs);


Eina_Bool _elm_naviframe_elm_widget_focus_next(Eo *obj, Elm_Naviframe_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_naviframe_elm_widget_translate(Eo *obj, Elm_Naviframe_Data *pd);


Elm_Theme_Apply _elm_naviframe_elm_widget_theme_apply(Eo *obj, Elm_Naviframe_Data *pd);


Eina_Bool _elm_naviframe_elm_widget_widget_event(Eo *obj, Elm_Naviframe_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _elm_naviframe_elm_layout_signal_emit(Eo *obj, Elm_Naviframe_Data *pd, const char *emission, const char *source);


void _elm_naviframe_elm_layout_sizing_eval(Eo *obj, Elm_Naviframe_Data *pd);


const Elm_Atspi_Action *_elm_naviframe_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Naviframe_Data *pd);


Efl_Object *_elm_naviframe_efl_part_part(const Eo *obj, Elm_Naviframe_Data *pd, const char *name);


static Eina_Bool
_elm_naviframe_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_NAVIFRAME_EXTRA_OPS
#define ELM_NAVIFRAME_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_event_enabled_set, _elm_naviframe_event_enabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_event_enabled_get, _elm_naviframe_event_enabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_content_preserve_on_pop_set, _elm_naviframe_content_preserve_on_pop_set),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_content_preserve_on_pop_get, _elm_naviframe_content_preserve_on_pop_get),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_prev_btn_auto_pushed_set, _elm_naviframe_prev_btn_auto_pushed_set),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_prev_btn_auto_pushed_get, _elm_naviframe_prev_btn_auto_pushed_get),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_items_get, _elm_naviframe_items_get),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_top_item_get, _elm_naviframe_top_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_bottom_item_get, _elm_naviframe_bottom_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_item_pop, _elm_naviframe_item_pop),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_item_insert_before, _elm_naviframe_item_insert_before),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_item_push, _elm_naviframe_item_push),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_item_simple_promote, _elm_naviframe_item_simple_promote),
      EFL_OBJECT_OP_FUNC(elm_obj_naviframe_item_insert_after, _elm_naviframe_item_insert_after),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_naviframe_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _elm_naviframe_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _elm_naviframe_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_naviframe_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_naviframe_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_naviframe_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_naviframe_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translate, _elm_naviframe_elm_widget_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_naviframe_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_naviframe_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_signal_emit, _elm_naviframe_elm_layout_signal_emit),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_naviframe_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_naviframe_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(efl_part, _elm_naviframe_efl_part_part),
      ELM_NAVIFRAME_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_NAVIFRAME_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_NAVIFRAME_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_naviframe_class_desc = {
   EO_VERSION,
   "Elm.Naviframe",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Naviframe_Data),
   _elm_naviframe_class_initializer,
   _elm_naviframe_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_naviframe_class_get, &_elm_naviframe_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);

EAPI void
elm_naviframe_event_enabled_set(Elm_Naviframe *obj, Eina_Bool enabled)
{
   elm_obj_naviframe_event_enabled_set(obj, enabled);
}

EAPI Eina_Bool
elm_naviframe_event_enabled_get(const Elm_Naviframe *obj)
{
   return elm_obj_naviframe_event_enabled_get(obj);
}

EAPI void
elm_naviframe_content_preserve_on_pop_set(Elm_Naviframe *obj, Eina_Bool preserve)
{
   elm_obj_naviframe_content_preserve_on_pop_set(obj, preserve);
}

EAPI Eina_Bool
elm_naviframe_content_preserve_on_pop_get(const Elm_Naviframe *obj)
{
   return elm_obj_naviframe_content_preserve_on_pop_get(obj);
}

EAPI void
elm_naviframe_prev_btn_auto_pushed_set(Elm_Naviframe *obj, Eina_Bool auto_pushed)
{
   elm_obj_naviframe_prev_btn_auto_pushed_set(obj, auto_pushed);
}

EAPI Eina_Bool
elm_naviframe_prev_btn_auto_pushed_get(const Elm_Naviframe *obj)
{
   return elm_obj_naviframe_prev_btn_auto_pushed_get(obj);
}

EAPI Eina_List *
elm_naviframe_items_get(const Elm_Naviframe *obj)
{
   return elm_obj_naviframe_items_get(obj);
}

EAPI Elm_Widget_Item *
elm_naviframe_top_item_get(const Elm_Naviframe *obj)
{
   return elm_obj_naviframe_top_item_get(obj);
}

EAPI Elm_Widget_Item *
elm_naviframe_bottom_item_get(const Elm_Naviframe *obj)
{
   return elm_obj_naviframe_bottom_item_get(obj);
}

EAPI Efl_Canvas_Object *
elm_naviframe_item_pop(Elm_Naviframe *obj)
{
   return elm_obj_naviframe_item_pop(obj);
}

EAPI Elm_Widget_Item *
elm_naviframe_item_insert_before(Elm_Naviframe *obj, Elm_Widget_Item *before, const char *title_label, Efl_Canvas_Object *prev_btn, Efl_Canvas_Object *next_btn, Efl_Canvas_Object *content, const char *item_style)
{
   return elm_obj_naviframe_item_insert_before(obj, before, title_label, prev_btn, next_btn, content, item_style);
}

EAPI Elm_Widget_Item *
elm_naviframe_item_push(Elm_Naviframe *obj, const char *title_label, Efl_Canvas_Object *prev_btn, Efl_Canvas_Object *next_btn, Efl_Canvas_Object *content, const char *item_style)
{
   return elm_obj_naviframe_item_push(obj, title_label, prev_btn, next_btn, content, item_style);
}

EAPI void
elm_naviframe_item_simple_promote(Elm_Naviframe *obj, Efl_Canvas_Object *content)
{
   elm_obj_naviframe_item_simple_promote(obj, content);
}

EAPI Elm_Widget_Item *
elm_naviframe_item_insert_after(Elm_Naviframe *obj, Elm_Widget_Item *after, const char *title_label, Efl_Canvas_Object *prev_btn, Efl_Canvas_Object *next_btn, Efl_Canvas_Object *content, const char *item_style)
{
   return elm_obj_naviframe_item_insert_after(obj, after, title_label, prev_btn, next_btn, content, item_style);
}
