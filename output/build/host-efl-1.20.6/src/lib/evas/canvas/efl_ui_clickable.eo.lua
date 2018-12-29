-- EFL LuaJIT bindings: efl_ui_clickable.eo (class Efl.Ui.Clickable)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_clickable_interface_get()
    eo.class_register("Efl_Ui_Clickable", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_clickable_interface_get(void);
    extern const Eo_Event_Description _EFL_UI_EVENT_CLICKED;
    extern const Eo_Event_Description _EFL_UI_EVENT_CLICKED_DOUBLE;
    extern const Eo_Event_Description _EFL_UI_EVENT_CLICKED_TRIPLE;
    extern const Eo_Event_Description _EFL_UI_EVENT_CLICKED_RIGHT;
    extern const Eo_Event_Description _EFL_UI_EVENT_PRESSED;
    extern const Eo_Event_Description _EFL_UI_EVENT_UNPRESSED;
    extern const Eo_Event_Description _EFL_UI_EVENT_LONGPRESSED;
    extern const Eo_Event_Description _EFL_UI_EVENT_REPEATED;
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    __events = {
        ["clicked"] = __lib._EFL_UI_EVENT_CLICKED,
        ["clicked,double"] = __lib._EFL_UI_EVENT_CLICKED_DOUBLE,
        ["clicked,triple"] = __lib._EFL_UI_EVENT_CLICKED_TRIPLE,
        ["clicked,right"] = __lib._EFL_UI_EVENT_CLICKED_RIGHT,
        ["pressed"] = __lib._EFL_UI_EVENT_PRESSED,
        ["unpressed"] = __lib._EFL_UI_EVENT_UNPRESSED,
        ["longpressed"] = __lib._EFL_UI_EVENT_LONGPRESSED,
        ["repeated"] = __lib._EFL_UI_EVENT_REPEATED
    }
}
__body["__iface_Efl_Ui_Clickable"] = true

return M
