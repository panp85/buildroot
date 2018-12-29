-- EFL LuaJIT bindings: efl_ui_progressbar.eo (class Efl.Ui.Progressbar)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_progressbar_class_get()
    eo.class_register("Efl_Ui_Progressbar", {"Elm_Layout"}, {"Efl_Ui_Range", "Efl_Orientation"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_progressbar_class_get(void);
    void efl_ui_progressbar_pulse_mode_set(Eina_Bool pulse);
    Eina_Bool efl_ui_progressbar_pulse_mode_get(void);
    void efl_ui_progressbar_pulse_set(Eina_Bool state);
    Eina_Bool efl_ui_progressbar_pulse_get(void);
    extern const Eo_Event_Description _EFL_UI_PROGRESSBAR_EVENT_CHANGED;
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    pulse_mode_set = function(self, pulse)
        eo.__do_start(self, __class)
        __lib.efl_ui_progressbar_pulse_mode_set(pulse)
        eo.__do_end()
    end,

    pulse_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_progressbar_pulse_mode_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pulse_set = function(self, state)
        eo.__do_start(self, __class)
        __lib.efl_ui_progressbar_pulse_set(state)
        eo.__do_end()
    end,

    pulse_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_progressbar_pulse_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["changed"] = __lib._EFL_UI_PROGRESSBAR_EVENT_CHANGED
    },

    __properties = {
        ["pulse_mode"] = { 0, 0, 1, 1, true, true },
        ["pulse"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Progressbar = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Progressbar").__eo_ctor,
                            1, ...)
end

return M
