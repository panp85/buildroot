-- EFL LuaJIT bindings: elm_genlist.eo (class Elm.Genlist)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_genlist_class_get()
    eo.class_register("Elm_Genlist", {"Elm_Layout"}, {"Elm_Interface_Scrollable", "Efl_Ui_Clickable", "Elm_Interface_Atspi_Widget_Action", "Elm_Interface_Atspi_Selection", "Efl_Ui_Selectable"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_genlist_class_get(void);
    void elm_obj_genlist_homogeneous_set(Eina_Bool homogeneous);
    Eina_Bool elm_obj_genlist_homogeneous_get(void);
    void elm_obj_genlist_select_mode_set(Elm_Object_Select_Mode mode);
    Elm_Object_Select_Mode elm_obj_genlist_select_mode_get(void);
    void elm_obj_genlist_focus_on_selection_set(Eina_Bool enabled);
    Eina_Bool elm_obj_genlist_focus_on_selection_get(void);
    void elm_obj_genlist_longpress_timeout_set(double timeout);
    double elm_obj_genlist_longpress_timeout_get(void);
    void elm_obj_genlist_multi_select_set(Eina_Bool multi);
    Eina_Bool elm_obj_genlist_multi_select_get(void);
    void elm_obj_genlist_reorder_mode_set(Eina_Bool reorder_mode);
    Eina_Bool elm_obj_genlist_reorder_mode_get(void);
    void elm_obj_genlist_decorate_mode_set(Eina_Bool decorated);
    Eina_Bool elm_obj_genlist_decorate_mode_get(void);
    void elm_obj_genlist_multi_select_mode_set(Elm_Object_Multi_Select_Mode mode);
    Elm_Object_Multi_Select_Mode elm_obj_genlist_multi_select_mode_get(void);
    void elm_obj_genlist_block_count_set(int count);
    int elm_obj_genlist_block_count_get(void);
    void elm_obj_genlist_tree_effect_enabled_set(Eina_Bool enabled);
    Eina_Bool elm_obj_genlist_tree_effect_enabled_get(void);
    void elm_obj_genlist_highlight_mode_set(Eina_Bool highlight);
    Eina_Bool elm_obj_genlist_highlight_mode_get(void);
    void elm_obj_genlist_mode_set(Elm_List_Mode mode);
    Elm_List_Mode elm_obj_genlist_mode_get(void);
    Elm_Widget_Item *elm_obj_genlist_decorated_item_get(void);
    Elm_Widget_Item *elm_obj_genlist_selected_item_get(void);
    Elm_Widget_Item *elm_obj_genlist_first_item_get(void);
    Eina_List *elm_obj_genlist_realized_items_get(void);
    const Eina_List *elm_obj_genlist_selected_items_get(void);
    Elm_Widget_Item *elm_obj_genlist_last_item_get(void);
    void elm_obj_genlist_filter_set(void * key);
    Elm_Widget_Item *elm_obj_genlist_item_insert_before(const Elm_Genlist_Item_Class * itc, const void * data, Elm_Widget_Item * parent, Elm_Widget_Item * before_it, Elm_Genlist_Item_Type type, Evas_Smart_Cb func, const void * func_data);
    void elm_obj_genlist_realized_items_update(void);
    Elm_Widget_Item *elm_obj_genlist_item_insert_after(const Elm_Genlist_Item_Class * itc, const void * data, Elm_Widget_Item * parent, Elm_Widget_Item * after_it, Elm_Genlist_Item_Type type, Evas_Smart_Cb func, const void * func_data);
    Elm_Widget_Item *elm_obj_genlist_at_xy_item_get(int x, int y, int *posret);
    Eina_Iterator *elm_obj_genlist_filter_iterator_new(void);
    unsigned int elm_obj_genlist_filtered_items_count(void);
    unsigned int elm_obj_genlist_items_count(void);
    Elm_Widget_Item *elm_obj_genlist_item_prepend(const Elm_Genlist_Item_Class * itc, const void * data, Elm_Widget_Item * parent, Elm_Genlist_Item_Type type, Evas_Smart_Cb func, const void * func_data);
    void elm_obj_genlist_clear(void);
    Elm_Widget_Item *elm_obj_genlist_item_append(const Elm_Genlist_Item_Class * itc, const void * data, Elm_Widget_Item * parent, Elm_Genlist_Item_Type type, Evas_Smart_Cb func, const void * func_data);
    Elm_Widget_Item *elm_obj_genlist_item_sorted_insert(const Elm_Genlist_Item_Class * itc, const void * data, Elm_Widget_Item * parent, Elm_Genlist_Item_Type type, Eina_Compare_Cb comp, Evas_Smart_Cb func, const void * func_data);
    Elm_Widget_Item *elm_obj_genlist_search_by_text_item_get(Elm_Widget_Item * item_to_search_from, const char * part_name, const char * pattern, Elm_Glob_Match_Flags flags);
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_ITEM_FOCUSED;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_ITEM_UNFOCUSED;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_VBAR_DRAG;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_VBAR_PRESS;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_VBAR_UNPRESS;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_HBAR_DRAG;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_HBAR_PRESS;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_HBAR_UNPRESS;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_EDGE_TOP;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_EDGE_BOTTOM;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_EDGE_LEFT;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_EDGE_RIGHT;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_MOVED;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_MOVED_BEFORE;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_MOVED_AFTER;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_SWIPE;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_MULTI_PINCH_IN;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_MULTI_PINCH_OUT;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_MULTI_SWIPE_DOWN;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_MULTI_SWIPE_UP;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_MULTI_SWIPE_RIGHT;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_MULTI_SWIPE_LEFT;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_RELEASED;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_ACTIVATED;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_HIGHLIGHTED;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_UNHIGHLIGHTED;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_REALIZED;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_UNREALIZED;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_CONTRACT_REQUEST;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_EXPAND_REQUEST;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_CONTRACTED;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_EXPANDED;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_INDEX_UPDATE;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_TREE_EFFECT_FINISHED;
    extern const Eo_Event_Description _ELM_GENLIST_EVENT_FILTER_DONE;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    homogeneous_set = function(self, homogeneous)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_homogeneous_set(homogeneous)
        eo.__do_end()
    end,

    homogeneous_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_homogeneous_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    select_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_select_mode_set(mode)
        eo.__do_end()
    end,

    select_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_select_mode_get()
        eo.__do_end()
        return v
    end,

    focus_on_selection_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_focus_on_selection_set(enabled)
        eo.__do_end()
    end,

    focus_on_selection_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_focus_on_selection_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    longpress_timeout_set = function(self, timeout)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_longpress_timeout_set(timeout)
        eo.__do_end()
    end,

    longpress_timeout_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_longpress_timeout_get()
        eo.__do_end()
        return tonumber(v)
    end,

    multi_select_set = function(self, multi)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_multi_select_set(multi)
        eo.__do_end()
    end,

    multi_select_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_multi_select_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    reorder_mode_set = function(self, reorder_mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_reorder_mode_set(reorder_mode)
        eo.__do_end()
    end,

    reorder_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_reorder_mode_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    decorate_mode_set = function(self, decorated)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_decorate_mode_set(decorated)
        eo.__do_end()
    end,

    decorate_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_decorate_mode_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    multi_select_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_multi_select_mode_set(mode)
        eo.__do_end()
    end,

    multi_select_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_multi_select_mode_get()
        eo.__do_end()
        return v
    end,

    block_count_set = function(self, count)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_block_count_set(count)
        eo.__do_end()
    end,

    block_count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_block_count_get()
        eo.__do_end()
        return tonumber(v)
    end,

    tree_effect_enabled_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_tree_effect_enabled_set(enabled)
        eo.__do_end()
    end,

    tree_effect_enabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_tree_effect_enabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    highlight_mode_set = function(self, highlight)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_highlight_mode_set(highlight)
        eo.__do_end()
    end,

    highlight_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_highlight_mode_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_mode_set(mode)
        eo.__do_end()
    end,

    mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_mode_get()
        eo.__do_end()
        return v
    end,

    decorated_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_decorated_item_get()
        eo.__do_end()
    end,

    selected_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_selected_item_get()
        eo.__do_end()
    end,

    first_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_first_item_get()
        eo.__do_end()
    end,

    realized_items_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_realized_items_get()
        eo.__do_end()
    end,

    selected_items_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_selected_items_get()
        eo.__do_end()
    end,

    last_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_last_item_get()
        eo.__do_end()
    end,

    filter_set = function(self, key)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_filter_set(key)
        eo.__do_end()
    end,

    item_insert_before = function(self, itc, data, parent, before_it, type, func, func_data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_insert_before(itc, data, parent, before_it, type, func, func_data)
        eo.__do_end()
        return v
    end,

    realized_items_update = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_realized_items_update()
        eo.__do_end()
    end,

    item_insert_after = function(self, itc, data, parent, after_it, type, func, func_data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_insert_after(itc, data, parent, after_it, type, func, func_data)
        eo.__do_end()
        return v
    end,

    at_xy_item_get = function(self, x, y)
        eo.__do_start(self, __class)
        local posret = ffi.new("int[1]")
        local v = __lib.elm_obj_genlist_at_xy_item_get(x, y, posret)
        eo.__do_end()
        return v, tonumber(posret[0])
    end,

    filter_iterator_new = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_filter_iterator_new()
        eo.__do_end()
        return v
    end,

    filtered_items_count = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_filtered_items_count()
        eo.__do_end()
        return v
    end,

    items_count = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_items_count()
        eo.__do_end()
        return v
    end,

    item_prepend = function(self, itc, data, parent, type, func, func_data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_prepend(itc, data, parent, type, func, func_data)
        eo.__do_end()
        return v
    end,

    clear = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_clear()
        eo.__do_end()
    end,

    item_append = function(self, itc, data, parent, type, func, func_data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_append(itc, data, parent, type, func, func_data)
        eo.__do_end()
        return v
    end,

    item_sorted_insert = function(self, itc, data, parent, type, comp, func, func_data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_sorted_insert(itc, data, parent, type, comp, func, func_data)
        eo.__do_end()
        return v
    end,

    search_by_text_item_get = function(self, item_to_search_from, part_name, pattern, flags)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_search_by_text_item_get(item_to_search_from, part_name, pattern, flags)
        eo.__do_end()
        return v
    end,

    __events = {
        ["item,focused"] = __lib._ELM_GENLIST_EVENT_ITEM_FOCUSED,
        ["item,unfocused"] = __lib._ELM_GENLIST_EVENT_ITEM_UNFOCUSED,
        ["vbar,drag"] = __lib._ELM_GENLIST_EVENT_VBAR_DRAG,
        ["vbar,press"] = __lib._ELM_GENLIST_EVENT_VBAR_PRESS,
        ["vbar,unpress"] = __lib._ELM_GENLIST_EVENT_VBAR_UNPRESS,
        ["hbar,drag"] = __lib._ELM_GENLIST_EVENT_HBAR_DRAG,
        ["hbar,press"] = __lib._ELM_GENLIST_EVENT_HBAR_PRESS,
        ["hbar,unpress"] = __lib._ELM_GENLIST_EVENT_HBAR_UNPRESS,
        ["edge,top"] = __lib._ELM_GENLIST_EVENT_EDGE_TOP,
        ["edge,bottom"] = __lib._ELM_GENLIST_EVENT_EDGE_BOTTOM,
        ["edge,left"] = __lib._ELM_GENLIST_EVENT_EDGE_LEFT,
        ["edge,right"] = __lib._ELM_GENLIST_EVENT_EDGE_RIGHT,
        ["moved"] = __lib._ELM_GENLIST_EVENT_MOVED,
        ["moved,before"] = __lib._ELM_GENLIST_EVENT_MOVED_BEFORE,
        ["moved,after"] = __lib._ELM_GENLIST_EVENT_MOVED_AFTER,
        ["swipe"] = __lib._ELM_GENLIST_EVENT_SWIPE,
        ["multi,pinch,in"] = __lib._ELM_GENLIST_EVENT_MULTI_PINCH_IN,
        ["multi,pinch,out"] = __lib._ELM_GENLIST_EVENT_MULTI_PINCH_OUT,
        ["multi,swipe,down"] = __lib._ELM_GENLIST_EVENT_MULTI_SWIPE_DOWN,
        ["multi,swipe,up"] = __lib._ELM_GENLIST_EVENT_MULTI_SWIPE_UP,
        ["multi,swipe,right"] = __lib._ELM_GENLIST_EVENT_MULTI_SWIPE_RIGHT,
        ["multi,swipe,left"] = __lib._ELM_GENLIST_EVENT_MULTI_SWIPE_LEFT,
        ["released"] = __lib._ELM_GENLIST_EVENT_RELEASED,
        ["activated"] = __lib._ELM_GENLIST_EVENT_ACTIVATED,
        ["highlighted"] = __lib._ELM_GENLIST_EVENT_HIGHLIGHTED,
        ["unhighlighted"] = __lib._ELM_GENLIST_EVENT_UNHIGHLIGHTED,
        ["realized"] = __lib._ELM_GENLIST_EVENT_REALIZED,
        ["unrealized"] = __lib._ELM_GENLIST_EVENT_UNREALIZED,
        ["contract,request"] = __lib._ELM_GENLIST_EVENT_CONTRACT_REQUEST,
        ["expand,request"] = __lib._ELM_GENLIST_EVENT_EXPAND_REQUEST,
        ["contracted"] = __lib._ELM_GENLIST_EVENT_CONTRACTED,
        ["expanded"] = __lib._ELM_GENLIST_EVENT_EXPANDED,
        ["index,update"] = __lib._ELM_GENLIST_EVENT_INDEX_UPDATE,
        ["tree,effect,finished"] = __lib._ELM_GENLIST_EVENT_TREE_EFFECT_FINISHED,
        ["filter,done"] = __lib._ELM_GENLIST_EVENT_FILTER_DONE
    },

    __properties = {
        ["tree_effect_enabled"] = { 0, 0, 1, 1, true, true },
        ["highlight_mode"] = { 0, 0, 1, 1, true, true },
        ["decorated_item"] = { 0, 0, 1, 0, true, false },
        ["realized_items"] = { 0, 0, 1, 0, true, false },
        ["selected_item"] = { 0, 0, 1, 0, true, false },
        ["block_count"] = { 0, 0, 1, 1, true, true },
        ["first_item"] = { 0, 0, 1, 0, true, false },
        ["filter"] = { 0, 0, 0, 1, false, true },
        ["last_item"] = { 0, 0, 1, 0, true, false },
        ["mode"] = { 0, 0, 1, 1, true, true },
        ["decorate_mode"] = { 0, 0, 1, 1, true, true },
        ["longpress_timeout"] = { 0, 0, 1, 1, true, true },
        ["selected_items"] = { 0, 0, 1, 0, true, false },
        ["reorder_mode"] = { 0, 0, 1, 1, true, true },
        ["multi_select_mode"] = { 0, 0, 1, 1, true, true },
        ["focus_on_selection"] = { 0, 0, 1, 1, true, true },
        ["homogeneous"] = { 0, 0, 1, 1, true, true },
        ["select_mode"] = { 0, 0, 1, 1, true, true },
        ["multi_select"] = { 0, 0, 1, 1, true, true }
    }
}

M.Genlist = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Genlist").__eo_ctor,
                            1, ...)
end

return M
