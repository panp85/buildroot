-- EFL LuaJIT bindings: efl_ui_text.eo (class Efl.Ui.Text)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_text_class_get()
    eo.class_register("Efl_Ui_Text", {"Elm_Layout"}, {"Elm_Interface_Scrollable", "Efl_Ui_Clickable", "Elm_Interface_Atspi_Text", "Elm_Interface_Atspi_Text_Editable", "Efl_File", "Efl_Ui_Selectable", "Efl_Ui_Scrollable", "Efl_Ui_Text_Interactive"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_text_class_get(void);
    void efl_ui_text_scrollable_set(Eina_Bool scroll);
    Eina_Bool efl_ui_text_scrollable_get(void);
    void efl_ui_text_input_panel_show_on_demand_set(Eina_Bool ondemand);
    Eina_Bool efl_ui_text_input_panel_show_on_demand_get(void);
    void efl_ui_text_context_menu_disabled_set(Eina_Bool disabled);
    Eina_Bool efl_ui_text_context_menu_disabled_get(void);
    void efl_ui_text_cnp_mode_set(Elm_Cnp_Mode cnp_mode);
    Elm_Cnp_Mode efl_ui_text_cnp_mode_get(void);
    void efl_ui_text_input_panel_language_set(Elm_Input_Panel_Lang lang);
    Elm_Input_Panel_Lang efl_ui_text_input_panel_language_get(void);
    void efl_ui_text_selection_handler_disabled_set(Eina_Bool disabled);
    Eina_Bool efl_ui_text_selection_handler_disabled_get(void);
    void efl_ui_text_input_panel_layout_variation_set(int variation);
    int efl_ui_text_input_panel_layout_variation_get(void);
    void efl_ui_text_autocapital_type_set(Elm_Autocapital_Type autocapital_type);
    Elm_Autocapital_Type efl_ui_text_autocapital_type_get(void);
    void efl_ui_text_password_set(Eina_Bool password);
    Eina_Bool efl_ui_text_password_get(void);
    void efl_ui_text_input_panel_return_key_disabled_set(Eina_Bool disabled);
    Eina_Bool efl_ui_text_input_panel_return_key_disabled_get(void);
    void efl_ui_text_prediction_allow_set(Eina_Bool prediction);
    Eina_Bool efl_ui_text_prediction_allow_get(void);
    void efl_ui_text_input_hint_set(Elm_Input_Hints hints);
    Elm_Input_Hints efl_ui_text_input_hint_get(void);
    void efl_ui_text_input_panel_layout_set(Elm_Input_Panel_Layout layout);
    Elm_Input_Panel_Layout efl_ui_text_input_panel_layout_get(void);
    void efl_ui_text_input_panel_return_key_type_set(Elm_Input_Panel_Return_Key_Type return_key_type);
    Elm_Input_Panel_Return_Key_Type efl_ui_text_input_panel_return_key_type_get(void);
    void efl_ui_text_input_panel_enabled_set(Eina_Bool enabled);
    Eina_Bool efl_ui_text_input_panel_enabled_get(void);
    void efl_ui_text_input_panel_return_key_autoenabled_set(Eina_Bool enabled);
    void efl_ui_text_item_provider_prepend(Elm_Entry_Item_Provider_Cb func, void * data);
    void efl_ui_text_input_panel_show(void);
    void efl_ui_text_selection_copy(void);
    void efl_ui_text_item_provider_remove(Elm_Entry_Item_Provider_Cb func, void * data);
    void efl_ui_text_context_menu_clear(void);
    void efl_ui_text_input_panel_imdata_set(const void * data, int len);
    void efl_ui_text_input_panel_imdata_get(void *data, int *len);
    void efl_ui_text_selection_paste(void);
    void efl_ui_text_input_panel_hide(void);
    void efl_ui_text_cursor_selection_end(void);
    void efl_ui_text_selection_cut(void);
    void efl_ui_text_item_provider_append(Elm_Entry_Item_Provider_Cb func, void * data);
    void efl_ui_text_context_menu_item_add(const char * label, const char * icon_file, Elm_Icon_Type icon_type, Evas_Smart_Cb func, const void * data);
    Efl_Text_Cursor_Cursor *efl_ui_text_cursor_new(void);
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_ACTIVATED;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_CHANGED;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_CHANGED_USER;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_VALIDATE;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_CONTEXT_OPEN;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_CLICKED;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_REJECTED;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_MAXLENGTH_REACHED;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_PREEDIT_CHANGED;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_PRESS;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_REDO_REQUEST;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_UNDO_REQUEST;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_TEXT_SET_DONE;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_ABORTED;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_DOWN;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_HOVER_OPENED;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_IN;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_OUT;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_ANCHOR_UP;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_CURSOR_CHANGED;
    extern const Eo_Event_Description _EFL_UI_TEXT_EVENT_CURSOR_CHANGED_MANUAL;
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    scrollable_set = function(self, scroll)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_scrollable_set(scroll)
        eo.__do_end()
    end,

    scrollable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_scrollable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    input_panel_show_on_demand_set = function(self, ondemand)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_input_panel_show_on_demand_set(ondemand)
        eo.__do_end()
    end,

    input_panel_show_on_demand_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_input_panel_show_on_demand_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    context_menu_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_context_menu_disabled_set(disabled)
        eo.__do_end()
    end,

    context_menu_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_context_menu_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    cnp_mode_set = function(self, cnp_mode)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_cnp_mode_set(cnp_mode)
        eo.__do_end()
    end,

    cnp_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_cnp_mode_get()
        eo.__do_end()
        return v
    end,

    input_panel_language_set = function(self, lang)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_input_panel_language_set(lang)
        eo.__do_end()
    end,

    input_panel_language_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_input_panel_language_get()
        eo.__do_end()
        return v
    end,

    selection_handler_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_selection_handler_disabled_set(disabled)
        eo.__do_end()
    end,

    selection_handler_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_selection_handler_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    input_panel_layout_variation_set = function(self, variation)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_input_panel_layout_variation_set(variation)
        eo.__do_end()
    end,

    input_panel_layout_variation_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_input_panel_layout_variation_get()
        eo.__do_end()
        return tonumber(v)
    end,

    autocapital_type_set = function(self, autocapital_type)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_autocapital_type_set(autocapital_type)
        eo.__do_end()
    end,

    autocapital_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_autocapital_type_get()
        eo.__do_end()
        return v
    end,

    password_set = function(self, password)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_password_set(password)
        eo.__do_end()
    end,

    password_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_password_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    input_panel_return_key_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_input_panel_return_key_disabled_set(disabled)
        eo.__do_end()
    end,

    input_panel_return_key_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_input_panel_return_key_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    prediction_allow_set = function(self, prediction)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_prediction_allow_set(prediction)
        eo.__do_end()
    end,

    prediction_allow_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_prediction_allow_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    input_hint_set = function(self, hints)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_input_hint_set(hints)
        eo.__do_end()
    end,

    input_hint_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_input_hint_get()
        eo.__do_end()
        return v
    end,

    input_panel_layout_set = function(self, layout)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_input_panel_layout_set(layout)
        eo.__do_end()
    end,

    input_panel_layout_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_input_panel_layout_get()
        eo.__do_end()
        return v
    end,

    input_panel_return_key_type_set = function(self, return_key_type)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_input_panel_return_key_type_set(return_key_type)
        eo.__do_end()
    end,

    input_panel_return_key_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_input_panel_return_key_type_get()
        eo.__do_end()
        return v
    end,

    input_panel_enabled_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_input_panel_enabled_set(enabled)
        eo.__do_end()
    end,

    input_panel_enabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_input_panel_enabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    input_panel_return_key_autoenabled_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_input_panel_return_key_autoenabled_set(enabled)
        eo.__do_end()
    end,

    item_provider_prepend = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_item_provider_prepend(func, data)
        eo.__do_end()
    end,

    input_panel_show = function(self)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_input_panel_show()
        eo.__do_end()
    end,

    selection_copy = function(self)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_selection_copy()
        eo.__do_end()
    end,

    item_provider_remove = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_item_provider_remove(func, data)
        eo.__do_end()
    end,

    context_menu_clear = function(self)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_context_menu_clear()
        eo.__do_end()
    end,

    input_panel_imdata_set = function(self, data, len)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_input_panel_imdata_set(data, len)
        eo.__do_end()
    end,

    input_panel_imdata_get = function(self, data)
        eo.__do_start(self, __class)
        local data = ffi.new("void[1]")
        local len = ffi.new("int[1]")
        __lib.efl_ui_text_input_panel_imdata_get(data, len)
        eo.__do_end()
        return data[0], tonumber(len[0])
    end,

    selection_paste = function(self)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_selection_paste()
        eo.__do_end()
    end,

    input_panel_hide = function(self)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_input_panel_hide()
        eo.__do_end()
    end,

    cursor_selection_end = function(self)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_cursor_selection_end()
        eo.__do_end()
    end,

    selection_cut = function(self)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_selection_cut()
        eo.__do_end()
    end,

    item_provider_append = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_item_provider_append(func, data)
        eo.__do_end()
    end,

    context_menu_item_add = function(self, label, icon_file, icon_type, func, data)
        eo.__do_start(self, __class)
        __lib.efl_ui_text_context_menu_item_add(label, icon_file, icon_type, func, data)
        eo.__do_end()
    end,

    cursor_new = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_text_cursor_new()
        eo.__do_end()
        return v
    end,

    __events = {
        ["activated"] = __lib._EFL_UI_TEXT_EVENT_ACTIVATED,
        ["changed"] = __lib._EFL_UI_TEXT_EVENT_CHANGED,
        ["changed,user"] = __lib._EFL_UI_TEXT_EVENT_CHANGED_USER,
        ["validate"] = __lib._EFL_UI_TEXT_EVENT_VALIDATE,
        ["context,open"] = __lib._EFL_UI_TEXT_EVENT_CONTEXT_OPEN,
        ["anchor,clicked"] = __lib._EFL_UI_TEXT_EVENT_ANCHOR_CLICKED,
        ["rejected"] = __lib._EFL_UI_TEXT_EVENT_REJECTED,
        ["maxlength,reached"] = __lib._EFL_UI_TEXT_EVENT_MAXLENGTH_REACHED,
        ["preedit,changed"] = __lib._EFL_UI_TEXT_EVENT_PREEDIT_CHANGED,
        ["press"] = __lib._EFL_UI_TEXT_EVENT_PRESS,
        ["redo,request"] = __lib._EFL_UI_TEXT_EVENT_REDO_REQUEST,
        ["undo,request"] = __lib._EFL_UI_TEXT_EVENT_UNDO_REQUEST,
        ["text,set,done"] = __lib._EFL_UI_TEXT_EVENT_TEXT_SET_DONE,
        ["aborted"] = __lib._EFL_UI_TEXT_EVENT_ABORTED,
        ["anchor,down"] = __lib._EFL_UI_TEXT_EVENT_ANCHOR_DOWN,
        ["anchor,hover,opened"] = __lib._EFL_UI_TEXT_EVENT_ANCHOR_HOVER_OPENED,
        ["anchor,in"] = __lib._EFL_UI_TEXT_EVENT_ANCHOR_IN,
        ["anchor,out"] = __lib._EFL_UI_TEXT_EVENT_ANCHOR_OUT,
        ["anchor,up"] = __lib._EFL_UI_TEXT_EVENT_ANCHOR_UP,
        ["cursor,changed"] = __lib._EFL_UI_TEXT_EVENT_CURSOR_CHANGED,
        ["cursor,changed,manual"] = __lib._EFL_UI_TEXT_EVENT_CURSOR_CHANGED_MANUAL
    },

    __properties = {
        ["context_menu_disabled"] = { 0, 0, 1, 1, true, true },
        ["input_panel_return_key_autoenabled"] = { 0, 0, 0, 1, false, true },
        ["input_panel_return_key_disabled"] = { 0, 0, 1, 1, true, true },
        ["input_panel_enabled"] = { 0, 0, 1, 1, true, true },
        ["scrollable"] = { 0, 0, 1, 1, true, true },
        ["input_panel_return_key_type"] = { 0, 0, 1, 1, true, true },
        ["input_hint"] = { 0, 0, 1, 1, true, true },
        ["autocapital_type"] = { 0, 0, 1, 1, true, true },
        ["selection_handler_disabled"] = { 0, 0, 1, 1, true, true },
        ["input_panel_layout_variation"] = { 0, 0, 1, 1, true, true },
        ["cnp_mode"] = { 0, 0, 1, 1, true, true },
        ["input_panel_show_on_demand"] = { 0, 0, 1, 1, true, true },
        ["prediction_allow"] = { 0, 0, 1, 1, true, true },
        ["input_panel_layout"] = { 0, 0, 1, 1, true, true },
        ["password"] = { 0, 0, 1, 1, true, true },
        ["input_panel_language"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Text = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Text").__eo_ctor,
                            1, ...)
end

return M
