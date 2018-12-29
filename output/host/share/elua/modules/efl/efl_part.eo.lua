-- EFL LuaJIT bindings: efl_part.eo (class Efl.Part)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_part_interface_get()
    eo.class_register("Efl_Part", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_part_interface_get(void);
    Efl_Object *efl_part(const char * name);
]]

__body = {
    part = function(self, name)
        eo.__do_start(self, __class)
        local v = __lib.efl_part(name)
        eo.__do_end()
        return v
    end
}
__body["__iface_Efl_Part"] = true

return M
