-- EFL LuaJIT bindings: efl_ui_draggable.eo (class Efl.Ui.Draggable)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_draggable_interface_get()
    eo.class_register("Efl_Ui_Draggable", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_draggable_interface_get(void);
    void efl_ui_draggable_drag_target_set(Eina_Bool set);
    Eina_Bool efl_ui_draggable_drag_target_get(void);
    extern const Eo_Event_Description _EFL_UI_EVENT_DRAG;
    extern const Eo_Event_Description _EFL_UI_EVENT_DRAG_START;
    extern const Eo_Event_Description _EFL_UI_EVENT_DRAG_STOP;
    extern const Eo_Event_Description _EFL_UI_EVENT_DRAG_END;
    extern const Eo_Event_Description _EFL_UI_EVENT_DRAG_START_UP;
    extern const Eo_Event_Description _EFL_UI_EVENT_DRAG_START_DOWN;
    extern const Eo_Event_Description _EFL_UI_EVENT_DRAG_START_RIGHT;
    extern const Eo_Event_Description _EFL_UI_EVENT_DRAG_START_LEFT;
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    drag_target_set = function(self, set)
        eo.__do_start(self, __class)
        __lib.efl_ui_draggable_drag_target_set(set)
        eo.__do_end()
    end,

    drag_target_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_draggable_drag_target_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["drag"] = __lib._EFL_UI_EVENT_DRAG,
        ["drag,start"] = __lib._EFL_UI_EVENT_DRAG_START,
        ["drag,stop"] = __lib._EFL_UI_EVENT_DRAG_STOP,
        ["drag,end"] = __lib._EFL_UI_EVENT_DRAG_END,
        ["drag,start,up"] = __lib._EFL_UI_EVENT_DRAG_START_UP,
        ["drag,start,down"] = __lib._EFL_UI_EVENT_DRAG_START_DOWN,
        ["drag,start,right"] = __lib._EFL_UI_EVENT_DRAG_START_RIGHT,
        ["drag,start,left"] = __lib._EFL_UI_EVENT_DRAG_START_LEFT
    },

    __properties = {
        ["drag_target"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Ui_Draggable"] = true

return M
