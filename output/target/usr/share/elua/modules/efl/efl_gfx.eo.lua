-- EFL LuaJIT bindings: efl_gfx.eo (class Efl.Gfx)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_gfx_interface_get()
    eo.class_register("Efl_Gfx", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_gfx_interface_get(void);
    void efl_gfx_position_set(int x, int y);
    void efl_gfx_position_get(int *x, int *y);
    void efl_gfx_size_set(int w, int h);
    void efl_gfx_size_get(int *w, int *h);
    void efl_gfx_geometry_set(int x, int y, int w, int h);
    void efl_gfx_geometry_get(int *x, int *y, int *w, int *h);
    void efl_gfx_color_set(int r, int g, int b, int a);
    void efl_gfx_color_get(int *r, int *g, int *b, int *a);
    Eina_Bool efl_gfx_color_part_set(const char * part, int r, int g, int b, int a);
    Eina_Bool efl_gfx_color_part_get(const char * part, int *r, int *g, int *b, int *a);
    void efl_gfx_visible_set(Eina_Bool v);
    Eina_Bool efl_gfx_visible_get(void);
    extern const Eo_Event_Description _EFL_GFX_EVENT_SHOW;
    extern const Eo_Event_Description _EFL_GFX_EVENT_HIDE;
    extern const Eo_Event_Description _EFL_GFX_EVENT_MOVE;
    extern const Eo_Event_Description _EFL_GFX_EVENT_RESIZE;
    extern const Eo_Event_Description _EFL_GFX_EVENT_CHANGED;
]]

__body = {
    position_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_position_set(x, y)
        eo.__do_end()
    end,

    position_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.efl_gfx_position_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    size_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.efl_gfx_size_set(w, h)
        eo.__do_end()
    end,

    size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_gfx_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    geometry_set = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.efl_gfx_geometry_set(x, y, w, h)
        eo.__do_end()
    end,

    geometry_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_gfx_geometry_get(x, y, w, h)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.efl_gfx_color_set(r, g, b, a)
        eo.__do_end()
    end,

    color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        __lib.efl_gfx_color_get(r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    color_part_set = function(self, part, r, g, b, a)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_color_part_set(part, r, g, b, a)
        eo.__do_end()
    end,

    color_part_get = function(self, part)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        local v = __lib.efl_gfx_color_part_get(part, r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    visible_set = function(self, v)
        eo.__do_start(self, __class)
        __lib.efl_gfx_visible_set(v)
        eo.__do_end()
    end,

    visible_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_visible_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["show"] = __lib._EFL_GFX_EVENT_SHOW,
        ["hide"] = __lib._EFL_GFX_EVENT_HIDE,
        ["move"] = __lib._EFL_GFX_EVENT_MOVE,
        ["resize"] = __lib._EFL_GFX_EVENT_RESIZE,
        ["changed"] = __lib._EFL_GFX_EVENT_CHANGED
    },

    __properties = {
        ["geometry"] = { 0, 0, 4, 4, true, true },
        ["size"] = { 0, 0, 2, 2, true, true },
        ["color"] = { 0, 0, 4, 4, true, true },
        ["color_part"] = { 1, 1, 4, 4, true, true },
        ["visible"] = { 0, 0, 1, 1, true, true },
        ["position"] = { 0, 0, 2, 2, true, true }
    }
}
__body["__iface_Efl_Gfx"] = true

return M
