-- EFL LuaJIT bindings: efl_net_server.eo (class Efl.Net.Server)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_server_interface_get()
    eo.class_register("Efl_Net_Server", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_server_interface_get(void);
    const char *efl_net_server_address_get(void);
    unsigned int efl_net_server_clients_count_get(void);
    void efl_net_server_clients_limit_set(unsigned int limit, Eina_Bool reject_excess);
    void efl_net_server_clients_limit_get(unsigned int *limit, Eina_Bool *reject_excess);
    Eina_Bool efl_net_server_serving_get(void);
    Eina_Error efl_net_server_serve(const char * address);
    extern const Eo_Event_Description _EFL_NET_SERVER_EVENT_CLIENT_ADD;
    extern const Eo_Event_Description _EFL_NET_SERVER_EVENT_CLIENT_REJECTED;
    extern const Eo_Event_Description _EFL_NET_SERVER_EVENT_ERROR;
    extern const Eo_Event_Description _EFL_NET_SERVER_EVENT_SERVING;
]]

local __M = util.get_namespace(M, { "net" })
__body = {
    address_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_address_get()
        eo.__do_end()
        return v
    end,

    clients_count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_clients_count_get()
        eo.__do_end()
        return v
    end,

    clients_limit_set = function(self, limit, reject_excess)
        eo.__do_start(self, __class)
        __lib.efl_net_server_clients_limit_set(limit, reject_excess)
        eo.__do_end()
    end,

    clients_limit_get = function(self)
        eo.__do_start(self, __class)
        local limit = ffi.new("unsigned int[1]")
        local reject_excess = ffi.new("Eina_Bool[1]")
        __lib.efl_net_server_clients_limit_get(limit, reject_excess)
        eo.__do_end()
        return limit[0], ((reject_excess[0]) ~= 0)
    end,

    serving_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_serving_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    serve = function(self, address)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_serve(address)
        eo.__do_end()
        return v
    end,

    __events = {
        ["client,add"] = __lib._EFL_NET_SERVER_EVENT_CLIENT_ADD,
        ["client,rejected"] = __lib._EFL_NET_SERVER_EVENT_CLIENT_REJECTED,
        ["error"] = __lib._EFL_NET_SERVER_EVENT_ERROR,
        ["serving"] = __lib._EFL_NET_SERVER_EVENT_SERVING
    },

    __properties = {
        ["address"] = { 0, 0, 1, 0, true, false },
        ["clients_limit"] = { 0, 0, 2, 2, true, true },
        ["serving"] = { 0, 0, 1, 0, true, false },
        ["clients_count"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Net_Server"] = true

return M
