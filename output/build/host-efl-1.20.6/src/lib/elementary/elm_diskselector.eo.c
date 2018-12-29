
void _elm_diskselector_side_text_max_length_set(Eo *obj, Elm_Diskselector_Data *pd, int len);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_diskselector_side_text_max_length_set, EFL_FUNC_CALL(len), int len);

int _elm_diskselector_side_text_max_length_get(Eo *obj, Elm_Diskselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_diskselector_side_text_max_length_get, int, 0);

void _elm_diskselector_round_enabled_set(Eo *obj, Elm_Diskselector_Data *pd, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_diskselector_round_enabled_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);

Eina_Bool _elm_diskselector_round_enabled_get(Eo *obj, Elm_Diskselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_diskselector_round_enabled_get, Eina_Bool, 0);

void _elm_diskselector_display_item_num_set(Eo *obj, Elm_Diskselector_Data *pd, int num);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_diskselector_display_item_num_set, EFL_FUNC_CALL(num), int num);

int _elm_diskselector_display_item_num_get(Eo *obj, Elm_Diskselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_diskselector_display_item_num_get, int, 0);

Elm_Widget_Item *_elm_diskselector_first_item_get(Eo *obj, Elm_Diskselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_diskselector_first_item_get, Elm_Widget_Item *, NULL);

const Eina_List *_elm_diskselector_items_get(Eo *obj, Elm_Diskselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_diskselector_items_get, const Eina_List *, NULL);

Elm_Widget_Item *_elm_diskselector_last_item_get(Eo *obj, Elm_Diskselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_diskselector_last_item_get, Elm_Widget_Item *, NULL);

Elm_Widget_Item *_elm_diskselector_selected_item_get(Eo *obj, Elm_Diskselector_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_diskselector_selected_item_get, Elm_Widget_Item *, NULL);

Elm_Widget_Item *_elm_diskselector_item_append(Eo *obj, Elm_Diskselector_Data *pd, const char *label, Efl_Canvas_Object *icon, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_diskselector_item_append, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(label, icon, func, data), const char *label, Efl_Canvas_Object *icon, Evas_Smart_Cb func, const void *data);

void _elm_diskselector_clear(Eo *obj, Elm_Diskselector_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_diskselector_clear);

Efl_Object *_elm_diskselector_efl_object_constructor(Eo *obj, Elm_Diskselector_Data *pd);


void _elm_diskselector_efl_gfx_position_set(Eo *obj, Elm_Diskselector_Data *pd, int x, int y);


void _elm_diskselector_efl_gfx_size_set(Eo *obj, Elm_Diskselector_Data *pd, int w, int h);


void _elm_diskselector_efl_canvas_group_group_member_add(Eo *obj, Elm_Diskselector_Data *pd, Efl_Canvas_Object *sub_obj);


Eina_Bool _elm_diskselector_elm_widget_focus_next_manager_is(Eo *obj, Elm_Diskselector_Data *pd);


void _elm_diskselector_elm_widget_access(Eo *obj, Elm_Diskselector_Data *pd, Eina_Bool acs);


Eina_Bool _elm_diskselector_elm_widget_focus_next(Eo *obj, Elm_Diskselector_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Elm_Theme_Apply _elm_diskselector_elm_widget_theme_apply(Eo *obj, Elm_Diskselector_Data *pd);


Eina_Bool _elm_diskselector_elm_widget_on_focus(Eo *obj, Elm_Diskselector_Data *pd, Elm_Widget_Item *item);


Eina_Bool _elm_diskselector_elm_widget_translate(Eo *obj, Elm_Diskselector_Data *pd);


Eina_Bool _elm_diskselector_elm_widget_sub_object_del(Eo *obj, Elm_Diskselector_Data *pd, Efl_Canvas_Object *sobj);


Eina_Bool _elm_diskselector_elm_widget_widget_event(Eo *obj, Elm_Diskselector_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _elm_diskselector_elm_interface_scrollable_policy_set(Eo *obj, Elm_Diskselector_Data *pd, Elm_Scroller_Policy hbar, Elm_Scroller_Policy vbar);


void _elm_diskselector_elm_interface_scrollable_policy_get(Eo *obj, Elm_Diskselector_Data *pd, Elm_Scroller_Policy *hbar, Elm_Scroller_Policy *vbar);


const Elm_Atspi_Action *_elm_diskselector_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Diskselector_Data *pd);


static Eina_Bool
_elm_diskselector_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_DISKSELECTOR_EXTRA_OPS
#define ELM_DISKSELECTOR_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_side_text_max_length_set, _elm_diskselector_side_text_max_length_set),
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_side_text_max_length_get, _elm_diskselector_side_text_max_length_get),
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_round_enabled_set, _elm_diskselector_round_enabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_round_enabled_get, _elm_diskselector_round_enabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_display_item_num_set, _elm_diskselector_display_item_num_set),
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_display_item_num_get, _elm_diskselector_display_item_num_get),
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_first_item_get, _elm_diskselector_first_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_items_get, _elm_diskselector_items_get),
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_last_item_get, _elm_diskselector_last_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_selected_item_get, _elm_diskselector_selected_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_item_append, _elm_diskselector_item_append),
      EFL_OBJECT_OP_FUNC(elm_obj_diskselector_clear, _elm_diskselector_clear),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_diskselector_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _elm_diskselector_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _elm_diskselector_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _elm_diskselector_efl_canvas_group_group_member_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_diskselector_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_diskselector_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_diskselector_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_diskselector_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _elm_diskselector_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translate, _elm_diskselector_elm_widget_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _elm_diskselector_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_diskselector_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_policy_set, _elm_diskselector_elm_interface_scrollable_policy_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_policy_get, _elm_diskselector_elm_interface_scrollable_policy_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_diskselector_elm_interface_atspi_widget_action_elm_actions_get),
      ELM_DISKSELECTOR_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_DISKSELECTOR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_DISKSELECTOR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_diskselector_class_desc = {
   EO_VERSION,
   "Elm.Diskselector",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Diskselector_Data),
   _elm_diskselector_class_initializer,
   _elm_diskselector_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_diskselector_class_get, &_elm_diskselector_class_desc, ELM_WIDGET_CLASS, ELM_INTERFACE_SCROLLABLE_MIXIN, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, EFL_UI_CLICKABLE_INTERFACE, EFL_UI_SCROLLABLE_INTERFACE, EFL_UI_SELECTABLE_INTERFACE, NULL);

EAPI void
elm_diskselector_side_text_max_length_set(Elm_Diskselector *obj, int len)
{
   elm_obj_diskselector_side_text_max_length_set(obj, len);
}

EAPI int
elm_diskselector_side_text_max_length_get(const Elm_Diskselector *obj)
{
   return elm_obj_diskselector_side_text_max_length_get(obj);
}

EAPI void
elm_diskselector_round_enabled_set(Elm_Diskselector *obj, Eina_Bool enabled)
{
   elm_obj_diskselector_round_enabled_set(obj, enabled);
}

EAPI Eina_Bool
elm_diskselector_round_enabled_get(const Elm_Diskselector *obj)
{
   return elm_obj_diskselector_round_enabled_get(obj);
}

EAPI void
elm_diskselector_display_item_num_set(Elm_Diskselector *obj, int num)
{
   elm_obj_diskselector_display_item_num_set(obj, num);
}

EAPI int
elm_diskselector_display_item_num_get(const Elm_Diskselector *obj)
{
   return elm_obj_diskselector_display_item_num_get(obj);
}

EAPI Elm_Widget_Item *
elm_diskselector_first_item_get(const Elm_Diskselector *obj)
{
   return elm_obj_diskselector_first_item_get(obj);
}

EAPI const Eina_List *
elm_diskselector_items_get(const Elm_Diskselector *obj)
{
   return elm_obj_diskselector_items_get(obj);
}

EAPI Elm_Widget_Item *
elm_diskselector_last_item_get(const Elm_Diskselector *obj)
{
   return elm_obj_diskselector_last_item_get(obj);
}

EAPI Elm_Widget_Item *
elm_diskselector_selected_item_get(const Elm_Diskselector *obj)
{
   return elm_obj_diskselector_selected_item_get(obj);
}

EAPI Elm_Widget_Item *
elm_diskselector_item_append(Elm_Diskselector *obj, const char *label, Efl_Canvas_Object *icon, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_diskselector_item_append(obj, label, icon, func, data);
}

EAPI void
elm_diskselector_clear(Elm_Diskselector *obj)
{
   elm_obj_diskselector_clear(obj);
}
