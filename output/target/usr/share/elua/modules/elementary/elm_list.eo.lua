-- EFL LuaJIT bindings: elm_list.eo (class Elm.List)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_list_class_get()
    eo.class_register("Elm_List", {"Elm_Layout"}, {"Elm_Interface_Scrollable", "Elm_Interface_Atspi_Widget_Action", "Elm_Interface_Atspi_Selection", "Efl_Ui_Clickable", "Efl_Ui_Selectable"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_list_class_get(void);
    void elm_obj_list_horizontal_set(Eina_Bool horizontal);
    Eina_Bool elm_obj_list_horizontal_get(void);
    void elm_obj_list_select_mode_set(Elm_Object_Select_Mode mode);
    Elm_Object_Select_Mode elm_obj_list_select_mode_get(void);
    void elm_obj_list_focus_on_selection_set(Eina_Bool enabled);
    Eina_Bool elm_obj_list_focus_on_selection_get(void);
    void elm_obj_list_multi_select_set(Eina_Bool multi);
    Eina_Bool elm_obj_list_multi_select_get(void);
    void elm_obj_list_multi_select_mode_set(Elm_Object_Multi_Select_Mode mode);
    Elm_Object_Multi_Select_Mode elm_obj_list_multi_select_mode_get(void);
    void elm_obj_list_mode_set(Elm_List_Mode mode);
    Elm_List_Mode elm_obj_list_mode_get(void);
    Elm_Widget_Item *elm_obj_list_selected_item_get(void);
    const Eina_List *elm_obj_list_items_get(void);
    Elm_Widget_Item *elm_obj_list_first_item_get(void);
    const Eina_List *elm_obj_list_selected_items_get(void);
    Elm_Widget_Item *elm_obj_list_last_item_get(void);
    Elm_Widget_Item *elm_obj_list_item_insert_before(Elm_Widget_Item * before, const char * label, Efl_Canvas_Object * icon, Efl_Canvas_Object * end_, Evas_Smart_Cb func, const void * data);
    void elm_obj_list_go(void);
    Elm_Widget_Item *elm_obj_list_item_insert_after(Elm_Widget_Item * after, const char * label, Efl_Canvas_Object * icon, Efl_Canvas_Object * end_, Evas_Smart_Cb func, const void * data);
    Elm_Widget_Item *elm_obj_list_at_xy_item_get(int x, int y, int *posret);
    Elm_Widget_Item *elm_obj_list_item_append(const char * label, Efl_Canvas_Object * icon, Efl_Canvas_Object * end_, Evas_Smart_Cb func, const void * data);
    Elm_Widget_Item *elm_obj_list_item_prepend(const char * label, Efl_Canvas_Object * icon, Efl_Canvas_Object * end_, Evas_Smart_Cb func, const void * data);
    void elm_obj_list_clear(void);
    Elm_Widget_Item *elm_obj_list_item_sorted_insert(const char * label, Efl_Canvas_Object * icon, Efl_Canvas_Object * end_, Evas_Smart_Cb func, const void * data, Eina_Compare_Cb cmp_func);
    extern const Eo_Event_Description _ELM_LIST_EVENT_ACTIVATED;
    extern const Eo_Event_Description _ELM_LIST_EVENT_EDGE_TOP;
    extern const Eo_Event_Description _ELM_LIST_EVENT_EDGE_BOTTOM;
    extern const Eo_Event_Description _ELM_LIST_EVENT_EDGE_LEFT;
    extern const Eo_Event_Description _ELM_LIST_EVENT_EDGE_RIGHT;
    extern const Eo_Event_Description _ELM_LIST_EVENT_SWIPE;
    extern const Eo_Event_Description _ELM_LIST_EVENT_HIGHLIGHTED;
    extern const Eo_Event_Description _ELM_LIST_EVENT_UNHIGHLIGHTED;
    extern const Eo_Event_Description _ELM_LIST_EVENT_ITEM_FOCUSED;
    extern const Eo_Event_Description _ELM_LIST_EVENT_ITEM_UNFOCUSED;
    extern const Eo_Event_Description _ELM_LIST_EVENT_ITEM_REORDER_ANIM_START;
    extern const Eo_Event_Description _ELM_LIST_EVENT_ITEM_REORDER_ANIM_STOP;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    horizontal_set = function(self, horizontal)
        eo.__do_start(self, __class)
        __lib.elm_obj_list_horizontal_set(horizontal)
        eo.__do_end()
    end,

    horizontal_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_horizontal_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    select_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_list_select_mode_set(mode)
        eo.__do_end()
    end,

    select_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_select_mode_get()
        eo.__do_end()
        return v
    end,

    focus_on_selection_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_list_focus_on_selection_set(enabled)
        eo.__do_end()
    end,

    focus_on_selection_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_focus_on_selection_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    multi_select_set = function(self, multi)
        eo.__do_start(self, __class)
        __lib.elm_obj_list_multi_select_set(multi)
        eo.__do_end()
    end,

    multi_select_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_multi_select_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    multi_select_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_list_multi_select_mode_set(mode)
        eo.__do_end()
    end,

    multi_select_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_multi_select_mode_get()
        eo.__do_end()
        return v
    end,

    mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_list_mode_set(mode)
        eo.__do_end()
    end,

    mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_mode_get()
        eo.__do_end()
        return v
    end,

    selected_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_selected_item_get()
        eo.__do_end()
    end,

    items_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_items_get()
        eo.__do_end()
    end,

    first_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_first_item_get()
        eo.__do_end()
    end,

    selected_items_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_selected_items_get()
        eo.__do_end()
    end,

    last_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_last_item_get()
        eo.__do_end()
    end,

    item_insert_before = function(self, before, label, icon, end_, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_item_insert_before(before, label, icon, end_, func, data)
        eo.__do_end()
        return v
    end,

    go = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_list_go()
        eo.__do_end()
    end,

    item_insert_after = function(self, after, label, icon, end_, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_item_insert_after(after, label, icon, end_, func, data)
        eo.__do_end()
        return v
    end,

    at_xy_item_get = function(self, x, y)
        eo.__do_start(self, __class)
        local posret = ffi.new("int[1]")
        local v = __lib.elm_obj_list_at_xy_item_get(x, y, posret)
        eo.__do_end()
        return v, tonumber(posret[0])
    end,

    item_append = function(self, label, icon, end_, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_item_append(label, icon, end_, func, data)
        eo.__do_end()
        return v
    end,

    item_prepend = function(self, label, icon, end_, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_item_prepend(label, icon, end_, func, data)
        eo.__do_end()
        return v
    end,

    clear = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_list_clear()
        eo.__do_end()
    end,

    item_sorted_insert = function(self, label, icon, end_, func, data, cmp_func)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_item_sorted_insert(label, icon, end_, func, data, cmp_func)
        eo.__do_end()
        return v
    end,

    __events = {
        ["activated"] = __lib._ELM_LIST_EVENT_ACTIVATED,
        ["edge,top"] = __lib._ELM_LIST_EVENT_EDGE_TOP,
        ["edge,bottom"] = __lib._ELM_LIST_EVENT_EDGE_BOTTOM,
        ["edge,left"] = __lib._ELM_LIST_EVENT_EDGE_LEFT,
        ["edge,right"] = __lib._ELM_LIST_EVENT_EDGE_RIGHT,
        ["swipe"] = __lib._ELM_LIST_EVENT_SWIPE,
        ["highlighted"] = __lib._ELM_LIST_EVENT_HIGHLIGHTED,
        ["unhighlighted"] = __lib._ELM_LIST_EVENT_UNHIGHLIGHTED,
        ["item,focused"] = __lib._ELM_LIST_EVENT_ITEM_FOCUSED,
        ["item,unfocused"] = __lib._ELM_LIST_EVENT_ITEM_UNFOCUSED,
        ["item,reorder,anim,start"] = __lib._ELM_LIST_EVENT_ITEM_REORDER_ANIM_START,
        ["item,reorder,anim,stop"] = __lib._ELM_LIST_EVENT_ITEM_REORDER_ANIM_STOP
    },

    __properties = {
        ["first_item"] = { 0, 0, 1, 0, true, false },
        ["horizontal"] = { 0, 0, 1, 1, true, true },
        ["mode"] = { 0, 0, 1, 1, true, true },
        ["last_item"] = { 0, 0, 1, 0, true, false },
        ["items"] = { 0, 0, 1, 0, true, false },
        ["multi_select"] = { 0, 0, 1, 1, true, true },
        ["selected_item"] = { 0, 0, 1, 0, true, false },
        ["selected_items"] = { 0, 0, 1, 0, true, false },
        ["focus_on_selection"] = { 0, 0, 1, 1, true, true },
        ["select_mode"] = { 0, 0, 1, 1, true, true },
        ["multi_select_mode"] = { 0, 0, 1, 1, true, true }
    }
}

M.List = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_List").__eo_ctor,
                            1, ...)
end

return M
