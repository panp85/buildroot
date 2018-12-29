-- EFL LuaJIT bindings: elm_player.eo (class Elm.Player)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_player_class_get()
    eo.class_register("Elm_Player", {"Elm_Layout"}, {"Elm_Interface_Atspi_Widget_Action"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_player_class_get(void);
    extern const Eo_Event_Description _ELM_PLAYER_EVENT_FORWARD_CLICKED;
    extern const Eo_Event_Description _ELM_PLAYER_EVENT_INFO_CLICKED;
    extern const Eo_Event_Description _ELM_PLAYER_EVENT_NEXT_CLICKED;
    extern const Eo_Event_Description _ELM_PLAYER_EVENT_PAUSE_CLICKED;
    extern const Eo_Event_Description _ELM_PLAYER_EVENT_PLAY_CLICKED;
    extern const Eo_Event_Description _ELM_PLAYER_EVENT_PREV_CLICKED;
    extern const Eo_Event_Description _ELM_PLAYER_EVENT_REWIND_CLICKED;
    extern const Eo_Event_Description _ELM_PLAYER_EVENT_QUALITY_CLICKED;
    extern const Eo_Event_Description _ELM_PLAYER_EVENT_EJECT_CLICKED;
    extern const Eo_Event_Description _ELM_PLAYER_EVENT_VOLUME_CLICKED;
    extern const Eo_Event_Description _ELM_PLAYER_EVENT_MUTE_CLICKED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
    __events = {
        ["forward,clicked"] = __lib._ELM_PLAYER_EVENT_FORWARD_CLICKED,
        ["info,clicked"] = __lib._ELM_PLAYER_EVENT_INFO_CLICKED,
        ["next,clicked"] = __lib._ELM_PLAYER_EVENT_NEXT_CLICKED,
        ["pause,clicked"] = __lib._ELM_PLAYER_EVENT_PAUSE_CLICKED,
        ["play,clicked"] = __lib._ELM_PLAYER_EVENT_PLAY_CLICKED,
        ["prev,clicked"] = __lib._ELM_PLAYER_EVENT_PREV_CLICKED,
        ["rewind,clicked"] = __lib._ELM_PLAYER_EVENT_REWIND_CLICKED,
        ["quality,clicked"] = __lib._ELM_PLAYER_EVENT_QUALITY_CLICKED,
        ["eject,clicked"] = __lib._ELM_PLAYER_EVENT_EJECT_CLICKED,
        ["volume,clicked"] = __lib._ELM_PLAYER_EVENT_VOLUME_CLICKED,
        ["mute,clicked"] = __lib._ELM_PLAYER_EVENT_MUTE_CLICKED
    }
}

M.Player = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Player").__eo_ctor,
                            1, ...)
end

return M
