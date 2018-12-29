-- EFL LuaJIT bindings: ecore_audio_in_sndfile.eo (class Ecore.Audio.In.Sndfile)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_audio_in_sndfile_class_get()
    eo.class_register("Ecore_Audio_In_Sndfile", {"Ecore_Audio_In"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_audio_in_sndfile_class_get(void);
]]

local __M = util.get_namespace(M, { "audio", "in" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Sndfile = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Audio_In_Sndfile").__eo_ctor,
                            1, ...)
end

return M
