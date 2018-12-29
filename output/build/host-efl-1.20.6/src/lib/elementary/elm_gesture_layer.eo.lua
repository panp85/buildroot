-- EFL LuaJIT bindings: elm_gesture_layer.eo (class Elm.Gesture_Layer)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_gesture_layer_class_get()
    eo.class_register("Elm_Gesture_Layer", {"Elm_Widget"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_gesture_layer_class_get(void);
    void elm_obj_gesture_layer_zoom_step_set(double step);
    double elm_obj_gesture_layer_zoom_step_get(void);
    void elm_obj_gesture_layer_tap_finger_size_set(int sz);
    int elm_obj_gesture_layer_tap_finger_size_get(void);
    void elm_obj_gesture_layer_hold_events_set(Eina_Bool hold_events);
    Eina_Bool elm_obj_gesture_layer_hold_events_get(void);
    void elm_obj_gesture_layer_rotate_step_set(double step);
    double elm_obj_gesture_layer_rotate_step_get(void);
    void elm_obj_gesture_layer_cb_set(Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void * data);
    Eina_Bool elm_obj_gesture_layer_attach(Efl_Canvas_Object * target);
    void elm_obj_gesture_layer_cb_del(Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void * data);
    void elm_obj_gesture_layer_cb_add(Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void * data);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    zoom_step_set = function(self, step)
        eo.__do_start(self, __class)
        __lib.elm_obj_gesture_layer_zoom_step_set(step)
        eo.__do_end()
    end,

    zoom_step_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gesture_layer_zoom_step_get()
        eo.__do_end()
        return tonumber(v)
    end,

    tap_finger_size_set = function(self, sz)
        eo.__do_start(self, __class)
        __lib.elm_obj_gesture_layer_tap_finger_size_set(sz)
        eo.__do_end()
    end,

    tap_finger_size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gesture_layer_tap_finger_size_get()
        eo.__do_end()
        return tonumber(v)
    end,

    hold_events_set = function(self, hold_events)
        eo.__do_start(self, __class)
        __lib.elm_obj_gesture_layer_hold_events_set(hold_events)
        eo.__do_end()
    end,

    hold_events_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gesture_layer_hold_events_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    rotate_step_set = function(self, step)
        eo.__do_start(self, __class)
        __lib.elm_obj_gesture_layer_rotate_step_set(step)
        eo.__do_end()
    end,

    rotate_step_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gesture_layer_rotate_step_get()
        eo.__do_end()
        return tonumber(v)
    end,

    cb_set = function(self, idx, cb_type, cb, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_gesture_layer_cb_set(idx, cb_type, cb, data)
        eo.__do_end()
    end,

    attach = function(self, target)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gesture_layer_attach(target)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    cb_del = function(self, idx, cb_type, cb, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_gesture_layer_cb_del(idx, cb_type, cb, data)
        eo.__do_end()
    end,

    cb_add = function(self, idx, cb_type, cb, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_gesture_layer_cb_add(idx, cb_type, cb, data)
        eo.__do_end()
    end,

    __properties = {
        ["zoom_step"] = { 0, 0, 1, 1, true, true },
        ["rotate_step"] = { 0, 0, 1, 1, true, true },
        ["cb"] = { 0, 0, 0, 4, false, true },
        ["tap_finger_size"] = { 0, 0, 1, 1, true, true },
        ["hold_events"] = { 0, 0, 1, 1, true, true }
    }
}

M.Gesture_Layer = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Gesture_Layer").__eo_ctor,
                            1, ...)
end

return M
