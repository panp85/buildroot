-- EFL LuaJIT bindings: efl_vpath_core.eo (class Efl.Vpath.Core)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_vpath_core_class_get()
    eo.class_register("Efl_Vpath_Core", {"Efl_Object"}, {"Efl_Vpath"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_vpath_core_class_get(void);
    Efl_Vpath_Core *efl_vpath_core_get(void);
    void efl_vpath_core_meta_set(const char * key, const char * path);
    const char *efl_vpath_core_meta_get(const char * key);
]]

local __M = util.get_namespace(M, { "vpath" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    core_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_vpath_core_get()
        eo.__do_end()
        return v
    end,

    meta_set = function(self, key, path)
        eo.__do_start(self, __class)
        __lib.efl_vpath_core_meta_set(key, path)
        eo.__do_end()
    end,

    meta_get = function(self, key)
        eo.__do_start(self, __class)
        local v = __lib.efl_vpath_core_meta_get(key)
        eo.__do_end()
        return v
    end
}

__M.Core = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Vpath_Core").__eo_ctor,
                            1, ...)
end

return M
