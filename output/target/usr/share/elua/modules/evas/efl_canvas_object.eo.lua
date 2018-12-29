-- EFL LuaJIT bindings: efl_canvas_object.eo (class Efl.Canvas.Object)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_object_class_get()
    eo.class_register("Efl_Canvas_Object", {"Efl_Object", "Efl_Loop_User"}, {"Efl_Gfx", "Efl_Gfx_Stack", "Efl_Animator", "Efl_Input_Interface", "Efl_Gfx_Size_Hint", "Efl_Gfx_Map"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_object_class_get(void);
    Eina_Bool efl_canvas_object_pointer_mode_by_device_set(Efl_Input_Device * dev, Efl_Input_Object_Pointer_Mode pointer_mode);
    Efl_Input_Object_Pointer_Mode efl_canvas_object_pointer_mode_by_device_get(Efl_Input_Device * dev);
    Eina_Bool efl_canvas_object_pointer_mode_set(Efl_Input_Object_Pointer_Mode pointer_mode);
    Efl_Input_Object_Pointer_Mode efl_canvas_object_pointer_mode_get(void);
    Eina_Bool efl_canvas_object_pointer_in_get(void);
    Eina_Bool efl_canvas_object_pointer_device_in_get(Efl_Input_Device * pointer);
    void efl_canvas_object_render_op_set(Efl_Gfx_Render_Op render_op);
    Efl_Gfx_Render_Op efl_canvas_object_render_op_get(void);
    void efl_canvas_object_freeze_events_set(Eina_Bool freeze);
    Eina_Bool efl_canvas_object_freeze_events_get(void);
    void efl_canvas_object_clip_set(Efl_Canvas_Object * clip);
    Efl_Canvas_Object *efl_canvas_object_clip_get(void);
    void efl_canvas_object_repeat_events_set(Eina_Bool repeat_);
    Eina_Bool efl_canvas_object_repeat_events_get(void);
    void efl_canvas_object_scale_set(double scale);
    double efl_canvas_object_scale_get(void);
    void efl_canvas_object_key_focus_set(Eina_Bool focus);
    Eina_Bool efl_canvas_object_key_focus_get(void);
    Eina_Bool efl_canvas_object_seat_focus_get(void);
    void efl_canvas_object_is_frame_object_set(Eina_Bool is_frame);
    Eina_Bool efl_canvas_object_is_frame_object_get(void);
    void efl_canvas_object_precise_is_inside_set(Eina_Bool precise);
    Eina_Bool efl_canvas_object_precise_is_inside_get(void);
    void efl_canvas_object_propagate_events_set(Eina_Bool propagate);
    Eina_Bool efl_canvas_object_propagate_events_get(void);
    void efl_canvas_object_pass_events_set(Eina_Bool pass);
    Eina_Bool efl_canvas_object_pass_events_get(void);
    void efl_canvas_object_anti_alias_set(Eina_Bool anti_alias);
    Eina_Bool efl_canvas_object_anti_alias_get(void);
    Eina_Iterator *efl_canvas_object_clipees_get(void);
    void efl_canvas_object_paragraph_direction_set(Efl_Text_Bidirectional_Type dir);
    Efl_Text_Bidirectional_Type efl_canvas_object_paragraph_direction_get(void);
    void efl_canvas_object_no_render_set(Eina_Bool enable);
    Eina_Bool efl_canvas_object_no_render_get(void);
    Eina_Bool efl_canvas_object_pointer_inside_by_device_get(Efl_Input_Device * dev);
    Eina_Bool efl_canvas_object_pointer_inside_get(void);
    Eina_Bool efl_canvas_object_seat_focus_check(Efl_Input_Device * seat);
    Eina_Bool efl_canvas_object_seat_focus_add(Efl_Input_Device * seat);
    Eina_Bool efl_canvas_object_seat_focus_del(Efl_Input_Device * seat);
    Eina_Bool efl_canvas_object_clipees_has(void);
    Eina_Bool efl_canvas_object_key_grab(const char * keyname, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers, Eina_Bool exclusive);
    void efl_canvas_object_key_ungrab(const char * keyname, Efl_Input_Modifier modifiers, Efl_Input_Modifier not_modifiers);
    Eina_Bool efl_canvas_object_pointer_coords_inside_get(int x, int y);
]]

local __M = util.get_namespace(M, { "canvas" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    pointer_mode_by_device_set = function(self, dev, pointer_mode)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_pointer_mode_by_device_set(dev, pointer_mode)
        eo.__do_end()
    end,

    pointer_mode_by_device_get = function(self, dev)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_pointer_mode_by_device_get(dev)
        eo.__do_end()
        return v
    end,

    pointer_mode_set = function(self, pointer_mode)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_pointer_mode_set(pointer_mode)
        eo.__do_end()
    end,

    pointer_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_pointer_mode_get()
        eo.__do_end()
        return v
    end,

    pointer_in_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_pointer_in_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pointer_device_in_get = function(self, pointer)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_pointer_device_in_get(pointer)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    render_op_set = function(self, render_op)
        eo.__do_start(self, __class)
        __lib.efl_canvas_object_render_op_set(render_op)
        eo.__do_end()
    end,

    render_op_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_render_op_get()
        eo.__do_end()
        return v
    end,

    freeze_events_set = function(self, freeze)
        eo.__do_start(self, __class)
        __lib.efl_canvas_object_freeze_events_set(freeze)
        eo.__do_end()
    end,

    freeze_events_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_freeze_events_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    clip_set = function(self, clip)
        eo.__do_start(self, __class)
        __lib.efl_canvas_object_clip_set(clip)
        eo.__do_end()
    end,

    clip_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_clip_get()
        eo.__do_end()
        return v
    end,

    repeat_events_set = function(self, repeat_)
        eo.__do_start(self, __class)
        __lib.efl_canvas_object_repeat_events_set(repeat_)
        eo.__do_end()
    end,

    repeat_events_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_repeat_events_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    scale_set = function(self, scale)
        eo.__do_start(self, __class)
        __lib.efl_canvas_object_scale_set(scale)
        eo.__do_end()
    end,

    scale_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_scale_get()
        eo.__do_end()
        return tonumber(v)
    end,

    key_focus_set = function(self, focus)
        eo.__do_start(self, __class)
        __lib.efl_canvas_object_key_focus_set(focus)
        eo.__do_end()
    end,

    key_focus_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_key_focus_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    seat_focus_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_seat_focus_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    is_frame_object_set = function(self, is_frame)
        eo.__do_start(self, __class)
        __lib.efl_canvas_object_is_frame_object_set(is_frame)
        eo.__do_end()
    end,

    is_frame_object_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_is_frame_object_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    precise_is_inside_set = function(self, precise)
        eo.__do_start(self, __class)
        __lib.efl_canvas_object_precise_is_inside_set(precise)
        eo.__do_end()
    end,

    precise_is_inside_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_precise_is_inside_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    propagate_events_set = function(self, propagate)
        eo.__do_start(self, __class)
        __lib.efl_canvas_object_propagate_events_set(propagate)
        eo.__do_end()
    end,

    propagate_events_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_propagate_events_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pass_events_set = function(self, pass)
        eo.__do_start(self, __class)
        __lib.efl_canvas_object_pass_events_set(pass)
        eo.__do_end()
    end,

    pass_events_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_pass_events_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    anti_alias_set = function(self, anti_alias)
        eo.__do_start(self, __class)
        __lib.efl_canvas_object_anti_alias_set(anti_alias)
        eo.__do_end()
    end,

    anti_alias_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_anti_alias_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    clipees_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_clipees_get()
        eo.__do_end()
    end,

    paragraph_direction_set = function(self, dir)
        eo.__do_start(self, __class)
        __lib.efl_canvas_object_paragraph_direction_set(dir)
        eo.__do_end()
    end,

    paragraph_direction_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_paragraph_direction_get()
        eo.__do_end()
        return v
    end,

    no_render_set = function(self, enable)
        eo.__do_start(self, __class)
        __lib.efl_canvas_object_no_render_set(enable)
        eo.__do_end()
    end,

    no_render_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_no_render_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pointer_inside_by_device_get = function(self, dev)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_pointer_inside_by_device_get(dev)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pointer_inside_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_pointer_inside_get()
        eo.__do_end()
    end,

    seat_focus_check = function(self, seat)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_seat_focus_check(seat)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    seat_focus_add = function(self, seat)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_seat_focus_add(seat)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    seat_focus_del = function(self, seat)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_seat_focus_del(seat)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    clipees_has = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_clipees_has()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    key_grab = function(self, keyname, modifiers, not_modifiers, exclusive)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_key_grab(keyname, modifiers, not_modifiers, exclusive)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    key_ungrab = function(self, keyname, modifiers, not_modifiers)
        eo.__do_start(self, __class)
        __lib.efl_canvas_object_key_ungrab(keyname, modifiers, not_modifiers)
        eo.__do_end()
    end,

    pointer_coords_inside_get = function(self, x, y)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_object_pointer_coords_inside_get(x, y)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["render_op"] = { 0, 0, 1, 1, true, true },
        ["scale"] = { 0, 0, 1, 1, true, true },
        ["propagate_events"] = { 0, 0, 1, 1, true, true },
        ["pass_events"] = { 0, 0, 1, 1, true, true },
        ["pointer_inside_by_device"] = { 1, 0, 1, 0, true, false },
        ["paragraph_direction"] = { 0, 0, 1, 1, true, true },
        ["pointer_device_in"] = { 1, 0, 1, 0, true, false },
        ["is_frame_object"] = { 0, 0, 1, 1, true, true },
        ["pointer_mode_by_device"] = { 1, 1, 1, 1, true, true },
        ["key_focus"] = { 0, 0, 1, 1, true, true },
        ["precise_is_inside"] = { 0, 0, 1, 1, true, true },
        ["clip"] = { 0, 0, 1, 1, true, true },
        ["pointer_mode"] = { 0, 0, 1, 1, true, true },
        ["freeze_events"] = { 0, 0, 1, 1, true, true },
        ["seat_focus"] = { 0, 0, 1, 0, true, false },
        ["pointer_inside"] = { 0, 0, 1, 0, true, false },
        ["pointer_in"] = { 0, 0, 1, 0, true, false },
        ["no_render"] = { 0, 0, 1, 1, true, true },
        ["clipees"] = { 0, 0, 1, 0, true, false },
        ["anti_alias"] = { 0, 0, 1, 1, true, true },
        ["repeat_events"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Object = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Canvas_Object").__eo_ctor,
                            1, ...)
end

return M
