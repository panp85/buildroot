-- EFL LuaJIT bindings: efl_vg_gradient_radial.eo (class Efl.VG.Gradient.Radial)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_vg_gradient_radial_class_get()
    eo.class_register("Efl_VG_Gradient_Radial", {"Efl_VG_Gradient"}, {"Efl_Gfx_Gradient_Radial"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_vg_gradient_radial_class_get(void);
]]

local __M = util.get_namespace(M, { "vg", "gradient" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Radial = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_VG_Gradient_Radial").__eo_ctor,
                            1, ...)
end

return M
