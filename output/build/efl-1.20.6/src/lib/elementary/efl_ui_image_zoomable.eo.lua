-- EFL LuaJIT bindings: efl_ui_image_zoomable.eo (class Efl.Ui.Image.Zoomable)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_image_zoomable_class_get()
    eo.class_register("Efl_Ui_Image_Zoomable", {"Elm_Widget", "Efl_Ui_Image"}, {"Efl_Ui_Zoom", "Elm_Interface_Scrollable", "Efl_Ui_Scrollable"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_image_zoomable_class_get(void);
    void efl_ui_image_zoomable_gesture_enabled_set(Eina_Bool gesture);
    Eina_Bool efl_ui_image_zoomable_gesture_enabled_get(void);
    void efl_ui_image_zoomable_image_region_set(int x, int y, int w, int h);
    void efl_ui_image_zoomable_image_region_get(int *x, int *y, int *w, int *h);
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_PRESS;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD_DETAIL;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED_DETAIL;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_START;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_PROGRESS;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_DONE;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_ERROR;
]]

local __M = util.get_namespace(M, { "ui", "image" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    gesture_enabled_set = function(self, gesture)
        eo.__do_start(self, __class)
        __lib.efl_ui_image_zoomable_gesture_enabled_set(gesture)
        eo.__do_end()
    end,

    gesture_enabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_image_zoomable_gesture_enabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    image_region_set = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.efl_ui_image_zoomable_image_region_set(x, y, w, h)
        eo.__do_end()
    end,

    image_region_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_ui_image_zoomable_image_region_get(x, y, w, h)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    __events = {
        ["press"] = __lib._EFL_UI_IMAGE_ZOOMABLE_EVENT_PRESS,
        ["load"] = __lib._EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD,
        ["loaded"] = __lib._EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED,
        ["load,detail"] = __lib._EFL_UI_IMAGE_ZOOMABLE_EVENT_LOAD_DETAIL,
        ["loaded,detail"] = __lib._EFL_UI_IMAGE_ZOOMABLE_EVENT_LOADED_DETAIL,
        ["download,start"] = __lib._EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_START,
        ["download,progress"] = __lib._EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_PROGRESS,
        ["download,done"] = __lib._EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_DONE,
        ["download,error"] = __lib._EFL_UI_IMAGE_ZOOMABLE_EVENT_DOWNLOAD_ERROR
    },

    __properties = {
        ["gesture_enabled"] = { 0, 0, 1, 1, true, true },
        ["image_region"] = { 0, 0, 4, 4, true, true }
    }
}

__M.Zoomable = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Image_Zoomable").__eo_ctor,
                            1, ...)
end

return M
