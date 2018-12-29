-- EFL LuaJIT bindings: evas_canvas3d_texture.eo (class Evas.Canvas3D.Texture)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_canvas3d_texture_class_get()
    eo.class_register("Evas_Canvas3D_Texture", {"Evas_Canvas3D_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_canvas3d_texture_class_get(void);
    void evas_canvas3d_texture_source_visible_set(Eina_Bool visible);
    Eina_Bool evas_canvas3d_texture_source_visible_get(void);
    void evas_canvas3d_texture_atlas_enable_set(Eina_Bool use_atlas);
    Eina_Bool evas_canvas3d_texture_atlas_enable_get(void);
    void evas_canvas3d_texture_data_set(Evas_Colorspace color_format, int w, int h, const void * data);
    void evas_canvas3d_texture_file_set(const char * file, const char * key);
    void evas_canvas3d_texture_source_set(Efl_Canvas_Object * source);
    Evas_Colorspace evas_canvas3d_texture_color_format_get(void);
    void evas_canvas3d_texture_size_get(int *w, int *h);
    void evas_canvas3d_texture_wrap_set(Evas_Canvas3D_Wrap_Mode s, Evas_Canvas3D_Wrap_Mode t);
    void evas_canvas3d_texture_wrap_get(Evas_Canvas3D_Wrap_Mode *s, Evas_Canvas3D_Wrap_Mode *t);
    void evas_canvas3d_texture_filter_set(Evas_Canvas3D_Texture_Filter min, Evas_Canvas3D_Texture_Filter mag);
    void evas_canvas3d_texture_filter_get(Evas_Canvas3D_Texture_Filter *min, Evas_Canvas3D_Texture_Filter *mag);
]]

local __M = util.get_namespace(M, { "canvas3d" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    source_visible_set = function(self, visible)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_texture_source_visible_set(visible)
        eo.__do_end()
    end,

    source_visible_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_texture_source_visible_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    atlas_enable_set = function(self, use_atlas)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_texture_atlas_enable_set(use_atlas)
        eo.__do_end()
    end,

    atlas_enable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_texture_atlas_enable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    data_set = function(self, color_format, w, h, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_texture_data_set(color_format, w, h, data)
        eo.__do_end()
    end,

    file_set = function(self, file, key)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_texture_file_set(file, key)
        eo.__do_end()
    end,

    source_set = function(self, source)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_texture_source_set(source)
        eo.__do_end()
    end,

    color_format_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_texture_color_format_get()
        eo.__do_end()
        return v
    end,

    size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.evas_canvas3d_texture_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    wrap_set = function(self, s, t)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_texture_wrap_set(s, t)
        eo.__do_end()
    end,

    wrap_get = function(self)
        eo.__do_start(self, __class)
        local s = ffi.new("Evas_Canvas3D_Wrap_Mode[1]")
        local t = ffi.new("Evas_Canvas3D_Wrap_Mode[1]")
        __lib.evas_canvas3d_texture_wrap_get(s, t)
        eo.__do_end()
        return s[0], t[0]
    end,

    filter_set = function(self, min, mag)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_texture_filter_set(min, mag)
        eo.__do_end()
    end,

    filter_get = function(self)
        eo.__do_start(self, __class)
        local min = ffi.new("Evas_Canvas3D_Texture_Filter[1]")
        local mag = ffi.new("Evas_Canvas3D_Texture_Filter[1]")
        __lib.evas_canvas3d_texture_filter_get(min, mag)
        eo.__do_end()
        return min[0], mag[0]
    end,

    __properties = {
        ["source_visible"] = { 0, 0, 1, 1, true, true },
        ["atlas_enable"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Texture = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Canvas3D_Texture").__eo_ctor,
                            1, ...)
end

return M
