-- EFL LuaJIT bindings: elm_multibuttonentry.eo (class Elm.Multibuttonentry)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_multibuttonentry_class_get()
    eo.class_register("Elm_Multibuttonentry", {"Elm_Layout"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_multibuttonentry_class_get(void);
    void elm_obj_multibuttonentry_editable_set(Eina_Bool editable);
    Eina_Bool elm_obj_multibuttonentry_editable_get(void);
    void elm_obj_multibuttonentry_expanded_set(Eina_Bool expanded);
    Eina_Bool elm_obj_multibuttonentry_expanded_get(void);
    void elm_obj_multibuttonentry_format_function_set(Elm_Multibuttonentry_Format_Cb format_function, const void * data);
    const Eina_List *elm_obj_multibuttonentry_items_get(void);
    Elm_Widget_Item *elm_obj_multibuttonentry_first_item_get(void);
    Elm_Widget_Item *elm_obj_multibuttonentry_last_item_get(void);
    Efl_Canvas_Object *elm_obj_multibuttonentry_entry_get(void);
    Elm_Widget_Item *elm_obj_multibuttonentry_selected_item_get(void);
    Elm_Widget_Item *elm_obj_multibuttonentry_item_prepend(const char * label, Evas_Smart_Cb func, void * data);
    void elm_obj_multibuttonentry_clear(void);
    void elm_obj_multibuttonentry_item_filter_remove(Elm_Multibuttonentry_Item_Filter_Cb func, void * data);
    Elm_Widget_Item *elm_obj_multibuttonentry_item_insert_before(Elm_Widget_Item * before, const char * label, Evas_Smart_Cb func, void * data);
    Elm_Widget_Item *elm_obj_multibuttonentry_item_append(const char * label, Evas_Smart_Cb func, void * data);
    void elm_obj_multibuttonentry_item_filter_prepend(Elm_Multibuttonentry_Item_Filter_Cb func, void * data);
    void elm_obj_multibuttonentry_item_filter_append(Elm_Multibuttonentry_Item_Filter_Cb func, void * data);
    Elm_Widget_Item *elm_obj_multibuttonentry_item_insert_after(Elm_Widget_Item * after, const char * label, Evas_Smart_Cb func, void * data);
    extern const Eo_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_ITEM_SELECTED;
    extern const Eo_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_ITEM_ADDED;
    extern const Eo_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_ITEM_DELETED;
    extern const Eo_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_ITEM_CLICKED;
    extern const Eo_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_ITEM_LONGPRESSED;
    extern const Eo_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_EXPANDED;
    extern const Eo_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_CONTRACTED;
    extern const Eo_Event_Description _ELM_MULTIBUTTONENTRY_EVENT_EXPAND_STATE_CHANGED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    editable_set = function(self, editable)
        eo.__do_start(self, __class)
        __lib.elm_obj_multibuttonentry_editable_set(editable)
        eo.__do_end()
    end,

    editable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_multibuttonentry_editable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    expanded_set = function(self, expanded)
        eo.__do_start(self, __class)
        __lib.elm_obj_multibuttonentry_expanded_set(expanded)
        eo.__do_end()
    end,

    expanded_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_multibuttonentry_expanded_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    format_function_set = function(self, format_function, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_multibuttonentry_format_function_set(format_function, data)
        eo.__do_end()
    end,

    items_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_multibuttonentry_items_get()
        eo.__do_end()
    end,

    first_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_multibuttonentry_first_item_get()
        eo.__do_end()
    end,

    last_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_multibuttonentry_last_item_get()
        eo.__do_end()
    end,

    entry_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_multibuttonentry_entry_get()
        eo.__do_end()
    end,

    selected_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_multibuttonentry_selected_item_get()
        eo.__do_end()
    end,

    item_prepend = function(self, label, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_multibuttonentry_item_prepend(label, func, data)
        eo.__do_end()
        return v
    end,

    clear = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_multibuttonentry_clear()
        eo.__do_end()
    end,

    item_filter_remove = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_multibuttonentry_item_filter_remove(func, data)
        eo.__do_end()
    end,

    item_insert_before = function(self, before, label, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_multibuttonentry_item_insert_before(before, label, func, data)
        eo.__do_end()
        return v
    end,

    item_append = function(self, label, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_multibuttonentry_item_append(label, func, data)
        eo.__do_end()
        return v
    end,

    item_filter_prepend = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_multibuttonentry_item_filter_prepend(func, data)
        eo.__do_end()
    end,

    item_filter_append = function(self, func, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_multibuttonentry_item_filter_append(func, data)
        eo.__do_end()
    end,

    item_insert_after = function(self, after, label, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_multibuttonentry_item_insert_after(after, label, func, data)
        eo.__do_end()
        return v
    end,

    __events = {
        ["item,selected"] = __lib._ELM_MULTIBUTTONENTRY_EVENT_ITEM_SELECTED,
        ["item,added"] = __lib._ELM_MULTIBUTTONENTRY_EVENT_ITEM_ADDED,
        ["item,deleted"] = __lib._ELM_MULTIBUTTONENTRY_EVENT_ITEM_DELETED,
        ["item,clicked"] = __lib._ELM_MULTIBUTTONENTRY_EVENT_ITEM_CLICKED,
        ["item,longpressed"] = __lib._ELM_MULTIBUTTONENTRY_EVENT_ITEM_LONGPRESSED,
        ["expanded"] = __lib._ELM_MULTIBUTTONENTRY_EVENT_EXPANDED,
        ["contracted"] = __lib._ELM_MULTIBUTTONENTRY_EVENT_CONTRACTED,
        ["expand,state,changed"] = __lib._ELM_MULTIBUTTONENTRY_EVENT_EXPAND_STATE_CHANGED
    },

    __properties = {
        ["expanded"] = { 0, 0, 1, 1, true, true },
        ["format_function"] = { 0, 0, 0, 2, false, true },
        ["last_item"] = { 0, 0, 1, 0, true, false },
        ["selected_item"] = { 0, 0, 1, 0, true, false },
        ["items"] = { 0, 0, 1, 0, true, false },
        ["first_item"] = { 0, 0, 1, 0, true, false },
        ["entry"] = { 0, 0, 1, 0, true, false },
        ["editable"] = { 0, 0, 1, 1, true, true }
    }
}

M.Multibuttonentry = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Multibuttonentry").__eo_ctor,
                            1, ...)
end

return M
