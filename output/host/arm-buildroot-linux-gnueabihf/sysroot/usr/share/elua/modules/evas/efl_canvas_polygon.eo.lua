-- EFL LuaJIT bindings: efl_canvas_polygon.eo (class Efl.Canvas.Polygon)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_polygon_class_get()
    eo.class_register("Efl_Canvas_Polygon", {"Efl_Canvas_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_polygon_class_get(void);
    void efl_canvas_polygon_point_add(int x, int y);
    void efl_canvas_polygon_points_clear(void);
]]

local __M = util.get_namespace(M, { "canvas" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    point_add = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_canvas_polygon_point_add(x, y)
        eo.__do_end()
    end,

    points_clear = function(self)
        eo.__do_start(self, __class)
        __lib.efl_canvas_polygon_points_clear()
        eo.__do_end()
    end
}

__M.Polygon = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Canvas_Polygon").__eo_ctor,
                            1, ...)
end

return M
