-- EFL LuaJIT bindings: elm_widget_item.eo (class Elm.Widget.Item)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_widget_item_class_get()
    eo.class_register("Elm_Widget_Item", {"Efl_Object"}, {"Elm_Interface_Atspi_Accessible", "Elm_Interface_Atspi_Component"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_widget_item_class_get(void);
    Eina_Bool elm_wdg_item_tooltip_window_mode_set(Eina_Bool disable);
    Eina_Bool elm_wdg_item_tooltip_window_mode_get(void);
    void elm_wdg_item_tooltip_style_set(const char * style);
    const char *elm_wdg_item_tooltip_style_get(void);
    void elm_wdg_item_cursor_set(const char * cursor);
    const char *elm_wdg_item_cursor_get(void);
    void elm_wdg_item_cursor_style_set(const char * style);
    const char *elm_wdg_item_cursor_style_get(void);
    void elm_wdg_item_cursor_engine_only_set(Eina_Bool engine_only);
    Eina_Bool elm_wdg_item_cursor_engine_only_get(void);
    void elm_wdg_item_part_content_set(const char * part, Efl_Canvas_Object * content);
    Efl_Canvas_Object *elm_wdg_item_part_content_get(const char * part);
    void elm_wdg_item_part_text_set(const char * part, const char * label);
    const char *elm_wdg_item_part_text_get(const char * part);
    void elm_wdg_item_focus_set(Eina_Bool focused);
    Eina_Bool elm_wdg_item_focus_get(void);
    void elm_wdg_item_style_set(const char * style);
    const char *elm_wdg_item_style_get(void);
    void elm_wdg_item_disabled_set(Eina_Bool disable);
    Eina_Bool elm_wdg_item_disabled_get(void);
    const Eina_List *elm_wdg_item_access_order_get(void);
    void elm_wdg_item_access_order_set(Eina_List * objs);
    Efl_Canvas_Object *elm_wdg_item_widget_get(void);
    void elm_wdg_item_del(void);
    void elm_wdg_item_tooltip_text_set(const char * text);
    void elm_wdg_item_tooltip_unset(void);
    void elm_wdg_item_cursor_unset(void);
    Efl_Canvas_Object *elm_wdg_item_part_content_unset(const char * part);
    void elm_wdg_item_signal_callback_add(const char * emission, const char * source, Elm_Object_Item_Signal_Cb func, void * data);
    void *elm_wdg_item_signal_callback_del(const char * emission, const char * source, Elm_Object_Item_Signal_Cb func);
    void elm_wdg_item_signal_emit(const char * emission, const char * source);
    void elm_wdg_item_access_info_set(const char * txt);
    Efl_Canvas_Object *elm_wdg_item_access_object_get(void);
    void elm_wdg_item_domain_translatable_part_text_set(const char * part, const char * domain, const char * label);
    const char *elm_wdg_item_translatable_part_text_get(const char * part);
    void elm_wdg_item_domain_part_text_translatable_set(const char * part, const char * domain, Eina_Bool translatable);
    Efl_Canvas_Object *elm_wdg_item_track(void);
    void elm_wdg_item_untrack(void);
    int elm_wdg_item_track_get(void);
    void elm_wdg_item_del_cb_set(Evas_Smart_Cb del_cb);
    void elm_wdg_item_tooltip_content_cb_set(Elm_Tooltip_Item_Content_Cb func, const void * data, Evas_Smart_Cb del_cb);
    Efl_Canvas_Object *elm_wdg_item_access_register(void);
    void elm_wdg_item_access_unregister(void);
    void elm_wdg_item_access_order_unset(void);
    Efl_Canvas_Object *elm_wdg_item_focus_next_object_get(Elm_Focus_Direction dir);
    void elm_wdg_item_focus_next_object_set(Efl_Canvas_Object * next, Elm_Focus_Direction dir);
    Elm_Widget_Item *elm_wdg_item_focus_next_item_get(Elm_Focus_Direction dir);
    void elm_wdg_item_focus_next_item_set(Elm_Widget_Item * next_item, Elm_Focus_Direction dir);
]]

local __M = util.get_namespace(M, { "widget" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    tooltip_window_mode_set = function(self, disable)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_tooltip_window_mode_set(disable)
        eo.__do_end()
    end,

    tooltip_window_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_tooltip_window_mode_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    tooltip_style_set = function(self, style)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_tooltip_style_set(style)
        eo.__do_end()
    end,

    tooltip_style_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_tooltip_style_get()
        eo.__do_end()
        return v
    end,

    cursor_set = function(self, cursor)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_cursor_set(cursor)
        eo.__do_end()
    end,

    cursor_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_cursor_get()
        eo.__do_end()
        return v
    end,

    cursor_style_set = function(self, style)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_cursor_style_set(style)
        eo.__do_end()
    end,

    cursor_style_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_cursor_style_get()
        eo.__do_end()
        return v
    end,

    cursor_engine_only_set = function(self, engine_only)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_cursor_engine_only_set(engine_only)
        eo.__do_end()
    end,

    cursor_engine_only_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_cursor_engine_only_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_content_set = function(self, part, content)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_part_content_set(part, content)
        eo.__do_end()
    end,

    part_content_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_part_content_get(part)
        eo.__do_end()
        return v
    end,

    part_text_set = function(self, part, label)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_part_text_set(part, label)
        eo.__do_end()
    end,

    part_text_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_part_text_get(part)
        eo.__do_end()
        return v
    end,

    focus_set = function(self, focused)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_focus_set(focused)
        eo.__do_end()
    end,

    focus_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_focus_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    style_set = function(self, style)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_style_set(style)
        eo.__do_end()
    end,

    style_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_style_get()
        eo.__do_end()
        return v
    end,

    disabled_set = function(self, disable)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_disabled_set(disable)
        eo.__do_end()
    end,

    disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    access_order_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_access_order_get()
        eo.__do_end()
        return v
    end,

    access_order_set = function(self, objs)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_access_order_set(objs)
        eo.__do_end()
    end,

    widget_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_widget_get()
        eo.__do_end()
        return v
    end,

    del = function(self)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_del()
        eo.__do_end()
    end,

    tooltip_text_set = function(self, text)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_tooltip_text_set(text)
        eo.__do_end()
    end,

    tooltip_unset = function(self)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_tooltip_unset()
        eo.__do_end()
    end,

    cursor_unset = function(self)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_cursor_unset()
        eo.__do_end()
    end,

    part_content_unset = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_part_content_unset(part)
        eo.__do_end()
        return v
    end,

    signal_callback_add = function(self, emission, source, func, data)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_signal_callback_add(emission, source, func, data)
        eo.__do_end()
    end,

    signal_callback_del = function(self, emission, source, func)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_signal_callback_del(emission, source, func)
        eo.__do_end()
        return v
    end,

    signal_emit = function(self, emission, source)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_signal_emit(emission, source)
        eo.__do_end()
    end,

    access_info_set = function(self, txt)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_access_info_set(txt)
        eo.__do_end()
    end,

    access_object_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_access_object_get()
        eo.__do_end()
        return v
    end,

    domain_translatable_part_text_set = function(self, part, domain, label)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_domain_translatable_part_text_set(part, domain, label)
        eo.__do_end()
    end,

    translatable_part_text_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_translatable_part_text_get(part)
        eo.__do_end()
        return v
    end,

    domain_part_text_translatable_set = function(self, part, domain, translatable)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_domain_part_text_translatable_set(part, domain, translatable)
        eo.__do_end()
    end,

    track = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_track()
        eo.__do_end()
        return v
    end,

    untrack = function(self)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_untrack()
        eo.__do_end()
    end,

    track_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_track_get()
        eo.__do_end()
        return tonumber(v)
    end,

    del_cb_set = function(self, del_cb)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_del_cb_set(del_cb)
        eo.__do_end()
    end,

    tooltip_content_cb_set = function(self, func, data, del_cb)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_tooltip_content_cb_set(func, data, del_cb)
        eo.__do_end()
    end,

    access_register = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_access_register()
        eo.__do_end()
        return v
    end,

    access_unregister = function(self)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_access_unregister()
        eo.__do_end()
    end,

    access_order_unset = function(self)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_access_order_unset()
        eo.__do_end()
    end,

    focus_next_object_get = function(self, dir)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_focus_next_object_get(dir)
        eo.__do_end()
        return v
    end,

    focus_next_object_set = function(self, next, dir)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_focus_next_object_set(next, dir)
        eo.__do_end()
    end,

    focus_next_item_get = function(self, dir)
        eo.__do_start(self, __class)
        local v = __lib.elm_wdg_item_focus_next_item_get(dir)
        eo.__do_end()
        return v
    end,

    focus_next_item_set = function(self, next_item, dir)
        eo.__do_start(self, __class)
        __lib.elm_wdg_item_focus_next_item_set(next_item, dir)
        eo.__do_end()
    end,

    __properties = {
        ["cursor"] = { 0, 0, 1, 1, true, true },
        ["focus"] = { 0, 0, 1, 1, true, true },
        ["tooltip_style"] = { 0, 0, 1, 1, true, true },
        ["part_content"] = { 1, 1, 1, 1, true, true },
        ["cursor_engine_only"] = { 0, 0, 1, 1, true, true },
        ["part_text"] = { 1, 1, 1, 1, true, true },
        ["style"] = { 0, 0, 1, 1, true, true },
        ["cursor_style"] = { 0, 0, 1, 1, true, true },
        ["tooltip_window_mode"] = { 0, 0, 1, 1, true, true },
        ["disabled"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Item = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Widget_Item").__eo_ctor,
                            1, ...)
end

return M
