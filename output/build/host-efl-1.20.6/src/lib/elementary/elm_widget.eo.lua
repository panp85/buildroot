-- EFL LuaJIT bindings: elm_widget.eo (class Elm.Widget)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_widget_class_get()
    eo.class_register("Elm_Widget", {"Efl_Canvas_Group"}, {"Elm_Interface_Atspi_Accessible", "Elm_Interface_Atspi_Component", "Efl_Ui_Focus_User", "Efl_Ui_Focus_Object", "Efl_Ui_Base"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_widget_class_get(void);
    void elm_obj_widget_focus_set(Eina_Bool focus);
    Eina_Bool elm_obj_widget_focus_get(void);
    void elm_obj_widget_drag_lock_y_set(Eina_Bool lock);
    Eina_Bool elm_obj_widget_drag_lock_y_get(void);
    Eina_Bool elm_obj_widget_focus_highlight_style_set(const char * style);
    const char *elm_obj_widget_focus_highlight_style_get(void);
    void elm_obj_widget_tree_unfocusable_set(Eina_Bool tree_unfocusable);
    Eina_Bool elm_obj_widget_tree_unfocusable_get(void);
    void elm_obj_widget_theme_set(Elm_Theme * th);
    Elm_Theme *elm_obj_widget_theme_get(void);
    void elm_obj_widget_disabled_set(Eina_Bool disabled);
    Eina_Bool elm_obj_widget_disabled_get(void);
    void elm_obj_widget_highlight_ignore_set(Eina_Bool ignore);
    Eina_Bool elm_obj_widget_highlight_ignore_get(void);
    void elm_obj_widget_orientation_mode_disabled_set(Eina_Bool disabled);
    Eina_Bool elm_obj_widget_orientation_mode_disabled_get(void);
    Elm_Theme_Apply elm_obj_widget_style_set(const char * style);
    const char *elm_obj_widget_style_get(void);
    void elm_obj_widget_focus_custom_chain_set(Eina_List * objs);
    const Eina_List *elm_obj_widget_focus_custom_chain_get(void);
    void elm_obj_widget_can_focus_set(Eina_Bool can_focus);
    Eina_Bool elm_obj_widget_can_focus_get(void);
    void elm_obj_widget_highlight_in_theme_set(Eina_Bool highlight);
    Eina_Bool elm_obj_widget_highlight_in_theme_get(void);
    void elm_obj_widget_access_info_set(const char * txt);
    const char *elm_obj_widget_access_info_get(void);
    void elm_obj_widget_drag_lock_x_set(Eina_Bool lock);
    Eina_Bool elm_obj_widget_drag_lock_x_get(void);
    void elm_obj_widget_access_highlight_in_theme_set(Eina_Bool highlight);
    Eina_Bool elm_obj_widget_access_highlight_in_theme_get(void);
    void elm_obj_widget_focus_region_show_mode_set(Elm_Focus_Region_Show_Mode mode);
    Elm_Focus_Region_Show_Mode elm_obj_widget_focus_region_show_mode_get(void);
    void elm_obj_widget_parent_highlight_set(Eina_Bool highlighted);
    Elm_Theme_Apply elm_obj_widget_theme_object_set(Efl_Canvas_Object * edj, const char * wname, const char * welement, const char * wstyle);
    void elm_obj_widget_hover_object_set(Efl_Canvas_Object * sobj);
    void elm_obj_widget_on_show_region_hook_set(region_hook_func_type func, void * data);
    void elm_obj_widget_domain_part_text_translatable_set(const char * part, const char * domain, Eina_Bool translatable);
    void elm_obj_widget_orientation_set(int rotation);
    void elm_obj_widget_resize_object_set(Efl_Canvas_Object * sobj, Eina_Bool sub_obj);
    void elm_obj_widget_domain_translatable_part_text_set(const char * part, const char * domain, const char * label);
    Eina_List *elm_obj_widget_scrollable_children_get(void);
    int elm_obj_widget_scroll_hold_get(void);
    int elm_obj_widget_drag_child_locked_y_get(void);
    void elm_obj_widget_item_loop_enabled_set(Eina_Bool enable);
    Eina_Bool elm_obj_widget_item_loop_enabled_get(void);
    Eina_Bool elm_obj_widget_child_can_focus_get(void);
    int elm_obj_widget_scroll_freeze_get(void);
    Eina_Bool elm_obj_widget_focus_region_get(int *x, int *y, int *w, int *h);
    Efl_Canvas_Object *elm_obj_widget_top_get(void);
    unsigned int elm_obj_widget_focus_order_get(void);
    int elm_obj_widget_drag_child_locked_x_get(void);
    Eina_List *elm_obj_widget_can_focus_child_list_get(void);
    Elm_Widget_Item *elm_obj_widget_focused_item_get(void);
    void elm_obj_widget_parents_bounce_get(Eina_Bool *horiz, Eina_Bool *vert);
    Efl_Canvas_Object *elm_obj_widget_parent_widget_get(void);
    Eina_Bool elm_obj_widget_highlight_get(void);
    Efl_Canvas_Object *elm_obj_widget_focused_object_get(void);
    void elm_obj_widget_parent2_set(Efl_Canvas_Object * parent);
    Efl_Canvas_Object *elm_obj_widget_parent2_get(void);
    void elm_obj_widget_part_text_set(const char * part, const char * label);
    const char *elm_obj_widget_part_text_get(const char * part);
    void elm_obj_widget_focus_move_policy_set(Efl_Ui_Focus_Move_Policy policy);
    Efl_Ui_Focus_Move_Policy elm_obj_widget_focus_move_policy_get(void);
    void elm_obj_widget_focus_move_policy_automatic_set(Eina_Bool automatic);
    Eina_Bool elm_obj_widget_focus_move_policy_automatic_get(void);
    Efl_Canvas_Object *elm_obj_widget_newest_focus_order_get(unsigned int *newest_focus_order, Eina_Bool can_focus_only);
    void elm_obj_widget_scroll_hold_push(void);
    void elm_obj_widget_focus_next_object_set(Efl_Canvas_Object * next, Elm_Focus_Direction dir);
    Efl_Canvas_Object *elm_obj_widget_focus_next_object_get(Elm_Focus_Direction dir);
    void elm_obj_widget_focus_next_item_set(Elm_Widget_Item * next_item, Elm_Focus_Direction dir);
    Elm_Widget_Item *elm_obj_widget_focus_next_item_get(Elm_Focus_Direction dir);
    void elm_obj_widget_focus_tree_unfocusable_handle(void);
    void elm_obj_widget_focus_custom_chain_prepend(Efl_Canvas_Object * child, Efl_Canvas_Object * relative_child);
    const char *elm_obj_widget_part_text_translate(const char * part, const char * text);
    void elm_obj_widget_focus_highlight_geometry_get(int *x, int *y, int *w, int *h);
    Eina_Bool elm_obj_widget_activate(Elm_Activate act);
    Eina_Bool elm_obj_widget_sub_object_add(Efl_Canvas_Object * sobj);
    Eina_Bool elm_obj_widget_focus_direction_manager_is(void);
    Eina_Bool elm_obj_widget_event(Efl_Canvas_Object * source, Evas_Callback_Type type, void * event_info);
    void elm_obj_widget_access(Eina_Bool acs);
    Eina_Bool elm_obj_widget_on_focus(Elm_Widget_Item * item);
    Eina_Bool elm_obj_widget_on_focus_region(int *x, int *y, int *w, int *h);
    void elm_obj_widget_focus_cycle(Elm_Focus_Direction dir);
    Eina_Bool elm_obj_widget_focus_direction(const Efl_Canvas_Object * base, double degree, Efl_Canvas_Object * *direction, Elm_Widget_Item * *direction_item, double *weight);
    void elm_obj_widget_signal_callback_add(const char * emission, const char * source, Edje_Signal_Cb func, void * data);
    Eina_Bool elm_obj_widget_focus_next_manager_is(void);
    Efl_Canvas_Object *elm_obj_widget_name_find(const char * name, int recurse);
    Eina_Bool elm_obj_widget_focus_list_direction_get(const Efl_Canvas_Object * base, const Eina_List * items, list_data_get_func_type list_data_get, double degree, Efl_Canvas_Object * *direction, Elm_Widget_Item * *direction_item, double *weight);
    void elm_obj_widget_focused_object_clear(void);
    Eina_Bool elm_obj_widget_focus_direction_go(double degree);
    void elm_obj_widget_show_region_set(int x, int y, int w, int h, Eina_Bool forceshow);
    void elm_obj_widget_show_region_get(int *x, int *y, int *w, int *h);
    void elm_obj_widget_scroll_freeze_pop(void);
    void elm_obj_widget_tooltip_del(Elm_Tooltip * tt);
    Eina_Bool elm_obj_widget_focus_next_get(Elm_Focus_Direction dir, Efl_Canvas_Object * *next, Elm_Widget_Item * *next_item);
    const char *elm_obj_widget_translatable_part_text_get(const char * part);
    void elm_obj_widget_focus_restore(void);
    void elm_obj_widget_scroll_hold_pop(void);
    Eina_Bool elm_obj_widget_translate(void);
    void elm_obj_widget_scroll_freeze_push(void);
    void elm_obj_widget_focus_custom_chain_unset(void);
    void elm_obj_widget_focus_steal(Elm_Widget_Item * item);
    void elm_obj_widget_focus_hide_handle(void);
    Eina_Bool elm_obj_widget_focus_next(Elm_Focus_Direction dir, Efl_Canvas_Object * *next, Elm_Widget_Item * *next_item);
    Eina_Bool elm_obj_widget_focus_list_next_get(const Eina_List * items, list_data_get_func_type list_data_get, Elm_Focus_Direction dir, Efl_Canvas_Object * *next, Elm_Widget_Item * *next_item);
    void elm_obj_widget_focus_mouse_up_handle(void);
    Elm_Theme_Apply elm_obj_widget_theme_apply(void);
    Eina_Bool elm_obj_widget_focus_direction_get(const Efl_Canvas_Object * base, double degree, Efl_Canvas_Object * *direction, Elm_Widget_Item * *direction_item, double *weight);
    void *elm_obj_widget_signal_callback_del(const char * emission, const char * source, Edje_Signal_Cb func);
    void elm_obj_widget_signal_emit(const char * emission, const char * source);
    Eina_Bool elm_obj_widget_disable(void);
    Eina_Bool elm_obj_widget_sub_object_del(Efl_Canvas_Object * sobj);
    void elm_obj_widget_tooltip_add(Elm_Tooltip * tt);
    void elm_obj_widget_focus_region_show(void);
    void elm_obj_widget_focus_disabled_handle(void);
    void elm_obj_widget_focus_custom_chain_append(Efl_Canvas_Object * child, Efl_Canvas_Object * relative_child);
    void elm_obj_widget_focus_reconfigure(void);
    Eina_Bool elm_obj_widget_focus_register(Efl_Ui_Focus_Manager * manager, Efl_Ui_Focus_Object * logical, Eina_Bool *logical_flag);
    Efl_Ui_Focus_Manager *elm_obj_widget_focus_manager_factory(Efl_Ui_Focus_Object * root);
    extern const Eo_Event_Description _ELM_WIDGET_EVENT_MOVED;
    extern const Eo_Event_Description _ELM_WIDGET_EVENT_FOCUSED;
    extern const Eo_Event_Description _ELM_WIDGET_EVENT_UNFOCUSED;
    extern const Eo_Event_Description _ELM_WIDGET_EVENT_LANGUAGE_CHANGED;
    extern const Eo_Event_Description _ELM_WIDGET_EVENT_ACCESS_CHANGED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    focus_set = function(self, focus)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_set(focus)
        eo.__do_end()
    end,

    focus_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focus_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    drag_lock_y_set = function(self, lock)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_drag_lock_y_set(lock)
        eo.__do_end()
    end,

    drag_lock_y_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_drag_lock_y_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    focus_highlight_style_set = function(self, style)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focus_highlight_style_set(style)
        eo.__do_end()
    end,

    focus_highlight_style_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focus_highlight_style_get()
        eo.__do_end()
        return v
    end,

    tree_unfocusable_set = function(self, tree_unfocusable)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_tree_unfocusable_set(tree_unfocusable)
        eo.__do_end()
    end,

    tree_unfocusable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_tree_unfocusable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    theme_set = function(self, th)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_theme_set(th)
        eo.__do_end()
    end,

    theme_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_theme_get()
        eo.__do_end()
        return v
    end,

    disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_disabled_set(disabled)
        eo.__do_end()
    end,

    disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    highlight_ignore_set = function(self, ignore)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_highlight_ignore_set(ignore)
        eo.__do_end()
    end,

    highlight_ignore_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_highlight_ignore_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    orientation_mode_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_orientation_mode_disabled_set(disabled)
        eo.__do_end()
    end,

    orientation_mode_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_orientation_mode_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    style_set = function(self, style)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_style_set(style)
        eo.__do_end()
    end,

    style_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_style_get()
        eo.__do_end()
        return v
    end,

    focus_custom_chain_set = function(self, objs)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_custom_chain_set(objs)
        eo.__do_end()
    end,

    focus_custom_chain_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focus_custom_chain_get()
        eo.__do_end()
        return v
    end,

    can_focus_set = function(self, can_focus)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_can_focus_set(can_focus)
        eo.__do_end()
    end,

    can_focus_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_can_focus_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    highlight_in_theme_set = function(self, highlight)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_highlight_in_theme_set(highlight)
        eo.__do_end()
    end,

    highlight_in_theme_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_highlight_in_theme_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    access_info_set = function(self, txt)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_access_info_set(txt)
        eo.__do_end()
    end,

    access_info_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_access_info_get()
        eo.__do_end()
        return v
    end,

    drag_lock_x_set = function(self, lock)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_drag_lock_x_set(lock)
        eo.__do_end()
    end,

    drag_lock_x_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_drag_lock_x_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    access_highlight_in_theme_set = function(self, highlight)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_access_highlight_in_theme_set(highlight)
        eo.__do_end()
    end,

    access_highlight_in_theme_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_access_highlight_in_theme_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    focus_region_show_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_region_show_mode_set(mode)
        eo.__do_end()
    end,

    focus_region_show_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focus_region_show_mode_get()
        eo.__do_end()
        return v
    end,

    parent_highlight_set = function(self, highlighted)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_parent_highlight_set(highlighted)
        eo.__do_end()
    end,

    theme_object_set = function(self, edj, wname, welement, wstyle)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_theme_object_set(edj, wname, welement, wstyle)
        eo.__do_end()
    end,

    hover_object_set = function(self, sobj)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_hover_object_set(sobj)
        eo.__do_end()
    end,

    on_show_region_hook_set = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_on_show_region_hook_set(func, data)
        eo.__do_end()
    end,

    domain_part_text_translatable_set = function(self, part, domain, translatable)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_domain_part_text_translatable_set(part, domain, translatable)
        eo.__do_end()
    end,

    orientation_set = function(self, rotation)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_orientation_set(rotation)
        eo.__do_end()
    end,

    resize_object_set = function(self, sobj, sub_obj)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_resize_object_set(sobj, sub_obj)
        eo.__do_end()
    end,

    domain_translatable_part_text_set = function(self, part, domain, label)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_domain_translatable_part_text_set(part, domain, label)
        eo.__do_end()
    end,

    scrollable_children_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_scrollable_children_get()
        eo.__do_end()
    end,

    scroll_hold_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_scroll_hold_get()
        eo.__do_end()
    end,

    drag_child_locked_y_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_drag_child_locked_y_get()
        eo.__do_end()
    end,

    item_loop_enabled_set = function(self, enable)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_item_loop_enabled_set(enable)
        eo.__do_end()
    end,

    item_loop_enabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_item_loop_enabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    child_can_focus_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_child_can_focus_get()
        eo.__do_end()
    end,

    scroll_freeze_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_scroll_freeze_get()
        eo.__do_end()
    end,

    focus_region_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        local v = __lib.elm_obj_widget_focus_region_get(x, y, w, h)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    top_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_top_get()
        eo.__do_end()
    end,

    focus_order_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focus_order_get()
        eo.__do_end()
    end,

    drag_child_locked_x_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_drag_child_locked_x_get()
        eo.__do_end()
    end,

    can_focus_child_list_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_can_focus_child_list_get()
        eo.__do_end()
    end,

    focused_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focused_item_get()
        eo.__do_end()
    end,

    parents_bounce_get = function(self)
        eo.__do_start(self, __class)
        local horiz = ffi.new("Eina_Bool[1]")
        local vert = ffi.new("Eina_Bool[1]")
        __lib.elm_obj_widget_parents_bounce_get(horiz, vert)
        eo.__do_end()
        return ((horiz[0]) ~= 0), ((vert[0]) ~= 0)
    end,

    parent_widget_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_parent_widget_get()
        eo.__do_end()
    end,

    highlight_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_highlight_get()
        eo.__do_end()
    end,

    focused_object_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focused_object_get()
        eo.__do_end()
    end,

    parent2_set = function(self, parent)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_parent2_set(parent)
        eo.__do_end()
    end,

    parent2_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_parent2_get()
        eo.__do_end()
        return v
    end,

    part_text_set = function(self, part, label)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_part_text_set(part, label)
        eo.__do_end()
    end,

    part_text_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_part_text_get(part)
        eo.__do_end()
        return v
    end,

    focus_move_policy_set = function(self, policy)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_move_policy_set(policy)
        eo.__do_end()
    end,

    focus_move_policy_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focus_move_policy_get()
        eo.__do_end()
        return v
    end,

    focus_move_policy_automatic_set = function(self, automatic)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_move_policy_automatic_set(automatic)
        eo.__do_end()
    end,

    focus_move_policy_automatic_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focus_move_policy_automatic_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    newest_focus_order_get = function(self, can_focus_only)
        eo.__do_start(self, __class)
        local newest_focus_order = ffi.new("unsigned int[1]")
        local v = __lib.elm_obj_widget_newest_focus_order_get(newest_focus_order, can_focus_only)
        eo.__do_end()
        return v, newest_focus_order[0]
    end,

    scroll_hold_push = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_scroll_hold_push()
        eo.__do_end()
    end,

    focus_next_object_set = function(self, next, dir)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_next_object_set(next, dir)
        eo.__do_end()
    end,

    focus_next_object_get = function(self, dir)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focus_next_object_get(dir)
        eo.__do_end()
        return v
    end,

    focus_next_item_set = function(self, next_item, dir)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_next_item_set(next_item, dir)
        eo.__do_end()
    end,

    focus_next_item_get = function(self, dir)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focus_next_item_get(dir)
        eo.__do_end()
        return v
    end,

    focus_tree_unfocusable_handle = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_tree_unfocusable_handle()
        eo.__do_end()
    end,

    focus_custom_chain_prepend = function(self, child, relative_child)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_custom_chain_prepend(child, relative_child)
        eo.__do_end()
    end,

    part_text_translate = function(self, part, text)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_part_text_translate(part, text)
        eo.__do_end()
        return v
    end,

    focus_highlight_geometry_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.elm_obj_widget_focus_highlight_geometry_get(x, y, w, h)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    activate = function(self, act)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_activate(act)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    sub_object_add = function(self, sobj)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_sub_object_add(sobj)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    focus_direction_manager_is = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focus_direction_manager_is()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    widget_event = function(self, source, type, event_info)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_event(source, type, event_info)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    access = function(self, acs)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_access(acs)
        eo.__do_end()
    end,

    on_focus = function(self, item)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_on_focus(item)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    on_focus_region = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        local v = __lib.elm_obj_widget_on_focus_region(x, y, w, h)
        eo.__do_end()
        return ((v) ~= 0), tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    focus_cycle = function(self, dir)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_cycle(dir)
        eo.__do_end()
    end,

    focus_direction = function(self, base, degree)
        eo.__do_start(self, __class)
        local direction = ffi.new("Efl_Canvas_Object *[1]")
        local direction_item = ffi.new("Elm_Widget_Item *[1]")
        local weight = ffi.new("double[1]")
        local v = __lib.elm_obj_widget_focus_direction(base, degree, direction, direction_item, weight)
        eo.__do_end()
        return ((v) ~= 0), direction[0], direction_item[0], tonumber(weight[0])
    end,

    signal_callback_add = function(self, emission, source, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_signal_callback_add(emission, source, func, data)
        eo.__do_end()
    end,

    focus_next_manager_is = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focus_next_manager_is()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    name_find = function(self, name, recurse)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_name_find(name, recurse)
        eo.__do_end()
        return v
    end,

    focus_list_direction_get = function(self, base, items, list_data_get, degree)
        eo.__do_start(self, __class)
        local direction = ffi.new("Efl_Canvas_Object *[1]")
        local direction_item = ffi.new("Elm_Widget_Item *[1]")
        local weight = ffi.new("double[1]")
        local v = __lib.elm_obj_widget_focus_list_direction_get(base, items, list_data_get, degree, direction, direction_item, weight)
        eo.__do_end()
        return ((v) ~= 0), direction[0], direction_item[0], tonumber(weight[0])
    end,

    focused_object_clear = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focused_object_clear()
        eo.__do_end()
    end,

    focus_direction_go = function(self, degree)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focus_direction_go(degree)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    show_region_set = function(self, x, y, w, h, forceshow)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_show_region_set(x, y, w, h, forceshow)
        eo.__do_end()
    end,

    show_region_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.elm_obj_widget_show_region_get(x, y, w, h)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    scroll_freeze_pop = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_scroll_freeze_pop()
        eo.__do_end()
    end,

    tooltip_del = function(self, tt)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_tooltip_del(tt)
        eo.__do_end()
    end,

    focus_next_get = function(self, dir)
        eo.__do_start(self, __class)
        local next = ffi.new("Efl_Canvas_Object *[1]")
        local next_item = ffi.new("Elm_Widget_Item *[1]")
        local v = __lib.elm_obj_widget_focus_next_get(dir, next, next_item)
        eo.__do_end()
        return ((v) ~= 0), next[0], next_item[0]
    end,

    translatable_part_text_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_translatable_part_text_get(part)
        eo.__do_end()
        return v
    end,

    focus_restore = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_restore()
        eo.__do_end()
    end,

    scroll_hold_pop = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_scroll_hold_pop()
        eo.__do_end()
    end,

    translate = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_translate()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    scroll_freeze_push = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_scroll_freeze_push()
        eo.__do_end()
    end,

    focus_custom_chain_unset = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_custom_chain_unset()
        eo.__do_end()
    end,

    focus_steal = function(self, item)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_steal(item)
        eo.__do_end()
    end,

    focus_hide_handle = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_hide_handle()
        eo.__do_end()
    end,

    focus_next = function(self, dir)
        eo.__do_start(self, __class)
        local next = ffi.new("Efl_Canvas_Object *[1]")
        local next_item = ffi.new("Elm_Widget_Item *[1]")
        local v = __lib.elm_obj_widget_focus_next(dir, next, next_item)
        eo.__do_end()
        return ((v) ~= 0), next[0], next_item[0]
    end,

    focus_list_next_get = function(self, items, list_data_get, dir)
        eo.__do_start(self, __class)
        local next = ffi.new("Efl_Canvas_Object *[1]")
        local next_item = ffi.new("Elm_Widget_Item *[1]")
        local v = __lib.elm_obj_widget_focus_list_next_get(items, list_data_get, dir, next, next_item)
        eo.__do_end()
        return ((v) ~= 0), next[0], next_item[0]
    end,

    focus_mouse_up_handle = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_mouse_up_handle()
        eo.__do_end()
    end,

    theme_apply = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_theme_apply()
        eo.__do_end()
        return v
    end,

    focus_direction_get = function(self, base, degree)
        eo.__do_start(self, __class)
        local direction = ffi.new("Efl_Canvas_Object *[1]")
        local direction_item = ffi.new("Elm_Widget_Item *[1]")
        local weight = ffi.new("double[1]")
        local v = __lib.elm_obj_widget_focus_direction_get(base, degree, direction, direction_item, weight)
        eo.__do_end()
        return ((v) ~= 0), direction[0], direction_item[0], tonumber(weight[0])
    end,

    signal_callback_del = function(self, emission, source, func)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_signal_callback_del(emission, source, func)
        eo.__do_end()
        return v
    end,

    signal_emit = function(self, emission, source)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_signal_emit(emission, source)
        eo.__do_end()
    end,

    disable = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_disable()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    sub_object_del = function(self, sobj)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_sub_object_del(sobj)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    tooltip_add = function(self, tt)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_tooltip_add(tt)
        eo.__do_end()
    end,

    focus_region_show = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_region_show()
        eo.__do_end()
    end,

    focus_disabled_handle = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_disabled_handle()
        eo.__do_end()
    end,

    focus_custom_chain_append = function(self, child, relative_child)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_custom_chain_append(child, relative_child)
        eo.__do_end()
    end,

    focus_reconfigure = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_widget_focus_reconfigure()
        eo.__do_end()
    end,

    focus_register = function(self, manager, logical, logical_flag)
        eo.__do_start(self, __class)
        local logical_flag = ffi.new("Eina_Bool[1]")
        local v = __lib.elm_obj_widget_focus_register(manager, logical, logical_flag)
        eo.__do_end()
        return ((v) ~= 0), ((logical_flag[0]) ~= 0)
    end,

    focus_manager_factory = function(self, root)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_widget_focus_manager_factory(root)
        eo.__do_end()
        return v
    end,

    __events = {
        ["moved"] = __lib._ELM_WIDGET_EVENT_MOVED,
        ["focused"] = __lib._ELM_WIDGET_EVENT_FOCUSED,
        ["unfocused"] = __lib._ELM_WIDGET_EVENT_UNFOCUSED,
        ["language,changed"] = __lib._ELM_WIDGET_EVENT_LANGUAGE_CHANGED,
        ["access,changed"] = __lib._ELM_WIDGET_EVENT_ACCESS_CHANGED
    },

    __properties = {
        ["focus_order"] = { 0, 0, 1, 0, true, false },
        ["focus"] = { 0, 0, 1, 1, true, true },
        ["child_can_focus"] = { 0, 0, 1, 0, true, false },
        ["disabled"] = { 0, 0, 1, 1, true, true },
        ["hover_object"] = { 0, 0, 0, 1, false, true },
        ["access_highlight_in_theme"] = { 0, 0, 1, 1, true, true },
        ["can_focus_child_list"] = { 0, 0, 1, 0, true, false },
        ["theme"] = { 0, 0, 1, 1, true, true },
        ["focus_region_show_mode"] = { 0, 0, 1, 1, true, true },
        ["scrollable_children"] = { 0, 0, 1, 0, true, false },
        ["parent_highlight"] = { 0, 0, 0, 1, false, true },
        ["resize_object"] = { 0, 0, 0, 2, false, true },
        ["focus_custom_chain"] = { 0, 0, 1, 1, true, true },
        ["scroll_hold"] = { 0, 0, 1, 0, true, false },
        ["parents_bounce"] = { 0, 0, 2, 0, true, false },
        ["theme_object"] = { 0, 0, 0, 4, false, true },
        ["focus_move_policy_automatic"] = { 0, 0, 1, 1, true, true },
        ["highlight_in_theme"] = { 0, 0, 1, 1, true, true },
        ["top"] = { 0, 0, 1, 0, true, false },
        ["item_loop_enabled"] = { 0, 0, 1, 1, true, true },
        ["focus_highlight_style"] = { 0, 0, 1, 1, true, true },
        ["focus_move_policy"] = { 0, 0, 1, 1, true, true },
        ["part_text"] = { 1, 1, 1, 1, true, true },
        ["parent_widget"] = { 0, 0, 1, 0, true, false },
        ["focused_object"] = { 0, 0, 1, 0, true, false },
        ["highlight"] = { 0, 0, 1, 0, true, false },
        ["parent2"] = { 0, 0, 1, 1, true, true },
        ["drag_lock_y"] = { 0, 0, 1, 1, true, true },
        ["focused_item"] = { 0, 0, 1, 0, true, false },
        ["domain_translatable_part_text"] = { 0, 0, 0, 3, false, true },
        ["access_info"] = { 0, 0, 1, 1, true, true },
        ["orientation_mode_disabled"] = { 0, 0, 1, 1, true, true },
        ["style"] = { 0, 0, 1, 1, true, true },
        ["drag_lock_x"] = { 0, 0, 1, 1, true, true },
        ["can_focus"] = { 0, 0, 1, 1, true, true },
        ["on_show_region_hook"] = { 0, 0, 0, 2, false, true },
        ["focus_region"] = { 0, 0, 4, 0, true, false },
        ["domain_part_text_translatable"] = { 0, 0, 0, 3, false, true },
        ["orientation"] = { 0, 0, 0, 1, false, true },
        ["scroll_freeze"] = { 0, 0, 1, 0, true, false },
        ["drag_child_locked_x"] = { 0, 0, 1, 0, true, false },
        ["tree_unfocusable"] = { 0, 0, 1, 1, true, true },
        ["highlight_ignore"] = { 0, 0, 1, 1, true, true },
        ["drag_child_locked_y"] = { 0, 0, 1, 0, true, false }
    }
}

M.Widget = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Widget").__eo_ctor,
                            1, ...)
end

return M
