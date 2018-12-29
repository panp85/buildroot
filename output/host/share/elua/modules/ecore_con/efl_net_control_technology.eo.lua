-- EFL LuaJIT bindings: efl_net_control_technology.eo (class Efl.Net.Control.Technology)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_control_technology_class_get()
    eo.class_register("Efl_Net_Control_Technology", {"Efl_Loop_User"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_control_technology_class_get(void);
    void efl_net_control_technology_powered_set(Eina_Bool powered);
    Eina_Bool efl_net_control_technology_powered_get(void);
    void efl_net_control_technology_tethering_set(Eina_Bool enabled, const char * identifier, const char * passphrase);
    void efl_net_control_technology_tethering_get(Eina_Bool *enabled, const char * *identifier, const char * *passphrase);
    Eina_Bool efl_net_control_technology_connected_get(void);
    const char *efl_net_control_technology_name_get(void);
    Efl_Net_Control_Technology_Type efl_net_control_technology_type_get(void);
    Efl_Future *efl_net_control_technology_scan(void);
    extern const Eo_Event_Description _EFL_NET_CONTROL_TECHNOLOGY_EVENT_CHANGED;
]]

local __M = util.get_namespace(M, { "net", "control" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    powered_set = function(self, powered)
        eo.__do_start(self, __class)
        __lib.efl_net_control_technology_powered_set(powered)
        eo.__do_end()
    end,

    powered_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_technology_powered_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    tethering_set = function(self, enabled, identifier, passphrase)
        eo.__do_start(self, __class)
        __lib.efl_net_control_technology_tethering_set(enabled, identifier, passphrase)
        eo.__do_end()
    end,

    tethering_get = function(self)
        eo.__do_start(self, __class)
        local enabled = ffi.new("Eina_Bool[1]")
        local identifier = ffi.new("const char *[1]")
        local passphrase = ffi.new("const char *[1]")
        __lib.efl_net_control_technology_tethering_get(enabled, identifier, passphrase)
        eo.__do_end()
        return ((enabled[0]) ~= 0), identifier[0], passphrase[0]
    end,

    connected_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_technology_connected_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    name_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_technology_name_get()
        eo.__do_end()
        return v
    end,

    type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_technology_type_get()
        eo.__do_end()
        return v
    end,

    scan = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_control_technology_scan()
        eo.__do_end()
        return v
    end,

    __events = {
        ["changed"] = __lib._EFL_NET_CONTROL_TECHNOLOGY_EVENT_CHANGED
    },

    __properties = {
        ["tethering"] = { 0, 0, 3, 3, true, true },
        ["powered"] = { 0, 0, 1, 1, true, true },
        ["connected"] = { 0, 0, 1, 0, true, false },
        ["name"] = { 0, 0, 1, 0, true, false },
        ["type"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Technology = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Control_Technology").__eo_ctor,
                            1, ...)
end

return M
