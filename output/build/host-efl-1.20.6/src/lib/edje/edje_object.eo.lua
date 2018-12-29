-- EFL LuaJIT bindings: edje_object.eo (class Edje.Object)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.edje_object_class_get()
    eo.class_register("Edje_Object", {"Efl_Canvas_Group_Clipped"}, {"Efl_File", "Efl_Container", "Efl_Part", "Efl_Observer", "Efl_Ui_Base"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *edje_object_class_get(void);
    void edje_obj_animation_set(Eina_Bool on);
    Eina_Bool edje_obj_animation_get(void);
    void edje_obj_play_set(Eina_Bool play);
    Eina_Bool edje_obj_play_get(void);
    void edje_obj_perspective_set(Edje_Perspective * ps);
    const Edje_Perspective *edje_obj_perspective_get(void);
    void edje_obj_transition_duration_factor_set(double scale);
    double edje_obj_transition_duration_factor_get(void);
    Efl_Image_Load_Error edje_obj_load_error_get(void);
    void edje_obj_calc_update_hints_set(Eina_Bool update);
    Eina_Bool edje_obj_calc_update_hints_get(void);
    void edje_obj_group_size_min_get(int *minw, int *minh);
    void edje_obj_group_size_max_get(int *maxw, int *maxh);
    const char *edje_obj_group_data_get(const char * key);
    Eina_Bool edje_obj_global_color_class_set(const char * color_class, Edje_Color_Class_Mode mode, int r, int g, int b, int a);
    Eina_Bool edje_obj_global_color_class_get(const char * color_class, Edje_Color_Class_Mode mode, int *r, int *g, int *b, int *a);
    Eina_Bool edje_obj_color_class_set(const char * color_class, Edje_Color_Class_Mode mode, int r, int g, int b, int a);
    Eina_Bool edje_obj_color_class_get(const char * color_class, Edje_Color_Class_Mode mode, int *r, int *g, int *b, int *a);
    const char *edje_obj_color_class_description_get(const char * color_class);
    Eina_Bool edje_obj_text_class_set(const char * text_class, const char * font, int size);
    Eina_Bool edje_obj_text_class_get(const char * text_class, const char * *font, int *size);
    Eina_Bool edje_obj_size_class_set(const char * size_class, int minw, int minh, int maxw, int maxh);
    Eina_Bool edje_obj_size_class_get(const char * size_class, int *minw, int *minh, int *maxw, int *maxh);
    void edje_obj_text_change_cb_set(Edje_Text_Change_Cb func, void * data);
    void edje_obj_part_text_autocapital_type_set(const char * part, Edje_Text_Autocapital_Type autocapital_type);
    Edje_Text_Autocapital_Type edje_obj_part_text_autocapital_type_get(const char * part);
    void edje_obj_part_text_prediction_allow_set(const char * part, Eina_Bool prediction);
    Eina_Bool edje_obj_part_text_prediction_allow_get(const char * part);
    void edje_obj_item_provider_set(Edje_Item_Provider_Cb func, void * data);
    void edje_obj_part_text_select_allow_set(const char * part, Eina_Bool allow);
    const char *edje_obj_part_text_selection_get(const char * part);
    void *edje_obj_part_text_imf_context_get(const char * part);
    void edje_obj_part_text_input_hint_set(const char * part, Edje_Input_Hints input_hints);
    Edje_Input_Hints edje_obj_part_text_input_hint_get(const char * part);
    void edje_obj_part_text_input_panel_imdata_set(const char * part, const void * data, int len);
    void edje_obj_part_text_input_panel_imdata_get(const char * part, void * data, int *len);
    void edje_obj_part_text_input_panel_layout_set(const char * part, Edje_Input_Panel_Layout layout);
    Edje_Input_Panel_Layout edje_obj_part_text_input_panel_layout_get(const char * part);
    void edje_obj_part_text_input_panel_language_set(const char * part, Edje_Input_Panel_Lang lang);
    Edje_Input_Panel_Lang edje_obj_part_text_input_panel_language_get(const char * part);
    void edje_obj_part_text_input_panel_layout_variation_set(const char * part, int variation);
    int edje_obj_part_text_input_panel_layout_variation_get(const char * part);
    void edje_obj_part_text_input_panel_enabled_set(const char * part, Eina_Bool enabled);
    Eina_Bool edje_obj_part_text_input_panel_enabled_get(const char * part);
    void edje_obj_part_text_input_panel_return_key_disabled_set(const char * part, Eina_Bool disabled);
    Eina_Bool edje_obj_part_text_input_panel_return_key_disabled_get(const char * part);
    void edje_obj_part_text_input_panel_return_key_type_set(const char * part, Edje_Input_Panel_Return_Key_Type return_key_type);
    Edje_Input_Panel_Return_Key_Type edje_obj_part_text_input_panel_return_key_type_get(const char * part);
    void edje_obj_part_text_input_panel_show_on_demand_set(const char * part, Eina_Bool ondemand);
    Eina_Bool edje_obj_part_text_input_panel_show_on_demand_get(const char * part);
    void edje_obj_part_text_prediction_hint_set(const char * part, const char * prediction_hint);
    Efl_Input_Device *edje_obj_seat_get(Eina_Stringshare * name);
    Eina_Stringshare *edje_obj_seat_name_get(Efl_Input_Device * device);
    Eina_Bool edje_obj_preload(Eina_Bool cancel);
    void edje_obj_size_min_calc(int *minw, int *minh);
    void edje_obj_size_min_restricted_calc(int *minw, int *minh, int restrictedw, int restrictedh);
    Eina_Bool edje_obj_parts_extends_calc(int *x, int *y, int *w, int *h);
    void edje_obj_calc_force(void);
    int edje_obj_calc_freeze(void);
    int edje_obj_calc_thaw(void);
    void edje_obj_message_send(int id, const Eina_Value msg);
    void edje_obj_signal_callback_add(const char * emission, const char * source, Edje_Signal_Cb func, void * data);
    void *edje_obj_signal_callback_del(const char * emission, const char * source, Edje_Signal_Cb func, void * data);
    void edje_obj_signal_emit(const char * emission, const char * source);
    void edje_obj_message_signal_process(Eina_Bool recurse);
    Eina_Bool edje_obj_color_class_clear(void);
    void edje_obj_color_class_del(const char * color_class);
    void edje_obj_text_class_del(const char * text_class);
    void edje_obj_size_class_del(const char * size_class);
    Eina_Iterator *edje_obj_access_part_iterate(void);
    Eina_Bool edje_obj_part_exists(const char * part);
    void edje_obj_part_text_select_begin(const char * part);
    void edje_obj_part_text_select_abort(const char * part);
    void edje_obj_part_text_select_extend(const char * part);
    void edje_obj_part_text_select_all(const char * part);
    void edje_obj_part_text_select_none(const char * part);
    void edje_obj_part_text_imf_context_reset(const char * part);
    void edje_obj_part_text_input_panel_show(const char * part);
    void edje_obj_part_text_input_panel_hide(const char * part);
    extern const Eo_Event_Description _EDJE_OBJECT_EVENT_RECALC;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    animation_set = function(self, on)
        eo.__do_start(self, __class)
        __lib.edje_obj_animation_set(on)
        eo.__do_end()
    end,

    animation_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_animation_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    play_set = function(self, play)
        eo.__do_start(self, __class)
        __lib.edje_obj_play_set(play)
        eo.__do_end()
    end,

    play_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_play_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    perspective_set = function(self, ps)
        eo.__do_start(self, __class)
        __lib.edje_obj_perspective_set(ps)
        eo.__do_end()
    end,

    perspective_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_perspective_get()
        eo.__do_end()
        return v
    end,

    transition_duration_factor_set = function(self, scale)
        eo.__do_start(self, __class)
        __lib.edje_obj_transition_duration_factor_set(scale)
        eo.__do_end()
    end,

    transition_duration_factor_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_transition_duration_factor_get()
        eo.__do_end()
        return tonumber(v)
    end,

    load_error_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_load_error_get()
        eo.__do_end()
        return v
    end,

    calc_update_hints_set = function(self, update)
        eo.__do_start(self, __class)
        __lib.edje_obj_calc_update_hints_set(update)
        eo.__do_end()
    end,

    calc_update_hints_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_calc_update_hints_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    group_size_min_get = function(self)
        eo.__do_start(self, __class)
        local minw = ffi.new("int[1]")
        local minh = ffi.new("int[1]")
        __lib.edje_obj_group_size_min_get(minw, minh)
        eo.__do_end()
        return tonumber(minw[0]), tonumber(minh[0])
    end,

    group_size_max_get = function(self)
        eo.__do_start(self, __class)
        local maxw = ffi.new("int[1]")
        local maxh = ffi.new("int[1]")
        __lib.edje_obj_group_size_max_get(maxw, maxh)
        eo.__do_end()
        return tonumber(maxw[0]), tonumber(maxh[0])
    end,

    group_data_get = function(self, key)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_group_data_get(key)
        eo.__do_end()
        return v
    end,

    global_color_class_set = function(self, color_class, mode, r, g, b, a)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_global_color_class_set(color_class, mode, r, g, b, a)
        eo.__do_end()
    end,

    global_color_class_get = function(self, color_class, mode)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        local v = __lib.edje_obj_global_color_class_get(color_class, mode, r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    color_class_set = function(self, color_class, mode, r, g, b, a)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_color_class_set(color_class, mode, r, g, b, a)
        eo.__do_end()
    end,

    color_class_get = function(self, color_class, mode)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        local v = __lib.edje_obj_color_class_get(color_class, mode, r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    color_class_description_get = function(self, color_class)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_color_class_description_get(color_class)
        eo.__do_end()
    end,

    text_class_set = function(self, text_class, font, size)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_text_class_set(text_class, font, size)
        eo.__do_end()
    end,

    text_class_get = function(self, text_class)
        eo.__do_start(self, __class)
        local font = ffi.new("const char *[1]")
        local size = ffi.new("int[1]")
        local v = __lib.edje_obj_text_class_get(text_class, font, size)
        eo.__do_end()
        return font[0], tonumber(size[0])
    end,

    size_class_set = function(self, size_class, minw, minh, maxw, maxh)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_size_class_set(size_class, minw, minh, maxw, maxh)
        eo.__do_end()
    end,

    size_class_get = function(self, size_class)
        eo.__do_start(self, __class)
        local minw = ffi.new("int[1]")
        local minh = ffi.new("int[1]")
        local maxw = ffi.new("int[1]")
        local maxh = ffi.new("int[1]")
        local v = __lib.edje_obj_size_class_get(size_class, minw, minh, maxw, maxh)
        eo.__do_end()
        return tonumber(minw[0]), tonumber(minh[0]), tonumber(maxw[0]), tonumber(maxh[0])
    end,

    text_change_cb_set = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.edje_obj_text_change_cb_set(func, data)
        eo.__do_end()
    end,

    part_text_autocapital_type_set = function(self, part, autocapital_type)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_autocapital_type_set(part, autocapital_type)
        eo.__do_end()
    end,

    part_text_autocapital_type_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_autocapital_type_get(part)
        eo.__do_end()
        return v
    end,

    part_text_prediction_allow_set = function(self, part, prediction)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_prediction_allow_set(part, prediction)
        eo.__do_end()
    end,

    part_text_prediction_allow_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_prediction_allow_get(part)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    item_provider_set = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.edje_obj_item_provider_set(func, data)
        eo.__do_end()
    end,

    part_text_select_allow_set = function(self, part, allow)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_select_allow_set(part, allow)
        eo.__do_end()
    end,

    part_text_selection_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_selection_get(part)
        eo.__do_end()
    end,

    part_text_imf_context_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_imf_context_get(part)
        eo.__do_end()
    end,

    part_text_input_hint_set = function(self, part, input_hints)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_hint_set(part, input_hints)
        eo.__do_end()
    end,

    part_text_input_hint_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_hint_get(part)
        eo.__do_end()
        return v
    end,

    part_text_input_panel_imdata_set = function(self, part, data, len)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_imdata_set(part, data, len)
        eo.__do_end()
    end,

    part_text_input_panel_imdata_get = function(self, part, data)
        eo.__do_start(self, __class)
        local len = ffi.new("int[1]")
        __lib.edje_obj_part_text_input_panel_imdata_get(part, data, len)
        eo.__do_end()
        return tonumber(len[0])
    end,

    part_text_input_panel_layout_set = function(self, part, layout)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_layout_set(part, layout)
        eo.__do_end()
    end,

    part_text_input_panel_layout_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_panel_layout_get(part)
        eo.__do_end()
        return v
    end,

    part_text_input_panel_language_set = function(self, part, lang)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_language_set(part, lang)
        eo.__do_end()
    end,

    part_text_input_panel_language_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_panel_language_get(part)
        eo.__do_end()
        return v
    end,

    part_text_input_panel_layout_variation_set = function(self, part, variation)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_layout_variation_set(part, variation)
        eo.__do_end()
    end,

    part_text_input_panel_layout_variation_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_panel_layout_variation_get(part)
        eo.__do_end()
        return tonumber(v)
    end,

    part_text_input_panel_enabled_set = function(self, part, enabled)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_enabled_set(part, enabled)
        eo.__do_end()
    end,

    part_text_input_panel_enabled_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_panel_enabled_get(part)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_input_panel_return_key_disabled_set = function(self, part, disabled)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_return_key_disabled_set(part, disabled)
        eo.__do_end()
    end,

    part_text_input_panel_return_key_disabled_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_panel_return_key_disabled_get(part)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_input_panel_return_key_type_set = function(self, part, return_key_type)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_return_key_type_set(part, return_key_type)
        eo.__do_end()
    end,

    part_text_input_panel_return_key_type_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_panel_return_key_type_get(part)
        eo.__do_end()
        return v
    end,

    part_text_input_panel_show_on_demand_set = function(self, part, ondemand)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_show_on_demand_set(part, ondemand)
        eo.__do_end()
    end,

    part_text_input_panel_show_on_demand_get = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_text_input_panel_show_on_demand_get(part)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_prediction_hint_set = function(self, part, prediction_hint)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_prediction_hint_set(part, prediction_hint)
        eo.__do_end()
    end,

    seat_get = function(self, name)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_seat_get(name)
        eo.__do_end()
    end,

    seat_name_get = function(self, device)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_seat_name_get(device)
        eo.__do_end()
    end,

    preload = function(self, cancel)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_preload(cancel)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    size_min_calc = function(self)
        eo.__do_start(self, __class)
        local minw = ffi.new("int[1]")
        local minh = ffi.new("int[1]")
        __lib.edje_obj_size_min_calc(minw, minh)
        eo.__do_end()
        return tonumber(minw[0]), tonumber(minh[0])
    end,

    size_min_restricted_calc = function(self, restrictedw, restrictedh)
        eo.__do_start(self, __class)
        local minw = ffi.new("int[1]")
        local minh = ffi.new("int[1]")
        __lib.edje_obj_size_min_restricted_calc(minw, minh, restrictedw, restrictedh)
        eo.__do_end()
        return tonumber(minw[0]), tonumber(minh[0])
    end,

    parts_extends_calc = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        local v = __lib.edje_obj_parts_extends_calc(x, y, w, h)
        eo.__do_end()
        return ((v) ~= 0), tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    calc_force = function(self)
        eo.__do_start(self, __class)
        __lib.edje_obj_calc_force()
        eo.__do_end()
    end,

    calc_freeze = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_calc_freeze()
        eo.__do_end()
        return tonumber(v)
    end,

    calc_thaw = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_calc_thaw()
        eo.__do_end()
        return tonumber(v)
    end,

    message_send = function(self, id, msg)
        eo.__do_start(self, __class)
        __lib.edje_obj_message_send(id, msg)
        eo.__do_end()
    end,

    signal_callback_add = function(self, emission, source, func, data)
        eo.__do_start(self, __class)
        __lib.edje_obj_signal_callback_add(emission, source, func, data)
        eo.__do_end()
    end,

    signal_callback_del = function(self, emission, source, func, data)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_signal_callback_del(emission, source, func, data)
        eo.__do_end()
        return v
    end,

    signal_emit = function(self, emission, source)
        eo.__do_start(self, __class)
        __lib.edje_obj_signal_emit(emission, source)
        eo.__do_end()
    end,

    message_signal_process = function(self, recurse)
        eo.__do_start(self, __class)
        __lib.edje_obj_message_signal_process(recurse)
        eo.__do_end()
    end,

    color_class_clear = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_color_class_clear()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    color_class_del = function(self, color_class)
        eo.__do_start(self, __class)
        __lib.edje_obj_color_class_del(color_class)
        eo.__do_end()
    end,

    text_class_del = function(self, text_class)
        eo.__do_start(self, __class)
        __lib.edje_obj_text_class_del(text_class)
        eo.__do_end()
    end,

    size_class_del = function(self, size_class)
        eo.__do_start(self, __class)
        __lib.edje_obj_size_class_del(size_class)
        eo.__do_end()
    end,

    access_part_iterate = function(self)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_access_part_iterate()
        eo.__do_end()
        return v
    end,

    part_exists = function(self, part)
        eo.__do_start(self, __class)
        local v = __lib.edje_obj_part_exists(part)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    part_text_select_begin = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_select_begin(part)
        eo.__do_end()
    end,

    part_text_select_abort = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_select_abort(part)
        eo.__do_end()
    end,

    part_text_select_extend = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_select_extend(part)
        eo.__do_end()
    end,

    part_text_select_all = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_select_all(part)
        eo.__do_end()
    end,

    part_text_select_none = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_select_none(part)
        eo.__do_end()
    end,

    part_text_imf_context_reset = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_imf_context_reset(part)
        eo.__do_end()
    end,

    part_text_input_panel_show = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_show(part)
        eo.__do_end()
    end,

    part_text_input_panel_hide = function(self, part)
        eo.__do_start(self, __class)
        __lib.edje_obj_part_text_input_panel_hide(part)
        eo.__do_end()
    end,

    __events = {
        ["recalc"] = __lib._EDJE_OBJECT_EVENT_RECALC
    },

    __properties = {
        ["part_text_imf_context"] = { 1, 0, 1, 0, true, false },
        ["part_text_autocapital_type"] = { 1, 1, 1, 1, true, true },
        ["part_text_input_panel_layout_variation"] = { 1, 1, 1, 1, true, true },
        ["animation"] = { 0, 0, 1, 1, true, true },
        ["part_text_prediction_allow"] = { 1, 1, 1, 1, true, true },
        ["text_change_cb"] = { 0, 0, 0, 2, false, true },
        ["group_data"] = { 1, 0, 1, 0, true, false },
        ["part_text_prediction_hint"] = { 0, 1, 0, 1, false, true },
        ["part_text_selection"] = { 1, 0, 1, 0, true, false },
        ["global_color_class"] = { 2, 2, 4, 4, true, true },
        ["size_class"] = { 1, 1, 4, 4, true, true },
        ["part_text_input_panel_return_key_type"] = { 1, 1, 1, 1, true, true },
        ["group_size_min"] = { 0, 0, 2, 0, true, false },
        ["part_text_input_panel_imdata"] = { 2, 2, 1, 1, true, true },
        ["perspective"] = { 0, 0, 1, 1, true, true },
        ["text_class"] = { 1, 1, 2, 2, true, true },
        ["part_text_input_panel_show_on_demand"] = { 1, 1, 1, 1, true, true },
        ["calc_update_hints"] = { 0, 0, 1, 1, true, true },
        ["play"] = { 0, 0, 1, 1, true, true },
        ["part_text_input_panel_return_key_disabled"] = { 1, 1, 1, 1, true, true },
        ["seat"] = { 1, 0, 1, 0, true, false },
        ["part_text_input_panel_language"] = { 1, 1, 1, 1, true, true },
        ["color_class"] = { 2, 2, 4, 4, true, true },
        ["item_provider"] = { 0, 0, 0, 2, false, true },
        ["seat_name"] = { 1, 0, 1, 0, true, false },
        ["transition_duration_factor"] = { 0, 0, 1, 1, true, true },
        ["part_text_input_panel_layout"] = { 1, 1, 1, 1, true, true },
        ["part_text_input_hint"] = { 1, 1, 1, 1, true, true },
        ["group_size_max"] = { 0, 0, 2, 0, true, false },
        ["part_text_select_allow"] = { 0, 1, 0, 1, false, true },
        ["load_error"] = { 0, 0, 1, 0, true, false },
        ["color_class_description"] = { 1, 0, 1, 0, true, false },
        ["part_text_input_panel_enabled"] = { 1, 1, 1, 1, true, true }
    }
}

M.Object = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Edje_Object").__eo_ctor,
                            1, ...)
end

return M
