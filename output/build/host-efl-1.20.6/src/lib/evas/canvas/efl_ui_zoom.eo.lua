-- EFL LuaJIT bindings: efl_ui_zoom.eo (class Efl.Ui.Zoom)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_zoom_interface_get()
    eo.class_register("Efl_Ui_Zoom", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_zoom_interface_get(void);
    void efl_ui_zoom_animation_set(Eina_Bool paused);
    Eina_Bool efl_ui_zoom_animation_get(void);
    void efl_ui_zoom_set(double zoom);
    double efl_ui_zoom_get(void);
    void efl_ui_zoom_mode_set(Efl_Ui_Zoom_Mode mode);
    Efl_Ui_Zoom_Mode efl_ui_zoom_mode_get(void);
    extern const Eo_Event_Description _EFL_UI_EVENT_ZOOM_START;
    extern const Eo_Event_Description _EFL_UI_EVENT_ZOOM_STOP;
    extern const Eo_Event_Description _EFL_UI_EVENT_ZOOM_CHANGE;
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    zoom_animation_set = function(self, paused)
        eo.__do_start(self, __class)
        __lib.efl_ui_zoom_animation_set(paused)
        eo.__do_end()
    end,

    zoom_animation_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_zoom_animation_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    zoom_set = function(self, zoom)
        eo.__do_start(self, __class)
        __lib.efl_ui_zoom_set(zoom)
        eo.__do_end()
    end,

    zoom_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_zoom_get()
        eo.__do_end()
        return tonumber(v)
    end,

    zoom_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.efl_ui_zoom_mode_set(mode)
        eo.__do_end()
    end,

    zoom_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_zoom_mode_get()
        eo.__do_end()
        return v
    end,

    __events = {
        ["zoom,start"] = __lib._EFL_UI_EVENT_ZOOM_START,
        ["zoom,stop"] = __lib._EFL_UI_EVENT_ZOOM_STOP,
        ["zoom,change"] = __lib._EFL_UI_EVENT_ZOOM_CHANGE
    },

    __properties = {
        ["zoom_animation"] = { 0, 0, 1, 1, true, true },
        ["zoom_mode"] = { 0, 0, 1, 1, true, true },
        ["zoom"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Ui_Zoom"] = true

return M
