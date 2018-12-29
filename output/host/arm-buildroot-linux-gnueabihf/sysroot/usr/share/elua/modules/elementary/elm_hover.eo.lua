-- EFL LuaJIT bindings: elm_hover.eo (class Elm.Hover)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_hover_class_get()
    eo.class_register("Elm_Hover", {"Elm_Layout", "Efl_Ui_Focus_Manager"}, {"Efl_Ui_Clickable", "Elm_Interface_Atspi_Widget_Action"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_hover_class_get(void);
    void elm_obj_hover_target_set(Efl_Canvas_Object * target);
    Efl_Canvas_Object *elm_obj_hover_target_get(void);
    const char *elm_obj_hover_best_content_location_get(Elm_Hover_Axis pref_axis);
    void elm_obj_hover_dismiss(void);
    extern const Eo_Event_Description _ELM_HOVER_EVENT_SMART_CHANGED;
    extern const Eo_Event_Description _ELM_HOVER_EVENT_DISMISSED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    target_set = function(self, target)
        eo.__do_start(self, __class)
        __lib.elm_obj_hover_target_set(target)
        eo.__do_end()
    end,

    target_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_hover_target_get()
        eo.__do_end()
        return v
    end,

    best_content_location_get = function(self, pref_axis)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_hover_best_content_location_get(pref_axis)
        eo.__do_end()
        return v
    end,

    dismiss = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_hover_dismiss()
        eo.__do_end()
    end,

    __events = {
        ["smart,changed"] = __lib._ELM_HOVER_EVENT_SMART_CHANGED,
        ["dismissed"] = __lib._ELM_HOVER_EVENT_DISMISSED
    },

    __properties = {
        ["target"] = { 0, 0, 1, 1, true, true }
    }
}

M.Hover = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Hover").__eo_ctor,
                            1, ...)
end

return M
