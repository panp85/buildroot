-- EFL LuaJIT bindings: efl_ui_slider.eo (class Efl.Ui.Slider)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_slider_class_get()
    eo.class_register("Efl_Ui_Slider", {"Elm_Layout"}, {"Efl_Ui_Range", "Efl_Orientation", "Elm_Interface_Atspi_Value", "Elm_Interface_Atspi_Widget_Action"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_slider_class_get(void);
    void efl_ui_slider_indicator_format_set(const char * indicator);
    const char *efl_ui_slider_indicator_format_get(void);
    void efl_ui_slider_indicator_show_set(Eina_Bool show);
    Eina_Bool efl_ui_slider_indicator_show_get(void);
    void efl_ui_slider_indicator_show_on_focus_set(Eina_Bool flag);
    Eina_Bool efl_ui_slider_indicator_show_on_focus_get(void);
    void efl_ui_slider_step_set(double step);
    double efl_ui_slider_step_get(void);
    void efl_ui_slider_indicator_visible_mode_set(Efl_Ui_Slider_Indicator_Visible_Mode indicator_visible_mode);
    Efl_Ui_Slider_Indicator_Visible_Mode efl_ui_slider_indicator_visible_mode_get(void);
    void efl_ui_slider_indicator_format_function_set(slider_func_type func, slider_freefunc_type free_func);
    extern const Eo_Event_Description _EFL_UI_SLIDER_EVENT_CHANGED;
    extern const Eo_Event_Description _EFL_UI_SLIDER_EVENT_DELAY_CHANGED;
    extern const Eo_Event_Description _EFL_UI_SLIDER_EVENT_SLIDER_DRAG_START;
    extern const Eo_Event_Description _EFL_UI_SLIDER_EVENT_SLIDER_DRAG_STOP;
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    indicator_format_set = function(self, indicator)
        eo.__do_start(self, __class)
        __lib.efl_ui_slider_indicator_format_set(indicator)
        eo.__do_end()
    end,

    indicator_format_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_slider_indicator_format_get()
        eo.__do_end()
        return v
    end,

    indicator_show_set = function(self, show)
        eo.__do_start(self, __class)
        __lib.efl_ui_slider_indicator_show_set(show)
        eo.__do_end()
    end,

    indicator_show_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_slider_indicator_show_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    indicator_show_on_focus_set = function(self, flag)
        eo.__do_start(self, __class)
        __lib.efl_ui_slider_indicator_show_on_focus_set(flag)
        eo.__do_end()
    end,

    indicator_show_on_focus_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_slider_indicator_show_on_focus_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    step_set = function(self, step)
        eo.__do_start(self, __class)
        __lib.efl_ui_slider_step_set(step)
        eo.__do_end()
    end,

    step_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_slider_step_get()
        eo.__do_end()
        return tonumber(v)
    end,

    indicator_visible_mode_set = function(self, indicator_visible_mode)
        eo.__do_start(self, __class)
        __lib.efl_ui_slider_indicator_visible_mode_set(indicator_visible_mode)
        eo.__do_end()
    end,

    indicator_visible_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_slider_indicator_visible_mode_get()
        eo.__do_end()
        return v
    end,

    indicator_format_function_set = function(self, func, free_func)
        eo.__do_start(self, __class)
        __lib.efl_ui_slider_indicator_format_function_set(func, free_func)
        eo.__do_end()
    end,

    __events = {
        ["changed"] = __lib._EFL_UI_SLIDER_EVENT_CHANGED,
        ["delay,changed"] = __lib._EFL_UI_SLIDER_EVENT_DELAY_CHANGED,
        ["slider,drag,start"] = __lib._EFL_UI_SLIDER_EVENT_SLIDER_DRAG_START,
        ["slider,drag,stop"] = __lib._EFL_UI_SLIDER_EVENT_SLIDER_DRAG_STOP
    },

    __properties = {
        ["step"] = { 0, 0, 1, 1, true, true },
        ["indicator_visible_mode"] = { 0, 0, 1, 1, true, true },
        ["indicator_format"] = { 0, 0, 1, 1, true, true },
        ["indicator_format_function"] = { 0, 0, 0, 2, false, true },
        ["indicator_show"] = { 0, 0, 1, 1, true, true },
        ["indicator_show_on_focus"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Slider = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Slider").__eo_ctor,
                            1, ...)
end

return M
