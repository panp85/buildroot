-- EFL LuaJIT bindings: efl_vg_shape.eo (class Efl.VG.Shape)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_vg_shape_class_get()
    eo.class_register("Efl_VG_Shape", {"Efl_VG"}, {"Efl_Gfx_Shape"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_vg_shape_class_get(void);
    void efl_vg_shape_fill_set(Efl_VG * f);
    Efl_VG *efl_vg_shape_fill_get(void);
    void efl_vg_shape_stroke_fill_set(Efl_VG * f);
    Efl_VG *efl_vg_shape_stroke_fill_get(void);
    void efl_vg_shape_stroke_marker_set(Efl_VG * m);
    Efl_VG *efl_vg_shape_stroke_marker_get(void);
]]

local __M = util.get_namespace(M, { "vg" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    fill_set = function(self, f)
        eo.__do_start(self, __class)
        __lib.efl_vg_shape_fill_set(f)
        eo.__do_end()
    end,

    fill_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_vg_shape_fill_get()
        eo.__do_end()
        return v
    end,

    stroke_fill_set = function(self, f)
        eo.__do_start(self, __class)
        __lib.efl_vg_shape_stroke_fill_set(f)
        eo.__do_end()
    end,

    stroke_fill_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_vg_shape_stroke_fill_get()
        eo.__do_end()
        return v
    end,

    stroke_marker_set = function(self, m)
        eo.__do_start(self, __class)
        __lib.efl_vg_shape_stroke_marker_set(m)
        eo.__do_end()
    end,

    stroke_marker_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_vg_shape_stroke_marker_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["stroke_fill"] = { 0, 0, 1, 1, true, true },
        ["fill"] = { 0, 0, 1, 1, true, true },
        ["stroke_marker"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Shape = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_VG_Shape").__eo_ctor,
                            1, ...)
end

return M
