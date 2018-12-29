-- EFL LuaJIT bindings: evas_vg.eo (class Evas.VG)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_vg_class_get()
    eo.class_register("Evas_VG", {"Efl_Canvas_Object"}, {"Efl_Gfx_Fill", "Efl_Gfx_View"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_vg_class_get(void);
    Efl_Object *evas_obj_vg_root_node_get(void);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    root_node_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_obj_vg_root_node_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["root_node"] = { 0, 0, 1, 0, true, false }
    }
}

M.VG = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_VG").__eo_ctor,
                            1, ...)
end

return M
