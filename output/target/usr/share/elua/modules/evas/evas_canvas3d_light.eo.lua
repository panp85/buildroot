-- EFL LuaJIT bindings: evas_canvas3d_light.eo (class Evas.Canvas3D.Light)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_canvas3d_light_class_get()
    eo.class_register("Evas_Canvas3D_Light", {"Evas_Canvas3D_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_canvas3d_light_class_get(void);
    void evas_canvas3d_light_directional_set(Eina_Bool directional);
    Eina_Bool evas_canvas3d_light_directional_get(void);
    void evas_canvas3d_light_spot_exponent_set(Evas_Real exponent);
    Evas_Real evas_canvas3d_light_spot_exponent_get(void);
    void evas_canvas3d_light_spot_cutoff_set(Evas_Real cutoff);
    Evas_Real evas_canvas3d_light_spot_cutoff_get(void);
    void evas_canvas3d_light_attenuation_enable_set(Eina_Bool enable);
    Eina_Bool evas_canvas3d_light_attenuation_enable_get(void);
    void evas_canvas3d_light_ambient_set(Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);
    void evas_canvas3d_light_ambient_get(Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);
    void evas_canvas3d_light_diffuse_set(Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);
    void evas_canvas3d_light_diffuse_get(Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);
    void evas_canvas3d_light_specular_set(Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);
    void evas_canvas3d_light_specular_get(Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);
    void evas_canvas3d_light_attenuation_set(Evas_Real constant, Evas_Real linear, Evas_Real quadratic);
    void evas_canvas3d_light_attenuation_get(Evas_Real *constant, Evas_Real *linear, Evas_Real *quadratic);
    void evas_canvas3d_light_projection_matrix_set(const Evas_Real * matrix);
    void evas_canvas3d_light_projection_matrix_get(Evas_Real *matrix);
    void evas_canvas3d_light_projection_perspective_set(Evas_Real fovy, Evas_Real aspect, Evas_Real dnear, Evas_Real dfar);
    void evas_canvas3d_light_projection_frustum_set(Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);
    void evas_canvas3d_light_projection_ortho_set(Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);
]]

local __M = util.get_namespace(M, { "canvas3d" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    directional_set = function(self, directional)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_light_directional_set(directional)
        eo.__do_end()
    end,

    directional_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_light_directional_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    spot_exponent_set = function(self, exponent)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_light_spot_exponent_set(exponent)
        eo.__do_end()
    end,

    spot_exponent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_light_spot_exponent_get()
        eo.__do_end()
        return v
    end,

    spot_cutoff_set = function(self, cutoff)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_light_spot_cutoff_set(cutoff)
        eo.__do_end()
    end,

    spot_cutoff_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_light_spot_cutoff_get()
        eo.__do_end()
        return v
    end,

    attenuation_enable_set = function(self, enable)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_light_attenuation_enable_set(enable)
        eo.__do_end()
    end,

    attenuation_enable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_light_attenuation_enable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    ambient_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_light_ambient_set(r, g, b, a)
        eo.__do_end()
    end,

    ambient_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("Evas_Real[1]")
        local g = ffi.new("Evas_Real[1]")
        local b = ffi.new("Evas_Real[1]")
        local a = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_light_ambient_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    diffuse_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_light_diffuse_set(r, g, b, a)
        eo.__do_end()
    end,

    diffuse_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("Evas_Real[1]")
        local g = ffi.new("Evas_Real[1]")
        local b = ffi.new("Evas_Real[1]")
        local a = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_light_diffuse_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    specular_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_light_specular_set(r, g, b, a)
        eo.__do_end()
    end,

    specular_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("Evas_Real[1]")
        local g = ffi.new("Evas_Real[1]")
        local b = ffi.new("Evas_Real[1]")
        local a = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_light_specular_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    attenuation_set = function(self, constant, linear, quadratic)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_light_attenuation_set(constant, linear, quadratic)
        eo.__do_end()
    end,

    attenuation_get = function(self)
        eo.__do_start(self, __class)
        local constant = ffi.new("Evas_Real[1]")
        local linear = ffi.new("Evas_Real[1]")
        local quadratic = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_light_attenuation_get(constant, linear, quadratic)
        eo.__do_end()
        return constant[0], linear[0], quadratic[0]
    end,

    projection_matrix_set = function(self, matrix)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_light_projection_matrix_set(matrix)
        eo.__do_end()
    end,

    projection_matrix_get = function(self)
        eo.__do_start(self, __class)
        local matrix = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_light_projection_matrix_get(matrix)
        eo.__do_end()
        return matrix[0]
    end,

    projection_perspective_set = function(self, fovy, aspect, dnear, dfar)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_light_projection_perspective_set(fovy, aspect, dnear, dfar)
        eo.__do_end()
    end,

    projection_frustum_set = function(self, left, right, bottom, top, dnear, dfar)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_light_projection_frustum_set(left, right, bottom, top, dnear, dfar)
        eo.__do_end()
    end,

    projection_ortho_set = function(self, left, right, bottom, top, dnear, dfar)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_light_projection_ortho_set(left, right, bottom, top, dnear, dfar)
        eo.__do_end()
    end,

    __properties = {
        ["directional"] = { 0, 0, 1, 1, true, true },
        ["spot_cutoff"] = { 0, 0, 1, 1, true, true },
        ["spot_exponent"] = { 0, 0, 1, 1, true, true },
        ["attenuation_enable"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Light = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Canvas3D_Light").__eo_ctor,
                            1, ...)
end

return M
