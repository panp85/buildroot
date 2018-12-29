EWAPI const Efl_Event_Description _ELM_INTERFACE_SCROLLABLE_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");

void _elm_interface_scrollable_gravity_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, double x, double y);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_gravity_set, EFL_FUNC_CALL(x, y), double x, double y);

void _elm_interface_scrollable_gravity_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, double *x, double *y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_scrollable_gravity_get, EFL_FUNC_CALL(x, y), double *x, double *y);

void _elm_interface_scrollable_bounce_allow_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Eina_Bool horiz, Eina_Bool vert);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_bounce_allow_set, EFL_FUNC_CALL(horiz, vert), Eina_Bool horiz, Eina_Bool vert);

void _elm_interface_scrollable_bounce_allow_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Eina_Bool *horiz, Eina_Bool *vert);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_scrollable_bounce_allow_get, EFL_FUNC_CALL(horiz, vert), Eina_Bool *horiz, Eina_Bool *vert);

void _elm_interface_scrollable_wheel_disabled_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_wheel_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _elm_interface_scrollable_wheel_disabled_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_scrollable_wheel_disabled_get, Eina_Bool, 0);

void _elm_interface_scrollable_movement_block_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Scroller_Movement_Block block);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_movement_block_set, EFL_FUNC_CALL(block), Elm_Scroller_Movement_Block block);

Elm_Scroller_Movement_Block _elm_interface_scrollable_movement_block_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_scrollable_movement_block_get, Elm_Scroller_Movement_Block, 0);

void _elm_interface_scrollable_momentum_animator_disabled_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_momentum_animator_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _elm_interface_scrollable_momentum_animator_disabled_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_scrollable_momentum_animator_disabled_get, Eina_Bool, 0);

void _elm_interface_scrollable_policy_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Scroller_Policy hbar, Elm_Scroller_Policy vbar);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_policy_set, EFL_FUNC_CALL(hbar, vbar), Elm_Scroller_Policy hbar, Elm_Scroller_Policy vbar);

void _elm_interface_scrollable_policy_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Scroller_Policy *hbar, Elm_Scroller_Policy *vbar);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_scrollable_policy_get, EFL_FUNC_CALL(hbar, vbar), Elm_Scroller_Policy *hbar, Elm_Scroller_Policy *vbar);

void _elm_interface_scrollable_content_region_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int x, int y, int w, int h);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_content_region_set, EFL_FUNC_CALL(x, y, w, h), int x, int y, int w, int h);

void _elm_interface_scrollable_content_region_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int *x, int *y, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_scrollable_content_region_get, EFL_FUNC_CALL(x, y, w, h), int *x, int *y, int *w, int *h);

void _elm_interface_scrollable_repeat_events_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Eina_Bool repeat_events);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_repeat_events_set, EFL_FUNC_CALL(repeat_events), Eina_Bool repeat_events);

Eina_Bool _elm_interface_scrollable_repeat_events_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_scrollable_repeat_events_get, Eina_Bool, 0);

void _elm_interface_scrollable_page_size_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int x, int y);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_page_size_set, EFL_FUNC_CALL(x, y), int x, int y);

void _elm_interface_scrollable_page_size_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int *x, int *y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_scrollable_page_size_get, EFL_FUNC_CALL(x, y), int *x, int *y);

void _elm_interface_scrollable_bounce_animator_disabled_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_bounce_animator_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _elm_interface_scrollable_bounce_animator_disabled_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_scrollable_bounce_animator_disabled_get, Eina_Bool, 0);

void _elm_interface_scrollable_page_scroll_limit_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int page_limit_h, int page_limit_v);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_page_scroll_limit_set, EFL_FUNC_CALL(page_limit_h, page_limit_v), int page_limit_h, int page_limit_v);

void _elm_interface_scrollable_page_scroll_limit_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int *page_limit_h, int *page_limit_v);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_scrollable_page_scroll_limit_get, EFL_FUNC_CALL(page_limit_h, page_limit_v), int *page_limit_h, int *page_limit_v);

void _elm_interface_scrollable_page_snap_allow_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Eina_Bool horiz, Eina_Bool vert);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_page_snap_allow_set, EFL_FUNC_CALL(horiz, vert), Eina_Bool horiz, Eina_Bool vert);

void _elm_interface_scrollable_page_snap_allow_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Eina_Bool *horiz, Eina_Bool *vert);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_scrollable_page_snap_allow_get, EFL_FUNC_CALL(horiz, vert), Eina_Bool *horiz, Eina_Bool *vert);

void _elm_interface_scrollable_paging_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, double pagerel_h, double pagerel_v, int pagesize_h, int pagesize_v);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_paging_set, EFL_FUNC_CALL(pagerel_h, pagerel_v, pagesize_h, pagesize_v), double pagerel_h, double pagerel_v, int pagesize_h, int pagesize_v);

void _elm_interface_scrollable_paging_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, double *pagerel_h, double *pagerel_v, int *pagesize_h, int *pagesize_v);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_scrollable_paging_get, EFL_FUNC_CALL(pagerel_h, pagerel_v, pagesize_h, pagesize_v), double *pagerel_h, double *pagerel_v, int *pagesize_h, int *pagesize_v);

void _elm_interface_scrollable_single_direction_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Scroller_Single_Direction single_dir);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_single_direction_set, EFL_FUNC_CALL(single_dir), Elm_Scroller_Single_Direction single_dir);

Elm_Scroller_Single_Direction _elm_interface_scrollable_single_direction_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_scrollable_single_direction_get, Elm_Scroller_Single_Direction, 0);

void _elm_interface_scrollable_step_size_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int x, int y);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_step_size_set, EFL_FUNC_CALL(x, y), int x, int y);

void _elm_interface_scrollable_step_size_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int *x, int *y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_scrollable_step_size_get, EFL_FUNC_CALL(x, y), int *x, int *y);

void _elm_interface_scrollable_loop_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Eina_Bool loop_h, Eina_Bool loop_v);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_loop_set, EFL_FUNC_CALL(loop_h, loop_v), Eina_Bool loop_h, Eina_Bool loop_v);

void _elm_interface_scrollable_loop_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Eina_Bool *loop_h, Eina_Bool *loop_v);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_scrollable_loop_get, EFL_FUNC_CALL(loop_h, loop_v), Eina_Bool *loop_h, Eina_Bool *loop_v);

void _elm_interface_scrollable_scroll_up_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb scroll_up_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_scroll_up_cb_set, EFL_FUNC_CALL(scroll_up_cb), Elm_Interface_Scrollable_Cb scroll_up_cb);

void _elm_interface_scrollable_hbar_drag_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb hbar_drag_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_hbar_drag_cb_set, EFL_FUNC_CALL(hbar_drag_cb), Elm_Interface_Scrollable_Cb hbar_drag_cb);

void _elm_interface_scrollable_drag_start_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb drag_start_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_drag_start_cb_set, EFL_FUNC_CALL(drag_start_cb), Elm_Interface_Scrollable_Cb drag_start_cb);

void _elm_interface_scrollable_freeze_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Eina_Bool freeze);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_freeze_set, EFL_FUNC_CALL(freeze), Eina_Bool freeze);

void _elm_interface_scrollable_content_viewport_resize_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Resize_Cb viewport_resize_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_content_viewport_resize_cb_set, EFL_FUNC_CALL(viewport_resize_cb), Elm_Interface_Scrollable_Resize_Cb viewport_resize_cb);

void _elm_interface_scrollable_scroll_left_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb scroll_left_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_scroll_left_cb_set, EFL_FUNC_CALL(scroll_left_cb), Elm_Interface_Scrollable_Cb scroll_left_cb);

void _elm_interface_scrollable_vbar_press_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb vbar_press_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_vbar_press_cb_set, EFL_FUNC_CALL(vbar_press_cb), Elm_Interface_Scrollable_Cb vbar_press_cb);

void _elm_interface_scrollable_hbar_press_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb hbar_press_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_hbar_press_cb_set, EFL_FUNC_CALL(hbar_press_cb), Elm_Interface_Scrollable_Cb hbar_press_cb);

void _elm_interface_scrollable_hbar_unpress_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb hbar_unpress_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_hbar_unpress_cb_set, EFL_FUNC_CALL(hbar_unpress_cb), Elm_Interface_Scrollable_Cb hbar_unpress_cb);

void _elm_interface_scrollable_drag_stop_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb drag_stop_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_drag_stop_cb_set, EFL_FUNC_CALL(drag_stop_cb), Elm_Interface_Scrollable_Cb drag_stop_cb);

void _elm_interface_scrollable_extern_pan_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Efl_Canvas_Object *pan);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_extern_pan_set, EFL_FUNC_CALL(pan), Efl_Canvas_Object *pan);

void _elm_interface_scrollable_page_change_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb page_change_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_page_change_cb_set, EFL_FUNC_CALL(page_change_cb), Elm_Interface_Scrollable_Cb page_change_cb);

void _elm_interface_scrollable_hold_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Eina_Bool hold);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_hold_set, EFL_FUNC_CALL(hold), Eina_Bool hold);

void _elm_interface_scrollable_animate_start_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb animate_start_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_animate_start_cb_set, EFL_FUNC_CALL(animate_start_cb), Elm_Interface_Scrollable_Cb animate_start_cb);

void _elm_interface_scrollable_scroll_down_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb scroll_down_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_scroll_down_cb_set, EFL_FUNC_CALL(scroll_down_cb), Elm_Interface_Scrollable_Cb scroll_down_cb);

void _elm_interface_scrollable_page_relative_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, double h_pagerel, double v_pagerel);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_page_relative_set, EFL_FUNC_CALL(h_pagerel, v_pagerel), double h_pagerel, double v_pagerel);

void _elm_interface_scrollable_scroll_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb scroll_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_scroll_cb_set, EFL_FUNC_CALL(scroll_cb), Elm_Interface_Scrollable_Cb scroll_cb);

void _elm_interface_scrollable_animate_stop_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb animate_stop_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_animate_stop_cb_set, EFL_FUNC_CALL(animate_stop_cb), Elm_Interface_Scrollable_Cb animate_stop_cb);

void _elm_interface_scrollable_mirrored_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Eina_Bool mirrored);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_mirrored_set, EFL_FUNC_CALL(mirrored), Eina_Bool mirrored);

void _elm_interface_scrollable_content_min_limit_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Min_Limit_Cb min_limit_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_content_min_limit_cb_set, EFL_FUNC_CALL(min_limit_cb), Elm_Interface_Scrollable_Min_Limit_Cb min_limit_cb);

void _elm_interface_scrollable_scroll_right_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb scroll_right_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_scroll_right_cb_set, EFL_FUNC_CALL(scroll_right_cb), Elm_Interface_Scrollable_Cb scroll_right_cb);

void _elm_interface_scrollable_content_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Efl_Canvas_Object *content);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_content_set, EFL_FUNC_CALL(content), Efl_Canvas_Object *content);

void _elm_interface_scrollable_edge_left_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb edge_left_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_edge_left_cb_set, EFL_FUNC_CALL(edge_left_cb), Elm_Interface_Scrollable_Cb edge_left_cb);

void _elm_interface_scrollable_vbar_drag_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb vbar_drag_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_vbar_drag_cb_set, EFL_FUNC_CALL(vbar_drag_cb), Elm_Interface_Scrollable_Cb vbar_drag_cb);

void _elm_interface_scrollable_vbar_unpress_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb vbar_unpress_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_vbar_unpress_cb_set, EFL_FUNC_CALL(vbar_unpress_cb), Elm_Interface_Scrollable_Cb vbar_unpress_cb);

void _elm_interface_scrollable_edge_bottom_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb edge_bottom_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_edge_bottom_cb_set, EFL_FUNC_CALL(edge_bottom_cb), Elm_Interface_Scrollable_Cb edge_bottom_cb);

void _elm_interface_scrollable_edge_right_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb edge_right_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_edge_right_cb_set, EFL_FUNC_CALL(edge_right_cb), Elm_Interface_Scrollable_Cb edge_right_cb);

void _elm_interface_scrollable_edge_top_cb_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Elm_Interface_Scrollable_Cb edge_top_cb);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_edge_top_cb_set, EFL_FUNC_CALL(edge_top_cb), Elm_Interface_Scrollable_Cb edge_top_cb);

void _elm_interface_scrollable_objects_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Efl_Canvas_Object *edje_object, Efl_Canvas_Object *hit_rectangle);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_objects_set, EFL_FUNC_CALL(edje_object, hit_rectangle), Efl_Canvas_Object *edje_object, Efl_Canvas_Object *hit_rectangle);

void _elm_interface_scrollable_last_page_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int *pagenumber_h, int *pagenumber_v);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_scrollable_last_page_get, EFL_FUNC_CALL(pagenumber_h, pagenumber_v), int *pagenumber_h, int *pagenumber_v);

void _elm_interface_scrollable_current_page_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int *pagenumber_h, int *pagenumber_v);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_scrollable_current_page_get, EFL_FUNC_CALL(pagenumber_h, pagenumber_v), int *pagenumber_h, int *pagenumber_v);

void _elm_interface_scrollable_content_viewport_geometry_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int *x, int *y, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_scrollable_content_viewport_geometry_get, EFL_FUNC_CALL(x, y, w, h), int *x, int *y, int *w, int *h);

void _elm_interface_scrollable_content_size_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_scrollable_content_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);

void _elm_interface_scrollable_content_pos_set(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int x, int y, Eina_Bool sig);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_content_pos_set, EFL_FUNC_CALL(x, y, sig), int x, int y, Eina_Bool sig);

void _elm_interface_scrollable_content_pos_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int *x, int *y);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_content_pos_get, EFL_FUNC_CALL(x, y), int *x, int *y);

void _elm_interface_scrollable_page_show(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int pagenumber_h, int pagenumber_v);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_page_show, EFL_FUNC_CALL(pagenumber_h, pagenumber_v), int pagenumber_h, int pagenumber_v);

void _elm_interface_scrollable_region_bring_in(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int x, int y, int w, int h);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_region_bring_in, EFL_FUNC_CALL(x, y, w, h), int x, int y, int w, int h);

void _elm_interface_scrollable_page_bring_in(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int pagenumber_h, int pagenumber_v);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_page_bring_in, EFL_FUNC_CALL(pagenumber_h, pagenumber_v), int pagenumber_h, int pagenumber_v);

void _elm_interface_scrollable_content_region_show(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, int x, int y, int w, int h);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_content_region_show, EFL_FUNC_CALL(x, y, w, h), int x, int y, int w, int h);

void _elm_interface_scrollable_content_min_limit(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Eina_Bool w, Eina_Bool h);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_scrollable_content_min_limit, EFL_FUNC_CALL(w, h), Eina_Bool w, Eina_Bool h);

Efl_Object *_elm_interface_scrollable_efl_object_constructor(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd);


Eina_Iterator *_elm_interface_scrollable_efl_ui_focus_manager_border_elements_get(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd);


void _elm_interface_scrollable_efl_ui_focus_manager_focus(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Efl_Ui_Focus_Object *focus);


Efl_Ui_Focus_Manager *_elm_interface_scrollable_elm_widget_focus_manager_factory(Eo *obj, Elm_Scrollable_Smart_Interface_Data *pd, Efl_Ui_Focus_Object *root);


static Eina_Bool
_elm_interface_scrollable_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_INTERFACE_SCROLLABLE_EXTRA_OPS
#define ELM_INTERFACE_SCROLLABLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_gravity_set, _elm_interface_scrollable_gravity_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_gravity_get, _elm_interface_scrollable_gravity_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_bounce_allow_set, _elm_interface_scrollable_bounce_allow_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_bounce_allow_get, _elm_interface_scrollable_bounce_allow_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_wheel_disabled_set, _elm_interface_scrollable_wheel_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_wheel_disabled_get, _elm_interface_scrollable_wheel_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_movement_block_set, _elm_interface_scrollable_movement_block_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_movement_block_get, _elm_interface_scrollable_movement_block_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_momentum_animator_disabled_set, _elm_interface_scrollable_momentum_animator_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_momentum_animator_disabled_get, _elm_interface_scrollable_momentum_animator_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_policy_set, _elm_interface_scrollable_policy_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_policy_get, _elm_interface_scrollable_policy_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_content_region_set, _elm_interface_scrollable_content_region_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_content_region_get, _elm_interface_scrollable_content_region_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_repeat_events_set, _elm_interface_scrollable_repeat_events_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_repeat_events_get, _elm_interface_scrollable_repeat_events_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_page_size_set, _elm_interface_scrollable_page_size_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_page_size_get, _elm_interface_scrollable_page_size_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_bounce_animator_disabled_set, _elm_interface_scrollable_bounce_animator_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_bounce_animator_disabled_get, _elm_interface_scrollable_bounce_animator_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_page_scroll_limit_set, _elm_interface_scrollable_page_scroll_limit_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_page_scroll_limit_get, _elm_interface_scrollable_page_scroll_limit_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_page_snap_allow_set, _elm_interface_scrollable_page_snap_allow_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_page_snap_allow_get, _elm_interface_scrollable_page_snap_allow_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_paging_set, _elm_interface_scrollable_paging_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_paging_get, _elm_interface_scrollable_paging_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_single_direction_set, _elm_interface_scrollable_single_direction_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_single_direction_get, _elm_interface_scrollable_single_direction_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_step_size_set, _elm_interface_scrollable_step_size_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_step_size_get, _elm_interface_scrollable_step_size_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_loop_set, _elm_interface_scrollable_loop_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_loop_get, _elm_interface_scrollable_loop_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_scroll_up_cb_set, _elm_interface_scrollable_scroll_up_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_hbar_drag_cb_set, _elm_interface_scrollable_hbar_drag_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_drag_start_cb_set, _elm_interface_scrollable_drag_start_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_freeze_set, _elm_interface_scrollable_freeze_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_content_viewport_resize_cb_set, _elm_interface_scrollable_content_viewport_resize_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_scroll_left_cb_set, _elm_interface_scrollable_scroll_left_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_vbar_press_cb_set, _elm_interface_scrollable_vbar_press_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_hbar_press_cb_set, _elm_interface_scrollable_hbar_press_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_hbar_unpress_cb_set, _elm_interface_scrollable_hbar_unpress_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_drag_stop_cb_set, _elm_interface_scrollable_drag_stop_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_extern_pan_set, _elm_interface_scrollable_extern_pan_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_page_change_cb_set, _elm_interface_scrollable_page_change_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_hold_set, _elm_interface_scrollable_hold_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_animate_start_cb_set, _elm_interface_scrollable_animate_start_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_scroll_down_cb_set, _elm_interface_scrollable_scroll_down_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_page_relative_set, _elm_interface_scrollable_page_relative_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_scroll_cb_set, _elm_interface_scrollable_scroll_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_animate_stop_cb_set, _elm_interface_scrollable_animate_stop_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_mirrored_set, _elm_interface_scrollable_mirrored_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_content_min_limit_cb_set, _elm_interface_scrollable_content_min_limit_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_scroll_right_cb_set, _elm_interface_scrollable_scroll_right_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_content_set, _elm_interface_scrollable_content_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_edge_left_cb_set, _elm_interface_scrollable_edge_left_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_vbar_drag_cb_set, _elm_interface_scrollable_vbar_drag_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_vbar_unpress_cb_set, _elm_interface_scrollable_vbar_unpress_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_edge_bottom_cb_set, _elm_interface_scrollable_edge_bottom_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_edge_right_cb_set, _elm_interface_scrollable_edge_right_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_edge_top_cb_set, _elm_interface_scrollable_edge_top_cb_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_objects_set, _elm_interface_scrollable_objects_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_last_page_get, _elm_interface_scrollable_last_page_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_current_page_get, _elm_interface_scrollable_current_page_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_content_viewport_geometry_get, _elm_interface_scrollable_content_viewport_geometry_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_content_size_get, _elm_interface_scrollable_content_size_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_content_pos_set, _elm_interface_scrollable_content_pos_set),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_content_pos_get, _elm_interface_scrollable_content_pos_get),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_page_show, _elm_interface_scrollable_page_show),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_region_bring_in, _elm_interface_scrollable_region_bring_in),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_page_bring_in, _elm_interface_scrollable_page_bring_in),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_content_region_show, _elm_interface_scrollable_content_region_show),
      EFL_OBJECT_OP_FUNC(elm_interface_scrollable_content_min_limit, _elm_interface_scrollable_content_min_limit),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_interface_scrollable_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_border_elements_get, _elm_interface_scrollable_efl_ui_focus_manager_border_elements_get),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_focus, _elm_interface_scrollable_efl_ui_focus_manager_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_focus_manager_factory, _elm_interface_scrollable_elm_widget_focus_manager_factory),
      ELM_INTERFACE_SCROLLABLE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_INTERFACE_SCROLLABLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_INTERFACE_SCROLLABLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_interface_scrollable_class_desc = {
   EO_VERSION,
   "Elm.Interface_Scrollable",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Elm_Scrollable_Smart_Interface_Data),
   _elm_interface_scrollable_class_initializer,
   _elm_interface_scrollable_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_interface_scrollable_mixin_get, &_elm_interface_scrollable_class_desc, EFL_UI_SCROLLABLE_INTERFACE, EFL_CANVAS_GROUP_CLASS, EFL_UI_FOCUS_MANAGER_CLASS, ELM_WIDGET_CLASS, NULL);
