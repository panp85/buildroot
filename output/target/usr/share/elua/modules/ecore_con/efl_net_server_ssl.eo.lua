-- EFL LuaJIT bindings: efl_net_server_ssl.eo (class Efl.Net.Server.Ssl)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_server_ssl_class_get()
    eo.class_register("Efl_Net_Server_Ssl", {"Efl_Loop_User"}, {"Efl_Net_Server"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_server_ssl_class_get(void);
    void efl_net_server_ssl_context_set(Efl_Net_Ssl_Context * ssl_context);
    Efl_Net_Ssl_Context *efl_net_server_ssl_context_get(void);
    int efl_net_server_ssl_family_get(void);
    Eina_Bool efl_net_server_ssl_close_on_exec_set(Eina_Bool close_on_exec);
    Eina_Bool efl_net_server_ssl_close_on_exec_get(void);
    Eina_Bool efl_net_server_ssl_reuse_address_set(Eina_Bool reuse_address);
    Eina_Bool efl_net_server_ssl_reuse_address_get(void);
    Eina_Bool efl_net_server_ssl_reuse_port_set(Eina_Bool reuse_port);
    Eina_Bool efl_net_server_ssl_reuse_port_get(void);
    void efl_net_server_ssl_ipv6_only_set(Eina_Bool ipv6_only);
    Eina_Bool efl_net_server_ssl_ipv6_only_get(void);
    Eina_Error efl_net_server_ssl_socket_activate(const char * address);
]]

local __M = util.get_namespace(M, { "net", "server" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    ssl_context_set = function(self, ssl_context)
        eo.__do_start(self, __class)
        __lib.efl_net_server_ssl_context_set(ssl_context)
        eo.__do_end()
    end,

    ssl_context_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_ssl_context_get()
        eo.__do_end()
        return v
    end,

    family_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_ssl_family_get()
        eo.__do_end()
        return tonumber(v)
    end,

    close_on_exec_set = function(self, close_on_exec)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_ssl_close_on_exec_set(close_on_exec)
        eo.__do_end()
    end,

    close_on_exec_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_ssl_close_on_exec_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    reuse_address_set = function(self, reuse_address)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_ssl_reuse_address_set(reuse_address)
        eo.__do_end()
    end,

    reuse_address_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_ssl_reuse_address_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    reuse_port_set = function(self, reuse_port)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_ssl_reuse_port_set(reuse_port)
        eo.__do_end()
    end,

    reuse_port_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_ssl_reuse_port_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    ipv6_only_set = function(self, ipv6_only)
        eo.__do_start(self, __class)
        __lib.efl_net_server_ssl_ipv6_only_set(ipv6_only)
        eo.__do_end()
    end,

    ipv6_only_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_ssl_ipv6_only_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    socket_activate = function(self, address)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_ssl_socket_activate(address)
        eo.__do_end()
        return v
    end,

    __properties = {
        ["close_on_exec"] = { 0, 0, 1, 1, true, true },
        ["reuse_address"] = { 0, 0, 1, 1, true, true },
        ["ipv6_only"] = { 0, 0, 1, 1, true, true },
        ["family"] = { 0, 0, 1, 0, true, false },
        ["ssl_context"] = { 0, 0, 1, 1, true, true },
        ["reuse_port"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Ssl = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Server_Ssl").__eo_ctor,
                            1, ...)
end

return M
