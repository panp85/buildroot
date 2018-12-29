-- EFL LuaJIT bindings: elm_fileselector_internal_part.eo (class Elm.Fileselector.Internal.Part)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_fileselector_internal_part_class_get()
    eo.class_register("Elm_Fileselector_Internal_Part", {"Elm_Layout_Internal_Part"}, {"Efl_Text"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_fileselector_internal_part_class_get(void);
]]

local __M = util.get_namespace(M, { "fileselector", "internal" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Part = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Fileselector_Internal_Part").__eo_ctor,
                            1, ...)
end

return M
