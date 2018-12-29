-- EFL LuaJIT bindings: efl_canvas.eo (class Efl.Canvas)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_interface_get()
    eo.class_register("Efl_Canvas", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_interface_get(void);
    Eina_Bool efl_canvas_image_max_size_get(int *maxw, int *maxh);
    Efl_Input_Device *efl_canvas_device_get(const char * name);
    Efl_Input_Device *efl_canvas_seat_get(int id);
    void efl_canvas_smart_objects_calculate(void);
    Eina_Iterator *efl_canvas_objects_at_xy_get(int x, int y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
    Efl_Gfx *efl_canvas_object_top_at_xy_get(int x, int y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
    Eina_Iterator *efl_canvas_objects_in_rectangle_get(int x, int y, int w, int h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
    Efl_Gfx *efl_canvas_object_top_in_rectangle_get(int x, int y, int w, int h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
    Eina_Iterator *efl_canvas_seats(void);
    extern const Eo_Event_Description _EFL_CANVAS_EVENT_FOCUS_IN;
    extern const Eo_Event_Description _EFL_CANVAS_EVENT_FOCUS_OUT;
    extern const Eo_Event_Description _EFL_CANVAS_EVENT_OBJECT_FOCUS_IN;
    extern const Eo_Event_Description _EFL_CANVAS_EVENT_OBJECT_FOCUS_OUT;
    extern const Eo_Event_Description _EFL_CANVAS_EVENT_RENDER_PRE;
    extern const Eo_Event_Description _EFL_CANVAS_EVENT_RENDER_POST;
    extern const Eo_Event_Description _EFL_CANVAS_EVENT_DEVICE_CHANGED;
    extern const Eo_Event_Description _EFL_CANVAS_EVENT_DEVICE_ADDED;
    extern const Eo_Event_Description _EFL_CANVAS_EVENT_DEVICE_REMOVED;
]]

__body = {
    image_max_size_get = function(self)
        eo.__do_start(self, __class)
        local maxw = ffi.new("int[1]")
        local maxh = ffi.new("int[1]")
        local v = __lib.efl_canvas_image_max_size_get(maxw, maxh)
        eo.__do_end()
        return tonumber(maxw[0]), tonumber(maxh[0])
    end,

    device_get = function(self, name)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_device_get(name)
        eo.__do_end()
        return v
    end,

    seat_get = function(self, id)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_seat_get(id)
        eo.__do_end()
        return v
    end,

    smart_objects_calculate = function(self)
        eo.__do_start(self, __class)
        __lib.efl_canvas_smart_objects_calculate()
        eo.__do_end()
    end,

    objects_at_xy_get = function(self, x, y, include_pass_events_objects, include_hidden_objects)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_objects_at_xy_get(x, y, include_pass_events_objects, include_hidden_objects)
        eo.__do_end()
        return v
    end,

    object_top_at_xy_get = function(self, x, y, include_pass_events_objects, include_hidden_objects)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_top_at_xy_get(x, y, include_pass_events_objects, include_hidden_objects)
        eo.__do_end()
        return v
    end,

    objects_in_rectangle_get = function(self, x, y, w, h, include_pass_events_objects, include_hidden_objects)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_objects_in_rectangle_get(x, y, w, h, include_pass_events_objects, include_hidden_objects)
        eo.__do_end()
        return v
    end,

    object_top_in_rectangle_get = function(self, x, y, w, h, include_pass_events_objects, include_hidden_objects)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_top_in_rectangle_get(x, y, w, h, include_pass_events_objects, include_hidden_objects)
        eo.__do_end()
        return v
    end,

    seats = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_seats()
        eo.__do_end()
        return v
    end,

    __events = {
        ["focus,in"] = __lib._EFL_CANVAS_EVENT_FOCUS_IN,
        ["focus,out"] = __lib._EFL_CANVAS_EVENT_FOCUS_OUT,
        ["object,focus,in"] = __lib._EFL_CANVAS_EVENT_OBJECT_FOCUS_IN,
        ["object,focus,out"] = __lib._EFL_CANVAS_EVENT_OBJECT_FOCUS_OUT,
        ["render,pre"] = __lib._EFL_CANVAS_EVENT_RENDER_PRE,
        ["render,post"] = __lib._EFL_CANVAS_EVENT_RENDER_POST,
        ["device,changed"] = __lib._EFL_CANVAS_EVENT_DEVICE_CHANGED,
        ["device,added"] = __lib._EFL_CANVAS_EVENT_DEVICE_ADDED,
        ["device,removed"] = __lib._EFL_CANVAS_EVENT_DEVICE_REMOVED
    },

    __properties = {
        ["seat"] = { 1, 0, 1, 0, true, false },
        ["device"] = { 1, 0, 1, 0, true, false },
        ["image_max_size"] = { 0, 0, 2, 0, true, false }
    }
}
__body["__iface_Efl_Canvas"] = true

return M
