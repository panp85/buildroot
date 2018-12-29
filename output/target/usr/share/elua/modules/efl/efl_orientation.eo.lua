-- EFL LuaJIT bindings: efl_orientation.eo (class Efl.Orientation)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_orientation_interface_get()
    eo.class_register("Efl_Orientation", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_orientation_interface_get(void);
    void efl_orientation_set(Efl_Orient dir);
    Efl_Orient efl_orientation_get(void);
]]

__body = {
    orientation_set = function(self, dir)
        eo.__do_start(self, __class)
        __lib.efl_orientation_set(dir)
        eo.__do_end()
    end,

    orientation_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_orientation_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["orientation"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Orientation"] = true

return M
