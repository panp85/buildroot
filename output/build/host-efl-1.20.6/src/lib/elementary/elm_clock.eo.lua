-- EFL LuaJIT bindings: elm_clock.eo (class Elm.Clock)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_clock_class_get()
    eo.class_register("Elm_Clock", {"Elm_Layout"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_clock_class_get(void);
    void elm_obj_clock_show_am_pm_set(Eina_Bool am_pm);
    Eina_Bool elm_obj_clock_show_am_pm_get(void);
    void elm_obj_clock_first_interval_set(double interval);
    double elm_obj_clock_first_interval_get(void);
    void elm_obj_clock_show_seconds_set(Eina_Bool seconds);
    Eina_Bool elm_obj_clock_show_seconds_get(void);
    void elm_obj_clock_edit_set(Eina_Bool edit);
    Eina_Bool elm_obj_clock_edit_get(void);
    void elm_obj_clock_pause_set(Eina_Bool paused);
    Eina_Bool elm_obj_clock_pause_get(void);
    void elm_obj_clock_time_set(int hrs, int min, int sec);
    void elm_obj_clock_time_get(int *hrs, int *min, int *sec);
    void elm_obj_clock_edit_mode_set(Elm_Clock_Edit_Mode digedit);
    Elm_Clock_Edit_Mode elm_obj_clock_edit_mode_get(void);
    extern const Eo_Event_Description _ELM_CLOCK_EVENT_CHANGED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    show_am_pm_set = function(self, am_pm)
        eo.__do_start(self, __class)
        __lib.elm_obj_clock_show_am_pm_set(am_pm)
        eo.__do_end()
    end,

    show_am_pm_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_clock_show_am_pm_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    first_interval_set = function(self, interval)
        eo.__do_start(self, __class)
        __lib.elm_obj_clock_first_interval_set(interval)
        eo.__do_end()
    end,

    first_interval_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_clock_first_interval_get()
        eo.__do_end()
        return tonumber(v)
    end,

    show_seconds_set = function(self, seconds)
        eo.__do_start(self, __class)
        __lib.elm_obj_clock_show_seconds_set(seconds)
        eo.__do_end()
    end,

    show_seconds_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_clock_show_seconds_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    edit_set = function(self, edit)
        eo.__do_start(self, __class)
        __lib.elm_obj_clock_edit_set(edit)
        eo.__do_end()
    end,

    edit_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_clock_edit_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pause_set = function(self, paused)
        eo.__do_start(self, __class)
        __lib.elm_obj_clock_pause_set(paused)
        eo.__do_end()
    end,

    pause_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_clock_pause_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    time_set = function(self, hrs, min, sec)
        eo.__do_start(self, __class)
        __lib.elm_obj_clock_time_set(hrs, min, sec)
        eo.__do_end()
    end,

    time_get = function(self)
        eo.__do_start(self, __class)
        local hrs = ffi.new("int[1]")
        local min = ffi.new("int[1]")
        local sec = ffi.new("int[1]")
        __lib.elm_obj_clock_time_get(hrs, min, sec)
        eo.__do_end()
        return tonumber(hrs[0]), tonumber(min[0]), tonumber(sec[0])
    end,

    edit_mode_set = function(self, digedit)
        eo.__do_start(self, __class)
        __lib.elm_obj_clock_edit_mode_set(digedit)
        eo.__do_end()
    end,

    edit_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_clock_edit_mode_get()
        eo.__do_end()
        return v
    end,

    __events = {
        ["changed"] = __lib._ELM_CLOCK_EVENT_CHANGED
    },

    __properties = {
        ["edit_mode"] = { 0, 0, 1, 1, true, true },
        ["time"] = { 0, 0, 3, 3, true, true },
        ["edit"] = { 0, 0, 1, 1, true, true },
        ["pause"] = { 0, 0, 1, 1, true, true },
        ["first_interval"] = { 0, 0, 1, 1, true, true },
        ["show_seconds"] = { 0, 0, 1, 1, true, true },
        ["show_am_pm"] = { 0, 0, 1, 1, true, true }
    }
}

M.Clock = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Clock").__eo_ctor,
                            1, ...)
end

return M
