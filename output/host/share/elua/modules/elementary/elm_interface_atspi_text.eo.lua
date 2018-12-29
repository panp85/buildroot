-- EFL LuaJIT bindings: elm_interface_atspi_text.eo (class Elm.Interface.Atspi.Text)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_interface_atspi_text_interface_get()
    eo.class_register("Elm_Interface_Atspi_Text", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_interface_atspi_text_interface_get(void);
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_BOUNDS_CHANGED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_ATTRIBUTES_CHANGED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_CARET_MOVED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_INSERTED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_REMOVED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_SELECTION_CHANGED;
]]

local __M = util.get_namespace(M, { "interface", "atspi" })
__body = {
    __events = {
        ["access,text,bounds,changed"] = __lib._ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_BOUNDS_CHANGED,
        ["access,text,attributes,changed"] = __lib._ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_ATTRIBUTES_CHANGED,
        ["access,text,caret,moved"] = __lib._ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_CARET_MOVED,
        ["access,text,inserted"] = __lib._ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_INSERTED,
        ["access,text,removed"] = __lib._ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_REMOVED,
        ["access,text,selection,changed"] = __lib._ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_SELECTION_CHANGED
    }
}
__body["__iface_Elm_Interface_Atspi_Text"] = true

return M
