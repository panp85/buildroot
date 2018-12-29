-- EFL LuaJIT bindings: elm_calendar.eo (class Elm.Calendar)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_calendar_class_get()
    eo.class_register("Elm_Calendar", {"Elm_Layout"}, {"Elm_Interface_Atspi_Widget_Action"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_calendar_class_get(void);
    void elm_obj_calendar_first_day_of_week_set(Elm_Calendar_Weekday day);
    Elm_Calendar_Weekday elm_obj_calendar_first_day_of_week_get(void);
    void elm_obj_calendar_selectable_set(Elm_Calendar_Selectable selectable);
    Elm_Calendar_Selectable elm_obj_calendar_selectable_get(void);
    void elm_obj_calendar_interval_set(double interval);
    double elm_obj_calendar_interval_get(void);
    void elm_obj_calendar_weekdays_names_set(const char ** weekdays);
    const char **elm_obj_calendar_weekdays_names_get(void);
    void elm_obj_calendar_select_mode_set(Elm_Calendar_Select_Mode mode);
    Elm_Calendar_Select_Mode elm_obj_calendar_select_mode_get(void);
    void elm_obj_calendar_format_function_set(Elm_Calendar_Format_Cb format_function);
    const Eina_List *elm_obj_calendar_marks_get(void);
    void elm_obj_calendar_date_min_set(const Efl_Time * min);
    const Efl_Time *elm_obj_calendar_date_min_get(void);
    void elm_obj_calendar_date_max_set(const Efl_Time * max);
    const Efl_Time *elm_obj_calendar_date_max_get(void);
    void elm_obj_calendar_selected_time_set(Efl_Time * selected_time);
    Eina_Bool elm_obj_calendar_selected_time_get(Efl_Time *selected_time);
    Elm_Calendar_Mark *elm_obj_calendar_mark_add(const char * mark_type, Efl_Time * mark_time, Elm_Calendar_Mark_Repeat_Type repeat_);
    void elm_obj_calendar_mark_del(Elm_Calendar_Mark * mark);
    void elm_obj_calendar_marks_clear(void);
    void elm_obj_calendar_marks_draw(void);
    Eina_Bool elm_obj_calendar_displayed_time_get(Efl_Time *displayed_time);
    extern const Eo_Event_Description _ELM_CALENDAR_EVENT_CHANGED;
    extern const Eo_Event_Description _ELM_CALENDAR_EVENT_DISPLAY_CHANGED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    first_day_of_week_set = function(self, day)
        eo.__do_start(self, __class)
        __lib.elm_obj_calendar_first_day_of_week_set(day)
        eo.__do_end()
    end,

    first_day_of_week_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_calendar_first_day_of_week_get()
        eo.__do_end()
        return v
    end,

    selectable_set = function(self, selectable)
        eo.__do_start(self, __class)
        __lib.elm_obj_calendar_selectable_set(selectable)
        eo.__do_end()
    end,

    selectable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_calendar_selectable_get()
        eo.__do_end()
        return v
    end,

    interval_set = function(self, interval)
        eo.__do_start(self, __class)
        __lib.elm_obj_calendar_interval_set(interval)
        eo.__do_end()
    end,

    interval_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_calendar_interval_get()
        eo.__do_end()
        return tonumber(v)
    end,

    weekdays_names_set = function(self, weekdays)
        eo.__do_start(self, __class)
        __lib.elm_obj_calendar_weekdays_names_set(weekdays)
        eo.__do_end()
    end,

    weekdays_names_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_calendar_weekdays_names_get()
        eo.__do_end()
        return v
    end,

    select_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_calendar_select_mode_set(mode)
        eo.__do_end()
    end,

    select_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_calendar_select_mode_get()
        eo.__do_end()
        return v
    end,

    format_function_set = function(self, format_function)
        eo.__do_start(self, __class)
        __lib.elm_obj_calendar_format_function_set(format_function)
        eo.__do_end()
    end,

    marks_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_calendar_marks_get()
        eo.__do_end()
    end,

    date_min_set = function(self, min)
        eo.__do_start(self, __class)
        __lib.elm_obj_calendar_date_min_set(min)
        eo.__do_end()
    end,

    date_min_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_calendar_date_min_get()
        eo.__do_end()
        return v
    end,

    date_max_set = function(self, max)
        eo.__do_start(self, __class)
        __lib.elm_obj_calendar_date_max_set(max)
        eo.__do_end()
    end,

    date_max_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_calendar_date_max_get()
        eo.__do_end()
        return v
    end,

    selected_time_set = function(self, selected_time)
        eo.__do_start(self, __class)
        __lib.elm_obj_calendar_selected_time_set(selected_time)
        eo.__do_end()
    end,

    selected_time_get = function(self, selected_time)
        eo.__do_start(self, __class)
        local selected_time = ffi.new("Efl_Time[1]")
        local v = __lib.elm_obj_calendar_selected_time_get(selected_time)
        eo.__do_end()
        return ((v) ~= 0), selected_time[0]
    end,

    mark_add = function(self, mark_type, mark_time, repeat_)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_calendar_mark_add(mark_type, mark_time, repeat_)
        eo.__do_end()
        return v
    end,

    mark_del = function(self, mark)
        eo.__do_start(self, __class)
        __lib.elm_obj_calendar_mark_del(mark)
        eo.__do_end()
    end,

    marks_clear = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_calendar_marks_clear()
        eo.__do_end()
    end,

    marks_draw = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_calendar_marks_draw()
        eo.__do_end()
    end,

    displayed_time_get = function(self, displayed_time)
        eo.__do_start(self, __class)
        local displayed_time = ffi.new("Efl_Time[1]")
        local v = __lib.elm_obj_calendar_displayed_time_get(displayed_time)
        eo.__do_end()
        return ((v) ~= 0), displayed_time[0]
    end,

    __events = {
        ["changed"] = __lib._ELM_CALENDAR_EVENT_CHANGED,
        ["display,changed"] = __lib._ELM_CALENDAR_EVENT_DISPLAY_CHANGED
    },

    __properties = {
        ["date_min"] = { 0, 0, 1, 1, true, true },
        ["selectable"] = { 0, 0, 1, 1, true, true },
        ["weekdays_names"] = { 0, 0, 1, 1, true, true },
        ["marks"] = { 0, 0, 1, 0, true, false },
        ["format_function"] = { 0, 0, 0, 1, false, true },
        ["interval"] = { 0, 0, 1, 1, true, true },
        ["date_max"] = { 0, 0, 1, 1, true, true },
        ["select_mode"] = { 0, 0, 1, 1, true, true },
        ["first_day_of_week"] = { 0, 0, 1, 1, true, true }
    }
}

M.Calendar = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Calendar").__eo_ctor,
                            1, ...)
end

return M
