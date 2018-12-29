-- EFL LuaJIT bindings: efl_net_dialer.eo (class Efl.Net.Dialer)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_dialer_interface_get()
    eo.class_register("Efl_Net_Dialer", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_dialer_interface_get(void);
    const char *efl_net_dialer_address_dial_get(void);
    Eina_Bool efl_net_dialer_connected_get(void);
    void efl_net_dialer_proxy_set(const char * proxy_url);
    const char *efl_net_dialer_proxy_get(void);
    void efl_net_dialer_timeout_dial_set(double seconds);
    double efl_net_dialer_timeout_dial_get(void);
    Eina_Error efl_net_dialer_dial(const char * address);
    extern const Eo_Event_Description _EFL_NET_DIALER_EVENT_RESOLVED;
    extern const Eo_Event_Description _EFL_NET_DIALER_EVENT_ERROR;
    extern const Eo_Event_Description _EFL_NET_DIALER_EVENT_CONNECTED;
]]

local __M = util.get_namespace(M, { "net" })
__body = {
    address_dial_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_address_dial_get()
        eo.__do_end()
        return v
    end,

    connected_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_connected_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    proxy_set = function(self, proxy_url)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_proxy_set(proxy_url)
        eo.__do_end()
    end,

    proxy_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_proxy_get()
        eo.__do_end()
        return v
    end,

    timeout_dial_set = function(self, seconds)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_timeout_dial_set(seconds)
        eo.__do_end()
    end,

    timeout_dial_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_timeout_dial_get()
        eo.__do_end()
        return tonumber(v)
    end,

    dial = function(self, address)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_dial(address)
        eo.__do_end()
        return v
    end,

    __events = {
        ["resolved"] = __lib._EFL_NET_DIALER_EVENT_RESOLVED,
        ["error"] = __lib._EFL_NET_DIALER_EVENT_ERROR,
        ["connected"] = __lib._EFL_NET_DIALER_EVENT_CONNECTED
    },

    __properties = {
        ["connected"] = { 0, 0, 1, 0, true, false },
        ["timeout_dial"] = { 0, 0, 1, 1, true, true },
        ["proxy"] = { 0, 0, 1, 1, true, true },
        ["address_dial"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Net_Dialer"] = true

return M
