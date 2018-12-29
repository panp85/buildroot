-- EFL LuaJIT bindings: efl_gfx_map.eo (class Efl.Gfx.Map)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_gfx_map_mixin_get()
    eo.class_register("Efl_Gfx_Map", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_gfx_map_mixin_get(void);
    void efl_gfx_map_point_count_set(int count);
    int efl_gfx_map_point_count_get(void);
    Eina_Bool efl_gfx_map_clockwise_get(void);
    void efl_gfx_map_smooth_set(Eina_Bool smooth);
    Eina_Bool efl_gfx_map_smooth_get(void);
    void efl_gfx_map_alpha_set(Eina_Bool alpha);
    Eina_Bool efl_gfx_map_alpha_get(void);
    void efl_gfx_map_coord_absolute_set(int idx, double x, double y, double z);
    void efl_gfx_map_coord_absolute_get(int idx, double *x, double *y, double *z);
    void efl_gfx_map_uv_set(int idx, double u, double v);
    void efl_gfx_map_uv_get(int idx, double *u, double *v);
    void efl_gfx_map_color_set(int idx, int r, int g, int b, int a);
    void efl_gfx_map_color_get(int idx, int *r, int *g, int *b, int *a);
    Eina_Bool efl_gfx_map_has(void);
    void efl_gfx_map_reset(void);
    void efl_gfx_map_translate(double dx, double dy, double dz);
    void efl_gfx_map_rotate(double degrees, const Efl_Gfx * pivot, double cx, double cy);
    void efl_gfx_map_rotate_3d(double dx, double dy, double dz, const Efl_Gfx * pivot, double cx, double cy, double cz);
    void efl_gfx_map_rotate_quat(double qx, double qy, double qz, double qw, const Efl_Gfx * pivot, double cx, double cy, double cz);
    void efl_gfx_map_zoom(double zoomx, double zoomy, const Efl_Gfx * pivot, double cx, double cy);
    void efl_gfx_map_lightning_3d(const Efl_Gfx * pivot, double lx, double ly, double lz, int lr, int lg, int lb, int ar, int ag, int ab);
    void efl_gfx_map_perspective_3d(const Efl_Gfx * pivot, double px, double py, double z0, double foc);
    void efl_gfx_map_rotate_absolute(double degrees, double cx, double cy);
    void efl_gfx_map_rotate_3d_absolute(double dx, double dy, double dz, double cx, double cy, double cz);
    void efl_gfx_map_rotate_quat_absolute(double qx, double qy, double qz, double qw, double cx, double cy, double cz);
    void efl_gfx_map_zoom_absolute(double zoomx, double zoomy, double cx, double cy);
    void efl_gfx_map_lightning_3d_absolute(double lx, double ly, double lz, int lr, int lg, int lb, int ar, int ag, int ab);
    void efl_gfx_map_perspective_3d_absolute(double px, double py, double z0, double foc);
]]

local __M = util.get_namespace(M, { "gfx" })
__body = {
    map_point_count_set = function(self, count)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_point_count_set(count)
        eo.__do_end()
    end,

    map_point_count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_map_point_count_get()
        eo.__do_end()
        return tonumber(v)
    end,

    map_clockwise_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_map_clockwise_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    map_smooth_set = function(self, smooth)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_smooth_set(smooth)
        eo.__do_end()
    end,

    map_smooth_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_map_smooth_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    map_alpha_set = function(self, alpha)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_alpha_set(alpha)
        eo.__do_end()
    end,

    map_alpha_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_map_alpha_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    map_coord_absolute_set = function(self, idx, x, y, z)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_coord_absolute_set(idx, x, y, z)
        eo.__do_end()
    end,

    map_coord_absolute_get = function(self, idx)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        local z = ffi.new("double[1]")
        __lib.efl_gfx_map_coord_absolute_get(idx, x, y, z)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0]), tonumber(z[0])
    end,

    map_uv_set = function(self, idx, u, v)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_uv_set(idx, u, v)
        eo.__do_end()
    end,

    map_uv_get = function(self, idx)
        eo.__do_start(self, __class)
        local u = ffi.new("double[1]")
        local v = ffi.new("double[1]")
        __lib.efl_gfx_map_uv_get(idx, u, v)
        eo.__do_end()
        return tonumber(u[0]), tonumber(v[0])
    end,

    map_color_set = function(self, idx, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_color_set(idx, r, g, b, a)
        eo.__do_end()
    end,

    map_color_get = function(self, idx)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        __lib.efl_gfx_map_color_get(idx, r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    map_has = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_map_has()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    map_reset = function(self)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_reset()
        eo.__do_end()
    end,

    translate = function(self, dx, dy, dz)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_translate(dx, dy, dz)
        eo.__do_end()
    end,

    rotate = function(self, degrees, pivot, cx, cy)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_rotate(degrees, pivot, cx, cy)
        eo.__do_end()
    end,

    rotate_3d = function(self, dx, dy, dz, pivot, cx, cy, cz)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_rotate_3d(dx, dy, dz, pivot, cx, cy, cz)
        eo.__do_end()
    end,

    rotate_quat = function(self, qx, qy, qz, qw, pivot, cx, cy, cz)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_rotate_quat(qx, qy, qz, qw, pivot, cx, cy, cz)
        eo.__do_end()
    end,

    zoom = function(self, zoomx, zoomy, pivot, cx, cy)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_zoom(zoomx, zoomy, pivot, cx, cy)
        eo.__do_end()
    end,

    lightning_3d = function(self, pivot, lx, ly, lz, lr, lg, lb, ar, ag, ab)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_lightning_3d(pivot, lx, ly, lz, lr, lg, lb, ar, ag, ab)
        eo.__do_end()
    end,

    perspective_3d = function(self, pivot, px, py, z0, foc)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_perspective_3d(pivot, px, py, z0, foc)
        eo.__do_end()
    end,

    rotate_absolute = function(self, degrees, cx, cy)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_rotate_absolute(degrees, cx, cy)
        eo.__do_end()
    end,

    rotate_3d_absolute = function(self, dx, dy, dz, cx, cy, cz)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_rotate_3d_absolute(dx, dy, dz, cx, cy, cz)
        eo.__do_end()
    end,

    rotate_quat_absolute = function(self, qx, qy, qz, qw, cx, cy, cz)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_rotate_quat_absolute(qx, qy, qz, qw, cx, cy, cz)
        eo.__do_end()
    end,

    zoom_absolute = function(self, zoomx, zoomy, cx, cy)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_zoom_absolute(zoomx, zoomy, cx, cy)
        eo.__do_end()
    end,

    lightning_3d_absolute = function(self, lx, ly, lz, lr, lg, lb, ar, ag, ab)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_lightning_3d_absolute(lx, ly, lz, lr, lg, lb, ar, ag, ab)
        eo.__do_end()
    end,

    perspective_3d_absolute = function(self, px, py, z0, foc)
        eo.__do_start(self, __class)
        __lib.efl_gfx_map_perspective_3d_absolute(px, py, z0, foc)
        eo.__do_end()
    end,

    __properties = {
        ["map_coord_absolute"] = { 1, 1, 3, 3, true, true },
        ["map_smooth"] = { 0, 0, 1, 1, true, true },
        ["map_point_count"] = { 0, 0, 1, 1, true, true },
        ["map_color"] = { 1, 1, 4, 4, true, true },
        ["map_uv"] = { 1, 1, 2, 2, true, true },
        ["map_clockwise"] = { 0, 0, 1, 0, true, false },
        ["map_alpha"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__mixin_Efl_Gfx_Map"] = true

return M
