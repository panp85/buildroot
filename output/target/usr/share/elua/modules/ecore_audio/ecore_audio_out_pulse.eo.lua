-- EFL LuaJIT bindings: ecore_audio_out_pulse.eo (class Ecore.Audio.Out.Pulse)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_audio_out_pulse_class_get()
    eo.class_register("Ecore_Audio_Out_Pulse", {"Ecore_Audio_Out"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_audio_out_pulse_class_get(void);
    extern const Eo_Event_Description _ECORE_AUDIO_OUT_PULSE_EVENT_CONTEXT_READY;
    extern const Eo_Event_Description _ECORE_AUDIO_OUT_PULSE_EVENT_CONTEXT_FAIL;
]]

local __M = util.get_namespace(M, { "audio", "out" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
    __events = {
        ["context,ready"] = __lib._ECORE_AUDIO_OUT_PULSE_EVENT_CONTEXT_READY,
        ["context,fail"] = __lib._ECORE_AUDIO_OUT_PULSE_EVENT_CONTEXT_FAIL
    }
}

__M.Pulse = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Audio_Out_Pulse").__eo_ctor,
                            1, ...)
end

return M
