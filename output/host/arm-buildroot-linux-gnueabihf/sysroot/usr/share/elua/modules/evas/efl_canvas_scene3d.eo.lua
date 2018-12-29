-- EFL LuaJIT bindings: efl_canvas_scene3d.eo (class Efl.Canvas.Scene3d)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_scene3d_class_get()
    eo.class_register("Efl_Canvas_Scene3d", {"Efl_Canvas_Image_Internal"}, {"Efl_Gfx_Buffer"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_scene3d_class_get(void);
    void efl_canvas_scene3d_set(Evas_Canvas3D_Scene * scene);
    Evas_Canvas3D_Scene *efl_canvas_scene3d_get(void);
]]

local __M = util.get_namespace(M, { "canvas" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    scene3d_set = function(self, scene)
        eo.__do_start(self, __class)
        __lib.efl_canvas_scene3d_set(scene)
        eo.__do_end()
    end,

    scene3d_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_scene3d_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["scene3d"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Scene3d = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Canvas_Scene3d").__eo_ctor,
                            1, ...)
end

return M
