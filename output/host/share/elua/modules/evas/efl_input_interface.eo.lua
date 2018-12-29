-- EFL LuaJIT bindings: efl_input_interface.eo (class Efl.Input.Interface)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_input_interface_interface_get()
    eo.class_register("Efl_Input_Interface", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_input_interface_interface_get(void);
    void efl_input_pointer_xy_get(int *x, int *y);
    Eina_Bool efl_input_pointer_inside_get(void);
    void efl_input_seat_event_filter_set(Efl_Input_Device * seat, Eina_Bool enable);
    Eina_Bool efl_input_seat_event_filter_get(Efl_Input_Device * seat);
    Eina_Iterator *efl_input_pointer_iterate(Eina_Bool hover);
    extern const Eo_Event_Description _EFL_EVENT_POINTER_MOVE;
    extern const Eo_Event_Description _EFL_EVENT_POINTER_DOWN;
    extern const Eo_Event_Description _EFL_EVENT_POINTER_UP;
    extern const Eo_Event_Description _EFL_EVENT_POINTER_CANCEL;
    extern const Eo_Event_Description _EFL_EVENT_POINTER_IN;
    extern const Eo_Event_Description _EFL_EVENT_POINTER_OUT;
    extern const Eo_Event_Description _EFL_EVENT_POINTER_WHEEL;
    extern const Eo_Event_Description _EFL_EVENT_POINTER_AXIS;
    extern const Eo_Event_Description _EFL_EVENT_FINGER_MOVE;
    extern const Eo_Event_Description _EFL_EVENT_FINGER_DOWN;
    extern const Eo_Event_Description _EFL_EVENT_FINGER_UP;
    extern const Eo_Event_Description _EFL_EVENT_KEY_DOWN;
    extern const Eo_Event_Description _EFL_EVENT_KEY_UP;
    extern const Eo_Event_Description _EFL_EVENT_HOLD;
    extern const Eo_Event_Description _EFL_EVENT_FOCUS_IN;
    extern const Eo_Event_Description _EFL_EVENT_FOCUS_OUT;
]]

local __M = util.get_namespace(M, { "input" })
__body = {
    pointer_xy_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.efl_input_pointer_xy_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    pointer_inside_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_inside_get()
        eo.__do_end()
    end,

    seat_event_filter_set = function(self, seat, enable)
        eo.__do_start(self, __class)
        __lib.efl_input_seat_event_filter_set(seat, enable)
        eo.__do_end()
    end,

    seat_event_filter_get = function(self, seat)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_seat_event_filter_get(seat)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pointer_iterate = function(self, hover)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_iterate(hover)
        eo.__do_end()
        return v
    end,

    __events = {
        ["pointer,move"] = __lib._EFL_EVENT_POINTER_MOVE,
        ["pointer,down"] = __lib._EFL_EVENT_POINTER_DOWN,
        ["pointer,up"] = __lib._EFL_EVENT_POINTER_UP,
        ["pointer,cancel"] = __lib._EFL_EVENT_POINTER_CANCEL,
        ["pointer,in"] = __lib._EFL_EVENT_POINTER_IN,
        ["pointer,out"] = __lib._EFL_EVENT_POINTER_OUT,
        ["pointer,wheel"] = __lib._EFL_EVENT_POINTER_WHEEL,
        ["pointer,axis"] = __lib._EFL_EVENT_POINTER_AXIS,
        ["finger,move"] = __lib._EFL_EVENT_FINGER_MOVE,
        ["finger,down"] = __lib._EFL_EVENT_FINGER_DOWN,
        ["finger,up"] = __lib._EFL_EVENT_FINGER_UP,
        ["key,down"] = __lib._EFL_EVENT_KEY_DOWN,
        ["key,up"] = __lib._EFL_EVENT_KEY_UP,
        ["hold"] = __lib._EFL_EVENT_HOLD,
        ["focus,in"] = __lib._EFL_EVENT_FOCUS_IN,
        ["focus,out"] = __lib._EFL_EVENT_FOCUS_OUT
    },

    __properties = {
        ["pointer_xy"] = { 0, 0, 2, 0, true, false },
        ["pointer_inside"] = { 0, 0, 1, 0, true, false },
        ["seat_event_filter"] = { 1, 1, 1, 1, true, true }
    }
}
__body["__iface_Efl_Input_Interface"] = true

return M
