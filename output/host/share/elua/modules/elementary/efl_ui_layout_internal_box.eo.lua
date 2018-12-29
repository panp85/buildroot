-- EFL LuaJIT bindings: efl_ui_layout_internal_box.eo (class Efl.Ui.Layout_Internal.Box)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_layout_internal_box_class_get()
    eo.class_register("Efl_Ui_Layout_Internal_Box", {"Efl_Object"}, {"Efl_Pack_Linear", "Efl_Orientation"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_layout_internal_box_class_get(void);
]]

local __M = util.get_namespace(M, { "ui", "layout_internal" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Box = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Layout_Internal_Box").__eo_ctor,
                            1, ...)
end

return M
