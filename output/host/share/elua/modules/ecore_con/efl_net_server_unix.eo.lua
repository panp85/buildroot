-- EFL LuaJIT bindings: efl_net_server_unix.eo (class Efl.Net.Server.Unix)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_server_unix_class_get()
    eo.class_register("Efl_Net_Server_Unix", {"Efl_Net_Server_Fd"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_server_unix_class_get(void);
    void efl_net_server_unix_unlink_before_bind_set(Eina_Bool unlink_before_bind);
    Eina_Bool efl_net_server_unix_unlink_before_bind_get(void);
    void efl_net_server_unix_leading_directories_create_set(Eina_Bool leading_directories_create, unsigned int mode);
    void efl_net_server_unix_leading_directories_create_get(Eina_Bool *leading_directories_create, unsigned int *mode);
]]

local __M = util.get_namespace(M, { "net", "server" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    unlink_before_bind_set = function(self, unlink_before_bind)
        eo.__do_start(self, __class)
        __lib.efl_net_server_unix_unlink_before_bind_set(unlink_before_bind)
        eo.__do_end()
    end,

    unlink_before_bind_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_unix_unlink_before_bind_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    leading_directories_create_set = function(self, leading_directories_create, mode)
        eo.__do_start(self, __class)
        __lib.efl_net_server_unix_leading_directories_create_set(leading_directories_create, mode)
        eo.__do_end()
    end,

    leading_directories_create_get = function(self)
        eo.__do_start(self, __class)
        local leading_directories_create = ffi.new("Eina_Bool[1]")
        local mode = ffi.new("unsigned int[1]")
        __lib.efl_net_server_unix_leading_directories_create_get(leading_directories_create, mode)
        eo.__do_end()
        return ((leading_directories_create[0]) ~= 0), mode[0]
    end,

    __properties = {
        ["leading_directories_create"] = { 0, 0, 2, 2, true, true },
        ["unlink_before_bind"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Unix = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Server_Unix").__eo_ctor,
                            1, ...)
end

return M
