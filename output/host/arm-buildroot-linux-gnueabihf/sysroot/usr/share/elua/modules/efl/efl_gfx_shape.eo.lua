-- EFL LuaJIT bindings: efl_gfx_shape.eo (class Efl.Gfx.Shape)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_gfx_shape_mixin_get()
    eo.class_register("Efl_Gfx_Shape", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_gfx_shape_mixin_get(void);
    void efl_gfx_shape_stroke_scale_set(double s);
    double efl_gfx_shape_stroke_scale_get(void);
    void efl_gfx_shape_stroke_color_set(int r, int g, int b, int a);
    void efl_gfx_shape_stroke_color_get(int *r, int *g, int *b, int *a);
    void efl_gfx_shape_stroke_width_set(double w);
    double efl_gfx_shape_stroke_width_get(void);
    void efl_gfx_shape_stroke_location_set(double centered);
    double efl_gfx_shape_stroke_location_get(void);
    void efl_gfx_shape_stroke_dash_set(const Efl_Gfx_Dash * dash, unsigned int length);
    void efl_gfx_shape_stroke_dash_get(const Efl_Gfx_Dash * *dash, unsigned int *length);
    void efl_gfx_shape_stroke_cap_set(Efl_Gfx_Cap c);
    Efl_Gfx_Cap efl_gfx_shape_stroke_cap_get(void);
    void efl_gfx_shape_stroke_join_set(Efl_Gfx_Join j);
    Efl_Gfx_Join efl_gfx_shape_stroke_join_get(void);
    void efl_gfx_shape_fill_rule_set(Efl_Gfx_Fill_Rule fill_rule);
    Efl_Gfx_Fill_Rule efl_gfx_shape_fill_rule_get(void);
    Eina_Bool efl_gfx_shape_interpolate(const Efl_Object * from, const Efl_Object * to, double pos_map);
    void efl_gfx_shape_dup(const Efl_Object * dup_from);
]]

local __M = util.get_namespace(M, { "gfx" })
__body = {
    stroke_scale_set = function(self, s)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_stroke_scale_set(s)
        eo.__do_end()
    end,

    stroke_scale_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_stroke_scale_get()
        eo.__do_end()
        return tonumber(v)
    end,

    stroke_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_stroke_color_set(r, g, b, a)
        eo.__do_end()
    end,

    stroke_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        __lib.efl_gfx_shape_stroke_color_get(r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    stroke_width_set = function(self, w)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_stroke_width_set(w)
        eo.__do_end()
    end,

    stroke_width_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_stroke_width_get()
        eo.__do_end()
        return tonumber(v)
    end,

    stroke_location_set = function(self, centered)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_stroke_location_set(centered)
        eo.__do_end()
    end,

    stroke_location_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_stroke_location_get()
        eo.__do_end()
        return tonumber(v)
    end,

    stroke_dash_set = function(self, dash, length)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_stroke_dash_set(dash, length)
        eo.__do_end()
    end,

    stroke_dash_get = function(self)
        eo.__do_start(self, __class)
        local dash = ffi.new("const Efl_Gfx_Dash *[1]")
        local length = ffi.new("unsigned int[1]")
        __lib.efl_gfx_shape_stroke_dash_get(dash, length)
        eo.__do_end()
        return dash[0], length[0]
    end,

    stroke_cap_set = function(self, c)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_stroke_cap_set(c)
        eo.__do_end()
    end,

    stroke_cap_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_stroke_cap_get()
        eo.__do_end()
        return v
    end,

    stroke_join_set = function(self, j)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_stroke_join_set(j)
        eo.__do_end()
    end,

    stroke_join_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_stroke_join_get()
        eo.__do_end()
        return v
    end,

    fill_rule_set = function(self, fill_rule)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_fill_rule_set(fill_rule)
        eo.__do_end()
    end,

    fill_rule_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_fill_rule_get()
        eo.__do_end()
        return v
    end,

    interpolate = function(self, from, to, pos_map)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_shape_interpolate(from, to, pos_map)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    dup = function(self, dup_from)
        eo.__do_start(self, __class)
        __lib.efl_gfx_shape_dup(dup_from)
        eo.__do_end()
    end,

    __properties = {
        ["fill_rule"] = { 0, 0, 1, 1, true, true },
        ["stroke_scale"] = { 0, 0, 1, 1, true, true },
        ["stroke_join"] = { 0, 0, 1, 1, true, true },
        ["stroke_cap"] = { 0, 0, 1, 1, true, true },
        ["stroke_color"] = { 0, 0, 4, 4, true, true },
        ["stroke_dash"] = { 0, 0, 2, 2, true, true },
        ["stroke_location"] = { 0, 0, 1, 1, true, true },
        ["stroke_width"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__mixin_Efl_Gfx_Shape"] = true

return M
