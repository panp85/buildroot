-- EFL LuaJIT bindings: efl_net_control.eo (class Efl.Net.Control)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_control_class_get()
    eo.class_register("Efl_Net_Control", {"Efl_Loop_User"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_control_class_get(void);
    void efl_net_control_radios_offline_set(Eina_Bool radios_offline);
    Eina_Bool efl_net_control_radios_offline_get(void);
    Efl_Net_Control_State efl_net_control_state_get(void);
    Eina_Iterator *efl_net_control_access_points_get(void);
    Eina_Iterator *efl_net_control_technologies_get(void);
    void efl_net_control_agent_enabled_set(Eina_Bool agent_enabled);
    Eina_Bool efl_net_control_agent_enabled_get(void);
    void efl_net_control_agent_reply(const char * name, const Eina_Slice * ssid, const char * username, const char * passphrase, const char * wps);
    extern const Eo_Event_Description _EFL_NET_CONTROL_EVENT_ACCESS_POINT_ADD;
    extern const Eo_Event_Description _EFL_NET_CONTROL_EVENT_ACCESS_POINT_DEL;
    extern const Eo_Event_Description _EFL_NET_CONTROL_EVENT_ACCESS_POINTS_CHANGED;
    extern const Eo_Event_Description _EFL_NET_CONTROL_EVENT_TECHNOLOGY_ADD;
    extern const Eo_Event_Description _EFL_NET_CONTROL_EVENT_TECHNOLOGY_DEL;
    extern const Eo_Event_Description _EFL_NET_CONTROL_EVENT_RADIOS_OFFLINE_CHANGED;
    extern const Eo_Event_Description _EFL_NET_CONTROL_EVENT_STATE_CHANGED;
    extern const Eo_Event_Description _EFL_NET_CONTROL_EVENT_AGENT_RELEASED;
    extern const Eo_Event_Description _EFL_NET_CONTROL_EVENT_AGENT_ERROR;
    extern const Eo_Event_Description _EFL_NET_CONTROL_EVENT_AGENT_BROWSER_URL;
    extern const Eo_Event_Description _EFL_NET_CONTROL_EVENT_AGENT_REQUEST_INPUT;
]]

local __M = util.get_namespace(M, { "net" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    radios_offline_set = function(self, radios_offline)
        eo.__do_start(self, __class)
        __lib.efl_net_control_radios_offline_set(radios_offline)
        eo.__do_end()
    end,

    radios_offline_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_radios_offline_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    state_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_state_get()
        eo.__do_end()
        return v
    end,

    access_points_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_access_points_get()
        eo.__do_end()
        return v
    end,

    technologies_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_technologies_get()
        eo.__do_end()
        return v
    end,

    agent_enabled_set = function(self, agent_enabled)
        eo.__do_start(self, __class)
        __lib.efl_net_control_agent_enabled_set(agent_enabled)
        eo.__do_end()
    end,

    agent_enabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_agent_enabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    agent_reply = function(self, name, ssid, username, passphrase, wps)
        eo.__do_start(self, __class)
        __lib.efl_net_control_agent_reply(name, ssid, username, passphrase, wps)
        eo.__do_end()
    end,

    __events = {
        ["access_point,add"] = __lib._EFL_NET_CONTROL_EVENT_ACCESS_POINT_ADD,
        ["access_point,del"] = __lib._EFL_NET_CONTROL_EVENT_ACCESS_POINT_DEL,
        ["access_points,changed"] = __lib._EFL_NET_CONTROL_EVENT_ACCESS_POINTS_CHANGED,
        ["technology,add"] = __lib._EFL_NET_CONTROL_EVENT_TECHNOLOGY_ADD,
        ["technology,del"] = __lib._EFL_NET_CONTROL_EVENT_TECHNOLOGY_DEL,
        ["radios_offline,changed"] = __lib._EFL_NET_CONTROL_EVENT_RADIOS_OFFLINE_CHANGED,
        ["state,changed"] = __lib._EFL_NET_CONTROL_EVENT_STATE_CHANGED,
        ["agent_released"] = __lib._EFL_NET_CONTROL_EVENT_AGENT_RELEASED,
        ["agent_error"] = __lib._EFL_NET_CONTROL_EVENT_AGENT_ERROR,
        ["agent_browser_url"] = __lib._EFL_NET_CONTROL_EVENT_AGENT_BROWSER_URL,
        ["agent_request_input"] = __lib._EFL_NET_CONTROL_EVENT_AGENT_REQUEST_INPUT
    },

    __properties = {
        ["radios_offline"] = { 0, 0, 1, 1, true, true },
        ["access_points"] = { 0, 0, 1, 0, true, false },
        ["agent_enabled"] = { 0, 0, 1, 1, true, true },
        ["state"] = { 0, 0, 1, 0, true, false },
        ["technologies"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Control = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Control").__eo_ctor,
                            1, ...)
end

return M
