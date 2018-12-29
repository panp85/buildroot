-- EFL LuaJIT bindings: efl_canvas_surface_x11.eo (class Efl.Canvas.Surface.X11)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_surface_x11_class_get()
    eo.class_register("Efl_Canvas_Surface_X11", {"Efl_Object"}, {"Efl_Canvas_Surface"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_surface_x11_class_get(void);
    Eina_Bool efl_canvas_surface_x11_pixmap_set(void * visual, unsigned long pixmap);
    void efl_canvas_surface_x11_pixmap_get(void * *visual, unsigned long *pixmap);
]]

local __M = util.get_namespace(M, { "canvas", "surface" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    pixmap_set = function(self, visual, pixmap)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_surface_x11_pixmap_set(visual, pixmap)
        eo.__do_end()
    end,

    pixmap_get = function(self)
        eo.__do_start(self, __class)
        local visual = ffi.new("void *[1]")
        local pixmap = ffi.new("unsigned long[1]")
        __lib.efl_canvas_surface_x11_pixmap_get(visual, pixmap)
        eo.__do_end()
        return visual[0], pixmap[0]
    end,

    __properties = {
        ["pixmap"] = { 0, 0, 2, 2, true, true }
    }
}

__M.X11 = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Canvas_Surface_X11").__eo_ctor,
                            1, ...)
end

return M
