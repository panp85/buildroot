-- EFL LuaJIT bindings: efl_net_session.eo (class Efl.Net.Session)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_session_class_get()
    eo.class_register("Efl_Net_Session", {"Efl_Loop_User"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_session_class_get(void);
    const char *efl_net_session_name_get(void);
    Efl_Net_Session_State efl_net_session_state_get(void);
    Efl_Net_Session_Technology efl_net_session_technology_get(void);
    const char *efl_net_session_interface_get(void);
    void efl_net_session_ipv4_get(const char * *address, const char * *netmask, const char * *gateway);
    void efl_net_session_ipv6_get(const char * *address, uint8_t *prefix_length, const char * *netmask, const char * *gateway);
    void efl_net_session_connect(Eina_Bool online_required, Efl_Net_Session_Technology technologies_allowed);
    void efl_net_session_disconnect(void);
    extern const Eo_Event_Description _EFL_NET_SESSION_EVENT_CHANGED;
]]

local __M = util.get_namespace(M, { "net" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    name_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_session_name_get()
        eo.__do_end()
        return v
    end,

    state_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_session_state_get()
        eo.__do_end()
        return v
    end,

    technology_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_session_technology_get()
        eo.__do_end()
        return v
    end,

    interface_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_session_interface_get()
        eo.__do_end()
        return v
    end,

    ipv4_get = function(self)
        eo.__do_start(self, __class)
        local address = ffi.new("const char *[1]")
        local netmask = ffi.new("const char *[1]")
        local gateway = ffi.new("const char *[1]")
        __lib.efl_net_session_ipv4_get(address, netmask, gateway)
        eo.__do_end()
        return address[0], netmask[0], gateway[0]
    end,

    ipv6_get = function(self)
        eo.__do_start(self, __class)
        local address = ffi.new("const char *[1]")
        local prefix_length = ffi.new("uint8_t[1]")
        local netmask = ffi.new("const char *[1]")
        local gateway = ffi.new("const char *[1]")
        __lib.efl_net_session_ipv6_get(address, prefix_length, netmask, gateway)
        eo.__do_end()
        return address[0], prefix_length[0], netmask[0], gateway[0]
    end,

    connect = function(self, online_required, technologies_allowed)
        eo.__do_start(self, __class)
        __lib.efl_net_session_connect(online_required, technologies_allowed)
        eo.__do_end()
    end,

    disconnect = function(self)
        eo.__do_start(self, __class)
        __lib.efl_net_session_disconnect()
        eo.__do_end()
    end,

    __events = {
        ["changed"] = __lib._EFL_NET_SESSION_EVENT_CHANGED
    },

    __properties = {
        ["technology"] = { 0, 0, 1, 0, true, false },
        ["ipv6"] = { 0, 0, 4, 0, true, false },
        ["state"] = { 0, 0, 1, 0, true, false },
        ["ipv4"] = { 0, 0, 3, 0, true, false },
        ["name"] = { 0, 0, 1, 0, true, false },
        ["interface"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Session = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Session").__eo_ctor,
                            1, ...)
end

return M
