-- EFL LuaJIT bindings: efl_vpath_manager.eo (class Efl.Vpath.Manager)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_vpath_manager_class_get()
    eo.class_register("Efl_Vpath_Manager", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_vpath_manager_class_get(void);
    Efl_Vpath_File *efl_vpath_manager_fetch(const char * path);
    void efl_vpath_manager_register(int priority, Efl_Vpath * vpath);
    void efl_vpath_manager_unregister(Efl_Vpath * vpath);
]]

local __M = util.get_namespace(M, { "vpath" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    fetch = function(self, path)
        eo.__do_start(self, __class)
        local v = __lib.efl_vpath_manager_fetch(path)
        eo.__do_end()
        return v
    end,

    register = function(self, priority, vpath)
        eo.__do_start(self, __class)
        __lib.efl_vpath_manager_register(priority, vpath)
        eo.__do_end()
    end,

    unregister = function(self, vpath)
        eo.__do_start(self, __class)
        __lib.efl_vpath_manager_unregister(vpath)
        eo.__do_end()
    end
}

__M.Manager = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Vpath_Manager").__eo_ctor,
                            1, ...)
end

return M
