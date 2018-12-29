-- EFL LuaJIT bindings: elm_dayselector.eo (class Elm.Dayselector)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_dayselector_class_get()
    eo.class_register("Elm_Dayselector", {"Elm_Layout"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_dayselector_class_get(void);
    void elm_obj_dayselector_week_start_set(Elm_Dayselector_Day day);
    Elm_Dayselector_Day elm_obj_dayselector_week_start_get(void);
    void elm_obj_dayselector_weekend_length_set(unsigned int length);
    unsigned int elm_obj_dayselector_weekend_length_get(void);
    void elm_obj_dayselector_weekend_start_set(Elm_Dayselector_Day day);
    Elm_Dayselector_Day elm_obj_dayselector_weekend_start_get(void);
    void elm_obj_dayselector_weekdays_names_set(const char ** weekdays);
    Eina_List *elm_obj_dayselector_weekdays_names_get(void);
    void elm_obj_dayselector_day_selected_set(Elm_Dayselector_Day day, Eina_Bool selected);
    Eina_Bool elm_obj_dayselector_day_selected_get(Elm_Dayselector_Day day);
    extern const Eo_Event_Description _ELM_DAYSELECTOR_EVENT_DAYSELECTOR_CHANGED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    week_start_set = function(self, day)
        eo.__do_start(self, __class)
        __lib.elm_obj_dayselector_week_start_set(day)
        eo.__do_end()
    end,

    week_start_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_dayselector_week_start_get()
        eo.__do_end()
        return v
    end,

    weekend_length_set = function(self, length)
        eo.__do_start(self, __class)
        __lib.elm_obj_dayselector_weekend_length_set(length)
        eo.__do_end()
    end,

    weekend_length_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_dayselector_weekend_length_get()
        eo.__do_end()
        return v
    end,

    weekend_start_set = function(self, day)
        eo.__do_start(self, __class)
        __lib.elm_obj_dayselector_weekend_start_set(day)
        eo.__do_end()
    end,

    weekend_start_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_dayselector_weekend_start_get()
        eo.__do_end()
        return v
    end,

    weekdays_names_set = function(self, weekdays)
        eo.__do_start(self, __class)
        __lib.elm_obj_dayselector_weekdays_names_set(weekdays)
        eo.__do_end()
    end,

    weekdays_names_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_dayselector_weekdays_names_get()
        eo.__do_end()
        return v
    end,

    day_selected_set = function(self, day, selected)
        eo.__do_start(self, __class)
        __lib.elm_obj_dayselector_day_selected_set(day, selected)
        eo.__do_end()
    end,

    day_selected_get = function(self, day)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_dayselector_day_selected_get(day)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["dayselector,changed"] = __lib._ELM_DAYSELECTOR_EVENT_DAYSELECTOR_CHANGED
    },

    __properties = {
        ["weekend_start"] = { 0, 0, 1, 1, true, true },
        ["weekend_length"] = { 0, 0, 1, 1, true, true },
        ["week_start"] = { 0, 0, 1, 1, true, true }
    }
}

M.Dayselector = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Dayselector").__eo_ctor,
                            1, ...)
end

return M
