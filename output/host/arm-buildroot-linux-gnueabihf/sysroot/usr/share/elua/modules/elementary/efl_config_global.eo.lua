-- EFL LuaJIT bindings: efl_config_global.eo (class Efl.Config.Global)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_config_global_class_get()
    eo.class_register("Efl_Config_Global", {"Efl_Object"}, {"Efl_Config"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_config_global_class_get(void);
    void efl_config_profile_set(const char * profile);
    const char *efl_config_profile_get(void);
    Eina_Iterator *efl_config_profile_iterate(Eina_Bool hidden);
    Eina_Bool efl_config_profile_exists(const char * profile);
    Eina_Stringshare *efl_config_profile_dir_get(const char * profile, Eina_Bool is_user);
]]

local __M = util.get_namespace(M, { "config" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    profile_set = function(self, profile)
        eo.__do_start(self, __class)
        __lib.efl_config_profile_set(profile)
        eo.__do_end()
    end,

    profile_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_config_profile_get()
        eo.__do_end()
        return v
    end,

    profile_iterate = function(self, hidden)
        eo.__do_start(self, __class)
        local v = __lib.efl_config_profile_iterate(hidden)
        eo.__do_end()
        return v
    end,

    profile_exists = function(self, profile)
        eo.__do_start(self, __class)
        local v = __lib.efl_config_profile_exists(profile)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    profile_dir_get = function(self, profile, is_user)
        eo.__do_start(self, __class)
        local v = __lib.efl_config_profile_dir_get(profile, is_user)
        eo.__do_end()
        return v
    end,

    __properties = {
        ["profile"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Global = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Config_Global").__eo_ctor,
                            1, ...)
end

return M
