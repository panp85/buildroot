-- EFL LuaJIT bindings: efl_gfx_gradient.eo (class Efl.Gfx.Gradient)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_gfx_gradient_interface_get()
    eo.class_register("Efl_Gfx_Gradient", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_gfx_gradient_interface_get(void);
    void efl_gfx_gradient_stop_set(const Efl_Gfx_Gradient_Stop * colors, unsigned int length);
    void efl_gfx_gradient_stop_get(const Efl_Gfx_Gradient_Stop * *colors, unsigned int *length);
    void efl_gfx_gradient_spread_set(Efl_Gfx_Gradient_Spread s);
    Efl_Gfx_Gradient_Spread efl_gfx_gradient_spread_get(void);
]]

local __M = util.get_namespace(M, { "gfx" })
__body = {
    stop_set = function(self, colors, length)
        eo.__do_start(self, __class)
        __lib.efl_gfx_gradient_stop_set(colors, length)
        eo.__do_end()
    end,

    stop_get = function(self)
        eo.__do_start(self, __class)
        local colors = ffi.new("const Efl_Gfx_Gradient_Stop *[1]")
        local length = ffi.new("unsigned int[1]")
        __lib.efl_gfx_gradient_stop_get(colors, length)
        eo.__do_end()
        return colors[0], length[0]
    end,

    spread_set = function(self, s)
        eo.__do_start(self, __class)
        __lib.efl_gfx_gradient_spread_set(s)
        eo.__do_end()
    end,

    spread_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_gradient_spread_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["stop"] = { 0, 0, 2, 2, true, true },
        ["spread"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Gfx_Gradient"] = true

return M
