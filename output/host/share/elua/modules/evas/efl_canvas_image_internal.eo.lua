-- EFL LuaJIT bindings: efl_canvas_image_internal.eo (class Efl.Canvas.Image.Internal)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_image_internal_class_get()
    eo.class_register("Efl_Canvas_Image_Internal", {"Efl_Canvas_Object"}, {"Efl_Canvas_Filter_Internal", "Efl_Image", "Efl_Gfx_Buffer", "Efl_Gfx_Fill", "Efl_Gfx_View", "Efl_Orientation", "Efl_Flipable", "Efl_File"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_image_internal_class_get(void);
]]

local __M = util.get_namespace(M, { "canvas", "image" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Internal = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Canvas_Image_Internal").__eo_ctor,
                            1, ...)
end

return M
