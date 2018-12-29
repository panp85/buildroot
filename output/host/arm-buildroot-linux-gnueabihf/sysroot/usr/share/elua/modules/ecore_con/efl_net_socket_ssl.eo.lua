-- EFL LuaJIT bindings: efl_net_socket_ssl.eo (class Efl.Net.Socket.Ssl)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_socket_ssl_class_get()
    eo.class_register("Efl_Net_Socket_Ssl", {"Efl_Loop_User"}, {"Efl_Net_Socket"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_socket_ssl_class_get(void);
    void efl_net_socket_ssl_verify_mode_set(Efl_Net_Ssl_Verify_Mode verify_mode);
    Efl_Net_Ssl_Verify_Mode efl_net_socket_ssl_verify_mode_get(void);
    void efl_net_socket_ssl_hostname_verify_set(Eina_Bool hostname_verify);
    Eina_Bool efl_net_socket_ssl_hostname_verify_get(void);
    void efl_net_socket_ssl_hostname_override_set(const char * hostname_override);
    const char *efl_net_socket_ssl_hostname_override_get(void);
    void efl_net_socket_ssl_adopt(Efl_Net_Socket * efl_net_socket, Efl_Net_Ssl_Context * ctx);
    extern const Eo_Event_Description _EFL_NET_SOCKET_SSL_EVENT_SSL_READY;
    extern const Eo_Event_Description _EFL_NET_SOCKET_SSL_EVENT_SSL_ERROR;
]]

local __M = util.get_namespace(M, { "net", "socket" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    verify_mode_set = function(self, verify_mode)
        eo.__do_start(self, __class)
        __lib.efl_net_socket_ssl_verify_mode_set(verify_mode)
        eo.__do_end()
    end,

    verify_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_ssl_verify_mode_get()
        eo.__do_end()
        return v
    end,

    hostname_verify_set = function(self, hostname_verify)
        eo.__do_start(self, __class)
        __lib.efl_net_socket_ssl_hostname_verify_set(hostname_verify)
        eo.__do_end()
    end,

    hostname_verify_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_ssl_hostname_verify_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    hostname_override_set = function(self, hostname_override)
        eo.__do_start(self, __class)
        __lib.efl_net_socket_ssl_hostname_override_set(hostname_override)
        eo.__do_end()
    end,

    hostname_override_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_ssl_hostname_override_get()
        eo.__do_end()
        return v
    end,

    adopt = function(self, efl_net_socket, ctx)
        eo.__do_start(self, __class)
        __lib.efl_net_socket_ssl_adopt(efl_net_socket, ctx)
        eo.__do_end()
    end,

    __events = {
        ["ssl,ready"] = __lib._EFL_NET_SOCKET_SSL_EVENT_SSL_READY,
        ["ssl,error"] = __lib._EFL_NET_SOCKET_SSL_EVENT_SSL_ERROR
    },

    __properties = {
        ["hostname_verify"] = { 0, 0, 1, 1, true, true },
        ["verify_mode"] = { 0, 0, 1, 1, true, true },
        ["hostname_override"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Ssl = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Socket_Ssl").__eo_ctor,
                            1, ...)
end

return M
