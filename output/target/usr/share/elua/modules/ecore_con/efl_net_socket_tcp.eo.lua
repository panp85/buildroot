-- EFL LuaJIT bindings: efl_net_socket_tcp.eo (class Efl.Net.Socket.Tcp)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_socket_tcp_class_get()
    eo.class_register("Efl_Net_Socket_Tcp", {"Efl_Net_Socket_Fd"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_socket_tcp_class_get(void);
    Eina_Bool efl_net_socket_tcp_keep_alive_set(Eina_Bool keep_alive);
    Eina_Bool efl_net_socket_tcp_keep_alive_get(void);
    Eina_Bool efl_net_socket_tcp_no_delay_set(Eina_Bool no_delay);
    Eina_Bool efl_net_socket_tcp_no_delay_get(void);
    Eina_Bool efl_net_socket_tcp_cork_set(Eina_Bool cork);
    Eina_Bool efl_net_socket_tcp_cork_get(void);
]]

local __M = util.get_namespace(M, { "net", "socket" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    keep_alive_set = function(self, keep_alive)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_tcp_keep_alive_set(keep_alive)
        eo.__do_end()
    end,

    keep_alive_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_tcp_keep_alive_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    no_delay_set = function(self, no_delay)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_tcp_no_delay_set(no_delay)
        eo.__do_end()
    end,

    no_delay_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_tcp_no_delay_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    cork_set = function(self, cork)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_tcp_cork_set(cork)
        eo.__do_end()
    end,

    cork_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_tcp_cork_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["no_delay"] = { 0, 0, 1, 1, true, true },
        ["cork"] = { 0, 0, 1, 1, true, true },
        ["keep_alive"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Tcp = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Socket_Tcp").__eo_ctor,
                            1, ...)
end

return M
