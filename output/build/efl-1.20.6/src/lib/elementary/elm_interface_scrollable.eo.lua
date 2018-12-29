-- EFL LuaJIT bindings: elm_interface_scrollable.eo (class Elm.Interface_Scrollable)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_interface_scrollable_mixin_get()
    eo.class_register("Elm_Interface_Scrollable", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_interface_scrollable_mixin_get(void);
    void elm_interface_scrollable_gravity_set(double x, double y);
    void elm_interface_scrollable_gravity_get(double *x, double *y);
    void elm_interface_scrollable_bounce_allow_set(Eina_Bool horiz, Eina_Bool vert);
    void elm_interface_scrollable_bounce_allow_get(Eina_Bool *horiz, Eina_Bool *vert);
    void elm_interface_scrollable_wheel_disabled_set(Eina_Bool disabled);
    Eina_Bool elm_interface_scrollable_wheel_disabled_get(void);
    void elm_interface_scrollable_movement_block_set(Elm_Scroller_Movement_Block block);
    Elm_Scroller_Movement_Block elm_interface_scrollable_movement_block_get(void);
    void elm_interface_scrollable_momentum_animator_disabled_set(Eina_Bool disabled);
    Eina_Bool elm_interface_scrollable_momentum_animator_disabled_get(void);
    void elm_interface_scrollable_policy_set(Elm_Scroller_Policy hbar, Elm_Scroller_Policy vbar);
    void elm_interface_scrollable_policy_get(Elm_Scroller_Policy *hbar, Elm_Scroller_Policy *vbar);
    void elm_interface_scrollable_content_region_set(int x, int y, int w, int h);
    void elm_interface_scrollable_content_region_get(int *x, int *y, int *w, int *h);
    void elm_interface_scrollable_repeat_events_set(Eina_Bool repeat_events);
    Eina_Bool elm_interface_scrollable_repeat_events_get(void);
    void elm_interface_scrollable_page_size_set(int x, int y);
    void elm_interface_scrollable_page_size_get(int *x, int *y);
    void elm_interface_scrollable_bounce_animator_disabled_set(Eina_Bool disabled);
    Eina_Bool elm_interface_scrollable_bounce_animator_disabled_get(void);
    void elm_interface_scrollable_page_scroll_limit_set(int page_limit_h, int page_limit_v);
    void elm_interface_scrollable_page_scroll_limit_get(int *page_limit_h, int *page_limit_v);
    void elm_interface_scrollable_page_snap_allow_set(Eina_Bool horiz, Eina_Bool vert);
    void elm_interface_scrollable_page_snap_allow_get(Eina_Bool *horiz, Eina_Bool *vert);
    void elm_interface_scrollable_paging_set(double pagerel_h, double pagerel_v, int pagesize_h, int pagesize_v);
    void elm_interface_scrollable_paging_get(double *pagerel_h, double *pagerel_v, int *pagesize_h, int *pagesize_v);
    void elm_interface_scrollable_single_direction_set(Elm_Scroller_Single_Direction single_dir);
    Elm_Scroller_Single_Direction elm_interface_scrollable_single_direction_get(void);
    void elm_interface_scrollable_step_size_set(int x, int y);
    void elm_interface_scrollable_step_size_get(int *x, int *y);
    void elm_interface_scrollable_loop_set(Eina_Bool loop_h, Eina_Bool loop_v);
    void elm_interface_scrollable_loop_get(Eina_Bool *loop_h, Eina_Bool *loop_v);
    void elm_interface_scrollable_scroll_up_cb_set(Elm_Interface_Scrollable_Cb scroll_up_cb);
    void elm_interface_scrollable_hbar_drag_cb_set(Elm_Interface_Scrollable_Cb hbar_drag_cb);
    void elm_interface_scrollable_drag_start_cb_set(Elm_Interface_Scrollable_Cb drag_start_cb);
    void elm_interface_scrollable_freeze_set(Eina_Bool freeze);
    void elm_interface_scrollable_content_viewport_resize_cb_set(Elm_Interface_Scrollable_Resize_Cb viewport_resize_cb);
    void elm_interface_scrollable_scroll_left_cb_set(Elm_Interface_Scrollable_Cb scroll_left_cb);
    void elm_interface_scrollable_vbar_press_cb_set(Elm_Interface_Scrollable_Cb vbar_press_cb);
    void elm_interface_scrollable_hbar_press_cb_set(Elm_Interface_Scrollable_Cb hbar_press_cb);
    void elm_interface_scrollable_hbar_unpress_cb_set(Elm_Interface_Scrollable_Cb hbar_unpress_cb);
    void elm_interface_scrollable_drag_stop_cb_set(Elm_Interface_Scrollable_Cb drag_stop_cb);
    void elm_interface_scrollable_extern_pan_set(Efl_Canvas_Object * pan);
    void elm_interface_scrollable_page_change_cb_set(Elm_Interface_Scrollable_Cb page_change_cb);
    void elm_interface_scrollable_hold_set(Eina_Bool hold);
    void elm_interface_scrollable_animate_start_cb_set(Elm_Interface_Scrollable_Cb animate_start_cb);
    void elm_interface_scrollable_scroll_down_cb_set(Elm_Interface_Scrollable_Cb scroll_down_cb);
    void elm_interface_scrollable_page_relative_set(double h_pagerel, double v_pagerel);
    void elm_interface_scrollable_scroll_cb_set(Elm_Interface_Scrollable_Cb scroll_cb);
    void elm_interface_scrollable_animate_stop_cb_set(Elm_Interface_Scrollable_Cb animate_stop_cb);
    void elm_interface_scrollable_mirrored_set(Eina_Bool mirrored);
    void elm_interface_scrollable_content_min_limit_cb_set(Elm_Interface_Scrollable_Min_Limit_Cb min_limit_cb);
    void elm_interface_scrollable_scroll_right_cb_set(Elm_Interface_Scrollable_Cb scroll_right_cb);
    void elm_interface_scrollable_content_set(Efl_Canvas_Object * content);
    void elm_interface_scrollable_edge_left_cb_set(Elm_Interface_Scrollable_Cb edge_left_cb);
    void elm_interface_scrollable_vbar_drag_cb_set(Elm_Interface_Scrollable_Cb vbar_drag_cb);
    void elm_interface_scrollable_vbar_unpress_cb_set(Elm_Interface_Scrollable_Cb vbar_unpress_cb);
    void elm_interface_scrollable_edge_bottom_cb_set(Elm_Interface_Scrollable_Cb edge_bottom_cb);
    void elm_interface_scrollable_edge_right_cb_set(Elm_Interface_Scrollable_Cb edge_right_cb);
    void elm_interface_scrollable_edge_top_cb_set(Elm_Interface_Scrollable_Cb edge_top_cb);
    void elm_interface_scrollable_objects_set(Efl_Canvas_Object * edje_object, Efl_Canvas_Object * hit_rectangle);
    void elm_interface_scrollable_last_page_get(int *pagenumber_h, int *pagenumber_v);
    void elm_interface_scrollable_current_page_get(int *pagenumber_h, int *pagenumber_v);
    void elm_interface_scrollable_content_viewport_geometry_get(int *x, int *y, int *w, int *h);
    void elm_interface_scrollable_content_size_get(int *w, int *h);
    void elm_interface_scrollable_content_pos_set(int x, int y, Eina_Bool sig);
    void elm_interface_scrollable_content_pos_get(int *x, int *y);
    void elm_interface_scrollable_page_show(int pagenumber_h, int pagenumber_v);
    void elm_interface_scrollable_region_bring_in(int x, int y, int w, int h);
    void elm_interface_scrollable_page_bring_in(int pagenumber_h, int pagenumber_v);
    void elm_interface_scrollable_content_region_show(int x, int y, int w, int h);
    void elm_interface_scrollable_content_min_limit(Eina_Bool w, Eina_Bool h);
    extern const Eo_Event_Description _ELM_INTERFACE_SCROLLABLE_EVENT_CHANGED;
]]

__body = {
    gravity_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_gravity_set(x, y)
        eo.__do_end()
    end,

    gravity_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.elm_interface_scrollable_gravity_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    bounce_allow_set = function(self, horiz, vert)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_bounce_allow_set(horiz, vert)
        eo.__do_end()
    end,

    bounce_allow_get = function(self)
        eo.__do_start(self, __class)
        local horiz = ffi.new("Eina_Bool[1]")
        local vert = ffi.new("Eina_Bool[1]")
        __lib.elm_interface_scrollable_bounce_allow_get(horiz, vert)
        eo.__do_end()
        return ((horiz[0]) ~= 0), ((vert[0]) ~= 0)
    end,

    wheel_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_wheel_disabled_set(disabled)
        eo.__do_end()
    end,

    wheel_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_scrollable_wheel_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    movement_block_set = function(self, block)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_movement_block_set(block)
        eo.__do_end()
    end,

    movement_block_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_scrollable_movement_block_get()
        eo.__do_end()
        return v
    end,

    momentum_animator_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_momentum_animator_disabled_set(disabled)
        eo.__do_end()
    end,

    momentum_animator_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_scrollable_momentum_animator_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    policy_set = function(self, hbar, vbar)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_policy_set(hbar, vbar)
        eo.__do_end()
    end,

    policy_get = function(self)
        eo.__do_start(self, __class)
        local hbar = ffi.new("Elm_Scroller_Policy[1]")
        local vbar = ffi.new("Elm_Scroller_Policy[1]")
        __lib.elm_interface_scrollable_policy_get(hbar, vbar)
        eo.__do_end()
        return hbar[0], vbar[0]
    end,

    content_region_set = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_content_region_set(x, y, w, h)
        eo.__do_end()
    end,

    content_region_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.elm_interface_scrollable_content_region_get(x, y, w, h)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    repeat_events_set = function(self, repeat_events)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_repeat_events_set(repeat_events)
        eo.__do_end()
    end,

    repeat_events_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_scrollable_repeat_events_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    page_size_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_page_size_set(x, y)
        eo.__do_end()
    end,

    page_size_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.elm_interface_scrollable_page_size_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    bounce_animator_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_bounce_animator_disabled_set(disabled)
        eo.__do_end()
    end,

    bounce_animator_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_scrollable_bounce_animator_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    page_scroll_limit_set = function(self, page_limit_h, page_limit_v)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_page_scroll_limit_set(page_limit_h, page_limit_v)
        eo.__do_end()
    end,

    page_scroll_limit_get = function(self)
        eo.__do_start(self, __class)
        local page_limit_h = ffi.new("int[1]")
        local page_limit_v = ffi.new("int[1]")
        __lib.elm_interface_scrollable_page_scroll_limit_get(page_limit_h, page_limit_v)
        eo.__do_end()
        return tonumber(page_limit_h[0]), tonumber(page_limit_v[0])
    end,

    page_snap_allow_set = function(self, horiz, vert)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_page_snap_allow_set(horiz, vert)
        eo.__do_end()
    end,

    page_snap_allow_get = function(self)
        eo.__do_start(self, __class)
        local horiz = ffi.new("Eina_Bool[1]")
        local vert = ffi.new("Eina_Bool[1]")
        __lib.elm_interface_scrollable_page_snap_allow_get(horiz, vert)
        eo.__do_end()
        return ((horiz[0]) ~= 0), ((vert[0]) ~= 0)
    end,

    paging_set = function(self, pagerel_h, pagerel_v, pagesize_h, pagesize_v)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_paging_set(pagerel_h, pagerel_v, pagesize_h, pagesize_v)
        eo.__do_end()
    end,

    paging_get = function(self)
        eo.__do_start(self, __class)
        local pagerel_h = ffi.new("double[1]")
        local pagerel_v = ffi.new("double[1]")
        local pagesize_h = ffi.new("int[1]")
        local pagesize_v = ffi.new("int[1]")
        __lib.elm_interface_scrollable_paging_get(pagerel_h, pagerel_v, pagesize_h, pagesize_v)
        eo.__do_end()
        return tonumber(pagerel_h[0]), tonumber(pagerel_v[0]), tonumber(pagesize_h[0]), tonumber(pagesize_v[0])
    end,

    single_direction_set = function(self, single_dir)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_single_direction_set(single_dir)
        eo.__do_end()
    end,

    single_direction_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_scrollable_single_direction_get()
        eo.__do_end()
        return v
    end,

    step_size_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_step_size_set(x, y)
        eo.__do_end()
    end,

    step_size_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.elm_interface_scrollable_step_size_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    loop_set = function(self, loop_h, loop_v)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_loop_set(loop_h, loop_v)
        eo.__do_end()
    end,

    loop_get = function(self)
        eo.__do_start(self, __class)
        local loop_h = ffi.new("Eina_Bool[1]")
        local loop_v = ffi.new("Eina_Bool[1]")
        __lib.elm_interface_scrollable_loop_get(loop_h, loop_v)
        eo.__do_end()
        return ((loop_h[0]) ~= 0), ((loop_v[0]) ~= 0)
    end,

    scroll_up_cb_set = function(self, scroll_up_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_scroll_up_cb_set(scroll_up_cb)
        eo.__do_end()
    end,

    hbar_drag_cb_set = function(self, hbar_drag_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_hbar_drag_cb_set(hbar_drag_cb)
        eo.__do_end()
    end,

    drag_start_cb_set = function(self, drag_start_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_drag_start_cb_set(drag_start_cb)
        eo.__do_end()
    end,

    freeze_set = function(self, freeze)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_freeze_set(freeze)
        eo.__do_end()
    end,

    content_viewport_resize_cb_set = function(self, viewport_resize_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_content_viewport_resize_cb_set(viewport_resize_cb)
        eo.__do_end()
    end,

    scroll_left_cb_set = function(self, scroll_left_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_scroll_left_cb_set(scroll_left_cb)
        eo.__do_end()
    end,

    vbar_press_cb_set = function(self, vbar_press_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_vbar_press_cb_set(vbar_press_cb)
        eo.__do_end()
    end,

    hbar_press_cb_set = function(self, hbar_press_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_hbar_press_cb_set(hbar_press_cb)
        eo.__do_end()
    end,

    hbar_unpress_cb_set = function(self, hbar_unpress_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_hbar_unpress_cb_set(hbar_unpress_cb)
        eo.__do_end()
    end,

    drag_stop_cb_set = function(self, drag_stop_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_drag_stop_cb_set(drag_stop_cb)
        eo.__do_end()
    end,

    extern_pan_set = function(self, pan)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_extern_pan_set(pan)
        eo.__do_end()
    end,

    page_change_cb_set = function(self, page_change_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_page_change_cb_set(page_change_cb)
        eo.__do_end()
    end,

    hold_set = function(self, hold)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_hold_set(hold)
        eo.__do_end()
    end,

    animate_start_cb_set = function(self, animate_start_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_animate_start_cb_set(animate_start_cb)
        eo.__do_end()
    end,

    scroll_down_cb_set = function(self, scroll_down_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_scroll_down_cb_set(scroll_down_cb)
        eo.__do_end()
    end,

    page_relative_set = function(self, h_pagerel, v_pagerel)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_page_relative_set(h_pagerel, v_pagerel)
        eo.__do_end()
    end,

    scroll_cb_set = function(self, scroll_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_scroll_cb_set(scroll_cb)
        eo.__do_end()
    end,

    animate_stop_cb_set = function(self, animate_stop_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_animate_stop_cb_set(animate_stop_cb)
        eo.__do_end()
    end,

    mirrored_set = function(self, mirrored)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_mirrored_set(mirrored)
        eo.__do_end()
    end,

    content_min_limit_cb_set = function(self, min_limit_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_content_min_limit_cb_set(min_limit_cb)
        eo.__do_end()
    end,

    scroll_right_cb_set = function(self, scroll_right_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_scroll_right_cb_set(scroll_right_cb)
        eo.__do_end()
    end,

    content_set = function(self, content)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_content_set(content)
        eo.__do_end()
    end,

    edge_left_cb_set = function(self, edge_left_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_edge_left_cb_set(edge_left_cb)
        eo.__do_end()
    end,

    vbar_drag_cb_set = function(self, vbar_drag_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_vbar_drag_cb_set(vbar_drag_cb)
        eo.__do_end()
    end,

    vbar_unpress_cb_set = function(self, vbar_unpress_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_vbar_unpress_cb_set(vbar_unpress_cb)
        eo.__do_end()
    end,

    edge_bottom_cb_set = function(self, edge_bottom_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_edge_bottom_cb_set(edge_bottom_cb)
        eo.__do_end()
    end,

    edge_right_cb_set = function(self, edge_right_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_edge_right_cb_set(edge_right_cb)
        eo.__do_end()
    end,

    edge_top_cb_set = function(self, edge_top_cb)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_edge_top_cb_set(edge_top_cb)
        eo.__do_end()
    end,

    objects_set = function(self, edje_object, hit_rectangle)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_objects_set(edje_object, hit_rectangle)
        eo.__do_end()
    end,

    last_page_get = function(self)
        eo.__do_start(self, __class)
        local pagenumber_h = ffi.new("int[1]")
        local pagenumber_v = ffi.new("int[1]")
        __lib.elm_interface_scrollable_last_page_get(pagenumber_h, pagenumber_v)
        eo.__do_end()
        return tonumber(pagenumber_h[0]), tonumber(pagenumber_v[0])
    end,

    current_page_get = function(self)
        eo.__do_start(self, __class)
        local pagenumber_h = ffi.new("int[1]")
        local pagenumber_v = ffi.new("int[1]")
        __lib.elm_interface_scrollable_current_page_get(pagenumber_h, pagenumber_v)
        eo.__do_end()
        return tonumber(pagenumber_h[0]), tonumber(pagenumber_v[0])
    end,

    content_viewport_geometry_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.elm_interface_scrollable_content_viewport_geometry_get(x, y, w, h)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    content_size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.elm_interface_scrollable_content_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    content_pos_set = function(self, x, y, sig)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_content_pos_set(x, y, sig)
        eo.__do_end()
    end,

    content_pos_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.elm_interface_scrollable_content_pos_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    page_show = function(self, pagenumber_h, pagenumber_v)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_page_show(pagenumber_h, pagenumber_v)
        eo.__do_end()
    end,

    region_bring_in = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_region_bring_in(x, y, w, h)
        eo.__do_end()
    end,

    page_bring_in = function(self, pagenumber_h, pagenumber_v)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_page_bring_in(pagenumber_h, pagenumber_v)
        eo.__do_end()
    end,

    content_region_show = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_content_region_show(x, y, w, h)
        eo.__do_end()
    end,

    content_min_limit = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.elm_interface_scrollable_content_min_limit(w, h)
        eo.__do_end()
    end,

    __events = {
        ["changed"] = __lib._ELM_INTERFACE_SCROLLABLE_EVENT_CHANGED
    },

    __properties = {
        ["vbar_unpress_cb"] = { 0, 0, 0, 1, false, true },
        ["freeze"] = { 0, 0, 0, 1, false, true },
        ["step_size"] = { 0, 0, 2, 2, true, true },
        ["loop"] = { 0, 0, 2, 2, true, true },
        ["content_min_limit_cb"] = { 0, 0, 0, 1, false, true },
        ["animate_stop_cb"] = { 0, 0, 0, 1, false, true },
        ["scroll_up_cb"] = { 0, 0, 0, 1, false, true },
        ["gravity"] = { 0, 0, 2, 2, true, true },
        ["hbar_drag_cb"] = { 0, 0, 0, 1, false, true },
        ["content_viewport_resize_cb"] = { 0, 0, 0, 1, false, true },
        ["wheel_disabled"] = { 0, 0, 1, 1, true, true },
        ["scroll_down_cb"] = { 0, 0, 0, 1, false, true },
        ["movement_block"] = { 0, 0, 1, 1, true, true },
        ["extern_pan"] = { 0, 0, 0, 1, false, true },
        ["edge_left_cb"] = { 0, 0, 0, 1, false, true },
        ["content_size"] = { 0, 0, 2, 0, true, false },
        ["repeat_events"] = { 0, 0, 1, 1, true, true },
        ["content"] = { 0, 0, 0, 1, false, true },
        ["vbar_press_cb"] = { 0, 0, 0, 1, false, true },
        ["current_page"] = { 0, 0, 2, 0, true, false },
        ["hbar_press_cb"] = { 0, 0, 0, 1, false, true },
        ["objects"] = { 0, 0, 0, 2, false, true },
        ["page_snap_allow"] = { 0, 0, 2, 2, true, true },
        ["edge_top_cb"] = { 0, 0, 0, 1, false, true },
        ["animate_start_cb"] = { 0, 0, 0, 1, false, true },
        ["page_change_cb"] = { 0, 0, 0, 1, false, true },
        ["drag_start_cb"] = { 0, 0, 0, 1, false, true },
        ["vbar_drag_cb"] = { 0, 0, 0, 1, false, true },
        ["content_viewport_geometry"] = { 0, 0, 4, 0, true, false },
        ["momentum_animator_disabled"] = { 0, 0, 1, 1, true, true },
        ["hold"] = { 0, 0, 0, 1, false, true },
        ["bounce_allow"] = { 0, 0, 2, 2, true, true },
        ["scroll_right_cb"] = { 0, 0, 0, 1, false, true },
        ["page_size"] = { 0, 0, 2, 2, true, true },
        ["last_page"] = { 0, 0, 2, 0, true, false },
        ["policy"] = { 0, 0, 2, 2, true, true },
        ["paging"] = { 0, 0, 4, 4, true, true },
        ["edge_right_cb"] = { 0, 0, 0, 1, false, true },
        ["page_scroll_limit"] = { 0, 0, 2, 2, true, true },
        ["hbar_unpress_cb"] = { 0, 0, 0, 1, false, true },
        ["bounce_animator_disabled"] = { 0, 0, 1, 1, true, true },
        ["page_relative"] = { 0, 0, 0, 2, false, true },
        ["content_region"] = { 0, 0, 4, 4, true, true },
        ["single_direction"] = { 0, 0, 1, 1, true, true },
        ["mirrored"] = { 0, 0, 0, 1, false, true },
        ["drag_stop_cb"] = { 0, 0, 0, 1, false, true },
        ["edge_bottom_cb"] = { 0, 0, 0, 1, false, true },
        ["scroll_left_cb"] = { 0, 0, 0, 1, false, true },
        ["scroll_cb"] = { 0, 0, 0, 1, false, true }
    }
}
__body["__mixin_Elm_Interface_Scrollable"] = true

return M
