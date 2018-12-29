-- EFL LuaJIT bindings: elm_index.eo (class Elm.Index)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_index_class_get()
    eo.class_register("Elm_Index", {"Elm_Layout"}, {"Efl_Orientation", "Efl_Ui_Clickable", "Efl_Ui_Selectable"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_index_class_get(void);
    void elm_obj_index_autohide_disabled_set(Eina_Bool disabled);
    Eina_Bool elm_obj_index_autohide_disabled_get(void);
    void elm_obj_index_omit_enabled_set(Eina_Bool enabled);
    Eina_Bool elm_obj_index_omit_enabled_get(void);
    void elm_obj_index_standard_priority_set(int priority);
    int elm_obj_index_standard_priority_get(void);
    void elm_obj_index_delay_change_time_set(double dtime);
    double elm_obj_index_delay_change_time_get(void);
    void elm_obj_index_indicator_disabled_set(Eina_Bool disabled);
    Eina_Bool elm_obj_index_indicator_disabled_get(void);
    void elm_obj_index_item_level_set(int level);
    int elm_obj_index_item_level_get(void);
    void elm_obj_index_level_go(int level);
    Elm_Widget_Item *elm_obj_index_item_prepend(const char * letter, Evas_Smart_Cb func, const void * data);
    void elm_obj_index_item_clear(void);
    Elm_Widget_Item *elm_obj_index_item_insert_after(Elm_Widget_Item * after, const char * letter, Evas_Smart_Cb func, const void * data);
    Elm_Widget_Item *elm_obj_index_item_find(const void * data);
    Elm_Widget_Item *elm_obj_index_item_insert_before(Elm_Widget_Item * before, const char * letter, Evas_Smart_Cb func, const void * data);
    Elm_Widget_Item *elm_obj_index_item_append(const char * letter, Evas_Smart_Cb func, const void * data);
    Elm_Widget_Item *elm_obj_index_selected_item_get(int level);
    Elm_Widget_Item *elm_obj_index_item_sorted_insert(const char * letter, Evas_Smart_Cb func, const void * data, Eina_Compare_Cb cmp_func, Eina_Compare_Cb cmp_data_func);
    extern const Eo_Event_Description _ELM_INDEX_EVENT_CHANGED;
    extern const Eo_Event_Description _ELM_INDEX_EVENT_DELAY_CHANGED;
    extern const Eo_Event_Description _ELM_INDEX_EVENT_LEVEL_UP;
    extern const Eo_Event_Description _ELM_INDEX_EVENT_LEVEL_DOWN;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    autohide_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_index_autohide_disabled_set(disabled)
        eo.__do_end()
    end,

    autohide_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_index_autohide_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    omit_enabled_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_index_omit_enabled_set(enabled)
        eo.__do_end()
    end,

    omit_enabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_index_omit_enabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    standard_priority_set = function(self, priority)
        eo.__do_start(self, __class)
        __lib.elm_obj_index_standard_priority_set(priority)
        eo.__do_end()
    end,

    standard_priority_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_index_standard_priority_get()
        eo.__do_end()
        return tonumber(v)
    end,

    delay_change_time_set = function(self, dtime)
        eo.__do_start(self, __class)
        __lib.elm_obj_index_delay_change_time_set(dtime)
        eo.__do_end()
    end,

    delay_change_time_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_index_delay_change_time_get()
        eo.__do_end()
        return tonumber(v)
    end,

    indicator_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_index_indicator_disabled_set(disabled)
        eo.__do_end()
    end,

    indicator_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_index_indicator_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    item_level_set = function(self, level)
        eo.__do_start(self, __class)
        __lib.elm_obj_index_item_level_set(level)
        eo.__do_end()
    end,

    item_level_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_index_item_level_get()
        eo.__do_end()
        return tonumber(v)
    end,

    level_go = function(self, level)
        eo.__do_start(self, __class)
        __lib.elm_obj_index_level_go(level)
        eo.__do_end()
    end,

    item_prepend = function(self, letter, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_index_item_prepend(letter, func, data)
        eo.__do_end()
        return v
    end,

    item_clear = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_index_item_clear()
        eo.__do_end()
    end,

    item_insert_after = function(self, after, letter, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_index_item_insert_after(after, letter, func, data)
        eo.__do_end()
        return v
    end,

    item_find = function(self, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_index_item_find(data)
        eo.__do_end()
        return v
    end,

    item_insert_before = function(self, before, letter, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_index_item_insert_before(before, letter, func, data)
        eo.__do_end()
        return v
    end,

    item_append = function(self, letter, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_index_item_append(letter, func, data)
        eo.__do_end()
        return v
    end,

    selected_item_get = function(self, level)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_index_selected_item_get(level)
        eo.__do_end()
        return v
    end,

    item_sorted_insert = function(self, letter, func, data, cmp_func, cmp_data_func)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_index_item_sorted_insert(letter, func, data, cmp_func, cmp_data_func)
        eo.__do_end()
        return v
    end,

    __events = {
        ["changed"] = __lib._ELM_INDEX_EVENT_CHANGED,
        ["delay,changed"] = __lib._ELM_INDEX_EVENT_DELAY_CHANGED,
        ["level,up"] = __lib._ELM_INDEX_EVENT_LEVEL_UP,
        ["level,down"] = __lib._ELM_INDEX_EVENT_LEVEL_DOWN
    },

    __properties = {
        ["autohide_disabled"] = { 0, 0, 1, 1, true, true },
        ["delay_change_time"] = { 0, 0, 1, 1, true, true },
        ["item_level"] = { 0, 0, 1, 1, true, true },
        ["omit_enabled"] = { 0, 0, 1, 1, true, true },
        ["indicator_disabled"] = { 0, 0, 1, 1, true, true },
        ["standard_priority"] = { 0, 0, 1, 1, true, true }
    }
}

M.Index = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Index").__eo_ctor,
                            1, ...)
end

return M
