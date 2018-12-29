-- EFL LuaJIT bindings: efl_flipable.eo (class Efl.Flipable)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_flipable_interface_get()
    eo.class_register("Efl_Flipable", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_flipable_interface_get(void);
    void efl_flip_set(Efl_Flip flip);
    Efl_Flip efl_flip_get(void);
]]

__body = {
    flip_set = function(self, flip)
        eo.__do_start(self, __class)
        __lib.efl_flip_set(flip)
        eo.__do_end()
    end,

    flip_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_flip_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["flip"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Flipable"] = true

return M
