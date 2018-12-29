-- EFL LuaJIT bindings: efl_gfx_gradient_radial.eo (class Efl.Gfx.Gradient.Radial)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_gfx_gradient_radial_interface_get()
    eo.class_register("Efl_Gfx_Gradient_Radial", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_gfx_gradient_radial_interface_get(void);
    void efl_gfx_gradient_radial_center_set(double x, double y);
    void efl_gfx_gradient_radial_center_get(double *x, double *y);
    void efl_gfx_gradient_radial_radius_set(double r);
    double efl_gfx_gradient_radial_radius_get(void);
    void efl_gfx_gradient_radial_focal_set(double x, double y);
    void efl_gfx_gradient_radial_focal_get(double *x, double *y);
]]

local __M = util.get_namespace(M, { "gfx", "gradient" })
__body = {
    center_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_gradient_radial_center_set(x, y)
        eo.__do_end()
    end,

    center_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.efl_gfx_gradient_radial_center_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    radius_set = function(self, r)
        eo.__do_start(self, __class)
        __lib.efl_gfx_gradient_radial_radius_set(r)
        eo.__do_end()
    end,

    radius_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_gradient_radial_radius_get()
        eo.__do_end()
        return tonumber(v)
    end,

    focal_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_gradient_radial_focal_set(x, y)
        eo.__do_end()
    end,

    focal_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.efl_gfx_gradient_radial_focal_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    __properties = {
        ["center"] = { 0, 0, 2, 2, true, true },
        ["radius"] = { 0, 0, 1, 1, true, true },
        ["focal"] = { 0, 0, 2, 2, true, true }
    }
}
__body["__iface_Efl_Gfx_Gradient_Radial"] = true

return M
