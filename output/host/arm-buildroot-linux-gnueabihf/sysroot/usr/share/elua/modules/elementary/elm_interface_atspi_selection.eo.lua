-- EFL LuaJIT bindings: elm_interface_atspi_selection.eo (class Elm.Interface.Atspi.Selection)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_interface_atspi_selection_interface_get()
    eo.class_register("Elm_Interface_Atspi_Selection", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_interface_atspi_selection_interface_get(void);
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_SELECTION_EVENT_SELECTION_CHANGED;
]]

local __M = util.get_namespace(M, { "interface", "atspi" })
__body = {
    __events = {
        ["selection,changed"] = __lib._ELM_INTERFACE_ATSPI_SELECTION_EVENT_SELECTION_CHANGED
    }
}
__body["__iface_Elm_Interface_Atspi_Selection"] = true

return M
