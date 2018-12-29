-- EFL LuaJIT bindings: efl_net_socket_udp.eo (class Efl.Net.Socket.Udp)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_socket_udp_class_get()
    eo.class_register("Efl_Net_Socket_Udp", {"Efl_Net_Socket_Fd"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_socket_udp_class_get(void);
    Eina_Bool efl_net_socket_udp_cork_set(Eina_Bool cork);
    Eina_Bool efl_net_socket_udp_cork_get(void);
    Eina_Bool efl_net_socket_udp_dont_route_set(Eina_Bool dont_route);
    Eina_Bool efl_net_socket_udp_dont_route_get(void);
    Eina_Bool efl_net_socket_udp_reuse_address_set(Eina_Bool reuse_address);
    Eina_Bool efl_net_socket_udp_reuse_address_get(void);
    Eina_Bool efl_net_socket_udp_reuse_port_set(Eina_Bool reuse_port);
    Eina_Bool efl_net_socket_udp_reuse_port_get(void);
    Eina_Error efl_net_socket_udp_multicast_time_to_live_set(uint8_t ttl);
    uint8_t efl_net_socket_udp_multicast_time_to_live_get(void);
    Eina_Error efl_net_socket_udp_multicast_loopback_set(Eina_Bool loopback);
    Eina_Bool efl_net_socket_udp_multicast_loopback_get(void);
    Eina_Error efl_net_socket_udp_bind_set(const char * address);
    const char *efl_net_socket_udp_bind_get(void);
    size_t efl_net_socket_udp_next_datagram_size_query(void);
    Eina_Error efl_net_socket_udp_multicast_join(const char * address);
    Eina_Error efl_net_socket_udp_multicast_leave(const char * address);
    Eina_Iterator *efl_net_socket_udp_multicast_groups_get(void);
]]

local __M = util.get_namespace(M, { "net", "socket" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    cork_set = function(self, cork)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_cork_set(cork)
        eo.__do_end()
    end,

    cork_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_cork_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    dont_route_set = function(self, dont_route)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_dont_route_set(dont_route)
        eo.__do_end()
    end,

    dont_route_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_dont_route_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    reuse_address_set = function(self, reuse_address)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_reuse_address_set(reuse_address)
        eo.__do_end()
    end,

    reuse_address_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_reuse_address_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    reuse_port_set = function(self, reuse_port)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_reuse_port_set(reuse_port)
        eo.__do_end()
    end,

    reuse_port_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_reuse_port_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    multicast_time_to_live_set = function(self, ttl)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_multicast_time_to_live_set(ttl)
        eo.__do_end()
    end,

    multicast_time_to_live_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_multicast_time_to_live_get()
        eo.__do_end()
        return v
    end,

    multicast_loopback_set = function(self, loopback)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_multicast_loopback_set(loopback)
        eo.__do_end()
    end,

    multicast_loopback_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_multicast_loopback_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    bind_set = function(self, address)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_bind_set(address)
        eo.__do_end()
    end,

    bind_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_bind_get()
        eo.__do_end()
        return v
    end,

    next_datagram_size_query = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_next_datagram_size_query()
        eo.__do_end()
        return tonumber(v)
    end,

    multicast_join = function(self, address)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_multicast_join(address)
        eo.__do_end()
        return v
    end,

    multicast_leave = function(self, address)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_multicast_leave(address)
        eo.__do_end()
        return v
    end,

    multicast_groups_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_udp_multicast_groups_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["multicast_time_to_live"] = { 0, 0, 1, 1, true, true },
        ["reuse_address"] = { 0, 0, 1, 1, true, true },
        ["cork"] = { 0, 0, 1, 1, true, true },
        ["bind"] = { 0, 0, 1, 1, true, true },
        ["multicast_loopback"] = { 0, 0, 1, 1, true, true },
        ["dont_route"] = { 0, 0, 1, 1, true, true },
        ["reuse_port"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Udp = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Socket_Udp").__eo_ctor,
                            1, ...)
end

return M
