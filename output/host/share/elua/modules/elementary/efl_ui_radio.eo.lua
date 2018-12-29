-- EFL LuaJIT bindings: efl_ui_radio.eo (class Efl.Ui.Radio)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_radio_class_get()
    eo.class_register("Efl_Ui_Radio", {"Efl_Ui_Check"}, {"Elm_Interface_Atspi_Widget_Action"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_radio_class_get(void);
    void efl_ui_radio_state_value_set(int value);
    int efl_ui_radio_state_value_get(void);
    void efl_ui_radio_value_set(int value);
    int efl_ui_radio_value_get(void);
    void efl_ui_radio_value_pointer_set(int * valuep);
    Efl_Canvas_Object *efl_ui_radio_selected_object_get(void);
    void efl_ui_radio_group_add(Efl_Ui_Radio * group);
    extern const Eo_Event_Description _EFL_UI_RADIO_EVENT_CHANGED;
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    state_value_set = function(self, value)
        eo.__do_start(self, __class)
        __lib.efl_ui_radio_state_value_set(value)
        eo.__do_end()
    end,

    state_value_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_radio_state_value_get()
        eo.__do_end()
        return tonumber(v)
    end,

    value_set = function(self, value)
        eo.__do_start(self, __class)
        __lib.efl_ui_radio_value_set(value)
        eo.__do_end()
    end,

    value_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_radio_value_get()
        eo.__do_end()
        return tonumber(v)
    end,

    value_pointer_set = function(self, valuep)
        eo.__do_start(self, __class)
        __lib.efl_ui_radio_value_pointer_set(valuep)
        eo.__do_end()
    end,

    selected_object_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_radio_selected_object_get()
        eo.__do_end()
    end,

    group_add = function(self, group)
        eo.__do_start(self, __class)
        __lib.efl_ui_radio_group_add(group)
        eo.__do_end()
    end,

    __events = {
        ["changed"] = __lib._EFL_UI_RADIO_EVENT_CHANGED
    },

    __properties = {
        ["state_value"] = { 0, 0, 1, 1, true, true },
        ["value_pointer"] = { 0, 0, 0, 1, false, true },
        ["selected_object"] = { 0, 0, 1, 0, true, false },
        ["value"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Radio = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Radio").__eo_ctor,
                            1, ...)
end

return M
