-- EFL LuaJIT bindings: efl_ui_check.eo (class Efl.Ui.Check)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_check_class_get()
    eo.class_register("Efl_Ui_Check", {"Efl_Ui_Nstate"}, {"Elm_Interface_Atspi_Widget_Action"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_check_class_get(void);
    void efl_ui_check_selected_set(Eina_Bool value);
    Eina_Bool efl_ui_check_selected_get(void);
    extern const Eo_Event_Description _EFL_UI_CHECK_EVENT_CHANGED;
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    selected_set = function(self, value)
        eo.__do_start(self, __class)
        __lib.efl_ui_check_selected_set(value)
        eo.__do_end()
    end,

    selected_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_check_selected_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["changed"] = __lib._EFL_UI_CHECK_EVENT_CHANGED
    },

    __properties = {
        ["selected"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Check = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Check").__eo_ctor,
                            1, ...)
end

return M
