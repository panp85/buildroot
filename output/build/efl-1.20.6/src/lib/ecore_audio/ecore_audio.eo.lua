-- EFL LuaJIT bindings: ecore_audio.eo (class Ecore.Audio)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_audio_class_get()
    eo.class_register("Ecore_Audio", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_audio_class_get(void);
    void ecore_audio_obj_name_set(const char * name);
    const char *ecore_audio_obj_name_get(void);
    void ecore_audio_obj_paused_set(Eina_Bool paused);
    Eina_Bool ecore_audio_obj_paused_get(void);
    void ecore_audio_obj_volume_set(double volume);
    double ecore_audio_obj_volume_get(void);
    Eina_Bool ecore_audio_obj_source_set(const char * source);
    const char *ecore_audio_obj_source_get(void);
    Eina_Bool ecore_audio_obj_format_set(Ecore_Audio_Format format);
    Ecore_Audio_Format ecore_audio_obj_format_get(void);
    void ecore_audio_obj_vio_set(Ecore_Audio_Vio * vio, void * data, efl_key_data_free_func free_func);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    name_set = function(self, name)
        eo.__do_start(self, __class)
        __lib.ecore_audio_obj_name_set(name)
        eo.__do_end()
    end,

    name_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_name_get()
        eo.__do_end()
        return v
    end,

    paused_set = function(self, paused)
        eo.__do_start(self, __class)
        __lib.ecore_audio_obj_paused_set(paused)
        eo.__do_end()
    end,

    paused_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_paused_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    volume_set = function(self, volume)
        eo.__do_start(self, __class)
        __lib.ecore_audio_obj_volume_set(volume)
        eo.__do_end()
    end,

    volume_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_volume_get()
        eo.__do_end()
        return tonumber(v)
    end,

    source_set = function(self, source)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_source_set(source)
        eo.__do_end()
    end,

    source_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_source_get()
        eo.__do_end()
        return v
    end,

    format_set = function(self, format)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_format_set(format)
        eo.__do_end()
    end,

    format_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_format_get()
        eo.__do_end()
        return v
    end,

    vio_set = function(self, vio, data, free_func)
        eo.__do_start(self, __class)
        __lib.ecore_audio_obj_vio_set(vio, data, free_func)
        eo.__do_end()
    end,

    __properties = {
        ["format"] = { 0, 0, 1, 1, true, true },
        ["source"] = { 0, 0, 1, 1, true, true },
        ["paused"] = { 0, 0, 1, 1, true, true },
        ["volume"] = { 0, 0, 1, 1, true, true },
        ["name"] = { 0, 0, 1, 1, true, true }
    }
}

M.Audio = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Audio").__eo_ctor,
                            1, ...)
end

return M
