-- EFL LuaJIT bindings: efl_ui_clock.eo (class Efl.Ui.Clock)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_clock_class_get()
    eo.class_register("Efl_Ui_Clock", {"Elm_Layout"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_clock_class_get(void);
    void efl_ui_clock_format_set(const char * fmt);
    const char *efl_ui_clock_format_get(void);
    void efl_ui_clock_pause_set(Eina_Bool paused);
    Eina_Bool efl_ui_clock_pause_get(void);
    void efl_ui_clock_edit_mode_set(Eina_Bool value);
    Eina_Bool efl_ui_clock_edit_mode_get(void);
    Eina_Bool efl_ui_clock_value_min_set(Efl_Time * mintime);
    Eina_Bool efl_ui_clock_value_min_get(Efl_Time * mintime);
    Eina_Bool efl_ui_clock_value_max_set(Efl_Time * maxtime);
    Eina_Bool efl_ui_clock_value_max_get(Efl_Time * maxtime);
    Eina_Bool efl_ui_clock_value_set(Efl_Time * curtime);
    Eina_Bool efl_ui_clock_value_get(Efl_Time * curtime);
    void efl_ui_clock_field_visible_set(Efl_Ui_Clock_Type fieldtype, Eina_Bool visible);
    Eina_Bool efl_ui_clock_field_visible_get(Efl_Ui_Clock_Type fieldtype);
    void efl_ui_clock_field_limit_set(Efl_Ui_Clock_Type fieldtype, int min, int max);
    void efl_ui_clock_field_limit_get(Efl_Ui_Clock_Type fieldtype, int *min, int *max);
    extern const Eo_Event_Description _EFL_UI_CLOCK_EVENT_CHANGED;
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    format_set = function(self, fmt)
        eo.__do_start(self, __class)
        __lib.efl_ui_clock_format_set(fmt)
        eo.__do_end()
    end,

    format_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_clock_format_get()
        eo.__do_end()
        return v
    end,

    pause_set = function(self, paused)
        eo.__do_start(self, __class)
        __lib.efl_ui_clock_pause_set(paused)
        eo.__do_end()
    end,

    pause_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_clock_pause_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    edit_mode_set = function(self, value)
        eo.__do_start(self, __class)
        __lib.efl_ui_clock_edit_mode_set(value)
        eo.__do_end()
    end,

    edit_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_clock_edit_mode_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    value_min_set = function(self, mintime)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_clock_value_min_set(mintime)
        eo.__do_end()
    end,

    value_min_get = function(self, mintime)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_clock_value_min_get(mintime)
        eo.__do_end()
    end,

    value_max_set = function(self, maxtime)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_clock_value_max_set(maxtime)
        eo.__do_end()
    end,

    value_max_get = function(self, maxtime)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_clock_value_max_get(maxtime)
        eo.__do_end()
    end,

    value_set = function(self, curtime)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_clock_value_set(curtime)
        eo.__do_end()
    end,

    value_get = function(self, curtime)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_clock_value_get(curtime)
        eo.__do_end()
    end,

    field_visible_set = function(self, fieldtype, visible)
        eo.__do_start(self, __class)
        __lib.efl_ui_clock_field_visible_set(fieldtype, visible)
        eo.__do_end()
    end,

    field_visible_get = function(self, fieldtype)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_clock_field_visible_get(fieldtype)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    field_limit_set = function(self, fieldtype, min, max)
        eo.__do_start(self, __class)
        __lib.efl_ui_clock_field_limit_set(fieldtype, min, max)
        eo.__do_end()
    end,

    field_limit_get = function(self, fieldtype)
        eo.__do_start(self, __class)
        local min = ffi.new("int[1]")
        local max = ffi.new("int[1]")
        __lib.efl_ui_clock_field_limit_get(fieldtype, min, max)
        eo.__do_end()
        return tonumber(min[0]), tonumber(max[0])
    end,

    __events = {
        ["changed"] = __lib._EFL_UI_CLOCK_EVENT_CHANGED
    },

    __properties = {
        ["value_min"] = { 1, 1, 1, 1, true, true },
        ["format"] = { 0, 0, 1, 1, true, true },
        ["field_visible"] = { 1, 1, 1, 1, true, true },
        ["value"] = { 1, 1, 1, 1, true, true },
        ["pause"] = { 0, 0, 1, 1, true, true },
        ["field_limit"] = { 1, 1, 2, 2, true, true },
        ["value_max"] = { 1, 1, 1, 1, true, true },
        ["edit_mode"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Clock = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Clock").__eo_ctor,
                            1, ...)
end

return M
