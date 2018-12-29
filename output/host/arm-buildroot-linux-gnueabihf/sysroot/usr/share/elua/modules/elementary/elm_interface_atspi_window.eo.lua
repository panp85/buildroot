-- EFL LuaJIT bindings: elm_interface_atspi_window.eo (class Elm.Interface.Atspi.Window)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_interface_atspi_window_interface_get()
    eo.class_register("Elm_Interface_Atspi_Window", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_interface_atspi_window_interface_get(void);
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_CREATED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_DESTROYED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_ACTIVATED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_DEACTIVATED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_MAXIMIZED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_MINIMIZED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_RESTORED;
]]

local __M = util.get_namespace(M, { "interface", "atspi" })
__body = {
    __events = {
        ["window,created"] = __lib._ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_CREATED,
        ["window,destroyed"] = __lib._ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_DESTROYED,
        ["window,activated"] = __lib._ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_ACTIVATED,
        ["window,deactivated"] = __lib._ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_DEACTIVATED,
        ["window,maximized"] = __lib._ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_MAXIMIZED,
        ["window,minimized"] = __lib._ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_MINIMIZED,
        ["window,restored"] = __lib._ELM_INTERFACE_ATSPI_WINDOW_EVENT_WINDOW_RESTORED
    }
}
__body["__iface_Elm_Interface_Atspi_Window"] = true

return M
