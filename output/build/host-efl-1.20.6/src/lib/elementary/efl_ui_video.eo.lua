-- EFL LuaJIT bindings: efl_ui_video.eo (class Efl.Ui.Video)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_video_class_get()
    eo.class_register("Efl_Ui_Video", {"Elm_Layout"}, {"Efl_File", "Efl_Player", "Elm_Interface_Atspi_Widget_Action"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_video_class_get(void);
    void efl_ui_video_remember_position_set(Eina_Bool remember);
    Eina_Bool efl_ui_video_remember_position_get(void);
    Eina_Bool efl_ui_video_is_playing_get(void);
    Efl_Canvas_Object *efl_ui_video_emotion_get(void);
    const char *efl_ui_video_title_get(void);
    void efl_ui_video_play(void);
    void efl_ui_video_pause(void);
    void efl_ui_video_stop(void);
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    remember_position_set = function(self, remember)
        eo.__do_start(self, __class)
        __lib.efl_ui_video_remember_position_set(remember)
        eo.__do_end()
    end,

    remember_position_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_video_remember_position_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    is_playing_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_video_is_playing_get()
        eo.__do_end()
    end,

    emotion_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_video_emotion_get()
        eo.__do_end()
    end,

    title_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_video_title_get()
        eo.__do_end()
    end,

    play = function(self)
        eo.__do_start(self, __class)
        __lib.efl_ui_video_play()
        eo.__do_end()
    end,

    pause = function(self)
        eo.__do_start(self, __class)
        __lib.efl_ui_video_pause()
        eo.__do_end()
    end,

    stop = function(self)
        eo.__do_start(self, __class)
        __lib.efl_ui_video_stop()
        eo.__do_end()
    end,

    __properties = {
        ["remember_position"] = { 0, 0, 1, 1, true, true },
        ["emotion"] = { 0, 0, 1, 0, true, false },
        ["title"] = { 0, 0, 1, 0, true, false },
        ["is_playing"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Video = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Video").__eo_ctor,
                            1, ...)
end

return M
