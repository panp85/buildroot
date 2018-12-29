-- EFL LuaJIT bindings: elm_conformant.eo (class Elm.Conformant)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_conformant_class_get()
    eo.class_register("Elm_Conformant", {"Elm_Layout"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_conformant_class_get(void);
    extern const Eo_Event_Description _ELM_CONFORMANT_EVENT_VIRTUALKEYPAD_STATE_ON;
    extern const Eo_Event_Description _ELM_CONFORMANT_EVENT_VIRTUALKEYPAD_STATE_OFF;
    extern const Eo_Event_Description _ELM_CONFORMANT_EVENT_CLIPBOARD_STATE_ON;
    extern const Eo_Event_Description _ELM_CONFORMANT_EVENT_CLIPBOARD_STATE_OFF;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
    __events = {
        ["virtualkeypad,state,on"] = __lib._ELM_CONFORMANT_EVENT_VIRTUALKEYPAD_STATE_ON,
        ["virtualkeypad,state,off"] = __lib._ELM_CONFORMANT_EVENT_VIRTUALKEYPAD_STATE_OFF,
        ["clipboard,state,on"] = __lib._ELM_CONFORMANT_EVENT_CLIPBOARD_STATE_ON,
        ["clipboard,state,off"] = __lib._ELM_CONFORMANT_EVENT_CLIPBOARD_STATE_OFF
    }
}

M.Conformant = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Conformant").__eo_ctor,
                            1, ...)
end

return M
