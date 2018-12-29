-- EFL LuaJIT bindings: elm_interface_atspi_text_editable.eo (class Elm.Interface.Atspi.Text.Editable)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_interface_atspi_text_editable_interface_get()
    eo.class_register("Elm_Interface_Atspi_Text_Editable", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_interface_atspi_text_editable_interface_get(void);
]]

local __M = util.get_namespace(M, { "interface", "atspi", "text" })
__body = {
}
__body["__iface_Elm_Interface_Atspi_Text_Editable"] = true

return M
