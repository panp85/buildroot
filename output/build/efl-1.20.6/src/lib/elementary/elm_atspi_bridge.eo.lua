-- EFL LuaJIT bindings: elm_atspi_bridge.eo (class Elm.Atspi.Bridge)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_atspi_bridge_class_get()
    eo.class_register("Elm_Atspi_Bridge", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_atspi_bridge_class_get(void);
    Eina_Bool elm_obj_atspi_bridge_connected_get(void);
    extern const Eo_Event_Description _ELM_ATSPI_BRIDGE_EVENT_CONNECTED;
    extern const Eo_Event_Description _ELM_ATSPI_BRIDGE_EVENT_DISCONNECTED;
]]

local __M = util.get_namespace(M, { "atspi" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    connected_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_atspi_bridge_connected_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["connected"] = __lib._ELM_ATSPI_BRIDGE_EVENT_CONNECTED,
        ["disconnected"] = __lib._ELM_ATSPI_BRIDGE_EVENT_DISCONNECTED
    },

    __properties = {
        ["connected"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Bridge = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Atspi_Bridge").__eo_ctor,
                            1, ...)
end

return M
