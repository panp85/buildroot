-- EFL LuaJIT bindings: efl_canvas_image.eo (class Efl.Canvas.Image)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_image_class_get()
    eo.class_register("Efl_Canvas_Image", {"Efl_Canvas_Image_Internal"}, {"Efl_Gfx_Buffer", "Efl_Image_Load", "Efl_Image_Animated", "Efl_File"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_image_class_get(void);
]]

local __M = util.get_namespace(M, { "canvas" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Image = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Canvas_Image").__eo_ctor,
                            1, ...)
end

return M
