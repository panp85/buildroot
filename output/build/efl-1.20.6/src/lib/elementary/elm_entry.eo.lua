-- EFL LuaJIT bindings: elm_entry.eo (class Elm.Entry)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_entry_class_get()
    eo.class_register("Elm_Entry", {"Elm_Layout"}, {"Elm_Interface_Scrollable", "Efl_Ui_Clickable", "Elm_Interface_Atspi_Text", "Elm_Interface_Atspi_Text_Editable", "Efl_File", "Efl_Ui_Selectable", "Efl_Ui_Scrollable"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_entry_class_get(void);
    void elm_obj_entry_scrollable_set(Eina_Bool scroll);
    Eina_Bool elm_obj_entry_scrollable_get(void);
    void elm_obj_entry_input_panel_show_on_demand_set(Eina_Bool ondemand);
    Eina_Bool elm_obj_entry_input_panel_show_on_demand_get(void);
    void elm_obj_entry_context_menu_disabled_set(Eina_Bool disabled);
    Eina_Bool elm_obj_entry_context_menu_disabled_get(void);
    void elm_obj_entry_cnp_mode_set(Elm_Cnp_Mode cnp_mode);
    Elm_Cnp_Mode elm_obj_entry_cnp_mode_get(void);
    void elm_obj_entry_file_text_format_set(Elm_Text_Format format);
    void elm_obj_entry_input_panel_language_set(Elm_Input_Panel_Lang lang);
    Elm_Input_Panel_Lang elm_obj_entry_input_panel_language_get(void);
    void elm_obj_entry_selection_handler_disabled_set(Eina_Bool disabled);
    Eina_Bool elm_obj_entry_selection_handler_disabled_get(void);
    void elm_obj_entry_input_panel_layout_variation_set(int variation);
    int elm_obj_entry_input_panel_layout_variation_get(void);
    void elm_obj_entry_autocapital_type_set(Elm_Autocapital_Type autocapital_type);
    Elm_Autocapital_Type elm_obj_entry_autocapital_type_get(void);
    void elm_obj_entry_editable_set(Eina_Bool editable);
    Eina_Bool elm_obj_entry_editable_get(void);
    void elm_obj_entry_anchor_hover_style_set(const char * style);
    const char *elm_obj_entry_anchor_hover_style_get(void);
    void elm_obj_entry_single_line_set(Eina_Bool single_line);
    Eina_Bool elm_obj_entry_single_line_get(void);
    void elm_obj_entry_password_set(Eina_Bool password);
    Eina_Bool elm_obj_entry_password_get(void);
    void elm_obj_entry_input_panel_return_key_disabled_set(Eina_Bool disabled);
    Eina_Bool elm_obj_entry_input_panel_return_key_disabled_get(void);
    void elm_obj_entry_autosave_set(Eina_Bool auto_save);
    Eina_Bool elm_obj_entry_autosave_get(void);
    void elm_obj_entry_anchor_hover_parent_set(Efl_Canvas_Object * parent);
    Efl_Canvas_Object *elm_obj_entry_anchor_hover_parent_get(void);
    void elm_obj_entry_prediction_allow_set(Eina_Bool prediction);
    Eina_Bool elm_obj_entry_prediction_allow_get(void);
    void elm_obj_entry_input_hint_set(Elm_Input_Hints hints);
    Elm_Input_Hints elm_obj_entry_input_hint_get(void);
    void elm_obj_entry_input_panel_layout_set(Elm_Input_Panel_Layout layout);
    Elm_Input_Panel_Layout elm_obj_entry_input_panel_layout_get(void);
    void elm_obj_entry_input_panel_return_key_type_set(Elm_Input_Panel_Return_Key_Type return_key_type);
    Elm_Input_Panel_Return_Key_Type elm_obj_entry_input_panel_return_key_type_get(void);
    void elm_obj_entry_input_panel_enabled_set(Eina_Bool enabled);
    Eina_Bool elm_obj_entry_input_panel_enabled_get(void);
    void elm_obj_entry_line_wrap_set(Elm_Wrap_Type wrap);
    Elm_Wrap_Type elm_obj_entry_line_wrap_get(void);
    void elm_obj_entry_cursor_pos_set(int pos);
    int elm_obj_entry_cursor_pos_get(void);
    void elm_obj_entry_icon_visible_set(Eina_Bool setting);
    void elm_obj_entry_cursor_line_end_set(void);
    void elm_obj_entry_select_region_set(int start, int end_);
    void elm_obj_entry_select_region_get(int *start, int *end_);
    void elm_obj_entry_input_panel_return_key_autoenabled_set(Eina_Bool enabled);
    void elm_obj_entry_end_visible_set(Eina_Bool setting);
    void elm_obj_entry_cursor_begin_set(void);
    void elm_obj_entry_cursor_line_begin_set(void);
    void elm_obj_entry_cursor_end_set(void);
    Efl_Canvas_Object *elm_obj_entry_textblock_get(void);
    Eina_Bool elm_obj_entry_cursor_geometry_get(int *x, int *y, int *w, int *h);
    void *elm_obj_entry_imf_context_get(void);
    Eina_Bool elm_obj_entry_cursor_is_format_get(void);
    char *elm_obj_entry_cursor_content_get(void);
    const char *elm_obj_entry_selection_get(void);
    Eina_Bool elm_obj_entry_cursor_is_visible_format_get(void);
    void elm_obj_entry_select_allow_set(Eina_Bool allow);
    Eina_Bool elm_obj_entry_select_allow_get(void);
    Eina_Bool elm_obj_entry_cursor_prev(void);
    void elm_obj_entry_text_style_user_pop(void);
    void elm_obj_entry_item_provider_prepend(Elm_Entry_Item_Provider_Cb func, void * data);
    void elm_obj_entry_input_panel_show(void);
    void elm_obj_entry_imf_context_reset(void);
    void elm_obj_entry_calc_force(void);
    void elm_obj_entry_anchor_hover_end(void);
    void elm_obj_entry_cursor_selection_begin(void);
    Eina_Bool elm_obj_entry_cursor_down(void);
    void elm_obj_entry_file_save(void);
    void elm_obj_entry_selection_copy(void);
    void elm_obj_entry_text_style_user_push(const char * style);
    void elm_obj_entry_item_provider_remove(Elm_Entry_Item_Provider_Cb func, void * data);
    const char *elm_obj_entry_text_style_user_peek(void);
    void elm_obj_entry_context_menu_clear(void);
    Eina_Bool elm_obj_entry_cursor_up(void);
    void elm_obj_entry_insert(const char * entry);
    void elm_obj_entry_input_panel_imdata_set(const void * data, int len);
    void elm_obj_entry_input_panel_imdata_get(void *data, int *len);
    void elm_obj_entry_selection_paste(void);
    Eina_Bool elm_obj_entry_cursor_next(void);
    void elm_obj_entry_select_none(void);
    void elm_obj_entry_input_panel_hide(void);
    void elm_obj_entry_select_all(void);
    void elm_obj_entry_cursor_selection_end(void);
    void elm_obj_entry_selection_cut(void);
    Eina_Bool elm_obj_entry_is_empty(void);
    void elm_obj_entry_markup_filter_remove(Elm_Entry_Filter_Cb func, void * data);
    void elm_obj_entry_item_provider_append(Elm_Entry_Item_Provider_Cb func, void * data);
    void elm_obj_entry_markup_filter_append(Elm_Entry_Filter_Cb func, void * data);
    void elm_obj_entry_append(const char * str);
    void elm_obj_entry_context_menu_item_add(const char * label, const char * icon_file, Elm_Icon_Type icon_type, Evas_Smart_Cb func, const void * data);
    void elm_obj_entry_markup_filter_prepend(Elm_Entry_Filter_Cb func, void * data);
    void elm_obj_entry_prediction_hint_set(const char * prediction_hint);
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_ACTIVATED;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_CHANGED;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_CHANGED_USER;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_VALIDATE;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_CONTEXT_OPEN;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_ANCHOR_CLICKED;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_REJECTED;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_MAXLENGTH_REACHED;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_PREEDIT_CHANGED;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_PRESS;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_REDO_REQUEST;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_UNDO_REQUEST;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_TEXT_SET_DONE;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_ABORTED;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_ANCHOR_DOWN;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_ANCHOR_HOVER_OPENED;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_ANCHOR_IN;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_ANCHOR_OUT;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_ANCHOR_UP;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_CURSOR_CHANGED;
    extern const Eo_Event_Description _ELM_ENTRY_EVENT_CURSOR_CHANGED_MANUAL;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    scrollable_set = function(self, scroll)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_scrollable_set(scroll)
        eo.__do_end()
    end,

    scrollable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_scrollable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    input_panel_show_on_demand_set = function(self, ondemand)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_input_panel_show_on_demand_set(ondemand)
        eo.__do_end()
    end,

    input_panel_show_on_demand_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_input_panel_show_on_demand_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    context_menu_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_context_menu_disabled_set(disabled)
        eo.__do_end()
    end,

    context_menu_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_context_menu_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    cnp_mode_set = function(self, cnp_mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_cnp_mode_set(cnp_mode)
        eo.__do_end()
    end,

    cnp_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_cnp_mode_get()
        eo.__do_end()
        return v
    end,

    file_text_format_set = function(self, format)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_file_text_format_set(format)
        eo.__do_end()
    end,

    input_panel_language_set = function(self, lang)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_input_panel_language_set(lang)
        eo.__do_end()
    end,

    input_panel_language_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_input_panel_language_get()
        eo.__do_end()
        return v
    end,

    selection_handler_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_selection_handler_disabled_set(disabled)
        eo.__do_end()
    end,

    selection_handler_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_selection_handler_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    input_panel_layout_variation_set = function(self, variation)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_input_panel_layout_variation_set(variation)
        eo.__do_end()
    end,

    input_panel_layout_variation_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_input_panel_layout_variation_get()
        eo.__do_end()
        return tonumber(v)
    end,

    autocapital_type_set = function(self, autocapital_type)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_autocapital_type_set(autocapital_type)
        eo.__do_end()
    end,

    autocapital_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_autocapital_type_get()
        eo.__do_end()
        return v
    end,

    editable_set = function(self, editable)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_editable_set(editable)
        eo.__do_end()
    end,

    editable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_editable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    anchor_hover_style_set = function(self, style)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_anchor_hover_style_set(style)
        eo.__do_end()
    end,

    anchor_hover_style_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_anchor_hover_style_get()
        eo.__do_end()
        return v
    end,

    single_line_set = function(self, single_line)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_single_line_set(single_line)
        eo.__do_end()
    end,

    single_line_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_single_line_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    password_set = function(self, password)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_password_set(password)
        eo.__do_end()
    end,

    password_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_password_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    input_panel_return_key_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_input_panel_return_key_disabled_set(disabled)
        eo.__do_end()
    end,

    input_panel_return_key_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_input_panel_return_key_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    autosave_set = function(self, auto_save)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_autosave_set(auto_save)
        eo.__do_end()
    end,

    autosave_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_autosave_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    anchor_hover_parent_set = function(self, parent)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_anchor_hover_parent_set(parent)
        eo.__do_end()
    end,

    anchor_hover_parent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_anchor_hover_parent_get()
        eo.__do_end()
        return v
    end,

    prediction_allow_set = function(self, prediction)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_prediction_allow_set(prediction)
        eo.__do_end()
    end,

    prediction_allow_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_prediction_allow_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    input_hint_set = function(self, hints)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_input_hint_set(hints)
        eo.__do_end()
    end,

    input_hint_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_input_hint_get()
        eo.__do_end()
        return v
    end,

    input_panel_layout_set = function(self, layout)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_input_panel_layout_set(layout)
        eo.__do_end()
    end,

    input_panel_layout_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_input_panel_layout_get()
        eo.__do_end()
        return v
    end,

    input_panel_return_key_type_set = function(self, return_key_type)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_input_panel_return_key_type_set(return_key_type)
        eo.__do_end()
    end,

    input_panel_return_key_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_input_panel_return_key_type_get()
        eo.__do_end()
        return v
    end,

    input_panel_enabled_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_input_panel_enabled_set(enabled)
        eo.__do_end()
    end,

    input_panel_enabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_input_panel_enabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    line_wrap_set = function(self, wrap)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_line_wrap_set(wrap)
        eo.__do_end()
    end,

    line_wrap_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_line_wrap_get()
        eo.__do_end()
        return v
    end,

    cursor_pos_set = function(self, pos)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_cursor_pos_set(pos)
        eo.__do_end()
    end,

    cursor_pos_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_cursor_pos_get()
        eo.__do_end()
        return tonumber(v)
    end,

    icon_visible_set = function(self, setting)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_icon_visible_set(setting)
        eo.__do_end()
    end,

    cursor_line_end_set = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_cursor_line_end_set()
        eo.__do_end()
    end,

    select_region_set = function(self, start, end_)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_select_region_set(start, end_)
        eo.__do_end()
    end,

    select_region_get = function(self)
        eo.__do_start(self, __class)
        local start = ffi.new("int[1]")
        local end_ = ffi.new("int[1]")
        __lib.elm_obj_entry_select_region_get(start, end_)
        eo.__do_end()
        return tonumber(start[0]), tonumber(end_[0])
    end,

    input_panel_return_key_autoenabled_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_input_panel_return_key_autoenabled_set(enabled)
        eo.__do_end()
    end,

    end_visible_set = function(self, setting)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_end_visible_set(setting)
        eo.__do_end()
    end,

    cursor_begin_set = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_cursor_begin_set()
        eo.__do_end()
    end,

    cursor_line_begin_set = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_cursor_line_begin_set()
        eo.__do_end()
    end,

    cursor_end_set = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_cursor_end_set()
        eo.__do_end()
    end,

    textblock_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_textblock_get()
        eo.__do_end()
    end,

    cursor_geometry_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        local v = __lib.elm_obj_entry_cursor_geometry_get(x, y, w, h)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    imf_context_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_imf_context_get()
        eo.__do_end()
    end,

    cursor_is_format_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_cursor_is_format_get()
        eo.__do_end()
    end,

    cursor_content_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_cursor_content_get()
        eo.__do_end()
    end,

    selection_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_selection_get()
        eo.__do_end()
    end,

    cursor_is_visible_format_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_cursor_is_visible_format_get()
        eo.__do_end()
    end,

    select_allow_set = function(self, allow)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_select_allow_set(allow)
        eo.__do_end()
    end,

    select_allow_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_select_allow_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    cursor_prev = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_cursor_prev()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    text_style_user_pop = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_text_style_user_pop()
        eo.__do_end()
    end,

    item_provider_prepend = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_item_provider_prepend(func, data)
        eo.__do_end()
    end,

    input_panel_show = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_input_panel_show()
        eo.__do_end()
    end,

    imf_context_reset = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_imf_context_reset()
        eo.__do_end()
    end,

    calc_force = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_calc_force()
        eo.__do_end()
    end,

    anchor_hover_end = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_anchor_hover_end()
        eo.__do_end()
    end,

    cursor_selection_begin = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_cursor_selection_begin()
        eo.__do_end()
    end,

    cursor_down = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_cursor_down()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    file_save = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_file_save()
        eo.__do_end()
    end,

    selection_copy = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_selection_copy()
        eo.__do_end()
    end,

    text_style_user_push = function(self, style)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_text_style_user_push(style)
        eo.__do_end()
    end,

    item_provider_remove = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_item_provider_remove(func, data)
        eo.__do_end()
    end,

    text_style_user_peek = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_text_style_user_peek()
        eo.__do_end()
        return v
    end,

    context_menu_clear = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_context_menu_clear()
        eo.__do_end()
    end,

    cursor_up = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_cursor_up()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    entry_insert = function(self, entry)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_insert(entry)
        eo.__do_end()
    end,

    input_panel_imdata_set = function(self, data, len)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_input_panel_imdata_set(data, len)
        eo.__do_end()
    end,

    input_panel_imdata_get = function(self)
        eo.__do_start(self, __class)
        local data = ffi.new("void[1]")
        local len = ffi.new("int[1]")
        __lib.elm_obj_entry_input_panel_imdata_get(data, len)
        eo.__do_end()
        return data[0], tonumber(len[0])
    end,

    selection_paste = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_selection_paste()
        eo.__do_end()
    end,

    cursor_next = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_cursor_next()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    select_none = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_select_none()
        eo.__do_end()
    end,

    input_panel_hide = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_input_panel_hide()
        eo.__do_end()
    end,

    select_all = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_select_all()
        eo.__do_end()
    end,

    cursor_selection_end = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_cursor_selection_end()
        eo.__do_end()
    end,

    selection_cut = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_selection_cut()
        eo.__do_end()
    end,

    is_empty = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_entry_is_empty()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    markup_filter_remove = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_markup_filter_remove(func, data)
        eo.__do_end()
    end,

    item_provider_append = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_item_provider_append(func, data)
        eo.__do_end()
    end,

    markup_filter_append = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_markup_filter_append(func, data)
        eo.__do_end()
    end,

    entry_append = function(self, str)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_append(str)
        eo.__do_end()
    end,

    context_menu_item_add = function(self, label, icon_file, icon_type, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_context_menu_item_add(label, icon_file, icon_type, func, data)
        eo.__do_end()
    end,

    markup_filter_prepend = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_markup_filter_prepend(func, data)
        eo.__do_end()
    end,

    prediction_hint_set = function(self, prediction_hint)
        eo.__do_start(self, __class)
        __lib.elm_obj_entry_prediction_hint_set(prediction_hint)
        eo.__do_end()
    end,

    __events = {
        ["activated"] = __lib._ELM_ENTRY_EVENT_ACTIVATED,
        ["changed"] = __lib._ELM_ENTRY_EVENT_CHANGED,
        ["changed,user"] = __lib._ELM_ENTRY_EVENT_CHANGED_USER,
        ["validate"] = __lib._ELM_ENTRY_EVENT_VALIDATE,
        ["context,open"] = __lib._ELM_ENTRY_EVENT_CONTEXT_OPEN,
        ["anchor,clicked"] = __lib._ELM_ENTRY_EVENT_ANCHOR_CLICKED,
        ["rejected"] = __lib._ELM_ENTRY_EVENT_REJECTED,
        ["maxlength,reached"] = __lib._ELM_ENTRY_EVENT_MAXLENGTH_REACHED,
        ["preedit,changed"] = __lib._ELM_ENTRY_EVENT_PREEDIT_CHANGED,
        ["press"] = __lib._ELM_ENTRY_EVENT_PRESS,
        ["redo,request"] = __lib._ELM_ENTRY_EVENT_REDO_REQUEST,
        ["undo,request"] = __lib._ELM_ENTRY_EVENT_UNDO_REQUEST,
        ["text,set,done"] = __lib._ELM_ENTRY_EVENT_TEXT_SET_DONE,
        ["aborted"] = __lib._ELM_ENTRY_EVENT_ABORTED,
        ["anchor,down"] = __lib._ELM_ENTRY_EVENT_ANCHOR_DOWN,
        ["anchor,hover,opened"] = __lib._ELM_ENTRY_EVENT_ANCHOR_HOVER_OPENED,
        ["anchor,in"] = __lib._ELM_ENTRY_EVENT_ANCHOR_IN,
        ["anchor,out"] = __lib._ELM_ENTRY_EVENT_ANCHOR_OUT,
        ["anchor,up"] = __lib._ELM_ENTRY_EVENT_ANCHOR_UP,
        ["cursor,changed"] = __lib._ELM_ENTRY_EVENT_CURSOR_CHANGED,
        ["cursor,changed,manual"] = __lib._ELM_ENTRY_EVENT_CURSOR_CHANGED_MANUAL
    },

    __properties = {
        ["line_wrap"] = { 0, 0, 1, 1, true, true },
        ["cursor_end"] = { 0, 0, 0, 1, false, true },
        ["autocapital_type"] = { 0, 0, 1, 1, true, true },
        ["password"] = { 0, 0, 1, 1, true, true },
        ["cursor_begin"] = { 0, 0, 0, 1, false, true },
        ["single_line"] = { 0, 0, 1, 1, true, true },
        ["textblock"] = { 0, 0, 1, 0, true, false },
        ["cursor_pos"] = { 0, 0, 1, 1, true, true },
        ["editable"] = { 0, 0, 1, 1, true, true },
        ["context_menu_disabled"] = { 0, 0, 1, 1, true, true },
        ["input_panel_layout"] = { 0, 0, 1, 1, true, true },
        ["icon_visible"] = { 0, 0, 0, 1, false, true },
        ["cursor_line_begin"] = { 0, 0, 0, 1, false, true },
        ["cursor_is_format"] = { 0, 0, 1, 0, true, false },
        ["input_panel_layout_variation"] = { 0, 0, 1, 1, true, true },
        ["select_region"] = { 0, 0, 2, 2, true, true },
        ["input_panel_language"] = { 0, 0, 1, 1, true, true },
        ["autosave"] = { 0, 0, 1, 1, true, true },
        ["cursor_is_visible_format"] = { 0, 0, 1, 0, true, false },
        ["input_panel_return_key_autoenabled"] = { 0, 0, 0, 1, false, true },
        ["select_allow"] = { 0, 0, 1, 1, true, true },
        ["anchor_hover_style"] = { 0, 0, 1, 1, true, true },
        ["end_visible"] = { 0, 0, 0, 1, false, true },
        ["imf_context"] = { 0, 0, 1, 0, true, false },
        ["cursor_geometry"] = { 0, 0, 4, 0, true, false },
        ["input_panel_return_key_disabled"] = { 0, 0, 1, 1, true, true },
        ["input_panel_enabled"] = { 0, 0, 1, 1, true, true },
        ["scrollable"] = { 0, 0, 1, 1, true, true },
        ["cursor_content"] = { 0, 0, 1, 0, true, false },
        ["input_hint"] = { 0, 0, 1, 1, true, true },
        ["cnp_mode"] = { 0, 0, 1, 1, true, true },
        ["selection_handler_disabled"] = { 0, 0, 1, 1, true, true },
        ["selection"] = { 0, 0, 1, 0, true, false },
        ["file_text_format"] = { 0, 0, 0, 1, false, true },
        ["input_panel_show_on_demand"] = { 0, 0, 1, 1, true, true },
        ["prediction_allow"] = { 0, 0, 1, 1, true, true },
        ["anchor_hover_parent"] = { 0, 0, 1, 1, true, true },
        ["cursor_line_end"] = { 0, 0, 0, 1, false, true },
        ["input_panel_return_key_type"] = { 0, 0, 1, 1, true, true }
    }
}

M.Entry = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Entry").__eo_ctor,
                            1, ...)
end

return M
