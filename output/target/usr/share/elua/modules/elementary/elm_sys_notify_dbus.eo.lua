-- EFL LuaJIT bindings: elm_sys_notify_dbus.eo (class Elm.Sys_Notify.Dbus)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_sys_notify_dbus_class_get()
    eo.class_register("Elm_Sys_Notify_Dbus", {"Efl_Object"}, {"Elm_Sys_Notify_Interface"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_sys_notify_dbus_class_get(void);
]]

local __M = util.get_namespace(M, { "sys_notify" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Dbus = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Sys_Notify_Dbus").__eo_ctor,
                            1, ...)
end

return M
