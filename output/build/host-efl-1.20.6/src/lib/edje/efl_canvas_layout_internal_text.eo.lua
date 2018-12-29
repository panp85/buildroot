-- EFL LuaJIT bindings: efl_canvas_layout_internal_text.eo (class Efl.Canvas.Layout_Internal.Text)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_layout_internal_text_class_get()
    eo.class_register("Efl_Canvas_Layout_Internal_Text", {"Efl_Canvas_Layout_Internal"}, {"Efl_Text", "Efl_Text_Cursor"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_layout_internal_text_class_get(void);
]]

local __M = util.get_namespace(M, { "canvas", "layout_internal" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Text = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Canvas_Layout_Internal_Text").__eo_ctor,
                            1, ...)
end

return M
