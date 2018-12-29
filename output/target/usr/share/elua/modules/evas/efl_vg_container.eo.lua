-- EFL LuaJIT bindings: efl_vg_container.eo (class Efl.VG.Container)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_vg_container_class_get()
    eo.class_register("Efl_VG_Container", {"Efl_VG"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_vg_container_class_get(void);
    Efl_VG *efl_vg_container_child_get(const char * name);
    Eina_Iterator *efl_vg_container_children_get(void);
]]

local __M = util.get_namespace(M, { "vg" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    child_get = function(self, name)
        eo.__do_start(self, __class)
        local v = __lib.efl_vg_container_child_get(name)
        eo.__do_end()
        return v
    end,

    children_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_vg_container_children_get()
        eo.__do_end()
        return v
    end
}

__M.Container = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_VG_Container").__eo_ctor,
                            1, ...)
end

return M
