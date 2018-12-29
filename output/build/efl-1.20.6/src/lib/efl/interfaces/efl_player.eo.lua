-- EFL LuaJIT bindings: efl_player.eo (class Efl.Player)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_player_interface_get()
    eo.class_register("Efl_Player", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_player_interface_get(void);
    Eina_Bool efl_player_playable_get(void);
    void efl_player_play_set(Eina_Bool play);
    Eina_Bool efl_player_play_get(void);
    void efl_player_position_set(double sec);
    double efl_player_position_get(void);
    double efl_player_progress_get(void);
    void efl_player_play_speed_set(double speed);
    double efl_player_play_speed_get(void);
    void efl_player_volume_set(double volume);
    double efl_player_volume_get(void);
    void efl_player_mute_set(Eina_Bool mute);
    Eina_Bool efl_player_mute_get(void);
    double efl_player_length_get(void);
    Eina_Bool efl_player_seekable_get(void);
]]

__body = {
    playable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_player_playable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    play_set = function(self, play)
        eo.__do_start(self, __class)
        __lib.efl_player_play_set(play)
        eo.__do_end()
    end,

    play_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_player_play_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    position_set = function(self, sec)
        eo.__do_start(self, __class)
        __lib.efl_player_position_set(sec)
        eo.__do_end()
    end,

    position_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_player_position_get()
        eo.__do_end()
        return tonumber(v)
    end,

    progress_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_player_progress_get()
        eo.__do_end()
        return tonumber(v)
    end,

    play_speed_set = function(self, speed)
        eo.__do_start(self, __class)
        __lib.efl_player_play_speed_set(speed)
        eo.__do_end()
    end,

    play_speed_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_player_play_speed_get()
        eo.__do_end()
        return tonumber(v)
    end,

    volume_set = function(self, volume)
        eo.__do_start(self, __class)
        __lib.efl_player_volume_set(volume)
        eo.__do_end()
    end,

    volume_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_player_volume_get()
        eo.__do_end()
        return tonumber(v)
    end,

    mute_set = function(self, mute)
        eo.__do_start(self, __class)
        __lib.efl_player_mute_set(mute)
        eo.__do_end()
    end,

    mute_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_player_mute_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    length_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_player_length_get()
        eo.__do_end()
        return tonumber(v)
    end,

    seekable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_player_seekable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["position"] = { 0, 0, 1, 1, true, true },
        ["mute"] = { 0, 0, 1, 1, true, true },
        ["playable"] = { 0, 0, 1, 0, true, false },
        ["length"] = { 0, 0, 1, 0, true, false },
        ["seekable"] = { 0, 0, 1, 0, true, false },
        ["progress"] = { 0, 0, 1, 0, true, false },
        ["volume"] = { 0, 0, 1, 1, true, true },
        ["play_speed"] = { 0, 0, 1, 1, true, true },
        ["play"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Player"] = true

return M
