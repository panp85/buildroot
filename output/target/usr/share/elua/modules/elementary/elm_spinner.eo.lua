-- EFL LuaJIT bindings: elm_spinner.eo (class Elm.Spinner)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_spinner_class_get()
    eo.class_register("Elm_Spinner", {"Elm_Layout"}, {"Efl_Ui_Spin", "Elm_Interface_Atspi_Value", "Elm_Interface_Atspi_Widget_Action"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_spinner_class_get(void);
    void elm_obj_spinner_wrap_set(Eina_Bool wrap);
    Eina_Bool elm_obj_spinner_wrap_get(void);
    void elm_obj_spinner_round_set(int rnd);
    int elm_obj_spinner_round_get(void);
    void elm_obj_spinner_editable_set(Eina_Bool editable);
    Eina_Bool elm_obj_spinner_editable_get(void);
    void elm_obj_spinner_base_set(double base);
    double elm_obj_spinner_base_get(void);
    void elm_obj_spinner_label_format_set(const char * fmt);
    const char *elm_obj_spinner_label_format_get(void);
    void elm_obj_spinner_special_value_add(double value, const char * label);
    extern const Eo_Event_Description _ELM_SPINNER_EVENT_CHANGED;
    extern const Eo_Event_Description _ELM_SPINNER_EVENT_DELAY_CHANGED;
    extern const Eo_Event_Description _ELM_SPINNER_EVENT_SPINNER_DRAG_START;
    extern const Eo_Event_Description _ELM_SPINNER_EVENT_SPINNER_DRAG_STOP;
    extern const Eo_Event_Description _ELM_SPINNER_EVENT_MIN_REACHED;
    extern const Eo_Event_Description _ELM_SPINNER_EVENT_MAX_REACHED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    wrap_set = function(self, wrap)
        eo.__do_start(self, __class)
        __lib.elm_obj_spinner_wrap_set(wrap)
        eo.__do_end()
    end,

    wrap_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_spinner_wrap_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    round_set = function(self, rnd)
        eo.__do_start(self, __class)
        __lib.elm_obj_spinner_round_set(rnd)
        eo.__do_end()
    end,

    round_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_spinner_round_get()
        eo.__do_end()
        return tonumber(v)
    end,

    editable_set = function(self, editable)
        eo.__do_start(self, __class)
        __lib.elm_obj_spinner_editable_set(editable)
        eo.__do_end()
    end,

    editable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_spinner_editable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    base_set = function(self, base)
        eo.__do_start(self, __class)
        __lib.elm_obj_spinner_base_set(base)
        eo.__do_end()
    end,

    base_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_spinner_base_get()
        eo.__do_end()
        return tonumber(v)
    end,

    label_format_set = function(self, fmt)
        eo.__do_start(self, __class)
        __lib.elm_obj_spinner_label_format_set(fmt)
        eo.__do_end()
    end,

    label_format_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_spinner_label_format_get()
        eo.__do_end()
        return v
    end,

    special_value_add = function(self, value, label)
        eo.__do_start(self, __class)
        __lib.elm_obj_spinner_special_value_add(value, label)
        eo.__do_end()
    end,

    __events = {
        ["changed"] = __lib._ELM_SPINNER_EVENT_CHANGED,
        ["delay,changed"] = __lib._ELM_SPINNER_EVENT_DELAY_CHANGED,
        ["spinner,drag,start"] = __lib._ELM_SPINNER_EVENT_SPINNER_DRAG_START,
        ["spinner,drag,stop"] = __lib._ELM_SPINNER_EVENT_SPINNER_DRAG_STOP,
        ["min,reached"] = __lib._ELM_SPINNER_EVENT_MIN_REACHED,
        ["max,reached"] = __lib._ELM_SPINNER_EVENT_MAX_REACHED
    },

    __properties = {
        ["round"] = { 0, 0, 1, 1, true, true },
        ["label_format"] = { 0, 0, 1, 1, true, true },
        ["wrap"] = { 0, 0, 1, 1, true, true },
        ["base"] = { 0, 0, 1, 1, true, true },
        ["editable"] = { 0, 0, 1, 1, true, true }
    }
}

M.Spinner = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Spinner").__eo_ctor,
                            1, ...)
end

return M
