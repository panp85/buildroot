-- EFL LuaJIT bindings: elm_atspi_app_object.eo (class Elm.Atspi.App.Object)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_atspi_app_object_class_get()
    eo.class_register("Elm_Atspi_App_Object", {"Efl_Object"}, {"Elm_Interface_Atspi_Accessible"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_atspi_app_object_class_get(void);
]]

local __M = util.get_namespace(M, { "atspi", "app" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Object = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Atspi_App_Object").__eo_ctor,
                            1, ...)
end

return M
