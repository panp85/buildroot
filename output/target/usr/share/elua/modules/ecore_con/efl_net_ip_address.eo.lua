-- EFL LuaJIT bindings: efl_net_ip_address.eo (class Efl.Net.Ip_Address)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_ip_address_class_get()
    eo.class_register("Efl_Net_Ip_Address", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_ip_address_class_get(void);
    const char *efl_net_ip_address_string_get(void);
    void efl_net_ip_address_family_set(int family);
    int efl_net_ip_address_family_get(void);
    void efl_net_ip_address_port_set(uint16_t port);
    uint16_t efl_net_ip_address_port_get(void);
    void efl_net_ip_address_set(Eina_Slice address);
    Eina_Slice efl_net_ip_address_get(void);
    void efl_net_ip_address_sockaddr_set(const void * sockaddr);
    const void *efl_net_ip_address_sockaddr_get(void);
    Efl_Net_Ip_Address *efl_net_ip_address_create(uint16_t port, const Eina_Slice address);
    Efl_Net_Ip_Address *efl_net_ip_address_create_sockaddr(const void * sockaddr);
    Efl_Net_Ip_Address *efl_net_ip_address_parse(const char * numeric_address);
    Efl_Future *efl_net_ip_address_resolve(const char * address, int family, int flags);
    Eina_Bool efl_net_ip_address_ipv4_class_a_check(void);
    Eina_Bool efl_net_ip_address_ipv4_class_b_check(void);
    Eina_Bool efl_net_ip_address_ipv4_class_c_check(void);
    Eina_Bool efl_net_ip_address_ipv4_class_d_check(void);
    Eina_Bool efl_net_ip_address_ipv6_v4mapped_check(void);
    Eina_Bool efl_net_ip_address_ipv6_v4compat_check(void);
    Eina_Bool efl_net_ip_address_ipv6_local_link_check(void);
    Eina_Bool efl_net_ip_address_ipv6_local_site_check(void);
    Eina_Bool efl_net_ip_address_multicast_check(void);
    Eina_Bool efl_net_ip_address_loopback_check(void);
    Eina_Bool efl_net_ip_address_any_check(void);
]]

local __M = util.get_namespace(M, { "net" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    string_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_string_get()
        eo.__do_end()
        return v
    end,

    family_set = function(self, family)
        eo.__do_start(self, __class)
        __lib.efl_net_ip_address_family_set(family)
        eo.__do_end()
    end,

    family_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_family_get()
        eo.__do_end()
        return tonumber(v)
    end,

    port_set = function(self, port)
        eo.__do_start(self, __class)
        __lib.efl_net_ip_address_port_set(port)
        eo.__do_end()
    end,

    port_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_port_get()
        eo.__do_end()
        return v
    end,

    address_set = function(self, address)
        eo.__do_start(self, __class)
        __lib.efl_net_ip_address_set(address)
        eo.__do_end()
    end,

    address_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_get()
        eo.__do_end()
        return v
    end,

    sockaddr_set = function(self, sockaddr)
        eo.__do_start(self, __class)
        __lib.efl_net_ip_address_sockaddr_set(sockaddr)
        eo.__do_end()
    end,

    sockaddr_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_sockaddr_get()
        eo.__do_end()
        return v
    end,

    create = function(self, port, address)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_create(port, address)
        eo.__do_end()
        return v
    end,

    create_sockaddr = function(self, sockaddr)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_create_sockaddr(sockaddr)
        eo.__do_end()
        return v
    end,

    parse = function(self, numeric_address)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_parse(numeric_address)
        eo.__do_end()
        return v
    end,

    resolve = function(self, address, family, flags)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_resolve(address, family, flags)
        eo.__do_end()
        return v
    end,

    ipv4_class_a_check = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_ipv4_class_a_check()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    ipv4_class_b_check = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_ipv4_class_b_check()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    ipv4_class_c_check = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_ipv4_class_c_check()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    ipv4_class_d_check = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_ipv4_class_d_check()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    ipv6_v4mapped_check = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_ipv6_v4mapped_check()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    ipv6_v4compat_check = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_ipv6_v4compat_check()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    ipv6_local_link_check = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_ipv6_local_link_check()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    ipv6_local_site_check = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_ipv6_local_site_check()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    multicast_check = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_multicast_check()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    loopback_check = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_loopback_check()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    any_check = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ip_address_any_check()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["address"] = { 0, 0, 1, 1, true, true },
        ["family"] = { 0, 0, 1, 1, true, true },
        ["string"] = { 0, 0, 1, 0, true, false },
        ["sockaddr"] = { 0, 0, 1, 1, true, true },
        ["port"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Ip_Address = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Ip_Address").__eo_ctor,
                            1, ...)
end

return M
