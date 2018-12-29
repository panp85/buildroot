-- EFL LuaJIT bindings: efl_canvas_video.eo (class Efl.Canvas.Video)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_video_class_get()
    eo.class_register("Efl_Canvas_Video", {"Efl_Canvas_Group"}, {"Efl_File", "Efl_Player", "Efl_Image", "Efl_Image_Load"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_video_class_get(void);
    void efl_canvas_video_option_set(const char * opt, const char * val);
    Eina_Bool efl_canvas_video_engine_set(const char * module_filename);
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_FRAME_DECODE;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_CHANGE;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_LENGTH_CHANGE;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_FRAME_RESIZE;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_PLAYBACK_START;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_PLAYBACK_STOP;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_VOLUME_CHANGE;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_CHANNELS_CHANGE;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_TITLE_CHANGE;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_PROGRESS_CHANGE;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_REF_CHANGE;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_BUTTON_NUM_CHANGE;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_BUTTON_CHANGE;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_OPEN_DONE;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_SAVE_DONE;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_SAVE_FAIL;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_LOAD_DONE;
    extern const Eo_Event_Description _EFL_CANVAS_VIDEO_EVENT_POSITION_LOAD_FAIL;
]]

local __M = util.get_namespace(M, { "canvas" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    option_set = function(self, opt, val)
        eo.__do_start(self, __class)
        __lib.efl_canvas_video_option_set(opt, val)
        eo.__do_end()
    end,

    engine_set = function(self, module_filename)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_video_engine_set(module_filename)
        eo.__do_end()
    end,

    __events = {
        ["frame,decode"] = __lib._EFL_CANVAS_VIDEO_EVENT_FRAME_DECODE,
        ["position,change"] = __lib._EFL_CANVAS_VIDEO_EVENT_POSITION_CHANGE,
        ["length,change"] = __lib._EFL_CANVAS_VIDEO_EVENT_LENGTH_CHANGE,
        ["frame,resize"] = __lib._EFL_CANVAS_VIDEO_EVENT_FRAME_RESIZE,
        ["playback,start"] = __lib._EFL_CANVAS_VIDEO_EVENT_PLAYBACK_START,
        ["playback,stop"] = __lib._EFL_CANVAS_VIDEO_EVENT_PLAYBACK_STOP,
        ["volume,change"] = __lib._EFL_CANVAS_VIDEO_EVENT_VOLUME_CHANGE,
        ["channels,change"] = __lib._EFL_CANVAS_VIDEO_EVENT_CHANNELS_CHANGE,
        ["title,change"] = __lib._EFL_CANVAS_VIDEO_EVENT_TITLE_CHANGE,
        ["progress,change"] = __lib._EFL_CANVAS_VIDEO_EVENT_PROGRESS_CHANGE,
        ["ref,change"] = __lib._EFL_CANVAS_VIDEO_EVENT_REF_CHANGE,
        ["button,num,change"] = __lib._EFL_CANVAS_VIDEO_EVENT_BUTTON_NUM_CHANGE,
        ["button,change"] = __lib._EFL_CANVAS_VIDEO_EVENT_BUTTON_CHANGE,
        ["open,done"] = __lib._EFL_CANVAS_VIDEO_EVENT_OPEN_DONE,
        ["position,save,done"] = __lib._EFL_CANVAS_VIDEO_EVENT_POSITION_SAVE_DONE,
        ["position,save,fail"] = __lib._EFL_CANVAS_VIDEO_EVENT_POSITION_SAVE_FAIL,
        ["position,load,done"] = __lib._EFL_CANVAS_VIDEO_EVENT_POSITION_LOAD_DONE,
        ["position,load,fail"] = __lib._EFL_CANVAS_VIDEO_EVENT_POSITION_LOAD_FAIL
    },

    __properties = {
        ["option"] = { 0, 0, 0, 2, false, true },
        ["engine"] = { 0, 0, 0, 1, false, true }
    }
}

__M.Video = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Canvas_Video").__eo_ctor,
                            1, ...)
end

return M
