-- EFL LuaJIT bindings: efl_ui_image_zoomable_pan.eo (class Efl.Ui.Image.Zoomable.Pan)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_image_zoomable_pan_class_get()
    eo.class_register("Efl_Ui_Image_Zoomable_Pan", {"Elm_Pan"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_image_zoomable_pan_class_get(void);
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOAD;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOADED;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOAD_DETAIL;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOADED_DETAIL;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_START;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_PROGRESS;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_DONE;
    extern const Eo_Event_Description _EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_ERROR;
]]

local __M = util.get_namespace(M, { "ui", "image", "zoomable" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
    __events = {
        ["load"] = __lib._EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOAD,
        ["loaded"] = __lib._EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOADED,
        ["load,detail"] = __lib._EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOAD_DETAIL,
        ["loaded,detail"] = __lib._EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_LOADED_DETAIL,
        ["download,start"] = __lib._EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_START,
        ["download,progress"] = __lib._EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_PROGRESS,
        ["download,done"] = __lib._EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_DONE,
        ["download,error"] = __lib._EFL_UI_IMAGE_ZOOMABLE_PAN_EVENT_DOWNLOAD_ERROR
    }
}

__M.Pan = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Image_Zoomable_Pan").__eo_ctor,
                            1, ...)
end

return M
