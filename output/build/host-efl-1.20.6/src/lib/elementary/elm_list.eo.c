EWAPI const Efl_Event_Description _ELM_LIST_EVENT_ACTIVATED =
   EFL_EVENT_DESCRIPTION("activated");
EWAPI const Efl_Event_Description _ELM_LIST_EVENT_EDGE_TOP =
   EFL_EVENT_DESCRIPTION("edge,top");
EWAPI const Efl_Event_Description _ELM_LIST_EVENT_EDGE_BOTTOM =
   EFL_EVENT_DESCRIPTION("edge,bottom");
EWAPI const Efl_Event_Description _ELM_LIST_EVENT_EDGE_LEFT =
   EFL_EVENT_DESCRIPTION("edge,left");
EWAPI const Efl_Event_Description _ELM_LIST_EVENT_EDGE_RIGHT =
   EFL_EVENT_DESCRIPTION("edge,right");
EWAPI const Efl_Event_Description _ELM_LIST_EVENT_SWIPE =
   EFL_EVENT_DESCRIPTION("swipe");
EWAPI const Efl_Event_Description _ELM_LIST_EVENT_HIGHLIGHTED =
   EFL_EVENT_DESCRIPTION("highlighted");
EWAPI const Efl_Event_Description _ELM_LIST_EVENT_UNHIGHLIGHTED =
   EFL_EVENT_DESCRIPTION("unhighlighted");
EWAPI const Efl_Event_Description _ELM_LIST_EVENT_ITEM_FOCUSED =
   EFL_EVENT_DESCRIPTION("item,focused");
EWAPI const Efl_Event_Description _ELM_LIST_EVENT_ITEM_UNFOCUSED =
   EFL_EVENT_DESCRIPTION("item,unfocused");
EWAPI const Efl_Event_Description _ELM_LIST_EVENT_ITEM_REORDER_ANIM_START =
   EFL_EVENT_DESCRIPTION("item,reorder,anim,start");
EWAPI const Efl_Event_Description _ELM_LIST_EVENT_ITEM_REORDER_ANIM_STOP =
   EFL_EVENT_DESCRIPTION("item,reorder,anim,stop");

void _elm_list_horizontal_set(Eo *obj, Elm_List_Data *pd, Eina_Bool horizontal);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_list_horizontal_set, EFL_FUNC_CALL(horizontal), Eina_Bool horizontal);

Eina_Bool _elm_list_horizontal_get(Eo *obj, Elm_List_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_horizontal_get, Eina_Bool, 0);

void _elm_list_select_mode_set(Eo *obj, Elm_List_Data *pd, Elm_Object_Select_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_list_select_mode_set, EFL_FUNC_CALL(mode), Elm_Object_Select_Mode mode);

Elm_Object_Select_Mode _elm_list_select_mode_get(Eo *obj, Elm_List_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_select_mode_get, Elm_Object_Select_Mode, 4 /* Elm.Object.Select_Mode.max */);

void _elm_list_focus_on_selection_set(Eo *obj, Elm_List_Data *pd, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_list_focus_on_selection_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);

Eina_Bool _elm_list_focus_on_selection_get(Eo *obj, Elm_List_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_focus_on_selection_get, Eina_Bool, 0);

void _elm_list_multi_select_set(Eo *obj, Elm_List_Data *pd, Eina_Bool multi);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_list_multi_select_set, EFL_FUNC_CALL(multi), Eina_Bool multi);

Eina_Bool _elm_list_multi_select_get(Eo *obj, Elm_List_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_multi_select_get, Eina_Bool, 0);

void _elm_list_multi_select_mode_set(Eo *obj, Elm_List_Data *pd, Elm_Object_Multi_Select_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_list_multi_select_mode_set, EFL_FUNC_CALL(mode), Elm_Object_Multi_Select_Mode mode);

Elm_Object_Multi_Select_Mode _elm_list_multi_select_mode_get(Eo *obj, Elm_List_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_multi_select_mode_get, Elm_Object_Multi_Select_Mode, 2 /* Elm.Object.Multi_Select_Mode.max */);

void _elm_list_mode_set(Eo *obj, Elm_List_Data *pd, Elm_List_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_list_mode_set, EFL_FUNC_CALL(mode), Elm_List_Mode mode);

Elm_List_Mode _elm_list_mode_get(Eo *obj, Elm_List_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_mode_get, Elm_List_Mode, 4 /* Elm.List.Mode.last */);

Elm_Widget_Item *_elm_list_selected_item_get(Eo *obj, Elm_List_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_selected_item_get, Elm_Widget_Item *, NULL);

const Eina_List *_elm_list_items_get(Eo *obj, Elm_List_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_items_get, const Eina_List *, NULL);

Elm_Widget_Item *_elm_list_first_item_get(Eo *obj, Elm_List_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_first_item_get, Elm_Widget_Item *, NULL);

const Eina_List *_elm_list_selected_items_get(Eo *obj, Elm_List_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_selected_items_get, const Eina_List *, NULL);

Elm_Widget_Item *_elm_list_last_item_get(Eo *obj, Elm_List_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_list_last_item_get, Elm_Widget_Item *, NULL);

Elm_Widget_Item *_elm_list_item_insert_before(Eo *obj, Elm_List_Data *pd, Elm_Widget_Item *before, const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_list_item_insert_before, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(before, label, icon, end, func, data), Elm_Widget_Item *before, const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data);

void _elm_list_go(Eo *obj, Elm_List_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_list_go);

Elm_Widget_Item *_elm_list_item_insert_after(Eo *obj, Elm_List_Data *pd, Elm_Widget_Item *after, const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_list_item_insert_after, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(after, label, icon, end, func, data), Elm_Widget_Item *after, const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data);

Elm_Widget_Item *_elm_list_at_xy_item_get(const Eo *obj, Elm_List_Data *pd, int x, int y, int *posret);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_list_at_xy_item_get, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(x, y, posret), int x, int y, int *posret);

Elm_Widget_Item *_elm_list_item_append(Eo *obj, Elm_List_Data *pd, const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_list_item_append, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(label, icon, end, func, data), const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data);

Elm_Widget_Item *_elm_list_item_prepend(Eo *obj, Elm_List_Data *pd, const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_list_item_prepend, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(label, icon, end, func, data), const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data);

void _elm_list_clear(Eo *obj, Elm_List_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_list_clear);

Elm_Widget_Item *_elm_list_item_sorted_insert(Eo *obj, Elm_List_Data *pd, const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data, Eina_Compare_Cb cmp_func);

EOAPI EFL_FUNC_BODYV(elm_obj_list_item_sorted_insert, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(label, icon, end, func, data, cmp_func), const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data, Eina_Compare_Cb cmp_func);

Efl_Object *_elm_list_efl_object_constructor(Eo *obj, Elm_List_Data *pd);


void _elm_list_efl_gfx_position_set(Eo *obj, Elm_List_Data *pd, int x, int y);


void _elm_list_efl_gfx_size_set(Eo *obj, Elm_List_Data *pd, int w, int h);


void _elm_list_efl_canvas_group_group_member_add(Eo *obj, Elm_List_Data *pd, Efl_Canvas_Object *sub_obj);


Elm_Theme_Apply _elm_list_elm_widget_theme_apply(Eo *obj, Elm_List_Data *pd);


Eina_Bool _elm_list_elm_widget_focus_next_manager_is(Eo *obj, Elm_List_Data *pd);


Eina_Bool _elm_list_elm_widget_focus_direction_manager_is(Eo *obj, Elm_List_Data *pd);


void _elm_list_elm_widget_access(Eo *obj, Elm_List_Data *pd, Eina_Bool acs);


void _elm_list_elm_widget_focus_highlight_geometry_get(const Eo *obj, Elm_List_Data *pd, int *x, int *y, int *w, int *h);


Eina_Bool _elm_list_elm_widget_focus_next(Eo *obj, Elm_List_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_list_elm_widget_disable(Eo *obj, Elm_List_Data *pd);


Eina_Bool _elm_list_elm_widget_on_focus(Eo *obj, Elm_List_Data *pd, Elm_Widget_Item *item);


Eina_Bool _elm_list_elm_widget_translate(Eo *obj, Elm_List_Data *pd);


Eina_Bool _elm_list_elm_widget_sub_object_del(Eo *obj, Elm_List_Data *pd, Efl_Canvas_Object *sobj);


Eina_Bool _elm_list_elm_widget_widget_event(Eo *obj, Elm_List_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


Elm_Widget_Item *_elm_list_elm_widget_focused_item_get(Eo *obj, Elm_List_Data *pd);


void _elm_list_elm_widget_item_loop_enabled_set(Eo *obj, Elm_List_Data *pd, Eina_Bool enable);


Eina_Bool _elm_list_elm_widget_item_loop_enabled_get(Eo *obj, Elm_List_Data *pd);


void _elm_list_elm_layout_sizing_eval(Eo *obj, Elm_List_Data *pd);


void _elm_list_elm_interface_scrollable_policy_set(Eo *obj, Elm_List_Data *pd, Elm_Scroller_Policy hbar, Elm_Scroller_Policy vbar);


const Elm_Atspi_Action *_elm_list_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_List_Data *pd);


Eina_List *_elm_list_elm_interface_atspi_accessible_children_get(Eo *obj, Elm_List_Data *pd);


int _elm_list_elm_interface_atspi_selection_selected_children_count_get(Eo *obj, Elm_List_Data *pd);


Efl_Object *_elm_list_elm_interface_atspi_selection_selected_child_get(Eo *obj, Elm_List_Data *pd, int selected_child_index);


Eina_Bool _elm_list_elm_interface_atspi_selection_selected_child_deselect(Eo *obj, Elm_List_Data *pd, int child_index);


Eina_Bool _elm_list_elm_interface_atspi_selection_child_select(Eo *obj, Elm_List_Data *pd, int child_index);


Eina_Bool _elm_list_elm_interface_atspi_selection_child_deselect(Eo *obj, Elm_List_Data *pd, int child_index);


Eina_Bool _elm_list_elm_interface_atspi_selection_is_child_selected(Eo *obj, Elm_List_Data *pd, int child_index);


Eina_Bool _elm_list_elm_interface_atspi_selection_all_children_select(Eo *obj, Elm_List_Data *pd);


Eina_Bool _elm_list_elm_interface_atspi_selection_clear(Eo *obj, Elm_List_Data *pd);


static Eina_Bool
_elm_list_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_LIST_EXTRA_OPS
#define ELM_LIST_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_list_horizontal_set, _elm_list_horizontal_set),
      EFL_OBJECT_OP_FUNC(elm_obj_list_horizontal_get, _elm_list_horizontal_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_select_mode_set, _elm_list_select_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_list_select_mode_get, _elm_list_select_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_focus_on_selection_set, _elm_list_focus_on_selection_set),
      EFL_OBJECT_OP_FUNC(elm_obj_list_focus_on_selection_get, _elm_list_focus_on_selection_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_multi_select_set, _elm_list_multi_select_set),
      EFL_OBJECT_OP_FUNC(elm_obj_list_multi_select_get, _elm_list_multi_select_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_multi_select_mode_set, _elm_list_multi_select_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_list_multi_select_mode_get, _elm_list_multi_select_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_mode_set, _elm_list_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_list_mode_get, _elm_list_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_selected_item_get, _elm_list_selected_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_items_get, _elm_list_items_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_first_item_get, _elm_list_first_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_selected_items_get, _elm_list_selected_items_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_last_item_get, _elm_list_last_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_item_insert_before, _elm_list_item_insert_before),
      EFL_OBJECT_OP_FUNC(elm_obj_list_go, _elm_list_go),
      EFL_OBJECT_OP_FUNC(elm_obj_list_item_insert_after, _elm_list_item_insert_after),
      EFL_OBJECT_OP_FUNC(elm_obj_list_at_xy_item_get, _elm_list_at_xy_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_list_item_append, _elm_list_item_append),
      EFL_OBJECT_OP_FUNC(elm_obj_list_item_prepend, _elm_list_item_prepend),
      EFL_OBJECT_OP_FUNC(elm_obj_list_clear, _elm_list_clear),
      EFL_OBJECT_OP_FUNC(elm_obj_list_item_sorted_insert, _elm_list_item_sorted_insert),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_list_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _elm_list_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _elm_list_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _elm_list_efl_canvas_group_group_member_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_list_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_list_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_list_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_list_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_highlight_geometry_get, _elm_list_elm_widget_focus_highlight_geometry_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_list_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_disable, _elm_list_elm_widget_disable),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _elm_list_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translate, _elm_list_elm_widget_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _elm_list_elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_list_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focused_item_get, _elm_list_elm_widget_focused_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_item_loop_enabled_set, _elm_list_elm_widget_item_loop_enabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_item_loop_enabled_get, _elm_list_elm_widget_item_loop_enabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_list_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_policy_set, _elm_list_elm_interface_scrollable_policy_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_list_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_children_get, _elm_list_elm_interface_atspi_accessible_children_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_children_count_get, _elm_list_elm_interface_atspi_selection_selected_children_count_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_child_get, _elm_list_elm_interface_atspi_selection_selected_child_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_child_deselect, _elm_list_elm_interface_atspi_selection_selected_child_deselect),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_child_select, _elm_list_elm_interface_atspi_selection_child_select),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_child_deselect, _elm_list_elm_interface_atspi_selection_child_deselect),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_is_child_selected, _elm_list_elm_interface_atspi_selection_is_child_selected),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_all_children_select, _elm_list_elm_interface_atspi_selection_all_children_select),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_clear, _elm_list_elm_interface_atspi_selection_clear),
      ELM_LIST_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_LIST_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_LIST_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_list_class_desc = {
   EO_VERSION,
   "Elm.List",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_List_Data),
   _elm_list_class_initializer,
   _elm_list_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_list_class_get, &_elm_list_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_SCROLLABLE_MIXIN, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, ELM_INTERFACE_ATSPI_SELECTION_INTERFACE, EFL_UI_CLICKABLE_INTERFACE, EFL_UI_SELECTABLE_INTERFACE, NULL);

EAPI void
elm_list_horizontal_set(Elm_List *obj, Eina_Bool horizontal)
{
   elm_obj_list_horizontal_set(obj, horizontal);
}

EAPI Eina_Bool
elm_list_horizontal_get(const Elm_List *obj)
{
   return elm_obj_list_horizontal_get(obj);
}

EAPI void
elm_list_select_mode_set(Elm_List *obj, Elm_Object_Select_Mode mode)
{
   elm_obj_list_select_mode_set(obj, mode);
}

EAPI Elm_Object_Select_Mode
elm_list_select_mode_get(const Elm_List *obj)
{
   return elm_obj_list_select_mode_get(obj);
}

EAPI void
elm_list_focus_on_selection_set(Elm_List *obj, Eina_Bool enabled)
{
   elm_obj_list_focus_on_selection_set(obj, enabled);
}

EAPI Eina_Bool
elm_list_focus_on_selection_get(const Elm_List *obj)
{
   return elm_obj_list_focus_on_selection_get(obj);
}

EAPI void
elm_list_multi_select_set(Elm_List *obj, Eina_Bool multi)
{
   elm_obj_list_multi_select_set(obj, multi);
}

EAPI Eina_Bool
elm_list_multi_select_get(const Elm_List *obj)
{
   return elm_obj_list_multi_select_get(obj);
}

EAPI void
elm_list_multi_select_mode_set(Elm_List *obj, Elm_Object_Multi_Select_Mode mode)
{
   elm_obj_list_multi_select_mode_set(obj, mode);
}

EAPI Elm_Object_Multi_Select_Mode
elm_list_multi_select_mode_get(const Elm_List *obj)
{
   return elm_obj_list_multi_select_mode_get(obj);
}

EAPI void
elm_list_mode_set(Elm_List *obj, Elm_List_Mode mode)
{
   elm_obj_list_mode_set(obj, mode);
}

EAPI Elm_List_Mode
elm_list_mode_get(const Elm_List *obj)
{
   return elm_obj_list_mode_get(obj);
}

EAPI Elm_Widget_Item *
elm_list_selected_item_get(const Elm_List *obj)
{
   return elm_obj_list_selected_item_get(obj);
}

EAPI const Eina_List *
elm_list_items_get(const Elm_List *obj)
{
   return elm_obj_list_items_get(obj);
}

EAPI Elm_Widget_Item *
elm_list_first_item_get(const Elm_List *obj)
{
   return elm_obj_list_first_item_get(obj);
}

EAPI const Eina_List *
elm_list_selected_items_get(const Elm_List *obj)
{
   return elm_obj_list_selected_items_get(obj);
}

EAPI Elm_Widget_Item *
elm_list_last_item_get(const Elm_List *obj)
{
   return elm_obj_list_last_item_get(obj);
}

EAPI Elm_Widget_Item *
elm_list_item_insert_before(Elm_List *obj, Elm_Widget_Item *before, const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_list_item_insert_before(obj, before, label, icon, end, func, data);
}

EAPI void
elm_list_go(Elm_List *obj)
{
   elm_obj_list_go(obj);
}

EAPI Elm_Widget_Item *
elm_list_item_insert_after(Elm_List *obj, Elm_Widget_Item *after, const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_list_item_insert_after(obj, after, label, icon, end, func, data);
}

EAPI Elm_Widget_Item *
elm_list_at_xy_item_get(const Elm_List *obj, int x, int y, int *posret)
{
   return elm_obj_list_at_xy_item_get(obj, x, y, posret);
}

EAPI Elm_Widget_Item *
elm_list_item_append(Elm_List *obj, const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_list_item_append(obj, label, icon, end, func, data);
}

EAPI Elm_Widget_Item *
elm_list_item_prepend(Elm_List *obj, const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data)
{
   return elm_obj_list_item_prepend(obj, label, icon, end, func, data);
}

EAPI void
elm_list_clear(Elm_List *obj)
{
   elm_obj_list_clear(obj);
}

EAPI Elm_Widget_Item *
elm_list_item_sorted_insert(Elm_List *obj, const char *label, Efl_Canvas_Object *icon, Efl_Canvas_Object *end, Evas_Smart_Cb func, const void *data, Eina_Compare_Cb cmp_func)
{
   return elm_obj_list_item_sorted_insert(obj, label, icon, end, func, data, cmp_func);
}
