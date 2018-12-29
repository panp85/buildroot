EWAPI const Efl_Event_Description _ELM_WIDGET_EVENT_MOVED =
   EFL_EVENT_DESCRIPTION("moved");
EWAPI const Efl_Event_Description _ELM_WIDGET_EVENT_FOCUSED =
   EFL_EVENT_DESCRIPTION("focused");
EWAPI const Efl_Event_Description _ELM_WIDGET_EVENT_UNFOCUSED =
   EFL_EVENT_DESCRIPTION("unfocused");
EWAPI const Efl_Event_Description _ELM_WIDGET_EVENT_LANGUAGE_CHANGED =
   EFL_EVENT_DESCRIPTION("language,changed");
EWAPI const Efl_Event_Description _ELM_WIDGET_EVENT_ACCESS_CHANGED =
   EFL_EVENT_DESCRIPTION("access,changed");

void _elm_widget_focus_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool focus);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_focus_set, EFL_FUNC_CALL(focus), Eina_Bool focus);

Eina_Bool _elm_widget_focus_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_focus_get, Eina_Bool, 0);

void _elm_widget_drag_lock_y_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool lock);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_drag_lock_y_set, EFL_FUNC_CALL(lock), Eina_Bool lock);

Eina_Bool _elm_widget_drag_lock_y_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_drag_lock_y_get, Eina_Bool, 0);

Eina_Bool _elm_widget_focus_highlight_style_set(Eo *obj, Elm_Widget_Smart_Data *pd, const char *style);

EOAPI EFL_FUNC_BODYV(elm_obj_widget_focus_highlight_style_set, Eina_Bool, 0, EFL_FUNC_CALL(style), const char *style);

const char *_elm_widget_focus_highlight_style_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_focus_highlight_style_get, const char *, NULL);

void _elm_widget_tree_unfocusable_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool tree_unfocusable);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_tree_unfocusable_set, EFL_FUNC_CALL(tree_unfocusable), Eina_Bool tree_unfocusable);

Eina_Bool _elm_widget_tree_unfocusable_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_tree_unfocusable_get, Eina_Bool, 0);

void _elm_widget_theme_set(Eo *obj, Elm_Widget_Smart_Data *pd, Elm_Theme *th);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_theme_set, EFL_FUNC_CALL(th), Elm_Theme *th);

Elm_Theme *_elm_widget_theme_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_theme_get, Elm_Theme *, NULL);

void _elm_widget_disabled_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _elm_widget_disabled_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_disabled_get, Eina_Bool, 0);

void _elm_widget_highlight_ignore_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool ignore);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_highlight_ignore_set, EFL_FUNC_CALL(ignore), Eina_Bool ignore);

Eina_Bool _elm_widget_highlight_ignore_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_highlight_ignore_get, Eina_Bool, 0);

void _elm_widget_orientation_mode_disabled_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_orientation_mode_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _elm_widget_orientation_mode_disabled_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_orientation_mode_disabled_get, Eina_Bool, 0);

Elm_Theme_Apply _elm_widget_style_set(Eo *obj, Elm_Widget_Smart_Data *pd, const char *style);

EOAPI EFL_FUNC_BODYV(elm_obj_widget_style_set, Elm_Theme_Apply, 0, EFL_FUNC_CALL(style), const char *style);

const char *_elm_widget_style_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_style_get, const char *, NULL);

void _elm_widget_focus_custom_chain_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_List *objs);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_focus_custom_chain_set, EFL_FUNC_CALL(objs), Eina_List *objs);

const Eina_List *_elm_widget_focus_custom_chain_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_focus_custom_chain_get, const Eina_List *, NULL);

void _elm_widget_can_focus_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool can_focus);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_can_focus_set, EFL_FUNC_CALL(can_focus), Eina_Bool can_focus);

Eina_Bool _elm_widget_can_focus_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_can_focus_get, Eina_Bool, 0);

void _elm_widget_highlight_in_theme_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool highlight);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_highlight_in_theme_set, EFL_FUNC_CALL(highlight), Eina_Bool highlight);

Eina_Bool _elm_widget_highlight_in_theme_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_highlight_in_theme_get, Eina_Bool, 0);

void _elm_widget_widget_parent_set(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Canvas_Object *parent);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_parent_set, EFL_FUNC_CALL(parent), Efl_Canvas_Object *parent);

Efl_Canvas_Object *_elm_widget_widget_parent_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_parent_get, Efl_Canvas_Object *, NULL);

void _elm_widget_access_info_set(Eo *obj, Elm_Widget_Smart_Data *pd, const char *txt);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_access_info_set, EFL_FUNC_CALL(txt), const char *txt);

const char *_elm_widget_access_info_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_access_info_get, const char *, NULL);

void _elm_widget_drag_lock_x_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool lock);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_drag_lock_x_set, EFL_FUNC_CALL(lock), Eina_Bool lock);

Eina_Bool _elm_widget_drag_lock_x_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_drag_lock_x_get, Eina_Bool, 0);

void _elm_widget_access_highlight_in_theme_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool highlight);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_access_highlight_in_theme_set, EFL_FUNC_CALL(highlight), Eina_Bool highlight);

Eina_Bool _elm_widget_access_highlight_in_theme_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_access_highlight_in_theme_get, Eina_Bool, 0);

void _elm_widget_focus_region_show_mode_set(Eo *obj, Elm_Widget_Smart_Data *pd, Elm_Focus_Region_Show_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_focus_region_show_mode_set, EFL_FUNC_CALL(mode), Elm_Focus_Region_Show_Mode mode);

Elm_Focus_Region_Show_Mode _elm_widget_focus_region_show_mode_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_focus_region_show_mode_get, Elm_Focus_Region_Show_Mode, 0);

void _elm_widget_parent_highlight_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool highlighted);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_parent_highlight_set, EFL_FUNC_CALL(highlighted), Eina_Bool highlighted);

Elm_Theme_Apply _elm_widget_theme_object_set(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Canvas_Object *edj, const char *wname, const char *welement, const char *wstyle);

EOAPI EFL_FUNC_BODYV(elm_obj_widget_theme_object_set, Elm_Theme_Apply, 0, EFL_FUNC_CALL(edj, wname, welement, wstyle), Efl_Canvas_Object *edj, const char *wname, const char *welement, const char *wstyle);

void _elm_widget_hover_object_set(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Canvas_Object *sobj);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_hover_object_set, EFL_FUNC_CALL(sobj), Efl_Canvas_Object *sobj);

void _elm_widget_on_show_region_hook_set(Eo *obj, Elm_Widget_Smart_Data *pd, region_hook_func_type func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_on_show_region_hook_set, EFL_FUNC_CALL(func, data), region_hook_func_type func, void *data);

void _elm_widget_domain_part_text_translatable_set(Eo *obj, Elm_Widget_Smart_Data *pd, const char *part, const char *domain, Eina_Bool translatable);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_domain_part_text_translatable_set, EFL_FUNC_CALL(part, domain, translatable), const char *part, const char *domain, Eina_Bool translatable);

void _elm_widget_orientation_set(Eo *obj, Elm_Widget_Smart_Data *pd, int rotation);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_orientation_set, EFL_FUNC_CALL(rotation), int rotation);

void _elm_widget_resize_object_set(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Canvas_Object *sobj, Eina_Bool sub_obj);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_resize_object_set, EFL_FUNC_CALL(sobj, sub_obj), Efl_Canvas_Object *sobj, Eina_Bool sub_obj);

void _elm_widget_domain_translatable_part_text_set(Eo *obj, Elm_Widget_Smart_Data *pd, const char *part, const char *domain, const char *label);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_domain_translatable_part_text_set, EFL_FUNC_CALL(part, domain, label), const char *part, const char *domain, const char *label);

Eina_List *_elm_widget_scrollable_children_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_scrollable_children_get, Eina_List *, NULL);

int _elm_widget_scroll_hold_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_scroll_hold_get, int, 0);

int _elm_widget_drag_child_locked_y_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_drag_child_locked_y_get, int, 0);

void _elm_widget_item_loop_enabled_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool enable);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_item_loop_enabled_set, EFL_FUNC_CALL(enable), Eina_Bool enable);

Eina_Bool _elm_widget_item_loop_enabled_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_item_loop_enabled_get, Eina_Bool, 0);

Eina_Bool _elm_widget_child_can_focus_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_child_can_focus_get, Eina_Bool, 0);

int _elm_widget_scroll_freeze_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_scroll_freeze_get, int, 0);

Eina_Bool _elm_widget_focus_region_get(Eo *obj, Elm_Widget_Smart_Data *pd, int *x, int *y, int *w, int *h);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_widget_focus_region_get, Eina_Bool, 0, EFL_FUNC_CALL(x, y, w, h), int *x, int *y, int *w, int *h);

Efl_Canvas_Object *_elm_widget_top_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_top_get, Efl_Canvas_Object *, NULL);

unsigned int _elm_widget_focus_order_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_focus_order_get, unsigned int, 0);

int _elm_widget_drag_child_locked_x_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_drag_child_locked_x_get, int, 0);

Eina_List *_elm_widget_can_focus_child_list_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_can_focus_child_list_get, Eina_List *, NULL);

Elm_Widget_Item *_elm_widget_focused_item_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_focused_item_get, Elm_Widget_Item *, NULL);

void _elm_widget_parents_bounce_get(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool *horiz, Eina_Bool *vert);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_widget_parents_bounce_get, EFL_FUNC_CALL(horiz, vert), Eina_Bool *horiz, Eina_Bool *vert);
EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_parent_widget_get, Efl_Canvas_Object *, NULL);

Eina_Bool _elm_widget_highlight_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_highlight_get, Eina_Bool, 0);

Efl_Canvas_Object *_elm_widget_focused_object_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_focused_object_get, Efl_Canvas_Object *, NULL);

void _elm_widget_parent2_set(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Canvas_Object *parent);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_parent2_set, EFL_FUNC_CALL(parent), Efl_Canvas_Object *parent);

Efl_Canvas_Object *_elm_widget_parent2_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_parent2_get, Efl_Canvas_Object *, NULL);

void _elm_widget_part_text_set(Eo *obj, Elm_Widget_Smart_Data *pd, const char *part, const char *label);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_part_text_set, EFL_FUNC_CALL(part, label), const char *part, const char *label);

const char *_elm_widget_part_text_get(Eo *obj, Elm_Widget_Smart_Data *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_widget_part_text_get, const char *, NULL, EFL_FUNC_CALL(part), const char *part);

Efl_Canvas_Object *_elm_widget_newest_focus_order_get(const Eo *obj, Elm_Widget_Smart_Data *pd, unsigned int *newest_focus_order, Eina_Bool can_focus_only);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_widget_newest_focus_order_get, Efl_Canvas_Object *, NULL, EFL_FUNC_CALL(newest_focus_order, can_focus_only), unsigned int *newest_focus_order, Eina_Bool can_focus_only);

void _elm_widget_scroll_hold_push(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_widget_scroll_hold_push);

void _elm_widget_focus_next_object_set(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Canvas_Object *next, Elm_Focus_Direction dir);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_focus_next_object_set, EFL_FUNC_CALL(next, dir), Efl_Canvas_Object *next, Elm_Focus_Direction dir);

Efl_Canvas_Object *_elm_widget_focus_next_object_get(const Eo *obj, Elm_Widget_Smart_Data *pd, Elm_Focus_Direction dir);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_widget_focus_next_object_get, Efl_Canvas_Object *, NULL, EFL_FUNC_CALL(dir), Elm_Focus_Direction dir);

void _elm_widget_focus_next_item_set(Eo *obj, Elm_Widget_Smart_Data *pd, Elm_Widget_Item *next_item, Elm_Focus_Direction dir);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_focus_next_item_set, EFL_FUNC_CALL(next_item, dir), Elm_Widget_Item *next_item, Elm_Focus_Direction dir);

Elm_Widget_Item *_elm_widget_focus_next_item_get(const Eo *obj, Elm_Widget_Smart_Data *pd, Elm_Focus_Direction dir);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_widget_focus_next_item_get, Elm_Widget_Item *, NULL, EFL_FUNC_CALL(dir), Elm_Focus_Direction dir);

void _elm_widget_focus_tree_unfocusable_handle(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_widget_focus_tree_unfocusable_handle);

void _elm_widget_focus_custom_chain_prepend(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Canvas_Object *child, Efl_Canvas_Object *relative_child);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_focus_custom_chain_prepend, EFL_FUNC_CALL(child, relative_child), Efl_Canvas_Object *child, Efl_Canvas_Object *relative_child);

const char *_elm_widget_part_text_translate(Eo *obj, Elm_Widget_Smart_Data *pd, const char *part, const char *text);

EOAPI EFL_FUNC_BODYV(elm_obj_widget_part_text_translate, const char *, NULL, EFL_FUNC_CALL(part, text), const char *part, const char *text);

void _elm_widget_focus_highlight_geometry_get(const Eo *obj, Elm_Widget_Smart_Data *pd, int *x, int *y, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_widget_focus_highlight_geometry_get, EFL_FUNC_CALL(x, y, w, h), int *x, int *y, int *w, int *h);

Eina_Bool _elm_widget_activate(Eo *obj, Elm_Widget_Smart_Data *pd, Elm_Activate act);

EOAPI EFL_FUNC_BODYV(elm_obj_widget_activate, Eina_Bool, 0, EFL_FUNC_CALL(act), Elm_Activate act);

Eina_Bool _elm_widget_sub_object_add(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Canvas_Object *sobj);

EOAPI EFL_FUNC_BODYV(elm_obj_widget_sub_object_add, Eina_Bool, 0, EFL_FUNC_CALL(sobj), Efl_Canvas_Object *sobj);

Eina_Bool _elm_widget_focus_direction_manager_is(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_widget_focus_direction_manager_is, Eina_Bool, 0);

Eina_Bool _elm_widget_widget_event(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);

EOAPI EFL_FUNC_BODYV(elm_obj_widget_event, Eina_Bool, 0, EFL_FUNC_CALL(source, type, event_info), Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);

void _elm_widget_access(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool acs);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_access, EFL_FUNC_CALL(acs), Eina_Bool acs);

Eina_Bool _elm_widget_on_focus(Eo *obj, Elm_Widget_Smart_Data *pd, Elm_Widget_Item *item);

EOAPI EFL_FUNC_BODYV(elm_obj_widget_on_focus, Eina_Bool, 0, EFL_FUNC_CALL(item), Elm_Widget_Item *item);

Eina_Bool _elm_widget_on_focus_region(Eo *obj, Elm_Widget_Smart_Data *pd, int *x, int *y, int *w, int *h);

EOAPI EFL_FUNC_BODYV(elm_obj_widget_on_focus_region, Eina_Bool, 0, EFL_FUNC_CALL(x, y, w, h), int *x, int *y, int *w, int *h);

void _elm_widget_focus_cycle(Eo *obj, Elm_Widget_Smart_Data *pd, Elm_Focus_Direction dir);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_focus_cycle, EFL_FUNC_CALL(dir), Elm_Focus_Direction dir);
EOAPI EFL_FUNC_BODYV(elm_obj_widget_focus_direction, Eina_Bool, 0, EFL_FUNC_CALL(base, degree, direction, direction_item, weight), const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);

void _elm_widget_signal_callback_add(Eo *obj, Elm_Widget_Smart_Data *pd, const char *emission, const char *source, Edje_Signal_Cb func, void *data);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_signal_callback_add, EFL_FUNC_CALL(emission, source, func, data), const char *emission, const char *source, Edje_Signal_Cb func, void *data);

Eina_Bool _elm_widget_focus_next_manager_is(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_widget_focus_next_manager_is, Eina_Bool, 0);

Efl_Canvas_Object *_elm_widget_name_find(const Eo *obj, Elm_Widget_Smart_Data *pd, const char *name, int recurse);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_widget_name_find, Efl_Canvas_Object *, NULL, EFL_FUNC_CALL(name, recurse), const char *name, int recurse);

Eina_Bool _elm_widget_focus_list_direction_get(const Eo *obj, Elm_Widget_Smart_Data *pd, const Efl_Canvas_Object *base, const Eina_List *items, list_data_get_func_type list_data_get, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_widget_focus_list_direction_get, Eina_Bool, 0, EFL_FUNC_CALL(base, items, list_data_get, degree, direction, direction_item, weight), const Efl_Canvas_Object *base, const Eina_List *items, list_data_get_func_type list_data_get, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);

void _elm_widget_focused_object_clear(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_widget_focused_object_clear);

Eina_Bool _elm_widget_focus_direction_go(Eo *obj, Elm_Widget_Smart_Data *pd, double degree);

EOAPI EFL_FUNC_BODYV(elm_obj_widget_focus_direction_go, Eina_Bool, 0, EFL_FUNC_CALL(degree), double degree);

void _elm_widget_show_region_set(Eo *obj, Elm_Widget_Smart_Data *pd, int x, int y, int w, int h, Eina_Bool forceshow);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_show_region_set, EFL_FUNC_CALL(x, y, w, h, forceshow), int x, int y, int w, int h, Eina_Bool forceshow);

void _elm_widget_show_region_get(const Eo *obj, Elm_Widget_Smart_Data *pd, int *x, int *y, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_widget_show_region_get, EFL_FUNC_CALL(x, y, w, h), int *x, int *y, int *w, int *h);

void _elm_widget_scroll_freeze_pop(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_widget_scroll_freeze_pop);

void _elm_widget_tooltip_del(Eo *obj, Elm_Widget_Smart_Data *pd, Elm_Tooltip *tt);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_tooltip_del, EFL_FUNC_CALL(tt), Elm_Tooltip *tt);

Eina_Bool _elm_widget_focus_next_get(const Eo *obj, Elm_Widget_Smart_Data *pd, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_widget_focus_next_get, Eina_Bool, 0, EFL_FUNC_CALL(dir, next, next_item), Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);

const char *_elm_widget_translatable_part_text_get(const Eo *obj, Elm_Widget_Smart_Data *pd, const char *part);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_widget_translatable_part_text_get, const char *, NULL, EFL_FUNC_CALL(part), const char *part);

void _elm_widget_focus_restore(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_widget_focus_restore);

void _elm_widget_scroll_hold_pop(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_widget_scroll_hold_pop);

Eina_Bool _elm_widget_translate(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_widget_translate, Eina_Bool, 0);

void _elm_widget_scroll_freeze_push(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_widget_scroll_freeze_push);

void _elm_widget_focus_custom_chain_unset(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_widget_focus_custom_chain_unset);

void _elm_widget_focus_steal(Eo *obj, Elm_Widget_Smart_Data *pd, Elm_Widget_Item *item);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_focus_steal, EFL_FUNC_CALL(item), Elm_Widget_Item *item);

void _elm_widget_focus_hide_handle(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_widget_focus_hide_handle);
EOAPI EFL_FUNC_BODYV(elm_obj_widget_focus_next, Eina_Bool, 0, EFL_FUNC_CALL(dir, next, next_item), Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);

Eina_Bool _elm_widget_focus_list_next_get(const Eo *obj, Elm_Widget_Smart_Data *pd, const Eina_List *items, list_data_get_func_type list_data_get, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_widget_focus_list_next_get, Eina_Bool, 0, EFL_FUNC_CALL(items, list_data_get, dir, next, next_item), const Eina_List *items, list_data_get_func_type list_data_get, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item);

void _elm_widget_focus_mouse_up_handle(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_widget_focus_mouse_up_handle);

Elm_Theme_Apply _elm_widget_theme_apply(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_widget_theme_apply, Elm_Theme_Apply, 0);

Eina_Bool _elm_widget_focus_direction_get(const Eo *obj, Elm_Widget_Smart_Data *pd, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_widget_focus_direction_get, Eina_Bool, 0, EFL_FUNC_CALL(base, degree, direction, direction_item, weight), const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight);

void *_elm_widget_signal_callback_del(Eo *obj, Elm_Widget_Smart_Data *pd, const char *emission, const char *source, Edje_Signal_Cb func);

EOAPI EFL_FUNC_BODYV(elm_obj_widget_signal_callback_del, void *, NULL, EFL_FUNC_CALL(emission, source, func), const char *emission, const char *source, Edje_Signal_Cb func);

void _elm_widget_signal_emit(Eo *obj, Elm_Widget_Smart_Data *pd, const char *emission, const char *source);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_signal_emit, EFL_FUNC_CALL(emission, source), const char *emission, const char *source);

Eina_Bool _elm_widget_disable(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_widget_disable, Eina_Bool, 0);

Eina_Bool _elm_widget_sub_object_del(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Canvas_Object *sobj);

EOAPI EFL_FUNC_BODYV(elm_obj_widget_sub_object_del, Eina_Bool, 0, EFL_FUNC_CALL(sobj), Efl_Canvas_Object *sobj);

void _elm_widget_tooltip_add(Eo *obj, Elm_Widget_Smart_Data *pd, Elm_Tooltip *tt);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_tooltip_add, EFL_FUNC_CALL(tt), Elm_Tooltip *tt);

void _elm_widget_focus_region_show(const Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY_CONST(elm_obj_widget_focus_region_show);

void _elm_widget_focus_disabled_handle(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_widget_focus_disabled_handle);

void _elm_widget_focus_custom_chain_append(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Canvas_Object *child, Efl_Canvas_Object *relative_child);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_focus_custom_chain_append, EFL_FUNC_CALL(child, relative_child), Efl_Canvas_Object *child, Efl_Canvas_Object *relative_child);

void _elm_widget_focus_move_policy_set(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Ui_Focus_Move_Policy policy);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_focus_move_policy_set, EFL_FUNC_CALL(policy), Efl_Ui_Focus_Move_Policy policy);

Efl_Ui_Focus_Move_Policy _elm_widget_focus_move_policy_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_focus_move_policy_get, Efl_Ui_Focus_Move_Policy, 0);

void _elm_widget_focus_move_policy_automatic_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool automatic);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_widget_focus_move_policy_automatic_set, EFL_FUNC_CALL(automatic), Eina_Bool automatic);

Eina_Bool _elm_widget_focus_move_policy_automatic_get(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_widget_focus_move_policy_automatic_get, Eina_Bool, 0);

void _elm_widget_focus_reconfigure(Eo *obj, Elm_Widget_Smart_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_obj_widget_focus_reconfigure);

Eina_Bool _elm_widget_focus_register(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Ui_Focus_Manager *manager, Efl_Ui_Focus_Object *logical, Eina_Bool *logical_flag);

EOAPI EFL_FUNC_BODYV(elm_obj_widget_focus_register, Eina_Bool, 0, EFL_FUNC_CALL(manager, logical, logical_flag), Efl_Ui_Focus_Manager *manager, Efl_Ui_Focus_Object *logical, Eina_Bool *logical_flag);

Efl_Ui_Focus_Manager *_elm_widget_focus_manager_factory(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Ui_Focus_Object *root);

EOAPI EFL_FUNC_BODYV(elm_obj_widget_focus_manager_factory, Efl_Ui_Focus_Manager *, NULL, EFL_FUNC_CALL(root), Efl_Ui_Focus_Object *root);

Efl_Object *_elm_widget_efl_object_constructor(Eo *obj, Elm_Widget_Smart_Data *pd);


Efl_Object *_elm_widget_efl_object_finalize(Eo *obj, Elm_Widget_Smart_Data *pd);


void _elm_widget_efl_object_destructor(Eo *obj, Elm_Widget_Smart_Data *pd);


Efl_Object *_elm_widget_efl_object_provider_find(Eo *obj, Elm_Widget_Smart_Data *pd, const Efl_Object *klass);


void _elm_widget_efl_gfx_color_set(Eo *obj, Elm_Widget_Smart_Data *pd, int r, int g, int b, int a);


void _elm_widget_efl_gfx_visible_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool v);


void _elm_widget_efl_gfx_position_set(Eo *obj, Elm_Widget_Smart_Data *pd, int x, int y);


void _elm_widget_efl_gfx_size_set(Eo *obj, Elm_Widget_Smart_Data *pd, int w, int h);


void _elm_widget_efl_canvas_object_clip_set(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Canvas_Object *clip);


void _elm_widget_efl_canvas_object_no_render_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool enable);


void _elm_widget_efl_canvas_object_is_frame_object_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool is_frame);


void _elm_widget_efl_canvas_group_group_calculate(Eo *obj, Elm_Widget_Smart_Data *pd);


void _elm_widget_efl_canvas_group_group_member_del(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Canvas_Object *sub_obj);


void _elm_widget_efl_canvas_group_group_member_add(Eo *obj, Elm_Widget_Smart_Data *pd, Efl_Canvas_Object *sub_obj);


const char *_elm_widget_elm_interface_atspi_accessible_name_get(Eo *obj, Elm_Widget_Smart_Data *pd);


Elm_Atspi_State_Set _elm_widget_elm_interface_atspi_accessible_state_set_get(Eo *obj, Elm_Widget_Smart_Data *pd);


Eina_List *_elm_widget_elm_interface_atspi_accessible_children_get(Eo *obj, Elm_Widget_Smart_Data *pd);


Elm_Interface_Atspi_Accessible *_elm_widget_elm_interface_atspi_accessible_parent_get(Eo *obj, Elm_Widget_Smart_Data *pd);


Eina_List *_elm_widget_elm_interface_atspi_accessible_attributes_get(Eo *obj, Elm_Widget_Smart_Data *pd);


Eina_Bool _elm_widget_elm_interface_atspi_component_focus_grab(Eo *obj, Elm_Widget_Smart_Data *pd);


Efl_Ui_Focus_Manager *_elm_widget_efl_ui_focus_user_manager_get(Eo *obj, Elm_Widget_Smart_Data *pd);


Efl_Ui_Focus_Object *_elm_widget_efl_ui_focus_user_parent_get(Eo *obj, Elm_Widget_Smart_Data *pd);


Eina_Rectangle _elm_widget_efl_ui_focus_object_focus_geometry_get(Eo *obj, Elm_Widget_Smart_Data *pd);


void _elm_widget_efl_ui_focus_object_focus_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool focus);


void _elm_widget_efl_ui_base_scale_set(Eo *obj, Elm_Widget_Smart_Data *pd, double scale);


double _elm_widget_efl_ui_base_scale_get(Eo *obj, Elm_Widget_Smart_Data *pd);


void _elm_widget_efl_ui_base_mirrored_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool rtl);


Eina_Bool _elm_widget_efl_ui_base_mirrored_get(Eo *obj, Elm_Widget_Smart_Data *pd);


void _elm_widget_efl_ui_base_mirrored_automatic_set(Eo *obj, Elm_Widget_Smart_Data *pd, Eina_Bool automatic);


Eina_Bool _elm_widget_efl_ui_base_mirrored_automatic_get(Eo *obj, Elm_Widget_Smart_Data *pd);


static Eina_Bool
_elm_widget_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_WIDGET_EXTRA_OPS
#define ELM_WIDGET_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_set, _elm_widget_focus_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_get, _elm_widget_focus_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_drag_lock_y_set, _elm_widget_drag_lock_y_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_drag_lock_y_get, _elm_widget_drag_lock_y_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_highlight_style_set, _elm_widget_focus_highlight_style_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_highlight_style_get, _elm_widget_focus_highlight_style_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_tree_unfocusable_set, _elm_widget_tree_unfocusable_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_tree_unfocusable_get, _elm_widget_tree_unfocusable_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_set, _elm_widget_theme_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_get, _elm_widget_theme_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_disabled_set, _elm_widget_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_disabled_get, _elm_widget_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_highlight_ignore_set, _elm_widget_highlight_ignore_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_highlight_ignore_get, _elm_widget_highlight_ignore_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_orientation_mode_disabled_set, _elm_widget_orientation_mode_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_orientation_mode_disabled_get, _elm_widget_orientation_mode_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_style_set, _elm_widget_style_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_style_get, _elm_widget_style_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_custom_chain_set, _elm_widget_focus_custom_chain_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_custom_chain_get, _elm_widget_focus_custom_chain_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_can_focus_set, _elm_widget_can_focus_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_can_focus_get, _elm_widget_can_focus_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_highlight_in_theme_set, _elm_widget_highlight_in_theme_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_highlight_in_theme_get, _elm_widget_highlight_in_theme_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent_set, _elm_widget_widget_parent_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent_get, _elm_widget_widget_parent_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access_info_set, _elm_widget_access_info_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access_info_get, _elm_widget_access_info_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_drag_lock_x_set, _elm_widget_drag_lock_x_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_drag_lock_x_get, _elm_widget_drag_lock_x_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access_highlight_in_theme_set, _elm_widget_access_highlight_in_theme_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access_highlight_in_theme_get, _elm_widget_access_highlight_in_theme_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_region_show_mode_set, _elm_widget_focus_region_show_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_region_show_mode_get, _elm_widget_focus_region_show_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent_highlight_set, _elm_widget_parent_highlight_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_object_set, _elm_widget_theme_object_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_hover_object_set, _elm_widget_hover_object_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_show_region_hook_set, _elm_widget_on_show_region_hook_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_domain_part_text_translatable_set, _elm_widget_domain_part_text_translatable_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_orientation_set, _elm_widget_orientation_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_resize_object_set, _elm_widget_resize_object_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_domain_translatable_part_text_set, _elm_widget_domain_translatable_part_text_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_scrollable_children_get, _elm_widget_scrollable_children_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_scroll_hold_get, _elm_widget_scroll_hold_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_drag_child_locked_y_get, _elm_widget_drag_child_locked_y_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_item_loop_enabled_set, _elm_widget_item_loop_enabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_item_loop_enabled_get, _elm_widget_item_loop_enabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_child_can_focus_get, _elm_widget_child_can_focus_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_scroll_freeze_get, _elm_widget_scroll_freeze_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_region_get, _elm_widget_focus_region_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_top_get, _elm_widget_top_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_order_get, _elm_widget_focus_order_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_drag_child_locked_x_get, _elm_widget_drag_child_locked_x_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_can_focus_child_list_get, _elm_widget_can_focus_child_list_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focused_item_get, _elm_widget_focused_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parents_bounce_get, _elm_widget_parents_bounce_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent_widget_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_highlight_get, _elm_widget_highlight_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focused_object_get, _elm_widget_focused_object_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent2_set, _elm_widget_parent2_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_parent2_get, _elm_widget_parent2_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_part_text_set, _elm_widget_part_text_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_part_text_get, _elm_widget_part_text_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_newest_focus_order_get, _elm_widget_newest_focus_order_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_scroll_hold_push, _elm_widget_scroll_hold_push),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_object_set, _elm_widget_focus_next_object_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_object_get, _elm_widget_focus_next_object_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_item_set, _elm_widget_focus_next_item_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_item_get, _elm_widget_focus_next_item_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_tree_unfocusable_handle, _elm_widget_focus_tree_unfocusable_handle),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_custom_chain_prepend, _elm_widget_focus_custom_chain_prepend),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_part_text_translate, _elm_widget_part_text_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_highlight_geometry_get, _elm_widget_focus_highlight_geometry_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_activate, _elm_widget_activate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_add, _elm_widget_sub_object_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_manager_is, _elm_widget_focus_direction_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_access, _elm_widget_access),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus_region, _elm_widget_on_focus_region),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_cycle, _elm_widget_focus_cycle),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_signal_callback_add, _elm_widget_signal_callback_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_manager_is, _elm_widget_focus_next_manager_is),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_name_find, _elm_widget_name_find),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_list_direction_get, _elm_widget_focus_list_direction_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focused_object_clear, _elm_widget_focused_object_clear),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_go, _elm_widget_focus_direction_go),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_show_region_set, _elm_widget_show_region_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_show_region_get, _elm_widget_show_region_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_scroll_freeze_pop, _elm_widget_scroll_freeze_pop),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_tooltip_del, _elm_widget_tooltip_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next_get, _elm_widget_focus_next_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translatable_part_text_get, _elm_widget_translatable_part_text_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_restore, _elm_widget_focus_restore),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_scroll_hold_pop, _elm_widget_scroll_hold_pop),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_translate, _elm_widget_translate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_scroll_freeze_push, _elm_widget_scroll_freeze_push),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_custom_chain_unset, _elm_widget_focus_custom_chain_unset),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_steal, _elm_widget_focus_steal),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_hide_handle, _elm_widget_focus_hide_handle),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_next, NULL),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_list_next_get, _elm_widget_focus_list_next_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_mouse_up_handle, _elm_widget_focus_mouse_up_handle),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_direction_get, _elm_widget_focus_direction_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_signal_callback_del, _elm_widget_signal_callback_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_signal_emit, _elm_widget_signal_emit),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_disable, _elm_widget_disable),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_sub_object_del, _elm_widget_sub_object_del),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_tooltip_add, _elm_widget_tooltip_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_region_show, _elm_widget_focus_region_show),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_disabled_handle, _elm_widget_focus_disabled_handle),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_custom_chain_append, _elm_widget_focus_custom_chain_append),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_move_policy_set, _elm_widget_focus_move_policy_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_move_policy_get, _elm_widget_focus_move_policy_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_move_policy_automatic_set, _elm_widget_focus_move_policy_automatic_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_move_policy_automatic_get, _elm_widget_focus_move_policy_automatic_get),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_reconfigure, _elm_widget_focus_reconfigure),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_register, _elm_widget_focus_register),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_manager_factory, _elm_widget_focus_manager_factory),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_widget_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _elm_widget_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_widget_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_provider_find, _elm_widget_efl_object_provider_find),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_set, _elm_widget_efl_gfx_color_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _elm_widget_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _elm_widget_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _elm_widget_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_clip_set, _elm_widget_efl_canvas_object_clip_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_no_render_set, _elm_widget_efl_canvas_object_no_render_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_object_is_frame_object_set, _elm_widget_efl_canvas_object_is_frame_object_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_calculate, _elm_widget_efl_canvas_group_group_calculate),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_del, _elm_widget_efl_canvas_group_group_member_del),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _elm_widget_efl_canvas_group_group_member_add),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_name_get, _elm_widget_elm_interface_atspi_accessible_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _elm_widget_elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_children_get, _elm_widget_elm_interface_atspi_accessible_children_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_parent_get, _elm_widget_elm_interface_atspi_accessible_parent_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_attributes_get, _elm_widget_elm_interface_atspi_accessible_attributes_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_component_focus_grab, _elm_widget_elm_interface_atspi_component_focus_grab),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_user_manager_get, _elm_widget_efl_ui_focus_user_manager_get),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_user_parent_get, _elm_widget_efl_ui_focus_user_parent_get),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_object_focus_geometry_get, _elm_widget_efl_ui_focus_object_focus_geometry_get),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_object_focus_set, _elm_widget_efl_ui_focus_object_focus_set),
      EFL_OBJECT_OP_FUNC(efl_ui_scale_set, _elm_widget_efl_ui_base_scale_set),
      EFL_OBJECT_OP_FUNC(efl_ui_scale_get, _elm_widget_efl_ui_base_scale_get),
      EFL_OBJECT_OP_FUNC(efl_ui_mirrored_set, _elm_widget_efl_ui_base_mirrored_set),
      EFL_OBJECT_OP_FUNC(efl_ui_mirrored_get, _elm_widget_efl_ui_base_mirrored_get),
      EFL_OBJECT_OP_FUNC(efl_ui_mirrored_automatic_set, _elm_widget_efl_ui_base_mirrored_automatic_set),
      EFL_OBJECT_OP_FUNC(efl_ui_mirrored_automatic_get, _elm_widget_efl_ui_base_mirrored_automatic_get),
      ELM_WIDGET_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_WIDGET_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_WIDGET_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_widget_class_desc = {
   EO_VERSION,
   "Elm.Widget",
   EFL_CLASS_TYPE_REGULAR_NO_INSTANT,
   sizeof(Elm_Widget_Smart_Data),
   _elm_widget_class_initializer,
   _elm_widget_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_widget_class_get, &_elm_widget_class_desc, EFL_CANVAS_GROUP_CLASS, ELM_INTERFACE_ATSPI_ACCESSIBLE_MIXIN, ELM_INTERFACE_ATSPI_COMPONENT_MIXIN, EFL_UI_FOCUS_USER_INTERFACE, EFL_UI_FOCUS_OBJECT_MIXIN, EFL_UI_BASE_INTERFACE, NULL);

EAPI void
elm_widget_focus_set(Elm_Widget *obj, Eina_Bool focus)
{
   elm_obj_widget_focus_set(obj, focus);
}

EAPI Eina_Bool
elm_widget_focus_get(const Elm_Widget *obj)
{
   return elm_obj_widget_focus_get(obj);
}

EAPI void
elm_widget_drag_lock_y_set(Elm_Widget *obj, Eina_Bool lock)
{
   elm_obj_widget_drag_lock_y_set(obj, lock);
}

EAPI Eina_Bool
elm_widget_drag_lock_y_get(const Elm_Widget *obj)
{
   return elm_obj_widget_drag_lock_y_get(obj);
}

EAPI Eina_Bool
elm_widget_focus_highlight_style_set(Elm_Widget *obj, const char *style)
{
   return elm_obj_widget_focus_highlight_style_set(obj, style);
}

EAPI const char *
elm_widget_focus_highlight_style_get(const Elm_Widget *obj)
{
   return elm_obj_widget_focus_highlight_style_get(obj);
}

EAPI void
elm_widget_tree_unfocusable_set(Elm_Widget *obj, Eina_Bool tree_unfocusable)
{
   elm_obj_widget_tree_unfocusable_set(obj, tree_unfocusable);
}

EAPI Eina_Bool
elm_widget_tree_unfocusable_get(const Elm_Widget *obj)
{
   return elm_obj_widget_tree_unfocusable_get(obj);
}

EAPI void
elm_widget_theme_set(Elm_Widget *obj, Elm_Theme *th)
{
   elm_obj_widget_theme_set(obj, th);
}

EAPI Elm_Theme *
elm_widget_theme_get(const Elm_Widget *obj)
{
   return elm_obj_widget_theme_get(obj);
}

EAPI void
elm_widget_disabled_set(Elm_Widget *obj, Eina_Bool disabled)
{
   elm_obj_widget_disabled_set(obj, disabled);
}

EAPI Eina_Bool
elm_widget_disabled_get(const Elm_Widget *obj)
{
   return elm_obj_widget_disabled_get(obj);
}

EAPI void
elm_widget_highlight_ignore_set(Elm_Widget *obj, Eina_Bool ignore)
{
   elm_obj_widget_highlight_ignore_set(obj, ignore);
}

EAPI Eina_Bool
elm_widget_highlight_ignore_get(const Elm_Widget *obj)
{
   return elm_obj_widget_highlight_ignore_get(obj);
}

EAPI void
elm_widget_orientation_mode_disabled_set(Elm_Widget *obj, Eina_Bool disabled)
{
   elm_obj_widget_orientation_mode_disabled_set(obj, disabled);
}

EAPI Eina_Bool
elm_widget_orientation_mode_disabled_get(const Elm_Widget *obj)
{
   return elm_obj_widget_orientation_mode_disabled_get(obj);
}

EAPI Elm_Theme_Apply
elm_widget_style_set(Elm_Widget *obj, const char *style)
{
   return elm_obj_widget_style_set(obj, style);
}

EAPI const char *
elm_widget_style_get(const Elm_Widget *obj)
{
   return elm_obj_widget_style_get(obj);
}

EAPI void
elm_widget_focus_custom_chain_set(Elm_Widget *obj, Eina_List *objs)
{
   elm_obj_widget_focus_custom_chain_set(obj, objs);
}

EAPI const Eina_List *
elm_widget_focus_custom_chain_get(const Elm_Widget *obj)
{
   return elm_obj_widget_focus_custom_chain_get(obj);
}

EAPI void
elm_widget_can_focus_set(Elm_Widget *obj, Eina_Bool can_focus)
{
   elm_obj_widget_can_focus_set(obj, can_focus);
}

EAPI Eina_Bool
elm_widget_can_focus_get(const Elm_Widget *obj)
{
   return elm_obj_widget_can_focus_get(obj);
}

EAPI void
elm_widget_highlight_in_theme_set(Elm_Widget *obj, Eina_Bool highlight)
{
   elm_obj_widget_highlight_in_theme_set(obj, highlight);
}

EAPI Eina_Bool
elm_widget_highlight_in_theme_get(const Elm_Widget *obj)
{
   return elm_obj_widget_highlight_in_theme_get(obj);
}

EAPI void
elm_widget_parent_set(Elm_Widget *obj, Efl_Canvas_Object *parent)
{
   elm_obj_widget_parent_set(obj, parent);
}

EAPI Efl_Canvas_Object *
elm_widget_parent_get(const Elm_Widget *obj)
{
   return elm_obj_widget_parent_get(obj);
}

EAPI void
elm_widget_access_info_set(Elm_Widget *obj, const char *txt)
{
   elm_obj_widget_access_info_set(obj, txt);
}

EAPI const char *
elm_widget_access_info_get(const Elm_Widget *obj)
{
   return elm_obj_widget_access_info_get(obj);
}

EAPI void
elm_widget_drag_lock_x_set(Elm_Widget *obj, Eina_Bool lock)
{
   elm_obj_widget_drag_lock_x_set(obj, lock);
}

EAPI Eina_Bool
elm_widget_drag_lock_x_get(const Elm_Widget *obj)
{
   return elm_obj_widget_drag_lock_x_get(obj);
}

EAPI void
elm_widget_access_highlight_in_theme_set(Elm_Widget *obj, Eina_Bool highlight)
{
   elm_obj_widget_access_highlight_in_theme_set(obj, highlight);
}

EAPI Eina_Bool
elm_widget_access_highlight_in_theme_get(const Elm_Widget *obj)
{
   return elm_obj_widget_access_highlight_in_theme_get(obj);
}

EAPI void
elm_widget_focus_region_show_mode_set(Elm_Widget *obj, Elm_Focus_Region_Show_Mode mode)
{
   elm_obj_widget_focus_region_show_mode_set(obj, mode);
}

EAPI Elm_Focus_Region_Show_Mode
elm_widget_focus_region_show_mode_get(const Elm_Widget *obj)
{
   return elm_obj_widget_focus_region_show_mode_get(obj);
}

EAPI void
elm_widget_parent_highlight_set(Elm_Widget *obj, Eina_Bool highlighted)
{
   elm_obj_widget_parent_highlight_set(obj, highlighted);
}

EAPI Elm_Theme_Apply
elm_widget_theme_object_set(Elm_Widget *obj, Efl_Canvas_Object *edj, const char *wname, const char *welement, const char *wstyle)
{
   return elm_obj_widget_theme_object_set(obj, edj, wname, welement, wstyle);
}

EAPI void
elm_widget_hover_object_set(Elm_Widget *obj, Efl_Canvas_Object *sobj)
{
   elm_obj_widget_hover_object_set(obj, sobj);
}

EAPI void
elm_widget_on_show_region_hook_set(Elm_Widget *obj, region_hook_func_type func, void *data)
{
   elm_obj_widget_on_show_region_hook_set(obj, func, data);
}

EAPI void
elm_widget_domain_part_text_translatable_set(Elm_Widget *obj, const char *part, const char *domain, Eina_Bool translatable)
{
   elm_obj_widget_domain_part_text_translatable_set(obj, part, domain, translatable);
}

EAPI void
elm_widget_orientation_set(Elm_Widget *obj, int rotation)
{
   elm_obj_widget_orientation_set(obj, rotation);
}

EAPI void
elm_widget_resize_object_set(Elm_Widget *obj, Efl_Canvas_Object *sobj, Eina_Bool sub_obj)
{
   elm_obj_widget_resize_object_set(obj, sobj, sub_obj);
}

EAPI void
elm_widget_domain_translatable_part_text_set(Elm_Widget *obj, const char *part, const char *domain, const char *label)
{
   elm_obj_widget_domain_translatable_part_text_set(obj, part, domain, label);
}

EAPI Eina_List *
elm_widget_scrollable_children_get(const Elm_Widget *obj)
{
   return elm_obj_widget_scrollable_children_get(obj);
}

EAPI int
elm_widget_scroll_hold_get(const Elm_Widget *obj)
{
   return elm_obj_widget_scroll_hold_get(obj);
}

EAPI int
elm_widget_drag_child_locked_y_get(const Elm_Widget *obj)
{
   return elm_obj_widget_drag_child_locked_y_get(obj);
}

EAPI void
elm_widget_item_loop_enabled_set(Elm_Widget *obj, Eina_Bool enable)
{
   elm_obj_widget_item_loop_enabled_set(obj, enable);
}

EAPI Eina_Bool
elm_widget_item_loop_enabled_get(const Elm_Widget *obj)
{
   return elm_obj_widget_item_loop_enabled_get(obj);
}

EAPI Eina_Bool
elm_widget_child_can_focus_get(const Elm_Widget *obj)
{
   return elm_obj_widget_child_can_focus_get(obj);
}

EAPI int
elm_widget_scroll_freeze_get(const Elm_Widget *obj)
{
   return elm_obj_widget_scroll_freeze_get(obj);
}

EAPI Eina_Bool
elm_widget_focus_region_get(const Elm_Widget *obj, int *x, int *y, int *w, int *h)
{
   return elm_obj_widget_focus_region_get(obj, x, y, w, h);
}

EAPI Efl_Canvas_Object *
elm_widget_top_get(const Elm_Widget *obj)
{
   return elm_obj_widget_top_get(obj);
}

EAPI unsigned int
elm_widget_focus_order_get(const Elm_Widget *obj)
{
   return elm_obj_widget_focus_order_get(obj);
}

EAPI int
elm_widget_drag_child_locked_x_get(const Elm_Widget *obj)
{
   return elm_obj_widget_drag_child_locked_x_get(obj);
}

EAPI Eina_List *
elm_widget_can_focus_child_list_get(const Elm_Widget *obj)
{
   return elm_obj_widget_can_focus_child_list_get(obj);
}

EAPI Elm_Widget_Item *
elm_widget_focused_item_get(const Elm_Widget *obj)
{
   return elm_obj_widget_focused_item_get(obj);
}

EAPI void
elm_widget_parents_bounce_get(const Elm_Widget *obj, Eina_Bool *horiz, Eina_Bool *vert)
{
   elm_obj_widget_parents_bounce_get(obj, horiz, vert);
}

EAPI Eina_Bool
elm_widget_highlight_get(const Elm_Widget *obj)
{
   return elm_obj_widget_highlight_get(obj);
}

EAPI Efl_Canvas_Object *
elm_widget_focused_object_get(const Elm_Widget *obj)
{
   return elm_obj_widget_focused_object_get(obj);
}

EAPI void
elm_widget_parent2_set(Elm_Widget *obj, Efl_Canvas_Object *parent)
{
   elm_obj_widget_parent2_set(obj, parent);
}

EAPI Efl_Canvas_Object *
elm_widget_parent2_get(const Elm_Widget *obj)
{
   return elm_obj_widget_parent2_get(obj);
}

EAPI void
elm_widget_part_text_set(Elm_Widget *obj, const char *part, const char *label)
{
   elm_obj_widget_part_text_set(obj, part, label);
}

EAPI const char *
elm_widget_part_text_get(const Elm_Widget *obj, const char *part)
{
   return elm_obj_widget_part_text_get(obj, part);
}

EAPI Efl_Canvas_Object *
elm_widget_newest_focus_order_get(const Elm_Widget *obj, unsigned int *newest_focus_order, Eina_Bool can_focus_only)
{
   return elm_obj_widget_newest_focus_order_get(obj, newest_focus_order, can_focus_only);
}

EAPI void
elm_widget_scroll_hold_push(Elm_Widget *obj)
{
   elm_obj_widget_scroll_hold_push(obj);
}

EAPI void
elm_widget_focus_next_object_set(Elm_Widget *obj, Efl_Canvas_Object *next, Elm_Focus_Direction dir)
{
   elm_obj_widget_focus_next_object_set(obj, next, dir);
}

EAPI Efl_Canvas_Object *
elm_widget_focus_next_object_get(const Elm_Widget *obj, Elm_Focus_Direction dir)
{
   return elm_obj_widget_focus_next_object_get(obj, dir);
}

EAPI void
elm_widget_focus_next_item_set(Elm_Widget *obj, Elm_Widget_Item *next_item, Elm_Focus_Direction dir)
{
   elm_obj_widget_focus_next_item_set(obj, next_item, dir);
}

EAPI Elm_Widget_Item *
elm_widget_focus_next_item_get(const Elm_Widget *obj, Elm_Focus_Direction dir)
{
   return elm_obj_widget_focus_next_item_get(obj, dir);
}

EAPI void
elm_widget_focus_tree_unfocusable_handle(Elm_Widget *obj)
{
   elm_obj_widget_focus_tree_unfocusable_handle(obj);
}

EAPI void
elm_widget_focus_custom_chain_prepend(Elm_Widget *obj, Efl_Canvas_Object *child, Efl_Canvas_Object *relative_child)
{
   elm_obj_widget_focus_custom_chain_prepend(obj, child, relative_child);
}

EAPI const char *
elm_widget_part_text_translate(Elm_Widget *obj, const char *part, const char *text)
{
   return elm_obj_widget_part_text_translate(obj, part, text);
}

EAPI void
elm_widget_focus_highlight_geometry_get(const Elm_Widget *obj, int *x, int *y, int *w, int *h)
{
   elm_obj_widget_focus_highlight_geometry_get(obj, x, y, w, h);
}

EAPI Eina_Bool
elm_widget_sub_object_add(Elm_Widget *obj, Efl_Canvas_Object *sobj)
{
   return elm_obj_widget_sub_object_add(obj, sobj);
}

EAPI Eina_Bool
elm_widget_event(Elm_Widget *obj, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info)
{
   return elm_obj_widget_event(obj, source, type, event_info);
}

EAPI Eina_Bool
elm_widget_on_focus(Elm_Widget *obj, Elm_Widget_Item *item)
{
   return elm_obj_widget_on_focus(obj, item);
}

EAPI Eina_Bool
elm_widget_on_focus_region(Elm_Widget *obj, int *x, int *y, int *w, int *h)
{
   return elm_obj_widget_on_focus_region(obj, x, y, w, h);
}

EAPI void
elm_widget_focus_cycle(Elm_Widget *obj, Elm_Focus_Direction dir)
{
   elm_obj_widget_focus_cycle(obj, dir);
}

EAPI Eina_Bool
elm_widget_focus_direction(Elm_Widget *obj, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight)
{
   return elm_obj_widget_focus_direction(obj, base, degree, direction, direction_item, weight);
}

EAPI void
elm_widget_signal_callback_add(Elm_Widget *obj, const char *emission, const char *source, Edje_Signal_Cb func, void *data)
{
   elm_obj_widget_signal_callback_add(obj, emission, source, func, data);
}

EAPI Eina_Bool
elm_widget_focus_next_manager_is(Elm_Widget *obj)
{
   return elm_obj_widget_focus_next_manager_is(obj);
}

EAPI Efl_Canvas_Object *
elm_widget_name_find(const Elm_Widget *obj, const char *name, int recurse)
{
   return elm_obj_widget_name_find(obj, name, recurse);
}

EAPI Eina_Bool
elm_widget_focus_list_direction_get(const Elm_Widget *obj, const Efl_Canvas_Object *base, const Eina_List *items, list_data_get_func_type list_data_get, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight)
{
   return elm_obj_widget_focus_list_direction_get(obj, base, items, list_data_get, degree, direction, direction_item, weight);
}

EAPI void
elm_widget_focused_object_clear(Elm_Widget *obj)
{
   elm_obj_widget_focused_object_clear(obj);
}

EAPI Eina_Bool
elm_widget_focus_direction_go(Elm_Widget *obj, double degree)
{
   return elm_obj_widget_focus_direction_go(obj, degree);
}

EAPI void
elm_widget_show_region_set(Elm_Widget *obj, int x, int y, int w, int h, Eina_Bool forceshow)
{
   elm_obj_widget_show_region_set(obj, x, y, w, h, forceshow);
}

EAPI void
elm_widget_show_region_get(const Elm_Widget *obj, int *x, int *y, int *w, int *h)
{
   elm_obj_widget_show_region_get(obj, x, y, w, h);
}

EAPI void
elm_widget_scroll_freeze_pop(Elm_Widget *obj)
{
   elm_obj_widget_scroll_freeze_pop(obj);
}

EAPI void
elm_widget_tooltip_del(Elm_Widget *obj, Elm_Tooltip *tt)
{
   elm_obj_widget_tooltip_del(obj, tt);
}

EAPI Eina_Bool
elm_widget_focus_next_get(const Elm_Widget *obj, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item)
{
   return elm_obj_widget_focus_next_get(obj, dir, next, next_item);
}

EAPI const char *
elm_widget_translatable_part_text_get(const Elm_Widget *obj, const char *part)
{
   return elm_obj_widget_translatable_part_text_get(obj, part);
}

EAPI void
elm_widget_focus_restore(Elm_Widget *obj)
{
   elm_obj_widget_focus_restore(obj);
}

EAPI void
elm_widget_scroll_hold_pop(Elm_Widget *obj)
{
   elm_obj_widget_scroll_hold_pop(obj);
}

EAPI void
elm_widget_scroll_freeze_push(Elm_Widget *obj)
{
   elm_obj_widget_scroll_freeze_push(obj);
}

EAPI void
elm_widget_focus_custom_chain_unset(Elm_Widget *obj)
{
   elm_obj_widget_focus_custom_chain_unset(obj);
}

EAPI void
elm_widget_focus_steal(Elm_Widget *obj, Elm_Widget_Item *item)
{
   elm_obj_widget_focus_steal(obj, item);
}

EAPI void
elm_widget_focus_hide_handle(Elm_Widget *obj)
{
   elm_obj_widget_focus_hide_handle(obj);
}

EAPI Eina_Bool
elm_widget_focus_next(Elm_Widget *obj, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item)
{
   return elm_obj_widget_focus_next(obj, dir, next, next_item);
}

EAPI Eina_Bool
elm_widget_focus_list_next_get(const Elm_Widget *obj, const Eina_List *items, list_data_get_func_type list_data_get, Elm_Focus_Direction dir, Efl_Canvas_Object **next, Elm_Widget_Item **next_item)
{
   return elm_obj_widget_focus_list_next_get(obj, items, list_data_get, dir, next, next_item);
}

EAPI Elm_Theme_Apply
elm_widget_theme_apply(Elm_Widget *obj)
{
   return elm_obj_widget_theme_apply(obj);
}

EAPI Eina_Bool
elm_widget_focus_direction_get(const Elm_Widget *obj, const Efl_Canvas_Object *base, double degree, Efl_Canvas_Object **direction, Elm_Widget_Item **direction_item, double *weight)
{
   return elm_obj_widget_focus_direction_get(obj, base, degree, direction, direction_item, weight);
}

EAPI void *
elm_widget_signal_callback_del(Elm_Widget *obj, const char *emission, const char *source, Edje_Signal_Cb func)
{
   return elm_obj_widget_signal_callback_del(obj, emission, source, func);
}

EAPI void
elm_widget_signal_emit(Elm_Widget *obj, const char *emission, const char *source)
{
   elm_obj_widget_signal_emit(obj, emission, source);
}

EAPI Eina_Bool
elm_widget_disable(Elm_Widget *obj)
{
   return elm_obj_widget_disable(obj);
}

EAPI Eina_Bool
elm_widget_sub_object_del(Elm_Widget *obj, Efl_Canvas_Object *sobj)
{
   return elm_obj_widget_sub_object_del(obj, sobj);
}

EAPI void
elm_widget_tooltip_add(Elm_Widget *obj, Elm_Tooltip *tt)
{
   elm_obj_widget_tooltip_add(obj, tt);
}

EAPI void
elm_widget_focus_region_show(const Elm_Widget *obj)
{
   elm_obj_widget_focus_region_show(obj);
}

EAPI void
elm_widget_focus_disabled_handle(Elm_Widget *obj)
{
   elm_obj_widget_focus_disabled_handle(obj);
}

EAPI void
elm_widget_focus_custom_chain_append(Elm_Widget *obj, Efl_Canvas_Object *child, Efl_Canvas_Object *relative_child)
{
   elm_obj_widget_focus_custom_chain_append(obj, child, relative_child);
}

EAPI void
elm_widget_focus_move_policy_set(Elm_Widget *obj, Efl_Ui_Focus_Move_Policy policy)
{
   elm_obj_widget_focus_move_policy_set(obj, policy);
}

EAPI Efl_Ui_Focus_Move_Policy
elm_widget_focus_move_policy_get(const Elm_Widget *obj)
{
   return elm_obj_widget_focus_move_policy_get(obj);
}

EAPI void
elm_widget_focus_move_policy_automatic_set(Elm_Widget *obj, Eina_Bool automatic)
{
   elm_obj_widget_focus_move_policy_automatic_set(obj, automatic);
}

EAPI Eina_Bool
elm_widget_focus_move_policy_automatic_get(const Elm_Widget *obj)
{
   return elm_obj_widget_focus_move_policy_automatic_get(obj);
}

EAPI void
elm_widget_focus_reconfigure(Elm_Widget *obj)
{
   elm_obj_widget_focus_reconfigure(obj);
}

EAPI Eina_Bool
elm_widget_focus_register(Elm_Widget *obj, Efl_Ui_Focus_Manager *manager, Efl_Ui_Focus_Object *logical, Eina_Bool *logical_flag)
{
   return elm_obj_widget_focus_register(obj, manager, logical, logical_flag);
}

EAPI Efl_Ui_Focus_Manager *
elm_widget_focus_manager_factory(Elm_Widget *obj, Efl_Ui_Focus_Object *root)
{
   return elm_obj_widget_focus_manager_factory(obj, root);
}
