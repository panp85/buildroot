-- EFL LuaJIT bindings: evas_canvas.eo (class Evas.Canvas)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_canvas_class_get()
    eo.class_register("Evas_Canvas", {"Efl_Object", "Efl_Loop_User"}, {"Efl_Canvas", "Efl_Animator", "Efl_Input_Interface"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_canvas_class_get(void);
    void evas_canvas_image_cache_set(int size);
    int evas_canvas_image_cache_get(void);
    void evas_canvas_event_default_flags_set(Efl_Input_Flags flags);
    Efl_Input_Flags evas_canvas_event_default_flags_get(void);
    void evas_canvas_font_cache_set(int size);
    int evas_canvas_font_cache_get(void);
    void evas_canvas_data_attach_set(void * data);
    void *evas_canvas_data_attach_get(void);
    Efl_Canvas_Object *evas_canvas_focus_get(void);
    Efl_Canvas_Object *evas_canvas_seat_focus_get(Efl_Input_Device * seat);
    Efl_Canvas_Object *evas_canvas_object_top_get(void);
    void evas_canvas_pointer_canvas_xy_by_device_get(Efl_Input_Device * dev, int *x, int *y);
    void evas_canvas_pointer_canvas_xy_get(int *x, int *y);
    int evas_canvas_event_down_count_get(void);
    int evas_canvas_smart_objects_calculate_count_get(void);
    Eina_Bool evas_canvas_focus_state_get(void);
    Eina_Bool evas_canvas_seat_focus_state_get(Efl_Input_Device * seat);
    Eina_Bool evas_canvas_changed_get(void);
    void evas_canvas_pointer_output_xy_by_device_get(Efl_Input_Device * dev, int *x, int *y);
    void evas_canvas_pointer_output_xy_get(int *x, int *y);
    Eina_Bool evas_canvas_pointer_inside_by_device_get(Efl_Input_Device * dev);
    Eina_Bool evas_canvas_pointer_inside_get(void);
    Eina_Bool evas_canvas_image_max_size_get(int *maxw, int *maxh);
    Efl_Canvas_Object *evas_canvas_object_bottom_get(void);
    unsigned int evas_canvas_pointer_button_down_mask_by_device_get(Efl_Input_Device * dev);
    unsigned int evas_canvas_pointer_button_down_mask_get(void);
    Eina_Bool evas_canvas_smart_objects_calculating_get(void);
    Efl_Input_Device *evas_canvas_default_device_get(Efl_Input_Device_Type type);
    Eina_List *evas_canvas_tree_objects_at_xy_get(Efl_Canvas_Object * stop, int x, int y);
    void evas_canvas_key_lock_on(const char * keyname);
    void evas_canvas_seat_key_lock_on(const char * keyname, Efl_Input_Device * seat);
    void evas_canvas_seat_key_lock_off(const char * keyname, Efl_Input_Device * seat);
    void evas_canvas_key_modifier_add(const char * keyname);
    void evas_canvas_key_modifier_off(const char * keyname);
    Eina_List *evas_canvas_objects_at_xy_get(int x, int y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
    Eina_Bool evas_canvas_render_async(void);
    Eina_Bool evas_canvas_render2(void);
    Eina_List *evas_canvas_render2_updates(void);
    void evas_canvas_focus_out(void);
    void evas_canvas_norender(void);
    void evas_canvas_nochange_pop(void);
    void evas_canvas_key_lock_off(const char * keyname);
    void evas_canvas_nochange_push(void);
    void evas_canvas_font_cache_flush(void);
    Efl_Canvas_Object *evas_canvas_object_top_at_xy_get(int x, int y, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
    void evas_canvas_key_modifier_on(const char * keyname);
    void evas_canvas_seat_key_modifier_on(const char * keyname, Efl_Input_Device * seat);
    void evas_canvas_seat_key_modifier_off(const char * keyname, Efl_Input_Device * seat);
    Eina_List *evas_canvas_font_available_list(void);
    Eina_List *evas_canvas_objects_in_rectangle_get(int x, int y, int w, int h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
    Efl_Canvas_Object *evas_canvas_object_name_find(const char * name);
    void evas_canvas_font_path_append(const char * path);
    void evas_canvas_font_path_clear(void);
    void evas_canvas_smart_objects_calculate(void);
    void evas_canvas_touch_point_list_nth_xy_get(unsigned int n, double *x, double *y);
    void evas_canvas_key_lock_del(const char * keyname);
    void evas_canvas_damage_rectangle_add(int x, int y, int w, int h);
    void evas_canvas_sync(void);
    const Eina_List *evas_canvas_font_path_list(void);
    void evas_canvas_image_cache_reload(void);
    int evas_canvas_coord_world_x_to_screen(int x);
    Eina_List *evas_canvas_render_updates(void);
    void evas_canvas_image_cache_flush(void);
    int evas_canvas_coord_screen_y_to_world(int y);
    void evas_canvas_key_modifier_del(const char * keyname);
    void evas_canvas_focus_in(void);
    void evas_canvas_seat_focus_in(Efl_Input_Device * seat);
    void evas_canvas_seat_focus_out(Efl_Input_Device * seat);
    void evas_canvas_obscured_rectangle_add(int x, int y, int w, int h);
    void evas_canvas_render_dump(void);
    Efl_Canvas_Object *evas_canvas_object_top_in_rectangle_get(int x, int y, int w, int h, Eina_Bool include_pass_events_objects, Eina_Bool include_hidden_objects);
    void evas_canvas_render(void);
    void evas_canvas_font_path_prepend(const char * path);
    void evas_canvas_obscured_clear(void);
    int evas_canvas_coord_screen_x_to_world(int x);
    void evas_canvas_key_lock_add(const char * keyname);
    void evas_canvas_render_idle_flush(void);
    int evas_canvas_coord_world_y_to_screen(int y);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    image_cache_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.evas_canvas_image_cache_set(size)
        eo.__do_end()
    end,

    image_cache_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_image_cache_get()
        eo.__do_end()
        return tonumber(v)
    end,

    event_default_flags_set = function(self, flags)
        eo.__do_start(self, __class)
        __lib.evas_canvas_event_default_flags_set(flags)
        eo.__do_end()
    end,

    event_default_flags_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_event_default_flags_get()
        eo.__do_end()
        return v
    end,

    font_cache_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.evas_canvas_font_cache_set(size)
        eo.__do_end()
    end,

    font_cache_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_font_cache_get()
        eo.__do_end()
        return tonumber(v)
    end,

    data_attach_set = function(self, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas_data_attach_set(data)
        eo.__do_end()
    end,

    data_attach_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_data_attach_get()
        eo.__do_end()
        return v
    end,

    focus_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_focus_get()
        eo.__do_end()
    end,

    seat_focus_get = function(self, seat)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_seat_focus_get(seat)
        eo.__do_end()
        return v
    end,

    object_top_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_object_top_get()
        eo.__do_end()
    end,

    pointer_canvas_xy_by_device_get = function(self, dev)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.evas_canvas_pointer_canvas_xy_by_device_get(dev, x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    pointer_canvas_xy_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.evas_canvas_pointer_canvas_xy_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    event_down_count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_event_down_count_get()
        eo.__do_end()
    end,

    smart_objects_calculate_count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_smart_objects_calculate_count_get()
        eo.__do_end()
    end,

    focus_state_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_focus_state_get()
        eo.__do_end()
    end,

    seat_focus_state_get = function(self, seat)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_seat_focus_state_get(seat)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    changed_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_changed_get()
        eo.__do_end()
    end,

    pointer_output_xy_by_device_get = function(self, dev)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.evas_canvas_pointer_output_xy_by_device_get(dev, x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    pointer_output_xy_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.evas_canvas_pointer_output_xy_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    pointer_inside_by_device_get = function(self, dev)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_pointer_inside_by_device_get(dev)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pointer_inside_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_pointer_inside_get()
        eo.__do_end()
    end,

    image_max_size_get = function(self)
        eo.__do_start(self, __class)
        local maxw = ffi.new("int[1]")
        local maxh = ffi.new("int[1]")
        local v = __lib.evas_canvas_image_max_size_get(maxw, maxh)
        eo.__do_end()
        return tonumber(maxw[0]), tonumber(maxh[0])
    end,

    object_bottom_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_object_bottom_get()
        eo.__do_end()
    end,

    pointer_button_down_mask_by_device_get = function(self, dev)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_pointer_button_down_mask_by_device_get(dev)
        eo.__do_end()
        return v
    end,

    pointer_button_down_mask_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_pointer_button_down_mask_get()
        eo.__do_end()
    end,

    smart_objects_calculating_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_smart_objects_calculating_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    default_device_get = function(self, type)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_default_device_get(type)
        eo.__do_end()
        return v
    end,

    tree_objects_at_xy_get = function(self, stop, x, y)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_tree_objects_at_xy_get(stop, x, y)
        eo.__do_end()
        return v
    end,

    key_lock_on = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_lock_on(keyname)
        eo.__do_end()
    end,

    seat_key_lock_on = function(self, keyname, seat)
        eo.__do_start(self, __class)
        __lib.evas_canvas_seat_key_lock_on(keyname, seat)
        eo.__do_end()
    end,

    seat_key_lock_off = function(self, keyname, seat)
        eo.__do_start(self, __class)
        __lib.evas_canvas_seat_key_lock_off(keyname, seat)
        eo.__do_end()
    end,

    key_modifier_add = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_modifier_add(keyname)
        eo.__do_end()
    end,

    key_modifier_off = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_modifier_off(keyname)
        eo.__do_end()
    end,

    objects_at_xy_get = function(self, x, y, include_pass_events_objects, include_hidden_objects)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_objects_at_xy_get(x, y, include_pass_events_objects, include_hidden_objects)
        eo.__do_end()
        return v
    end,

    render_async = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_render_async()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    render2 = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_render2()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    render2_updates = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_render2_updates()
        eo.__do_end()
        return v
    end,

    focus_out = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_focus_out()
        eo.__do_end()
    end,

    norender = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_norender()
        eo.__do_end()
    end,

    nochange_pop = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_nochange_pop()
        eo.__do_end()
    end,

    key_lock_off = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_lock_off(keyname)
        eo.__do_end()
    end,

    nochange_push = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_nochange_push()
        eo.__do_end()
    end,

    font_cache_flush = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_font_cache_flush()
        eo.__do_end()
    end,

    object_top_at_xy_get = function(self, x, y, include_pass_events_objects, include_hidden_objects)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_object_top_at_xy_get(x, y, include_pass_events_objects, include_hidden_objects)
        eo.__do_end()
        return v
    end,

    key_modifier_on = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_modifier_on(keyname)
        eo.__do_end()
    end,

    seat_key_modifier_on = function(self, keyname, seat)
        eo.__do_start(self, __class)
        __lib.evas_canvas_seat_key_modifier_on(keyname, seat)
        eo.__do_end()
    end,

    seat_key_modifier_off = function(self, keyname, seat)
        eo.__do_start(self, __class)
        __lib.evas_canvas_seat_key_modifier_off(keyname, seat)
        eo.__do_end()
    end,

    font_available_list = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_font_available_list()
        eo.__do_end()
        return v
    end,

    objects_in_rectangle_get = function(self, x, y, w, h, include_pass_events_objects, include_hidden_objects)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_objects_in_rectangle_get(x, y, w, h, include_pass_events_objects, include_hidden_objects)
        eo.__do_end()
        return v
    end,

    object_name_find = function(self, name)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_object_name_find(name)
        eo.__do_end()
        return v
    end,

    font_path_append = function(self, path)
        eo.__do_start(self, __class)
        __lib.evas_canvas_font_path_append(path)
        eo.__do_end()
    end,

    font_path_clear = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_font_path_clear()
        eo.__do_end()
    end,

    smart_objects_calculate = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_smart_objects_calculate()
        eo.__do_end()
    end,

    touch_point_list_nth_xy_get = function(self, n)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.evas_canvas_touch_point_list_nth_xy_get(n, x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    key_lock_del = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_lock_del(keyname)
        eo.__do_end()
    end,

    damage_rectangle_add = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.evas_canvas_damage_rectangle_add(x, y, w, h)
        eo.__do_end()
    end,

    sync = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_sync()
        eo.__do_end()
    end,

    font_path_list = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_font_path_list()
        eo.__do_end()
        return v
    end,

    image_cache_reload = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_image_cache_reload()
        eo.__do_end()
    end,

    coord_world_x_to_screen = function(self, x)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_coord_world_x_to_screen(x)
        eo.__do_end()
        return tonumber(v)
    end,

    render_updates = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_render_updates()
        eo.__do_end()
        return v
    end,

    image_cache_flush = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_image_cache_flush()
        eo.__do_end()
    end,

    coord_screen_y_to_world = function(self, y)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_coord_screen_y_to_world(y)
        eo.__do_end()
        return tonumber(v)
    end,

    key_modifier_del = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_modifier_del(keyname)
        eo.__do_end()
    end,

    focus_in = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_focus_in()
        eo.__do_end()
    end,

    seat_focus_in = function(self, seat)
        eo.__do_start(self, __class)
        __lib.evas_canvas_seat_focus_in(seat)
        eo.__do_end()
    end,

    seat_focus_out = function(self, seat)
        eo.__do_start(self, __class)
        __lib.evas_canvas_seat_focus_out(seat)
        eo.__do_end()
    end,

    obscured_rectangle_add = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.evas_canvas_obscured_rectangle_add(x, y, w, h)
        eo.__do_end()
    end,

    render_dump = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_render_dump()
        eo.__do_end()
    end,

    object_top_in_rectangle_get = function(self, x, y, w, h, include_pass_events_objects, include_hidden_objects)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_object_top_in_rectangle_get(x, y, w, h, include_pass_events_objects, include_hidden_objects)
        eo.__do_end()
        return v
    end,

    render = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_render()
        eo.__do_end()
    end,

    font_path_prepend = function(self, path)
        eo.__do_start(self, __class)
        __lib.evas_canvas_font_path_prepend(path)
        eo.__do_end()
    end,

    obscured_clear = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_obscured_clear()
        eo.__do_end()
    end,

    coord_screen_x_to_world = function(self, x)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_coord_screen_x_to_world(x)
        eo.__do_end()
        return tonumber(v)
    end,

    key_lock_add = function(self, keyname)
        eo.__do_start(self, __class)
        __lib.evas_canvas_key_lock_add(keyname)
        eo.__do_end()
    end,

    render_idle_flush = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas_render_idle_flush()
        eo.__do_end()
    end,

    coord_world_y_to_screen = function(self, y)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas_coord_world_y_to_screen(y)
        eo.__do_end()
        return tonumber(v)
    end,

    __properties = {
        ["event_default_flags"] = { 0, 0, 1, 1, true, true },
        ["focus"] = { 0, 0, 1, 0, true, false },
        ["event_down_count"] = { 0, 0, 1, 0, true, false },
        ["pointer_button_down_mask_by_device"] = { 1, 0, 1, 0, true, false },
        ["pointer_inside_by_device"] = { 1, 0, 1, 0, true, false },
        ["pointer_inside"] = { 0, 0, 1, 0, true, false },
        ["pointer_canvas_xy"] = { 0, 0, 2, 0, true, false },
        ["focus_state"] = { 0, 0, 1, 0, true, false },
        ["seat_focus_state"] = { 1, 0, 1, 0, true, false },
        ["default_device"] = { 1, 0, 1, 0, true, false },
        ["smart_objects_calculating"] = { 0, 0, 1, 0, true, false },
        ["font_cache"] = { 0, 0, 1, 1, true, true },
        ["pointer_output_xy"] = { 0, 0, 2, 0, true, false },
        ["pointer_button_down_mask"] = { 0, 0, 1, 0, true, false },
        ["object_bottom"] = { 0, 0, 1, 0, true, false },
        ["image_cache"] = { 0, 0, 1, 1, true, true },
        ["changed"] = { 0, 0, 1, 0, true, false },
        ["object_top"] = { 0, 0, 1, 0, true, false },
        ["image_max_size"] = { 0, 0, 2, 0, true, false },
        ["pointer_canvas_xy_by_device"] = { 1, 0, 2, 0, true, false },
        ["pointer_output_xy_by_device"] = { 1, 0, 2, 0, true, false },
        ["smart_objects_calculate_count"] = { 0, 0, 1, 0, true, false },
        ["seat_focus"] = { 1, 0, 1, 0, true, false },
        ["data_attach"] = { 0, 0, 1, 1, true, true }
    }
}

M.Canvas = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Canvas").__eo_ctor,
                            1, ...)
end

return M
