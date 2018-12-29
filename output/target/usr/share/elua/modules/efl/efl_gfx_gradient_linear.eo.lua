-- EFL LuaJIT bindings: efl_gfx_gradient_linear.eo (class Efl.Gfx.Gradient.Linear)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_gfx_gradient_linear_interface_get()
    eo.class_register("Efl_Gfx_Gradient_Linear", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_gfx_gradient_linear_interface_get(void);
    void efl_gfx_gradient_linear_start_set(double x, double y);
    void efl_gfx_gradient_linear_start_get(double *x, double *y);
    void efl_gfx_gradient_linear_end_set(double x, double y);
    void efl_gfx_gradient_linear_end_get(double *x, double *y);
]]

local __M = util.get_namespace(M, { "gfx", "gradient" })
__body = {
    start_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_gradient_linear_start_set(x, y)
        eo.__do_end()
    end,

    start_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.efl_gfx_gradient_linear_start_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    end_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_gradient_linear_end_set(x, y)
        eo.__do_end()
    end,

    end_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.efl_gfx_gradient_linear_end_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    __properties = {
        ["start"] = { 0, 0, 2, 2, true, true },
        ["end"] = { 0, 0, 2, 2, true, true }
    }
}
__body["__iface_Efl_Gfx_Gradient_Linear"] = true

return M
