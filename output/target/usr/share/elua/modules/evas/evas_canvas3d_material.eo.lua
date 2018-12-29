-- EFL LuaJIT bindings: evas_canvas3d_material.eo (class Evas.Canvas3D.Material)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_canvas3d_material_class_get()
    eo.class_register("Evas_Canvas3D_Material", {"Evas_Canvas3D_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_canvas3d_material_class_get(void);
    void evas_canvas3d_material_enable_set(Evas_Canvas3D_Material_Attrib attrib, Eina_Bool enable);
    Eina_Bool evas_canvas3d_material_enable_get(Evas_Canvas3D_Material_Attrib attrib);
    void evas_canvas3d_material_shininess_set(Evas_Real shininess);
    Evas_Real evas_canvas3d_material_shininess_get(void);
    void evas_canvas3d_material_texture_set(Evas_Canvas3D_Material_Attrib attrib, Evas_Canvas3D_Texture * texture);
    Evas_Canvas3D_Texture *evas_canvas3d_material_texture_get(Evas_Canvas3D_Material_Attrib attrib);
    void evas_canvas3d_material_color_set(Evas_Canvas3D_Material_Attrib attrib, Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);
    void evas_canvas3d_material_color_get(Evas_Canvas3D_Material_Attrib attrib, Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);
]]

local __M = util.get_namespace(M, { "canvas3d" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    enable_set = function(self, attrib, enable)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_material_enable_set(attrib, enable)
        eo.__do_end()
    end,

    enable_get = function(self, attrib)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_material_enable_get(attrib)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    shininess_set = function(self, shininess)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_material_shininess_set(shininess)
        eo.__do_end()
    end,

    shininess_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_material_shininess_get()
        eo.__do_end()
        return v
    end,

    texture_set = function(self, attrib, texture)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_material_texture_set(attrib, texture)
        eo.__do_end()
    end,

    texture_get = function(self, attrib)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_material_texture_get(attrib)
        eo.__do_end()
        return v
    end,

    color_set = function(self, attrib, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_material_color_set(attrib, r, g, b, a)
        eo.__do_end()
    end,

    color_get = function(self, attrib)
        eo.__do_start(self, __class)
        local r = ffi.new("Evas_Real[1]")
        local g = ffi.new("Evas_Real[1]")
        local b = ffi.new("Evas_Real[1]")
        local a = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_material_color_get(attrib, r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    __properties = {
        ["enable"] = { 1, 1, 1, 1, true, true },
        ["texture"] = { 1, 1, 1, 1, true, true },
        ["shininess"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Material = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Canvas3D_Material").__eo_ctor,
                            1, ...)
end

return M
