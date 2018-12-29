-- EFL LuaJIT bindings: efl_config.eo (class Efl.Config)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_config_interface_get()
    eo.class_register("Efl_Config", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_config_interface_get(void);
    Eina_Bool efl_config_set(const char * name, const Eina_Value * val);
    Eina_Value *efl_config_get(const char * name);
    Eina_Iterator *efl_config_list_get(const char * name);
]]

__body = {
    config_set = function(self, name, val)
        eo.__do_start(self, __class)
        local v = __lib.efl_config_set(name, val)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    config_get = function(self, name)
        eo.__do_start(self, __class)
        local v = __lib.efl_config_get(name)
        eo.__do_end()
        return v
    end,

    config_list_get = function(self, name)
        eo.__do_start(self, __class)
        local v = __lib.efl_config_list_get(name)
        eo.__do_end()
        return v
    end
}
__body["__iface_Efl_Config"] = true

return M
