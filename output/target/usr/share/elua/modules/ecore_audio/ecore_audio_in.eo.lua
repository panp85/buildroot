-- EFL LuaJIT bindings: ecore_audio_in.eo (class Ecore.Audio.In)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_audio_in_class_get()
    eo.class_register("Ecore_Audio_In", {"Ecore_Audio"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_audio_in_class_get(void);
    void ecore_audio_obj_in_speed_set(double speed);
    double ecore_audio_obj_in_speed_get(void);
    void ecore_audio_obj_in_samplerate_set(int samplerate);
    int ecore_audio_obj_in_samplerate_get(void);
    void ecore_audio_obj_in_channels_set(int channels);
    int ecore_audio_obj_in_channels_get(void);
    void ecore_audio_obj_in_preloaded_set(Eina_Bool preloaded);
    Eina_Bool ecore_audio_obj_in_preloaded_get(void);
    void ecore_audio_obj_in_looped_set(Eina_Bool looped);
    Eina_Bool ecore_audio_obj_in_looped_get(void);
    void ecore_audio_obj_in_length_set(double length);
    double ecore_audio_obj_in_length_get(void);
    Ecore_Audio *ecore_audio_obj_in_output_get(void);
    double ecore_audio_obj_in_remaining_get(void);
    ssize_t ecore_audio_obj_in_read(void * buf, size_t len);
    ssize_t ecore_audio_obj_in_read_internal(void * buf, size_t len);
    double ecore_audio_obj_in_seek(double offs, int mode);
    extern const Eo_Event_Description _ECORE_AUDIO_IN_EVENT_IN_LOOPED;
    extern const Eo_Event_Description _ECORE_AUDIO_IN_EVENT_IN_STOPPED;
    extern const Eo_Event_Description _ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED;
]]

local __M = util.get_namespace(M, { "audio" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    speed_set = function(self, speed)
        eo.__do_start(self, __class)
        __lib.ecore_audio_obj_in_speed_set(speed)
        eo.__do_end()
    end,

    speed_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_in_speed_get()
        eo.__do_end()
        return tonumber(v)
    end,

    samplerate_set = function(self, samplerate)
        eo.__do_start(self, __class)
        __lib.ecore_audio_obj_in_samplerate_set(samplerate)
        eo.__do_end()
    end,

    samplerate_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_in_samplerate_get()
        eo.__do_end()
        return tonumber(v)
    end,

    channels_set = function(self, channels)
        eo.__do_start(self, __class)
        __lib.ecore_audio_obj_in_channels_set(channels)
        eo.__do_end()
    end,

    channels_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_in_channels_get()
        eo.__do_end()
        return tonumber(v)
    end,

    preloaded_set = function(self, preloaded)
        eo.__do_start(self, __class)
        __lib.ecore_audio_obj_in_preloaded_set(preloaded)
        eo.__do_end()
    end,

    preloaded_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_in_preloaded_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    looped_set = function(self, looped)
        eo.__do_start(self, __class)
        __lib.ecore_audio_obj_in_looped_set(looped)
        eo.__do_end()
    end,

    looped_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_in_looped_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    length_set = function(self, length)
        eo.__do_start(self, __class)
        __lib.ecore_audio_obj_in_length_set(length)
        eo.__do_end()
    end,

    length_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_in_length_get()
        eo.__do_end()
        return tonumber(v)
    end,

    output_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_in_output_get()
        eo.__do_end()
        return v
    end,

    remaining_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_in_remaining_get()
        eo.__do_end()
        return tonumber(v)
    end,

    read = function(self, buf, len)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_in_read(buf, len)
        eo.__do_end()
        return tonumber(v)
    end,

    read_internal = function(self, buf, len)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_in_read_internal(buf, len)
        eo.__do_end()
        return tonumber(v)
    end,

    seek = function(self, offs, mode)
        eo.__do_start(self, __class)
        local v = __lib.ecore_audio_obj_in_seek(offs, mode)
        eo.__do_end()
        return tonumber(v)
    end,

    __events = {
        ["in,looped"] = __lib._ECORE_AUDIO_IN_EVENT_IN_LOOPED,
        ["in,stopped"] = __lib._ECORE_AUDIO_IN_EVENT_IN_STOPPED,
        ["in,samplerate,changed"] = __lib._ECORE_AUDIO_IN_EVENT_IN_SAMPLERATE_CHANGED
    },

    __properties = {
        ["output"] = { 0, 0, 1, 0, true, false },
        ["remaining"] = { 0, 0, 1, 0, true, false },
        ["length"] = { 0, 0, 1, 1, true, true },
        ["preloaded"] = { 0, 0, 1, 1, true, true },
        ["channels"] = { 0, 0, 1, 1, true, true },
        ["looped"] = { 0, 0, 1, 1, true, true },
        ["samplerate"] = { 0, 0, 1, 1, true, true },
        ["speed"] = { 0, 0, 1, 1, true, true }
    }
}

__M.In = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Audio_In").__eo_ctor,
                            1, ...)
end

return M
