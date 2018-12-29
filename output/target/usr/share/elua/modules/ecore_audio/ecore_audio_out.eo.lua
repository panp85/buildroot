-- EFL LuaJIT bindings: ecore_audio_out.eo (class Ecore.Audio.Out)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_audio_out_class_get()
    eo.class_register("Ecore_Audio_Out", {"Ecore_Audio"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_audio_out_class_get(void);
    Eina_Bool ecore_audio_obj_out_input_attach(Ecore_Audio_In * input);
    Eina_Bool ecore_audio_obj_out_input_detach(Ecore_Audio_In * input);
    Eina_List *ecore_audio_obj_out_inputs_get(void);
]]

local __M = util.get_namespace(M, { "audio" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    input_attach = function(self, input)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_out_input_attach(input)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    input_detach = function(self, input)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_out_input_detach(input)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    inputs_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_out_inputs_get()
        eo.__do_end()
        return v
    end
}

__M.Out = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Audio_Out").__eo_ctor,
                            1, ...)
end

return M
