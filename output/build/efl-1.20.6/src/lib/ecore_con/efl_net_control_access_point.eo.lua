-- EFL LuaJIT bindings: efl_net_control_access_point.eo (class Efl.Net.Control.Access_Point)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_control_access_point_class_get()
    eo.class_register("Efl_Net_Control_Access_Point", {"Efl_Loop_User"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_control_access_point_class_get(void);
    Efl_Net_Control_Access_Point_State efl_net_control_access_point_state_get(void);
    Efl_Net_Control_Access_Point_Error efl_net_control_access_point_error_get(void);
    const char *efl_net_control_access_point_name_get(void);
    void efl_net_control_access_point_priority_set(unsigned int priority);
    unsigned int efl_net_control_access_point_priority_get(void);
    Efl_Net_Control_Technology *efl_net_control_access_point_technology_get(void);
    uint8_t efl_net_control_access_point_strength_get(void);
    Eina_Bool efl_net_control_access_point_roaming_get(void);
    void efl_net_control_access_point_auto_connect_set(Eina_Bool auto_connect);
    Eina_Bool efl_net_control_access_point_auto_connect_get(void);
    Eina_Bool efl_net_control_access_point_remembered_get(void);
    Eina_Bool efl_net_control_access_point_immutable_get(void);
    Efl_Net_Control_Access_Point_Security efl_net_control_access_point_security_get(void);
    Eina_Iterator *efl_net_control_access_point_name_servers_get(void);
    Eina_Iterator *efl_net_control_access_point_time_servers_get(void);
    Eina_Iterator *efl_net_control_access_point_domains_get(void);
    void efl_net_control_access_point_ipv4_get(Efl_Net_Control_Access_Point_Ipv4_Method *method, const char * *address, const char * *netmask, const char * *gateway);
    void efl_net_control_access_point_ipv6_get(Efl_Net_Control_Access_Point_Ipv6_Method *method, const char * *address, uint8_t *prefix_length, const char * *netmask, const char * *gateway);
    void efl_net_control_access_point_proxy_get(Efl_Net_Control_Access_Point_Proxy_Method *method, const char * *url, Eina_Iterator * *servers, Eina_Iterator * *excludes);
    void efl_net_control_access_point_configuration_name_servers_set(Eina_Iterator * name_servers);
    Eina_Iterator *efl_net_control_access_point_configuration_name_servers_get(void);
    void efl_net_control_access_point_configuration_time_servers_set(Eina_Iterator * time_servers);
    Eina_Iterator *efl_net_control_access_point_configuration_time_servers_get(void);
    void efl_net_control_access_point_configuration_domains_set(Eina_Iterator * domains);
    Eina_Iterator *efl_net_control_access_point_configuration_domains_get(void);
    void efl_net_control_access_point_configuration_ipv4_set(Efl_Net_Control_Access_Point_Ipv4_Method method, const char * address, const char * netmask, const char * gateway);
    void efl_net_control_access_point_configuration_ipv4_get(Efl_Net_Control_Access_Point_Ipv4_Method *method, const char * *address, const char * *netmask, const char * *gateway);
    void efl_net_control_access_point_configuration_ipv6_set(Efl_Net_Control_Access_Point_Ipv6_Method method, const char * address, uint8_t prefix_length, const char * netmask, const char * gateway);
    void efl_net_control_access_point_configuration_ipv6_get(Efl_Net_Control_Access_Point_Ipv6_Method *method, const char * *address, uint8_t *prefix_length, const char * *netmask, const char * *gateway);
    void efl_net_control_access_point_configuration_proxy_set(Efl_Net_Control_Access_Point_Proxy_Method method, const char * url, Eina_Iterator * servers, Eina_Iterator * excludes);
    void efl_net_control_access_point_configuration_proxy_get(Efl_Net_Control_Access_Point_Proxy_Method *method, const char * *url, Eina_Iterator * *servers, Eina_Iterator * *excludes);
    Efl_Future *efl_net_control_access_point_connect(void);
    void efl_net_control_access_point_disconnect(void);
    void efl_net_control_access_point_forget(void);
    extern const Eo_Event_Description _EFL_NET_CONTROL_ACCESS_POINT_EVENT_CHANGED;
]]

local __M = util.get_namespace(M, { "net", "control" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    state_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_state_get()
        eo.__do_end()
        return v
    end,

    error_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_error_get()
        eo.__do_end()
        return v
    end,

    name_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_name_get()
        eo.__do_end()
        return v
    end,

    priority_set = function(self, priority)
        eo.__do_start(self, __class)
        __lib.efl_net_control_access_point_priority_set(priority)
        eo.__do_end()
    end,

    priority_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_priority_get()
        eo.__do_end()
        return v
    end,

    technology_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_technology_get()
        eo.__do_end()
        return v
    end,

    strength_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_strength_get()
        eo.__do_end()
        return v
    end,

    roaming_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_roaming_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    auto_connect_set = function(self, auto_connect)
        eo.__do_start(self, __class)
        __lib.efl_net_control_access_point_auto_connect_set(auto_connect)
        eo.__do_end()
    end,

    auto_connect_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_auto_connect_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    remembered_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_remembered_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    immutable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_immutable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    security_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_security_get()
        eo.__do_end()
        return v
    end,

    name_servers_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_name_servers_get()
        eo.__do_end()
        return v
    end,

    time_servers_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_time_servers_get()
        eo.__do_end()
        return v
    end,

    domains_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_domains_get()
        eo.__do_end()
        return v
    end,

    ipv4_get = function(self)
        eo.__do_start(self, __class)
        local method = ffi.new("Efl_Net_Control_Access_Point_Ipv4_Method[1]")
        local address = ffi.new("const char *[1]")
        local netmask = ffi.new("const char *[1]")
        local gateway = ffi.new("const char *[1]")
        __lib.efl_net_control_access_point_ipv4_get(method, address, netmask, gateway)
        eo.__do_end()
        return method[0], address[0], netmask[0], gateway[0]
    end,

    ipv6_get = function(self)
        eo.__do_start(self, __class)
        local method = ffi.new("Efl_Net_Control_Access_Point_Ipv6_Method[1]")
        local address = ffi.new("const char *[1]")
        local prefix_length = ffi.new("uint8_t[1]")
        local netmask = ffi.new("const char *[1]")
        local gateway = ffi.new("const char *[1]")
        __lib.efl_net_control_access_point_ipv6_get(method, address, prefix_length, netmask, gateway)
        eo.__do_end()
        return method[0], address[0], prefix_length[0], netmask[0], gateway[0]
    end,

    proxy_get = function(self)
        eo.__do_start(self, __class)
        local method = ffi.new("Efl_Net_Control_Access_Point_Proxy_Method[1]")
        local url = ffi.new("const char *[1]")
        local servers = ffi.new("Eina_Iterator *[1]")
        local excludes = ffi.new("Eina_Iterator *[1]")
        __lib.efl_net_control_access_point_proxy_get(method, url, servers, excludes)
        eo.__do_end()
        return method[0], url[0], servers[0], excludes[0]
    end,

    configuration_name_servers_set = function(self, name_servers)
        eo.__do_start(self, __class)
        __lib.efl_net_control_access_point_configuration_name_servers_set(name_servers)
        eo.__do_end()
    end,

    configuration_name_servers_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_configuration_name_servers_get()
        eo.__do_end()
        return v
    end,

    configuration_time_servers_set = function(self, time_servers)
        eo.__do_start(self, __class)
        __lib.efl_net_control_access_point_configuration_time_servers_set(time_servers)
        eo.__do_end()
    end,

    configuration_time_servers_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_configuration_time_servers_get()
        eo.__do_end()
        return v
    end,

    configuration_domains_set = function(self, domains)
        eo.__do_start(self, __class)
        __lib.efl_net_control_access_point_configuration_domains_set(domains)
        eo.__do_end()
    end,

    configuration_domains_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_configuration_domains_get()
        eo.__do_end()
        return v
    end,

    configuration_ipv4_set = function(self, method, address, netmask, gateway)
        eo.__do_start(self, __class)
        __lib.efl_net_control_access_point_configuration_ipv4_set(method, address, netmask, gateway)
        eo.__do_end()
    end,

    configuration_ipv4_get = function(self)
        eo.__do_start(self, __class)
        local method = ffi.new("Efl_Net_Control_Access_Point_Ipv4_Method[1]")
        local address = ffi.new("const char *[1]")
        local netmask = ffi.new("const char *[1]")
        local gateway = ffi.new("const char *[1]")
        __lib.efl_net_control_access_point_configuration_ipv4_get(method, address, netmask, gateway)
        eo.__do_end()
        return method[0], address[0], netmask[0], gateway[0]
    end,

    configuration_ipv6_set = function(self, method, address, prefix_length, netmask, gateway)
        eo.__do_start(self, __class)
        __lib.efl_net_control_access_point_configuration_ipv6_set(method, address, prefix_length, netmask, gateway)
        eo.__do_end()
    end,

    configuration_ipv6_get = function(self)
        eo.__do_start(self, __class)
        local method = ffi.new("Efl_Net_Control_Access_Point_Ipv6_Method[1]")
        local address = ffi.new("const char *[1]")
        local prefix_length = ffi.new("uint8_t[1]")
        local netmask = ffi.new("const char *[1]")
        local gateway = ffi.new("const char *[1]")
        __lib.efl_net_control_access_point_configuration_ipv6_get(method, address, prefix_length, netmask, gateway)
        eo.__do_end()
        return method[0], address[0], prefix_length[0], netmask[0], gateway[0]
    end,

    configuration_proxy_set = function(self, method, url, servers, excludes)
        eo.__do_start(self, __class)
        __lib.efl_net_control_access_point_configuration_proxy_set(method, url, servers, excludes)
        eo.__do_end()
    end,

    configuration_proxy_get = function(self)
        eo.__do_start(self, __class)
        local method = ffi.new("Efl_Net_Control_Access_Point_Proxy_Method[1]")
        local url = ffi.new("const char *[1]")
        local servers = ffi.new("Eina_Iterator *[1]")
        local excludes = ffi.new("Eina_Iterator *[1]")
        __lib.efl_net_control_access_point_configuration_proxy_get(method, url, servers, excludes)
        eo.__do_end()
        return method[0], url[0], servers[0], excludes[0]
    end,

    connect = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_point_connect()
        eo.__do_end()
        return v
    end,

    disconnect = function(self)
        eo.__do_start(self, __class)
        __lib.efl_net_control_access_point_disconnect()
        eo.__do_end()
    end,

    forget = function(self)
        eo.__do_start(self, __class)
        __lib.efl_net_control_access_point_forget()
        eo.__do_end()
    end,

    __events = {
        ["changed"] = __lib._EFL_NET_CONTROL_ACCESS_POINT_EVENT_CHANGED
    },

    __properties = {
        ["configuration_name_servers"] = { 0, 0, 1, 1, true, true },
        ["auto_connect"] = { 0, 0, 1, 1, true, true },
        ["domains"] = { 0, 0, 1, 0, true, false },
        ["roaming"] = { 0, 0, 1, 0, true, false },
        ["error"] = { 0, 0, 1, 0, true, false },
        ["ipv4"] = { 0, 0, 4, 0, true, false },
        ["configuration_domains"] = { 0, 0, 1, 1, true, true },
        ["priority"] = { 0, 0, 1, 1, true, true },
        ["configuration_ipv4"] = { 0, 0, 4, 4, true, true },
        ["strength"] = { 0, 0, 1, 0, true, false },
        ["technology"] = { 0, 0, 1, 0, true, false },
        ["configuration_proxy"] = { 0, 0, 4, 4, true, true },
        ["configuration_ipv6"] = { 0, 0, 5, 5, true, true },
        ["security"] = { 0, 0, 1, 0, true, false },
        ["proxy"] = { 0, 0, 4, 0, true, false },
        ["name_servers"] = { 0, 0, 1, 0, true, false },
        ["configuration_time_servers"] = { 0, 0, 1, 1, true, true },
        ["state"] = { 0, 0, 1, 0, true, false },
        ["ipv6"] = { 0, 0, 5, 0, true, false },
        ["immutable"] = { 0, 0, 1, 0, true, false },
        ["remembered"] = { 0, 0, 1, 0, true, false },
        ["name"] = { 0, 0, 1, 0, true, false },
        ["time_servers"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Access_Point = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Control_Access_Point").__eo_ctor,
                            1, ...)
end

return M
