-- EFL LuaJIT bindings: evas_canvas3d_primitive.eo (class Evas.Canvas3D.Primitive)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_canvas3d_primitive_class_get()
    eo.class_register("Evas_Canvas3D_Primitive", {"Evas_Canvas3D_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_canvas3d_primitive_class_get(void);
    void evas_canvas3d_primitive_form_set(Evas_Canvas3D_Mesh_Primitive form);
    Evas_Canvas3D_Mesh_Primitive evas_canvas3d_primitive_form_get(void);
    void evas_canvas3d_primitive_mode_set(Evas_Canvas3D_Primitive_Mode mode);
    Evas_Canvas3D_Primitive_Mode evas_canvas3d_primitive_mode_get(void);
    void evas_canvas3d_primitive_ratio_set(Evas_Real ratio);
    Evas_Real evas_canvas3d_primitive_ratio_get(void);
    void evas_canvas3d_primitive_precision_set(int precision);
    int evas_canvas3d_primitive_precision_get(void);
    void evas_canvas3d_primitive_surface_set(Evas_Canvas3D_Surface_Func * surface);
    void evas_canvas3d_primitive_tex_scale_set(Evas_Real tex_scale_x, Evas_Real tex_scale_y);
    void evas_canvas3d_primitive_tex_scale_get(Evas_Real *tex_scale_x, Evas_Real *tex_scale_y);
]]

local __M = util.get_namespace(M, { "canvas3d" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    form_set = function(self, form)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_primitive_form_set(form)
        eo.__do_end()
    end,

    form_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_primitive_form_get()
        eo.__do_end()
        return v
    end,

    mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_primitive_mode_set(mode)
        eo.__do_end()
    end,

    mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_primitive_mode_get()
        eo.__do_end()
        return v
    end,

    ratio_set = function(self, ratio)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_primitive_ratio_set(ratio)
        eo.__do_end()
    end,

    ratio_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_primitive_ratio_get()
        eo.__do_end()
        return v
    end,

    precision_set = function(self, precision)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_primitive_precision_set(precision)
        eo.__do_end()
    end,

    precision_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_primitive_precision_get()
        eo.__do_end()
        return tonumber(v)
    end,

    surface_set = function(self, surface)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_primitive_surface_set(surface)
        eo.__do_end()
    end,

    tex_scale_set = function(self, tex_scale_x, tex_scale_y)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_primitive_tex_scale_set(tex_scale_x, tex_scale_y)
        eo.__do_end()
    end,

    tex_scale_get = function(self)
        eo.__do_start(self, __class)
        local tex_scale_x = ffi.new("Evas_Real[1]")
        local tex_scale_y = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_primitive_tex_scale_get(tex_scale_x, tex_scale_y)
        eo.__do_end()
        return tex_scale_x[0], tex_scale_y[0]
    end,

    __properties = {
        ["tex_scale"] = { 0, 0, 2, 2, true, true },
        ["form"] = { 0, 0, 1, 1, true, true },
        ["ratio"] = { 0, 0, 1, 1, true, true },
        ["precision"] = { 0, 0, 1, 1, true, true },
        ["mode"] = { 0, 0, 1, 1, true, true },
        ["surface"] = { 0, 0, 0, 1, false, true }
    }
}

__M.Primitive = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Canvas3D_Primitive").__eo_ctor,
                            1, ...)
end

return M
