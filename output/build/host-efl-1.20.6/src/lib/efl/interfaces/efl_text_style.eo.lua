-- EFL LuaJIT bindings: efl_text_style.eo (class Efl.Text.Style)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_text_style_interface_get()
    eo.class_register("Efl_Text_Style", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_text_style_interface_get(void);
    void efl_text_normal_color_set(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void efl_text_normal_color_get(unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);
    void efl_text_backing_type_set(Efl_Text_Style_Backing_Type type);
    Efl_Text_Style_Backing_Type efl_text_backing_type_get(void);
    void efl_text_backing_color_set(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void efl_text_backing_color_get(unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);
    void efl_text_underline_type_set(Efl_Text_Style_Underline_Type type);
    Efl_Text_Style_Underline_Type efl_text_underline_type_get(void);
    void efl_text_underline_color_set(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void efl_text_underline_color_get(unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);
    void efl_text_underline_height_set(double height);
    double efl_text_underline_height_get(void);
    void efl_text_underline_dashed_color_set(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void efl_text_underline_dashed_color_get(unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);
    void efl_text_underline_dashed_width_set(int width);
    int efl_text_underline_dashed_width_get(void);
    void efl_text_underline_dashed_gap_set(int gap);
    int efl_text_underline_dashed_gap_get(void);
    void efl_text_underline2_type_set(Efl_Text_Style_Underline_Type type);
    Efl_Text_Style_Underline_Type efl_text_underline2_type_get(void);
    void efl_text_underline2_color_set(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void efl_text_underline2_color_get(unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);
    void efl_text_strikethrough_type_set(Efl_Text_Style_Strikethrough_Type type);
    Efl_Text_Style_Strikethrough_Type efl_text_strikethrough_type_get(void);
    void efl_text_strikethrough_color_set(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void efl_text_strikethrough_color_get(unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);
    void efl_text_effect_type_set(Efl_Text_Style_Effect_Type type);
    Efl_Text_Style_Effect_Type efl_text_effect_type_get(void);
    void efl_text_outline_color_set(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void efl_text_outline_color_get(unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);
    void efl_text_shadow_direction_set(Efl_Text_Style_Shadow_Direction type);
    Efl_Text_Style_Shadow_Direction efl_text_shadow_direction_get(void);
    void efl_text_shadow_color_set(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void efl_text_shadow_color_get(unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);
    void efl_text_glow_color_set(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void efl_text_glow_color_get(unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);
    void efl_text_glow2_color_set(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
    void efl_text_glow2_color_get(unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);
    void efl_text_gfx_filter_set(const char * code);
    const char *efl_text_gfx_filter_get(void);
]]

local __M = util.get_namespace(M, { "text" })
__body = {
    normal_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.efl_text_normal_color_set(r, g, b, a)
        eo.__do_end()
    end,

    normal_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("unsigned char[1]")
        local g = ffi.new("unsigned char[1]")
        local b = ffi.new("unsigned char[1]")
        local a = ffi.new("unsigned char[1]")
        __lib.efl_text_normal_color_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    backing_type_set = function(self, type)
        eo.__do_start(self, __class)
        __lib.efl_text_backing_type_set(type)
        eo.__do_end()
    end,

    backing_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_backing_type_get()
        eo.__do_end()
        return v
    end,

    backing_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.efl_text_backing_color_set(r, g, b, a)
        eo.__do_end()
    end,

    backing_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("unsigned char[1]")
        local g = ffi.new("unsigned char[1]")
        local b = ffi.new("unsigned char[1]")
        local a = ffi.new("unsigned char[1]")
        __lib.efl_text_backing_color_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    underline_type_set = function(self, type)
        eo.__do_start(self, __class)
        __lib.efl_text_underline_type_set(type)
        eo.__do_end()
    end,

    underline_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_underline_type_get()
        eo.__do_end()
        return v
    end,

    underline_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.efl_text_underline_color_set(r, g, b, a)
        eo.__do_end()
    end,

    underline_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("unsigned char[1]")
        local g = ffi.new("unsigned char[1]")
        local b = ffi.new("unsigned char[1]")
        local a = ffi.new("unsigned char[1]")
        __lib.efl_text_underline_color_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    underline_height_set = function(self, height)
        eo.__do_start(self, __class)
        __lib.efl_text_underline_height_set(height)
        eo.__do_end()
    end,

    underline_height_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_underline_height_get()
        eo.__do_end()
        return tonumber(v)
    end,

    underline_dashed_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.efl_text_underline_dashed_color_set(r, g, b, a)
        eo.__do_end()
    end,

    underline_dashed_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("unsigned char[1]")
        local g = ffi.new("unsigned char[1]")
        local b = ffi.new("unsigned char[1]")
        local a = ffi.new("unsigned char[1]")
        __lib.efl_text_underline_dashed_color_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    underline_dashed_width_set = function(self, width)
        eo.__do_start(self, __class)
        __lib.efl_text_underline_dashed_width_set(width)
        eo.__do_end()
    end,

    underline_dashed_width_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_underline_dashed_width_get()
        eo.__do_end()
        return tonumber(v)
    end,

    underline_dashed_gap_set = function(self, gap)
        eo.__do_start(self, __class)
        __lib.efl_text_underline_dashed_gap_set(gap)
        eo.__do_end()
    end,

    underline_dashed_gap_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_underline_dashed_gap_get()
        eo.__do_end()
        return tonumber(v)
    end,

    underline2_type_set = function(self, type)
        eo.__do_start(self, __class)
        __lib.efl_text_underline2_type_set(type)
        eo.__do_end()
    end,

    underline2_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_underline2_type_get()
        eo.__do_end()
        return v
    end,

    underline2_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.efl_text_underline2_color_set(r, g, b, a)
        eo.__do_end()
    end,

    underline2_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("unsigned char[1]")
        local g = ffi.new("unsigned char[1]")
        local b = ffi.new("unsigned char[1]")
        local a = ffi.new("unsigned char[1]")
        __lib.efl_text_underline2_color_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    strikethrough_type_set = function(self, type)
        eo.__do_start(self, __class)
        __lib.efl_text_strikethrough_type_set(type)
        eo.__do_end()
    end,

    strikethrough_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_strikethrough_type_get()
        eo.__do_end()
        return v
    end,

    strikethrough_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.efl_text_strikethrough_color_set(r, g, b, a)
        eo.__do_end()
    end,

    strikethrough_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("unsigned char[1]")
        local g = ffi.new("unsigned char[1]")
        local b = ffi.new("unsigned char[1]")
        local a = ffi.new("unsigned char[1]")
        __lib.efl_text_strikethrough_color_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    effect_type_set = function(self, type)
        eo.__do_start(self, __class)
        __lib.efl_text_effect_type_set(type)
        eo.__do_end()
    end,

    effect_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_effect_type_get()
        eo.__do_end()
        return v
    end,

    outline_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.efl_text_outline_color_set(r, g, b, a)
        eo.__do_end()
    end,

    outline_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("unsigned char[1]")
        local g = ffi.new("unsigned char[1]")
        local b = ffi.new("unsigned char[1]")
        local a = ffi.new("unsigned char[1]")
        __lib.efl_text_outline_color_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    shadow_direction_set = function(self, type)
        eo.__do_start(self, __class)
        __lib.efl_text_shadow_direction_set(type)
        eo.__do_end()
    end,

    shadow_direction_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_shadow_direction_get()
        eo.__do_end()
        return v
    end,

    shadow_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.efl_text_shadow_color_set(r, g, b, a)
        eo.__do_end()
    end,

    shadow_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("unsigned char[1]")
        local g = ffi.new("unsigned char[1]")
        local b = ffi.new("unsigned char[1]")
        local a = ffi.new("unsigned char[1]")
        __lib.efl_text_shadow_color_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    glow_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.efl_text_glow_color_set(r, g, b, a)
        eo.__do_end()
    end,

    glow_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("unsigned char[1]")
        local g = ffi.new("unsigned char[1]")
        local b = ffi.new("unsigned char[1]")
        local a = ffi.new("unsigned char[1]")
        __lib.efl_text_glow_color_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    glow2_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.efl_text_glow2_color_set(r, g, b, a)
        eo.__do_end()
    end,

    glow2_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("unsigned char[1]")
        local g = ffi.new("unsigned char[1]")
        local b = ffi.new("unsigned char[1]")
        local a = ffi.new("unsigned char[1]")
        __lib.efl_text_glow2_color_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    gfx_filter_set = function(self, code)
        eo.__do_start(self, __class)
        __lib.efl_text_gfx_filter_set(code)
        eo.__do_end()
    end,

    gfx_filter_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_gfx_filter_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["glow_color"] = { 0, 0, 4, 4, true, true },
        ["shadow_direction"] = { 0, 0, 1, 1, true, true },
        ["underline_dashed_gap"] = { 0, 0, 1, 1, true, true },
        ["outline_color"] = { 0, 0, 4, 4, true, true },
        ["shadow_color"] = { 0, 0, 4, 4, true, true },
        ["underline_height"] = { 0, 0, 1, 1, true, true },
        ["effect_type"] = { 0, 0, 1, 1, true, true },
        ["underline_type"] = { 0, 0, 1, 1, true, true },
        ["normal_color"] = { 0, 0, 4, 4, true, true },
        ["backing_type"] = { 0, 0, 1, 1, true, true },
        ["backing_color"] = { 0, 0, 4, 4, true, true },
        ["gfx_filter"] = { 0, 0, 1, 1, true, true },
        ["glow2_color"] = { 0, 0, 4, 4, true, true },
        ["strikethrough_type"] = { 0, 0, 1, 1, true, true },
        ["underline_dashed_color"] = { 0, 0, 4, 4, true, true },
        ["underline_dashed_width"] = { 0, 0, 1, 1, true, true },
        ["underline2_color"] = { 0, 0, 4, 4, true, true },
        ["strikethrough_color"] = { 0, 0, 4, 4, true, true },
        ["underline2_type"] = { 0, 0, 1, 1, true, true },
        ["underline_color"] = { 0, 0, 4, 4, true, true }
    }
}
__body["__iface_Efl_Text_Style"] = true

return M
