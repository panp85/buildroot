-- EFL LuaJIT bindings: elm_gengrid.eo (class Elm.Gengrid)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_gengrid_class_get()
    eo.class_register("Elm_Gengrid", {"Elm_Layout"}, {"Elm_Interface_Scrollable", "Efl_Ui_Clickable", "Elm_Interface_Atspi_Widget_Action", "Elm_Interface_Atspi_Selection"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_gengrid_class_get(void);
    void elm_obj_gengrid_align_set(double align_x, double align_y);
    void elm_obj_gengrid_align_get(double *align_x, double *align_y);
    void elm_obj_gengrid_filled_set(Eina_Bool fill);
    Eina_Bool elm_obj_gengrid_filled_get(void);
    void elm_obj_gengrid_page_relative_set(double h_pagerel, double v_pagerel);
    void elm_obj_gengrid_page_relative_get(double *h_pagerel, double *v_pagerel);
    void elm_obj_gengrid_multi_select_set(Eina_Bool multi);
    Eina_Bool elm_obj_gengrid_multi_select_get(void);
    void elm_obj_gengrid_group_item_size_set(int w, int h);
    void elm_obj_gengrid_group_item_size_get(int *w, int *h);
    void elm_obj_gengrid_select_mode_set(Elm_Object_Select_Mode mode);
    Elm_Object_Select_Mode elm_obj_gengrid_select_mode_get(void);
    void elm_obj_gengrid_reorder_mode_set(Eina_Bool reorder_mode);
    Eina_Bool elm_obj_gengrid_reorder_mode_get(void);
    void elm_obj_gengrid_highlight_mode_set(Eina_Bool highlight);
    Eina_Bool elm_obj_gengrid_highlight_mode_get(void);
    void elm_obj_gengrid_reorder_type_set(Elm_Gengrid_Reorder_Type type);
    void elm_obj_gengrid_item_size_set(int w, int h);
    void elm_obj_gengrid_item_size_get(int *w, int *h);
    void elm_obj_gengrid_multi_select_mode_set(Elm_Object_Multi_Select_Mode mode);
    Elm_Object_Multi_Select_Mode elm_obj_gengrid_multi_select_mode_get(void);
    void elm_obj_gengrid_horizontal_set(Eina_Bool horizontal);
    Eina_Bool elm_obj_gengrid_horizontal_get(void);
    void elm_obj_gengrid_page_size_set(int h_pagesize, int v_pagesize);
    Elm_Widget_Item *elm_obj_gengrid_selected_item_get(void);
    Eina_List *elm_obj_gengrid_realized_items_get(void);
    Elm_Widget_Item *elm_obj_gengrid_first_item_get(void);
    const Eina_List *elm_obj_gengrid_selected_items_get(void);
    Elm_Widget_Item *elm_obj_gengrid_last_item_get(void);
    void elm_obj_gengrid_wheel_disabled_set(Eina_Bool disabled);
    Eina_Bool elm_obj_gengrid_wheel_disabled_get(void);
    Elm_Widget_Item *elm_obj_gengrid_item_insert_before(const Elm_Gengrid_Item_Class * itc, const void * data, Elm_Widget_Item * relative, Evas_Smart_Cb func, const void * func_data);
    void elm_obj_gengrid_realized_items_update(void);
    Elm_Widget_Item *elm_obj_gengrid_item_insert_after(const Elm_Gengrid_Item_Class * itc, const void * data, Elm_Widget_Item * relative, Evas_Smart_Cb func, const void * func_data);
    unsigned int elm_obj_gengrid_items_count(void);
    Elm_Widget_Item *elm_obj_gengrid_at_xy_item_get(int x, int y, int *xposret, int *yposret);
    Elm_Widget_Item *elm_obj_gengrid_item_append(const Elm_Gengrid_Item_Class * itc, const void * data, Evas_Smart_Cb func, const void * func_data);
    Elm_Widget_Item *elm_obj_gengrid_item_prepend(const Elm_Gengrid_Item_Class * itc, const void * data, Evas_Smart_Cb func, const void * func_data);
    void elm_obj_gengrid_clear(void);
    Elm_Widget_Item *elm_obj_gengrid_item_sorted_insert(const Elm_Gengrid_Item_Class * itc, const void * data, Eina_Compare_Cb comp, Evas_Smart_Cb func, const void * func_data);
    Elm_Widget_Item *elm_obj_gengrid_search_by_text_item_get(Elm_Widget_Item * item_to_search_from, const char * part_name, const char * pattern, Elm_Glob_Match_Flags flags);
    void elm_obj_gengrid_reorder_mode_start(Ecore_Pos_Map tween_mode);
    void elm_obj_gengrid_reorder_mode_stop(void);
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_REALIZED;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_UNREALIZED;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_INDEX_UPDATE;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_SCROLL_PAGE_CHANGED;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_EDGE_BOTTOM;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_EDGE_TOP;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_EDGE_RIGHT;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_EDGE_LEFT;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_ITEM_FOCUSED;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_ITEM_UNFOCUSED;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_ITEM_REORDER_ANIM_START;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_ITEM_REORDER_ANIM_STOP;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_ACTIVATED;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_HIGHLIGHTED;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_UNHIGHLIGHTED;
    extern const Eo_Event_Description _ELM_GENGRID_EVENT_RELEASED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    align_set = function(self, align_x, align_y)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_align_set(align_x, align_y)
        eo.__do_end()
    end,

    align_get = function(self)
        eo.__do_start(self, __class)
        local align_x = ffi.new("double[1]")
        local align_y = ffi.new("double[1]")
        __lib.elm_obj_gengrid_align_get(align_x, align_y)
        eo.__do_end()
        return tonumber(align_x[0]), tonumber(align_y[0])
    end,

    filled_set = function(self, fill)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_filled_set(fill)
        eo.__do_end()
    end,

    filled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_filled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    page_relative_set = function(self, h_pagerel, v_pagerel)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_page_relative_set(h_pagerel, v_pagerel)
        eo.__do_end()
    end,

    page_relative_get = function(self)
        eo.__do_start(self, __class)
        local h_pagerel = ffi.new("double[1]")
        local v_pagerel = ffi.new("double[1]")
        __lib.elm_obj_gengrid_page_relative_get(h_pagerel, v_pagerel)
        eo.__do_end()
        return tonumber(h_pagerel[0]), tonumber(v_pagerel[0])
    end,

    multi_select_set = function(self, multi)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_multi_select_set(multi)
        eo.__do_end()
    end,

    multi_select_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_multi_select_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    group_item_size_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_group_item_size_set(w, h)
        eo.__do_end()
    end,

    group_item_size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.elm_obj_gengrid_group_item_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    select_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_select_mode_set(mode)
        eo.__do_end()
    end,

    select_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_select_mode_get()
        eo.__do_end()
        return v
    end,

    reorder_mode_set = function(self, reorder_mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_reorder_mode_set(reorder_mode)
        eo.__do_end()
    end,

    reorder_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_reorder_mode_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    highlight_mode_set = function(self, highlight)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_highlight_mode_set(highlight)
        eo.__do_end()
    end,

    highlight_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_highlight_mode_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    reorder_type_set = function(self, type)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_reorder_type_set(type)
        eo.__do_end()
    end,

    item_size_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_item_size_set(w, h)
        eo.__do_end()
    end,

    item_size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.elm_obj_gengrid_item_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    multi_select_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_multi_select_mode_set(mode)
        eo.__do_end()
    end,

    multi_select_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_multi_select_mode_get()
        eo.__do_end()
        return v
    end,

    horizontal_set = function(self, horizontal)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_horizontal_set(horizontal)
        eo.__do_end()
    end,

    horizontal_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_horizontal_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    page_size_set = function(self, h_pagesize, v_pagesize)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_page_size_set(h_pagesize, v_pagesize)
        eo.__do_end()
    end,

    selected_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_selected_item_get()
        eo.__do_end()
    end,

    realized_items_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_realized_items_get()
        eo.__do_end()
    end,

    first_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_first_item_get()
        eo.__do_end()
    end,

    selected_items_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_selected_items_get()
        eo.__do_end()
    end,

    last_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_last_item_get()
        eo.__do_end()
    end,

    wheel_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_wheel_disabled_set(disabled)
        eo.__do_end()
    end,

    wheel_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_wheel_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    item_insert_before = function(self, itc, data, relative, func, func_data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_item_insert_before(itc, data, relative, func, func_data)
        eo.__do_end()
        return v
    end,

    realized_items_update = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_realized_items_update()
        eo.__do_end()
    end,

    item_insert_after = function(self, itc, data, relative, func, func_data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_item_insert_after(itc, data, relative, func, func_data)
        eo.__do_end()
        return v
    end,

    items_count = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_items_count()
        eo.__do_end()
        return v
    end,

    at_xy_item_get = function(self, x, y)
        eo.__do_start(self, __class)
        local xposret = ffi.new("int[1]")
        local yposret = ffi.new("int[1]")
        local v = __lib.elm_obj_gengrid_at_xy_item_get(x, y, xposret, yposret)
        eo.__do_end()
        return v, tonumber(xposret[0]), tonumber(yposret[0])
    end,

    item_append = function(self, itc, data, func, func_data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_item_append(itc, data, func, func_data)
        eo.__do_end()
        return v
    end,

    item_prepend = function(self, itc, data, func, func_data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_item_prepend(itc, data, func, func_data)
        eo.__do_end()
        return v
    end,

    clear = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_clear()
        eo.__do_end()
    end,

    item_sorted_insert = function(self, itc, data, comp, func, func_data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_item_sorted_insert(itc, data, comp, func, func_data)
        eo.__do_end()
        return v
    end,

    search_by_text_item_get = function(self, item_to_search_from, part_name, pattern, flags)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_search_by_text_item_get(item_to_search_from, part_name, pattern, flags)
        eo.__do_end()
        return v
    end,

    reorder_mode_start = function(self, tween_mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_reorder_mode_start(tween_mode)
        eo.__do_end()
    end,

    reorder_mode_stop = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_reorder_mode_stop()
        eo.__do_end()
    end,

    __events = {
        ["realized"] = __lib._ELM_GENGRID_EVENT_REALIZED,
        ["unrealized"] = __lib._ELM_GENGRID_EVENT_UNREALIZED,
        ["index,update"] = __lib._ELM_GENGRID_EVENT_INDEX_UPDATE,
        ["scroll,page,changed"] = __lib._ELM_GENGRID_EVENT_SCROLL_PAGE_CHANGED,
        ["edge,bottom"] = __lib._ELM_GENGRID_EVENT_EDGE_BOTTOM,
        ["edge,top"] = __lib._ELM_GENGRID_EVENT_EDGE_TOP,
        ["edge,right"] = __lib._ELM_GENGRID_EVENT_EDGE_RIGHT,
        ["edge,left"] = __lib._ELM_GENGRID_EVENT_EDGE_LEFT,
        ["item,focused"] = __lib._ELM_GENGRID_EVENT_ITEM_FOCUSED,
        ["item,unfocused"] = __lib._ELM_GENGRID_EVENT_ITEM_UNFOCUSED,
        ["item,reorder,anim,start"] = __lib._ELM_GENGRID_EVENT_ITEM_REORDER_ANIM_START,
        ["item,reorder,anim,stop"] = __lib._ELM_GENGRID_EVENT_ITEM_REORDER_ANIM_STOP,
        ["activated"] = __lib._ELM_GENGRID_EVENT_ACTIVATED,
        ["highlighted"] = __lib._ELM_GENGRID_EVENT_HIGHLIGHTED,
        ["unhighlighted"] = __lib._ELM_GENGRID_EVENT_UNHIGHLIGHTED,
        ["released"] = __lib._ELM_GENGRID_EVENT_RELEASED
    },

    __properties = {
        ["highlight_mode"] = { 0, 0, 1, 1, true, true },
        ["horizontal"] = { 0, 0, 1, 1, true, true },
        ["realized_items"] = { 0, 0, 1, 0, true, false },
        ["selected_item"] = { 0, 0, 1, 0, true, false },
        ["selected_items"] = { 0, 0, 1, 0, true, false },
        ["page_size"] = { 0, 0, 0, 2, false, true },
        ["first_item"] = { 0, 0, 1, 0, true, false },
        ["wheel_disabled"] = { 0, 0, 1, 1, true, true },
        ["item_size"] = { 0, 0, 2, 2, true, true },
        ["last_item"] = { 0, 0, 1, 0, true, false },
        ["reorder_mode"] = { 0, 0, 1, 1, true, true },
        ["page_relative"] = { 0, 0, 2, 2, true, true },
        ["select_mode"] = { 0, 0, 1, 1, true, true },
        ["multi_select"] = { 0, 0, 1, 1, true, true },
        ["multi_select_mode"] = { 0, 0, 1, 1, true, true },
        ["filled"] = { 0, 0, 1, 1, true, true },
        ["align"] = { 0, 0, 2, 2, true, true },
        ["group_item_size"] = { 0, 0, 2, 2, true, true },
        ["reorder_type"] = { 0, 0, 0, 1, false, true }
    }
}

M.Gengrid = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Gengrid").__eo_ctor,
                            1, ...)
end

return M
