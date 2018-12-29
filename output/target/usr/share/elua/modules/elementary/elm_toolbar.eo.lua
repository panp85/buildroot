-- EFL LuaJIT bindings: elm_toolbar.eo (class Elm.Toolbar)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_toolbar_class_get()
    eo.class_register("Elm_Toolbar", {"Elm_Widget"}, {"Elm_Interface_Scrollable", "Efl_Orientation", "Elm_Interface_Atspi_Widget_Action", "Elm_Interface_Atspi_Selection", "Efl_Ui_Clickable", "Efl_Ui_Selectable", "Efl_Ui_Menu"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_toolbar_class_get(void);
    void elm_obj_toolbar_homogeneous_set(Eina_Bool homogeneous);
    Eina_Bool elm_obj_toolbar_homogeneous_get(void);
    void elm_obj_toolbar_align_set(double align);
    double elm_obj_toolbar_align_get(void);
    void elm_obj_toolbar_select_mode_set(Elm_Object_Select_Mode mode);
    Elm_Object_Select_Mode elm_obj_toolbar_select_mode_get(void);
    void elm_obj_toolbar_icon_size_set(int icon_size);
    int elm_obj_toolbar_icon_size_get(void);
    void elm_obj_toolbar_shrink_mode_set(Elm_Toolbar_Shrink_Mode shrink_mode);
    Elm_Toolbar_Shrink_Mode elm_obj_toolbar_shrink_mode_get(void);
    void elm_obj_toolbar_menu_parent_set(Efl_Canvas_Object * parent);
    Efl_Canvas_Object *elm_obj_toolbar_menu_parent_get(void);
    void elm_obj_toolbar_standard_priority_set(int priority);
    int elm_obj_toolbar_standard_priority_get(void);
    Elm_Widget_Item *elm_obj_toolbar_more_item_get(void);
    Elm_Widget_Item *elm_obj_toolbar_item_insert_before(Elm_Widget_Item * before, const char * icon, const char * label, Evas_Smart_Cb func, const void * data);
    Elm_Widget_Item *elm_obj_toolbar_item_insert_after(Elm_Widget_Item * after, const char * icon, const char * label, Evas_Smart_Cb func, const void * data);
    Elm_Widget_Item *elm_obj_toolbar_item_append(const char * icon, const char * label, Evas_Smart_Cb func, const void * data);
    unsigned int elm_obj_toolbar_items_count(void);
    Elm_Widget_Item *elm_obj_toolbar_item_prepend(const char * icon, const char * label, Evas_Smart_Cb func, const void * data);
    Elm_Widget_Item *elm_obj_toolbar_item_find_by_label(const char * label);
    extern const Eo_Event_Description _ELM_TOOLBAR_EVENT_ITEM_FOCUSED;
    extern const Eo_Event_Description _ELM_TOOLBAR_EVENT_ITEM_UNFOCUSED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    homogeneous_set = function(self, homogeneous)
        eo.__do_start(self, __class)
        __lib.elm_obj_toolbar_homogeneous_set(homogeneous)
        eo.__do_end()
    end,

    homogeneous_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_homogeneous_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    align_set = function(self, align)
        eo.__do_start(self, __class)
        __lib.elm_obj_toolbar_align_set(align)
        eo.__do_end()
    end,

    align_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_align_get()
        eo.__do_end()
        return tonumber(v)
    end,

    select_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_toolbar_select_mode_set(mode)
        eo.__do_end()
    end,

    select_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_select_mode_get()
        eo.__do_end()
        return v
    end,

    icon_size_set = function(self, icon_size)
        eo.__do_start(self, __class)
        __lib.elm_obj_toolbar_icon_size_set(icon_size)
        eo.__do_end()
    end,

    icon_size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_icon_size_get()
        eo.__do_end()
        return tonumber(v)
    end,

    shrink_mode_set = function(self, shrink_mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_toolbar_shrink_mode_set(shrink_mode)
        eo.__do_end()
    end,

    shrink_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_shrink_mode_get()
        eo.__do_end()
        return v
    end,

    menu_parent_set = function(self, parent)
        eo.__do_start(self, __class)
        __lib.elm_obj_toolbar_menu_parent_set(parent)
        eo.__do_end()
    end,

    menu_parent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_menu_parent_get()
        eo.__do_end()
        return v
    end,

    standard_priority_set = function(self, priority)
        eo.__do_start(self, __class)
        __lib.elm_obj_toolbar_standard_priority_set(priority)
        eo.__do_end()
    end,

    standard_priority_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_standard_priority_get()
        eo.__do_end()
        return tonumber(v)
    end,

    more_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_more_item_get()
        eo.__do_end()
    end,

    item_insert_before = function(self, before, icon, label, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_insert_before(before, icon, label, func, data)
        eo.__do_end()
        return v
    end,

    item_insert_after = function(self, after, icon, label, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_insert_after(after, icon, label, func, data)
        eo.__do_end()
        return v
    end,

    item_append = function(self, icon, label, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_append(icon, label, func, data)
        eo.__do_end()
        return v
    end,

    items_count = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_items_count()
        eo.__do_end()
        return v
    end,

    item_prepend = function(self, icon, label, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_prepend(icon, label, func, data)
        eo.__do_end()
        return v
    end,

    item_find_by_label = function(self, label)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_find_by_label(label)
        eo.__do_end()
        return v
    end,

    __events = {
        ["item,focused"] = __lib._ELM_TOOLBAR_EVENT_ITEM_FOCUSED,
        ["item,unfocused"] = __lib._ELM_TOOLBAR_EVENT_ITEM_UNFOCUSED
    },

    __properties = {
        ["more_item"] = { 0, 0, 1, 0, true, false },
        ["align"] = { 0, 0, 1, 1, true, true },
        ["icon_size"] = { 0, 0, 1, 1, true, true },
        ["menu_parent"] = { 0, 0, 1, 1, true, true },
        ["shrink_mode"] = { 0, 0, 1, 1, true, true },
        ["homogeneous"] = { 0, 0, 1, 1, true, true },
        ["select_mode"] = { 0, 0, 1, 1, true, true },
        ["standard_priority"] = { 0, 0, 1, 1, true, true }
    }
}

M.Toolbar = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Toolbar").__eo_ctor,
                            1, ...)
end

return M
