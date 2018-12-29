EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_REALIZED =
   EFL_EVENT_DESCRIPTION("realized");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_UNREALIZED =
   EFL_EVENT_DESCRIPTION("unrealized");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_INDEX_UPDATE =
   EFL_EVENT_DESCRIPTION("index,update");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_SCROLL_PAGE_CHANGED =
   EFL_EVENT_DESCRIPTION("scroll,page,changed");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_EDGE_BOTTOM =
   EFL_EVENT_DESCRIPTION("edge,bottom");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_EDGE_TOP =
   EFL_EVENT_DESCRIPTION("edge,top");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_EDGE_RIGHT =
   EFL_EVENT_DESCRIPTION("edge,right");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_EDGE_LEFT =
   EFL_EVENT_DESCRIPTION("edge,left");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_ITEM_FOCUSED =
   EFL_EVENT_DESCRIPTION("item,focused");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_ITEM_UNFOCUSED =
   EFL_EVENT_DESCRIPTION("item,unfocused");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_ITEM_REORDER_ANIM_START =
   EFL_EVENT_DESCRIPTION("item,reorder,anim,start");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_ITEM_REORDER_ANIM_STOP =
   EFL_EVENT_DESCRIPTION("item,reorder,anim,stop");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_ACTIVATED =
   EFL_EVENT_DESCRIPTION("activated");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_HIGHLIGHTED =
   EFL_EVENT_DESCRIPTION("highlighted");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_UNHIGHLIGHTED =
   EFL_EVENT_DESCRIPTION("unhighlighted");
EWAPI const Efl_Event_Description _ELM_GENGRID_EVENT_RELEASED =
   EFL_EVENT_DESCRIPTION("released");

void _elm_gengrid_align_set(Eo *obj, Elm_Gengrid_Data *pd, double align_x, double align_y);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_align_set, EFL_FUNC_CALL(align_x, align_y), double align_x, double align_y);

void _elm_gengrid_align_get(Eo *obj, Elm_Gengrid_Data *pd, double *align_x, double *align_y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_gengrid_align_get, EFL_FUNC_CALL(align_x, align_y), double *align_x, double *align_y);

void _elm_gengrid_filled_set(Eo *obj, Elm_Gengrid_Data *pd, Eina_Bool fill);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_filled_set, EFL_FUNC_CALL(fill), Eina_Bool fill);

Eina_Bool _elm_gengrid_filled_get(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gengrid_filled_get, Eina_Bool, 0);

void _elm_gengrid_page_relative_set(Eo *obj, Elm_Gengrid_Data *pd, double h_pagerel, double v_pagerel);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_page_relative_set, EFL_FUNC_CALL(h_pagerel, v_pagerel), double h_pagerel, double v_pagerel);

void _elm_gengrid_page_relative_get(Eo *obj, Elm_Gengrid_Data *pd, double *h_pagerel, double *v_pagerel);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_gengrid_page_relative_get, EFL_FUNC_CALL(h_pagerel, v_pagerel), double *h_pagerel, double *v_pagerel);

void _elm_gengrid_multi_select_set(Eo *obj, Elm_Gengrid_Data *pd, Eina_Bool multi);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_multi_select_set, EFL_FUNC_CALL(multi), Eina_Bool multi);

Eina_Bool _elm_gengrid_multi_select_get(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gengrid_multi_select_get, Eina_Bool, 0);

void _elm_gengrid_group_item_size_set(Eo *obj, Elm_Gengrid_Data *pd, int w, int h);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_group_item_size_set, EFL_FUNC_CALL(w, h), int w, int h);

void _elm_gengrid_group_item_size_get(Eo *obj, Elm_Gengrid_Data *pd, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_gengrid_group_item_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);

void _elm_gengrid_select_mode_set(Eo *obj, Elm_Gengrid_Data *pd, Elm_Object_Select_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_select_mode_set, EFL_FUNC_CALL(mode), Elm_Object_Select_Mode mode);

Elm_Object_Select_Mode _elm_gengrid_select_mode_get(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gengrid_select_mode_get, Elm_Object_Select_Mode, 4 /* Elm.Object.Select_Mode.max */);

void _elm_gengrid_reorder_mode_set(Eo *obj, Elm_Gengrid_Data *pd, Eina_Bool reorder_mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_reorder_mode_set, EFL_FUNC_CALL(reorder_mode), Eina_Bool reorder_mode);

Eina_Bool _elm_gengrid_reorder_mode_get(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gengrid_reorder_mode_get, Eina_Bool, 0);

void _elm_gengrid_highlight_mode_set(Eo *obj, Elm_Gengrid_Data *pd, Eina_Bool highlight);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_highlight_mode_set, EFL_FUNC_CALL(highlight), Eina_Bool highlight);

Eina_Bool _elm_gengrid_highlight_mode_get(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gengrid_highlight_mode_get, Eina_Bool, 0);

void _elm_gengrid_reorder_type_set(Eo *obj, Elm_Gengrid_Data *pd, Elm_Gengrid_Reorder_Type type);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_reorder_type_set, EFL_FUNC_CALL(type), Elm_Gengrid_Reorder_Type type);

void _elm_gengrid_item_size_set(Eo *obj, Elm_Gengrid_Data *pd, int w, int h);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_item_size_set, EFL_FUNC_CALL(w, h), int w, int h);

void _elm_gengrid_item_size_get(Eo *obj, Elm_Gengrid_Data *pd, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_gengrid_item_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);

void _elm_gengrid_multi_select_mode_set(Eo *obj, Elm_Gengrid_Data *pd, Elm_Object_Multi_Select_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_multi_select_mode_set, EFL_FUNC_CALL(mode), Elm_Object_Multi_Select_Mode mode);

Elm_Object_Multi_Select_Mode _elm_gengrid_multi_select_mode_get(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gengrid_multi_select_mode_get, Elm_Object_Multi_Select_Mode, 2 /* Elm.Object.Multi_Select_Mode.max */);

void _elm_gengrid_horizontal_set(Eo *obj, Elm_Gengrid_Data *pd, Eina_Bool horizontal);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_horizontal_set, EFL_FUNC_CALL(horizontal), Eina_Bool horizontal);

Eina_Bool _elm_gengrid_horizontal_get(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gengrid_horizontal_get, Eina_Bool, 0);

void _elm_gengrid_page_size_set(Eo *obj, Elm_Gengrid_Data *pd, int h_pagesize, int v_pagesize);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_page_size_set, EFL_FUNC_CALL(h_pagesize, v_pagesize), int h_pagesize, int v_pagesize);

Elm_Widget_Item *_elm_gengrid_selected_item_get(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gengrid_selected_item_get, Elm_Widget_Item *, NULL);

Eina_List *_elm_gengrid_realized_items_get(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gengrid_realized_items_get, Eina_List *, NULL);

Elm_Widget_Item *_elm_gengrid_first_item_get(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gengrid_first_item_get, Elm_Widget_Item *, NULL);

const Eina_List *_elm_gengrid_selected_items_get(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gengrid_selected_items_get, const Eina_List *, NULL);

Elm_Widget_Item *_elm_gengrid_last_item_get(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gengrid_last_item_get, Elm_Widget_Item *, NULL);

void _elm_gengrid_wheel_disabled_set(Eo *obj, Elm_Gengrid_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_wheel_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _elm_gengrid_wheel_disabled_get(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gengrid_wheel_disabled_get, Eina_Bool, 0);

Elm_Widget_Item *_elm_gengrid_item_insert_before(Eo *obj, Elm_Gengrid_Data *pd, const Elm_Gengrid_Item_Class *itc, const void *data, Elm_Widget_Item *relative, Evas_Smart_Cb func, const void *func_data);

EOAPI EFL_FUNC_BODYV(elm_obj_gengrid_item_insert_before, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(itc, data, relative, func, func_data), const Elm_Gengrid_Item_Class *itc, const void *data, Elm_Widget_Item *relative, Evas_Smart_Cb func, const void *func_data);

void _elm_gengrid_realized_items_update(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_gengrid_realized_items_update);

Elm_Widget_Item *_elm_gengrid_item_insert_after(Eo *obj, Elm_Gengrid_Data *pd, const Elm_Gengrid_Item_Class *itc, const void *data, Elm_Widget_Item *relative, Evas_Smart_Cb func, const void *func_data);

EOAPI EFL_FUNC_BODYV(elm_obj_gengrid_item_insert_after, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(itc, data, relative, func, func_data), const Elm_Gengrid_Item_Class *itc, const void *data, Elm_Widget_Item *relative, Evas_Smart_Cb func, const void *func_data);

unsigned int _elm_gengrid_items_count(const Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_gengrid_items_count, unsigned int, 0);

Elm_Widget_Item *_elm_gengrid_at_xy_item_get(const Eo *obj, Elm_Gengrid_Data *pd, int x, int y, int *xposret, int *yposret);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_gengrid_at_xy_item_get, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(x, y, xposret, yposret), int x, int y, int *xposret, int *yposret);

Elm_Widget_Item *_elm_gengrid_item_append(Eo *obj, Elm_Gengrid_Data *pd, const Elm_Gengrid_Item_Class *itc, const void *data, Evas_Smart_Cb func, const void *func_data);

EOAPI EFL_FUNC_BODYV(elm_obj_gengrid_item_append, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(itc, data, func, func_data), const Elm_Gengrid_Item_Class *itc, const void *data, Evas_Smart_Cb func, const void *func_data);

Elm_Widget_Item *_elm_gengrid_item_prepend(Eo *obj, Elm_Gengrid_Data *pd, const Elm_Gengrid_Item_Class *itc, const void *data, Evas_Smart_Cb func, const void *func_data);

EOAPI EFL_FUNC_BODYV(elm_obj_gengrid_item_prepend, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(itc, data, func, func_data), const Elm_Gengrid_Item_Class *itc, const void *data, Evas_Smart_Cb func, const void *func_data);

void _elm_gengrid_clear(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_gengrid_clear);

Elm_Widget_Item *_elm_gengrid_item_sorted_insert(Eo *obj, Elm_Gengrid_Data *pd, const Elm_Gengrid_Item_Class *itc, const void *data, Eina_Compare_Cb comp, Evas_Smart_Cb func, const void *func_data);

EOAPI EFL_FUNC_BODYV(elm_obj_gengrid_item_sorted_insert, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(itc, data, comp, func, func_data), const Elm_Gengrid_Item_Class *itc, const void *data, Eina_Compare_Cb comp, Evas_Smart_Cb func, const void *func_data);

Elm_Widget_Item *_elm_gengrid_search_by_text_item_get(Eo *obj, Elm_Gengrid_Data *pd, Elm_Widget_Item *item_to_search_from, const char *part_name, const char *pattern, Elm_Glob_Match_Flags flags);

EOAPI EFL_FUNC_BODYV(elm_obj_gengrid_search_by_text_item_get, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(item_to_search_from, part_name, pattern, flags), Elm_Widget_Item *item_to_search_from, const char *part_name, const char *pattern, Elm_Glob_Match_Flags flags);

void _elm_gengrid_reorder_mode_start(Eo *obj, Elm_Gengrid_Data *pd, Ecore_Pos_Map tween_mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_gengrid_reorder_mode_start, EFL_FUNC_CALL(tween_mode), Ecore_Pos_Map tween_mode);

void _elm_gengrid_reorder_mode_stop(Eo *obj, Elm_Gengrid_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_gengrid_reorder_mode_stop);

Efl_Object *_elm_gengrid_efl_object_constructor(Eo *obj, Elm_Gengrid_Data *pd);


void _elm_gengrid_efl_gfx_position_set(Eo *obj, Elm_Gengrid_Data *pd, int x, int y);


void _elm_gengrid_efl_gfx_size_set(Eo *obj, Elm_Gengrid_Data *pd, int w, int h);


void _elm_gengrid_efl_canvas_group_group_member_add(Eo *obj, Elm_Gengrid_Data *pd, Efl_Canvas_Object *sub_obj);


Elm_Theme_Apply _elm_gengrid_elm_widget_theme_apply(Eo *obj, Elm_Gengrid_Data *pd);


Eina_Bool _elm_gengrid_elm_widget_focus_next_manager_is(Eo *obj, Elm_Gengrid_Data *pd);


Eina_Bool _elm_gengrid_elm_widget_focus_direction_manager_is(Eo *obj, Elm_Gengrid_Data *pd);


void _elm_gengrid_elm_widget_access(Eo *obj, Elm_Gengrid_Data *pd, Eina_Bool acs);


Eina_Bool _elm_gengrid_elm_widget_focus_next(Eo *obj, Elm_Gengrid_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);


Eina_Bool _elm_gengrid_elm_widget_focus_direction(Eo *obj, Elm_Gengrid_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);


Eina_Bool _elm_gengrid_elm_widget_on_focus(Eo *obj, Elm_Gengrid_Data *pd, Elm_Widget_Item *item);


Eina_Bool _elm_gengrid_elm_widget_on_focus_region(Eo *obj, Elm_Gengrid_Data *pd, int *x, int *y, int *w, int *h);


Eina_Bool _elm_gengrid_elm_widget_widget_event(Eo *obj, Elm_Gengrid_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


void _elm_gengrid_elm_widget_focus_highlight_geometry_get(const Eo *obj, Elm_Gengrid_Data *pd, int *x, int *y, int *w, int *h);


Elm_Widget_Item *_elm_gengrid_elm_widget_focused_item_get(Eo *obj, Elm_Gengrid_Data *pd);


void _elm_gengrid_elm_widget_item_loop_enabled_set(Eo *obj, Elm_Gengrid_Data *pd, Eina_Bool enable);


Eina_Bool _elm_gengrid_elm_widget_item_loop_enabled_get(Eo *obj, Elm_Gengrid_Data *pd);


void _elm_gengrid_elm_layout_sizing_eval(Eo *obj, Elm_Gengrid_Data *pd);


void _elm_gengrid_elm_interface_scrollable_bounce_allow_set(Eo *obj, Elm_Gengrid_Data *pd, Eina_Bool horiz, Eina_Bool vert);


void _elm_gengrid_elm_interface_scrollable_policy_set(Eo *obj, Elm_Gengrid_Data *pd, Elm_Scroller_Policy hbar, Elm_Scroller_Policy vbar);


void _elm_gengrid_elm_interface_scrollable_policy_get(Eo *obj, Elm_Gengrid_Data *pd, Elm_Scroller_Policy *hbar, Elm_Scroller_Policy *vbar);


Eina_List *_elm_gengrid_elm_interface_atspi_accessible_children_get(Eo *obj, Elm_Gengrid_Data *pd);


Elm_Atspi_State_Set _elm_gengrid_elm_interface_atspi_accessible_state_set_get(Eo *obj, Elm_Gengrid_Data *pd);


const Elm_Atspi_Action *_elm_gengrid_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Gengrid_Data *pd);


int _elm_gengrid_elm_interface_atspi_selection_selected_children_count_get(Eo *obj, Elm_Gengrid_Data *pd);


Efl_Object *_elm_gengrid_elm_interface_atspi_selection_selected_child_get(Eo *obj, Elm_Gengrid_Data *pd, int selected_child_index);


Eina_Bool _elm_gengrid_elm_interface_atspi_selection_selected_child_deselect(Eo *obj, Elm_Gengrid_Data *pd, int child_index);


Eina_Bool _elm_gengrid_elm_interface_atspi_selection_child_select(Eo *obj, Elm_Gengrid_Data *pd, int child_index);


Eina_Bool _elm_gengrid_elm_interface_atspi_selection_child_deselect(Eo *obj, Elm_Gengrid_Data *pd, int child_index);


Eina_Bool _elm_gengrid_elm_interface_atspi_selection_is_child_selected(Eo *obj, Elm_Gengrid_Data *pd, int child_index);


Eina_Bool _elm_gengrid_elm_interface_atspi_selection_all_children_select(Eo *obj, Elm_Gengrid_Data *pd);


Eina_Bool _elm_gengrid_elm_interface_atspi_selection_clear(Eo *obj, Elm_Gengrid_Data *pd);


static Eina_Bool
_elm_gengrid_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_GENGRID_EXTRA_OPS
#define ELM_GENGRID_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_align_set, _elm_gengrid_align_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_align_get, _elm_gengrid_align_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_filled_set, _elm_gengrid_filled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_filled_get, _elm_gengrid_filled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_page_relative_set, _elm_gengrid_page_relative_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_page_relative_get, _elm_gengrid_page_relative_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_multi_select_set, _elm_gengrid_multi_select_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_multi_select_get, _elm_gengrid_multi_select_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_group_item_size_set, _elm_gengrid_group_item_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_group_item_size_get, _elm_gengrid_group_item_size_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_select_mode_set, _elm_gengrid_select_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_select_mode_get, _elm_gengrid_select_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_reorder_mode_set, _elm_gengrid_reorder_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_reorder_mode_get, _elm_gengrid_reorder_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_highlight_mode_set, _elm_gengrid_highlight_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_highlight_mode_get, _elm_gengrid_highlight_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_reorder_type_set, _elm_gengrid_reorder_type_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_item_size_set, _elm_gengrid_item_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_item_size_get, _elm_gengrid_item_size_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_multi_select_mode_set, _elm_gengrid_multi_select_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_multi_select_mode_get, _elm_gengrid_multi_select_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_horizontal_set, _elm_gengrid_horizontal_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_horizontal_get, _elm_gengrid_horizontal_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_page_size_set, _elm_gengrid_page_size_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_selected_item_get, _elm_gengrid_selected_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_realized_items_get, _elm_gengrid_realized_items_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_first_item_get, _elm_gengrid_first_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_selected_items_get, _elm_gengrid_selected_items_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_last_item_get, _elm_gengrid_last_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_wheel_disabled_set, _elm_gengrid_wheel_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_wheel_disabled_get, _elm_gengrid_wheel_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_item_insert_before, _elm_gengrid_item_insert_before),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_realized_items_update, _elm_gengrid_realized_items_update),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_item_insert_after, _elm_gengrid_item_insert_after),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_items_count, _elm_gengrid_items_count),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_at_xy_item_get, _elm_gengrid_at_xy_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_item_append, _elm_gengrid_item_append),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_item_prepend, _elm_gengrid_item_prepend),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_clear, _elm_gengrid_clear),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_item_sorted_insert, _elm_gengrid_item_sorted_insert),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_search_by_text_item_get, _elm_gengrid_search_by_text_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_reorder_mode_start, _elm_gengrid_reorder_mode_start),
      EFL_OBJECT_OP_FUNC(elm_obj_gengrid_reorder_mode_stop, _elm_gengrid_reorder_mode_stop),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_gengrid_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _elm_gengrid_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _elm_gengrid_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _elm_gengrid_efl_canvas_group_group_member_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_gengrid_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_gengrid_elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_gengrid_elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_gengrid_elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, _elm_gengrid_elm_widget_focus_next),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, _elm_gengrid_elm_widget_focus_direction),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _elm_gengrid_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus_region, _elm_gengrid_elm_widget_on_focus_region),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_gengrid_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_highlight_geometry_get, _elm_gengrid_elm_widget_focus_highlight_geometry_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focused_item_get, _elm_gengrid_elm_widget_focused_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_item_loop_enabled_set, _elm_gengrid_elm_widget_item_loop_enabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_item_loop_enabled_get, _elm_gengrid_elm_widget_item_loop_enabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_layout_sizing_eval, _elm_gengrid_elm_layout_sizing_eval),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_bounce_allow_set, _elm_gengrid_elm_interface_scrollable_bounce_allow_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_policy_set, _elm_gengrid_elm_interface_scrollable_policy_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_policy_get, _elm_gengrid_elm_interface_scrollable_policy_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_children_get, _elm_gengrid_elm_interface_atspi_accessible_children_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _elm_gengrid_elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_gengrid_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_children_count_get, _elm_gengrid_elm_interface_atspi_selection_selected_children_count_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_child_get, _elm_gengrid_elm_interface_atspi_selection_selected_child_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_child_deselect, _elm_gengrid_elm_interface_atspi_selection_selected_child_deselect),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_child_select, _elm_gengrid_elm_interface_atspi_selection_child_select),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_child_deselect, _elm_gengrid_elm_interface_atspi_selection_child_deselect),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_is_child_selected, _elm_gengrid_elm_interface_atspi_selection_is_child_selected),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_all_children_select, _elm_gengrid_elm_interface_atspi_selection_all_children_select),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_clear, _elm_gengrid_elm_interface_atspi_selection_clear),
      ELM_GENGRID_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_GENGRID_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_GENGRID_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_gengrid_class_desc = {
   EO_VERSION,
   "Elm.Gengrid",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Gengrid_Data),
   _elm_gengrid_class_initializer,
   _elm_gengrid_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_gengrid_class_get, &_elm_gengrid_class_desc, ELM_LAYOUT_CLASS, ELM_INTERFACE_SCROLLABLE_MIXIN, EFL_UI_CLICKABLE_INTERFACE, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, ELM_INTERFACE_ATSPI_SELECTION_INTERFACE, NULL);

EAPI void
elm_gengrid_align_set(Elm_Gengrid *obj, double align_x, double align_y)
{
   elm_obj_gengrid_align_set(obj, align_x, align_y);
}

EAPI void
elm_gengrid_align_get(const Elm_Gengrid *obj, double *align_x, double *align_y)
{
   elm_obj_gengrid_align_get(obj, align_x, align_y);
}

EAPI void
elm_gengrid_filled_set(Elm_Gengrid *obj, Eina_Bool fill)
{
   elm_obj_gengrid_filled_set(obj, fill);
}

EAPI Eina_Bool
elm_gengrid_filled_get(const Elm_Gengrid *obj)
{
   return elm_obj_gengrid_filled_get(obj);
}

EAPI void
elm_gengrid_page_relative_set(Elm_Gengrid *obj, double h_pagerel, double v_pagerel)
{
   elm_obj_gengrid_page_relative_set(obj, h_pagerel, v_pagerel);
}

EAPI void
elm_gengrid_page_relative_get(const Elm_Gengrid *obj, double *h_pagerel, double *v_pagerel)
{
   elm_obj_gengrid_page_relative_get(obj, h_pagerel, v_pagerel);
}

EAPI void
elm_gengrid_multi_select_set(Elm_Gengrid *obj, Eina_Bool multi)
{
   elm_obj_gengrid_multi_select_set(obj, multi);
}

EAPI Eina_Bool
elm_gengrid_multi_select_get(const Elm_Gengrid *obj)
{
   return elm_obj_gengrid_multi_select_get(obj);
}

EAPI void
elm_gengrid_group_item_size_set(Elm_Gengrid *obj, int w, int h)
{
   elm_obj_gengrid_group_item_size_set(obj, w, h);
}

EAPI void
elm_gengrid_group_item_size_get(const Elm_Gengrid *obj, int *w, int *h)
{
   elm_obj_gengrid_group_item_size_get(obj, w, h);
}

EAPI void
elm_gengrid_select_mode_set(Elm_Gengrid *obj, Elm_Object_Select_Mode mode)
{
   elm_obj_gengrid_select_mode_set(obj, mode);
}

EAPI Elm_Object_Select_Mode
elm_gengrid_select_mode_get(const Elm_Gengrid *obj)
{
   return elm_obj_gengrid_select_mode_get(obj);
}

EAPI void
elm_gengrid_reorder_mode_set(Elm_Gengrid *obj, Eina_Bool reorder_mode)
{
   elm_obj_gengrid_reorder_mode_set(obj, reorder_mode);
}

EAPI Eina_Bool
elm_gengrid_reorder_mode_get(const Elm_Gengrid *obj)
{
   return elm_obj_gengrid_reorder_mode_get(obj);
}

EAPI void
elm_gengrid_highlight_mode_set(Elm_Gengrid *obj, Eina_Bool highlight)
{
   elm_obj_gengrid_highlight_mode_set(obj, highlight);
}

EAPI Eina_Bool
elm_gengrid_highlight_mode_get(const Elm_Gengrid *obj)
{
   return elm_obj_gengrid_highlight_mode_get(obj);
}

EAPI void
elm_gengrid_reorder_type_set(Elm_Gengrid *obj, Elm_Gengrid_Reorder_Type type)
{
   elm_obj_gengrid_reorder_type_set(obj, type);
}

EAPI void
elm_gengrid_item_size_set(Elm_Gengrid *obj, int w, int h)
{
   elm_obj_gengrid_item_size_set(obj, w, h);
}

EAPI void
elm_gengrid_item_size_get(const Elm_Gengrid *obj, int *w, int *h)
{
   elm_obj_gengrid_item_size_get(obj, w, h);
}

EAPI void
elm_gengrid_multi_select_mode_set(Elm_Gengrid *obj, Elm_Object_Multi_Select_Mode mode)
{
   elm_obj_gengrid_multi_select_mode_set(obj, mode);
}

EAPI Elm_Object_Multi_Select_Mode
elm_gengrid_multi_select_mode_get(const Elm_Gengrid *obj)
{
   return elm_obj_gengrid_multi_select_mode_get(obj);
}

EAPI void
elm_gengrid_horizontal_set(Elm_Gengrid *obj, Eina_Bool horizontal)
{
   elm_obj_gengrid_horizontal_set(obj, horizontal);
}

EAPI Eina_Bool
elm_gengrid_horizontal_get(const Elm_Gengrid *obj)
{
   return elm_obj_gengrid_horizontal_get(obj);
}

EAPI void
elm_gengrid_page_size_set(Elm_Gengrid *obj, int h_pagesize, int v_pagesize)
{
   elm_obj_gengrid_page_size_set(obj, h_pagesize, v_pagesize);
}

EAPI Elm_Widget_Item *
elm_gengrid_selected_item_get(const Elm_Gengrid *obj)
{
   return elm_obj_gengrid_selected_item_get(obj);
}

EAPI Eina_List *
elm_gengrid_realized_items_get(const Elm_Gengrid *obj)
{
   return elm_obj_gengrid_realized_items_get(obj);
}

EAPI Elm_Widget_Item *
elm_gengrid_first_item_get(const Elm_Gengrid *obj)
{
   return elm_obj_gengrid_first_item_get(obj);
}

EAPI const Eina_List *
elm_gengrid_selected_items_get(const Elm_Gengrid *obj)
{
   return elm_obj_gengrid_selected_items_get(obj);
}

EAPI Elm_Widget_Item *
elm_gengrid_last_item_get(const Elm_Gengrid *obj)
{
   return elm_obj_gengrid_last_item_get(obj);
}

EAPI void
elm_gengrid_wheel_disabled_set(Elm_Gengrid *obj, Eina_Bool disabled)
{
   elm_obj_gengrid_wheel_disabled_set(obj, disabled);
}

EAPI Eina_Bool
elm_gengrid_wheel_disabled_get(const Elm_Gengrid *obj)
{
   return elm_obj_gengrid_wheel_disabled_get(obj);
}

EAPI Elm_Widget_Item *
elm_gengrid_item_insert_before(Elm_Gengrid *obj, const Elm_Gengrid_Item_Class *itc, const void *data, Elm_Widget_Item *relative, Evas_Smart_Cb func, const void *func_data)
{
   return elm_obj_gengrid_item_insert_before(obj, itc, data, relative, func, func_data);
}

EAPI void
elm_gengrid_realized_items_update(Elm_Gengrid *obj)
{
   elm_obj_gengrid_realized_items_update(obj);
}

EAPI Elm_Widget_Item *
elm_gengrid_item_insert_after(Elm_Gengrid *obj, const Elm_Gengrid_Item_Class *itc, const void *data, Elm_Widget_Item *relative, Evas_Smart_Cb func, const void *func_data)
{
   return elm_obj_gengrid_item_insert_after(obj, itc, data, relative, func, func_data);
}

EAPI unsigned int
elm_gengrid_items_count(const Elm_Gengrid *obj)
{
   return elm_obj_gengrid_items_count(obj);
}

EAPI Elm_Widget_Item *
elm_gengrid_at_xy_item_get(const Elm_Gengrid *obj, int x, int y, int *xposret, int *yposret)
{
   return elm_obj_gengrid_at_xy_item_get(obj, x, y, xposret, yposret);
}

EAPI Elm_Widget_Item *
elm_gengrid_item_append(Elm_Gengrid *obj, const Elm_Gengrid_Item_Class *itc, const void *data, Evas_Smart_Cb func, const void *func_data)
{
   return elm_obj_gengrid_item_append(obj, itc, data, func, func_data);
}

EAPI Elm_Widget_Item *
elm_gengrid_item_prepend(Elm_Gengrid *obj, const Elm_Gengrid_Item_Class *itc, const void *data, Evas_Smart_Cb func, const void *func_data)
{
   return elm_obj_gengrid_item_prepend(obj, itc, data, func, func_data);
}

EAPI void
elm_gengrid_clear(Elm_Gengrid *obj)
{
   elm_obj_gengrid_clear(obj);
}

EAPI Elm_Widget_Item *
elm_gengrid_item_sorted_insert(Elm_Gengrid *obj, const Elm_Gengrid_Item_Class *itc, const void *data, Eina_Compare_Cb comp, Evas_Smart_Cb func, const void *func_data)
{
   return elm_obj_gengrid_item_sorted_insert(obj, itc, data, comp, func, func_data);
}

EAPI Elm_Widget_Item *
elm_gengrid_search_by_text_item_get(Elm_Gengrid *obj, Elm_Widget_Item *item_to_search_from, const char *part_name, const char *pattern, Elm_Glob_Match_Flags flags)
{
   return elm_obj_gengrid_search_by_text_item_get(obj, item_to_search_from, part_name, pattern, flags);
}

EAPI void
elm_gengrid_reorder_mode_start(Elm_Gengrid *obj, Ecore_Pos_Map tween_mode)
{
   elm_obj_gengrid_reorder_mode_start(obj, tween_mode);
}

EAPI void
elm_gengrid_reorder_mode_stop(Elm_Gengrid *obj)
{
   elm_obj_gengrid_reorder_mode_stop(obj);
}
