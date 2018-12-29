-- EFL LuaJIT bindings: elm_layout.eo (class Elm.Layout)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_layout_class_get()
    eo.class_register("Elm_Layout", {"Elm_Widget"}, {"Efl_Part", "Efl_Container", "Efl_File", "Efl_Ui_View", "Efl_Ui_Model_Connect", "Efl_Ui_Model_Factory_Connect"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_layout_class_get(void);
    Eina_Bool elm_obj_layout_edje_object_can_access_set(Eina_Bool can_access);
    Eina_Bool elm_obj_layout_edje_object_can_access_get(void);
    Eina_Bool elm_obj_layout_theme_set(const char * klass, const char * group, const char * style);
    Efl_Canvas_Object *elm_obj_layout_edje_get(void);
    Eina_Bool elm_obj_layout_part_cursor_engine_only_set(const char * part_name, Eina_Bool engine_only);
    Eina_Bool elm_obj_layout_part_cursor_engine_only_get(const char * part_name);
    int elm_obj_layout_freeze(void);
    Eina_Bool elm_obj_layout_theme_enable(void);
    void elm_obj_layout_sizing_eval(void);
    void elm_obj_layout_sizing_restricted_eval(Eina_Bool width, Eina_Bool height);
    Eina_Bool elm_obj_layout_part_cursor_style_set(const char * part_name, const char * style);
    const char *elm_obj_layout_part_cursor_style_get(const char * part_name);
    void elm_obj_layout_signal_callback_add(const char * emission, const char * source, Edje_Signal_Cb func, void * data);
    Eina_Bool elm_obj_layout_part_cursor_set(const char * part_name, const char * cursor);
    const char *elm_obj_layout_part_cursor_get(const char * part_name);
    Eina_Bool elm_obj_layout_sub_object_add_enable(void);
    const char *elm_obj_layout_data_get(const char * key);
    void *elm_obj_layout_signal_callback_del(const char * emission, const char * source, Edje_Signal_Cb func);
    int elm_obj_layout_thaw(void);
    void elm_obj_layout_signal_emit(const char * emission, const char * source);
    Eina_Bool elm_obj_layout_part_cursor_unset(const char * part_name);
    extern const Eo_Event_Description _ELM_LAYOUT_EVENT_THEME_CHANGED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    edje_object_can_access_set = function(self, can_access)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_edje_object_can_access_set(can_access)
        eo.__do_end()
    end,

    edje_object_can_access_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_edje_object_can_access_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    theme_set = function(self, klass, group, style)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_theme_set(klass, group, style)
        eo.__do_end()
    end,

    edje_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_edje_get()
        eo.__do_end()
    end,

    part_cursor_engine_only_set = function(self, part_name, engine_only)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_part_cursor_engine_only_set(part_name, engine_only)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_cursor_engine_only_get = function(self, part_name)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_part_cursor_engine_only_get(part_name)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    freeze = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_freeze()
        eo.__do_end()
        return tonumber(v)
    end,

    theme_enable = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_theme_enable()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    sizing_eval = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_layout_sizing_eval()
        eo.__do_end()
    end,

    sizing_restricted_eval = function(self, width, height)
        eo.__do_start(self, __class)
        __lib.elm_obj_layout_sizing_restricted_eval(width, height)
        eo.__do_end()
    end,

    part_cursor_style_set = function(self, part_name, style)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_part_cursor_style_set(part_name, style)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_cursor_style_get = function(self, part_name)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_part_cursor_style_get(part_name)
        eo.__do_end()
        return v
    end,

    signal_callback_add = function(self, emission, source, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_layout_signal_callback_add(emission, source, func, data)
        eo.__do_end()
    end,

    part_cursor_set = function(self, part_name, cursor)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_part_cursor_set(part_name, cursor)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_cursor_get = function(self, part_name)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_part_cursor_get(part_name)
        eo.__do_end()
        return v
    end,

    sub_object_add_enable = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_sub_object_add_enable()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    data_get = function(self, key)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_data_get(key)
        eo.__do_end()
        return v
    end,

    signal_callback_del = function(self, emission, source, func)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_signal_callback_del(emission, source, func)
        eo.__do_end()
        return v
    end,

    thaw = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_thaw()
        eo.__do_end()
        return tonumber(v)
    end,

    signal_emit = function(self, emission, source)
        eo.__do_start(self, __class)
        __lib.elm_obj_layout_signal_emit(emission, source)
        eo.__do_end()
    end,

    part_cursor_unset = function(self, part_name)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_layout_part_cursor_unset(part_name)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["theme,changed"] = __lib._ELM_LAYOUT_EVENT_THEME_CHANGED
    },

    __properties = {
        ["theme"] = { 0, 0, 0, 3, false, true },
        ["edje"] = { 0, 0, 1, 0, true, false },
        ["edje_object_can_access"] = { 0, 0, 1, 1, true, true }
    }
}

M.Layout = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Layout").__eo_ctor,
                            1, ...)
end

return M
