-- EFL LuaJIT bindings: efl_ui_focus_object.eo (class Efl.Ui.Focus.Object)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_focus_object_mixin_get()
    eo.class_register("Efl_Ui_Focus_Object", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_focus_object_mixin_get(void);
    Eina_Rectangle efl_ui_focus_object_focus_geometry_get(void);
    void efl_ui_focus_object_focus_set(Eina_Bool focus);
    Eina_Bool efl_ui_focus_object_focus_get(void);
    extern const Eo_Event_Description _EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_CHANGED;
]]

local __M = util.get_namespace(M, { "ui", "focus" })
__body = {
    focus_geometry_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_object_focus_geometry_get()
        eo.__do_end()
        return v
    end,

    focus_set = function(self, focus)
        eo.__do_start(self, __class)
        __lib.efl_ui_focus_object_focus_set(focus)
        eo.__do_end()
    end,

    focus_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_object_focus_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["focus,changed"] = __lib._EFL_UI_FOCUS_OBJECT_EVENT_FOCUS_CHANGED
    },

    __properties = {
        ["focus"] = { 0, 0, 1, 1, true, true },
        ["focus_geometry"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__mixin_Efl_Ui_Focus_Object"] = true

return M
