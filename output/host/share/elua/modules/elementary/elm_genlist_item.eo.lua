-- EFL LuaJIT bindings: elm_genlist_item.eo (class Elm.Genlist.Item)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_genlist_item_class_get()
    eo.class_register("Elm_Genlist_Item", {"Elm_Widget_Item"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_genlist_item_class_get(void);
    Elm_Widget_Item *elm_obj_genlist_item_prev_get(void);
    Elm_Widget_Item *elm_obj_genlist_item_next_get(void);
    Elm_Widget_Item *elm_obj_genlist_item_parent_get(void);
    const Eina_List *elm_obj_genlist_item_subitems_get(void);
    void elm_obj_genlist_item_selected_set(Eina_Bool selected);
    Eina_Bool elm_obj_genlist_item_selected_get(void);
    void elm_obj_genlist_item_expanded_set(Eina_Bool expanded);
    Eina_Bool elm_obj_genlist_item_expanded_get(void);
    int elm_obj_genlist_item_expanded_depth_get(void);
    const Elm_Genlist_Item_Class *elm_obj_genlist_item_class_get(void);
    int elm_obj_genlist_item_index_get(void);
    const char *elm_obj_genlist_item_decorate_mode_get(void);
    void elm_obj_genlist_item_flip_set(Eina_Bool flip);
    Eina_Bool elm_obj_genlist_item_flip_get(void);
    void elm_obj_genlist_item_select_mode_set(Elm_Object_Select_Mode mode);
    Elm_Object_Select_Mode elm_obj_genlist_item_select_mode_get(void);
    Elm_Genlist_Item_Type elm_obj_genlist_item_type_get(void);
    unsigned int elm_obj_genlist_item_subitems_count(void);
    void elm_obj_genlist_item_subitems_clear(void);
    void elm_obj_genlist_item_promote(void);
    void elm_obj_genlist_item_demote(void);
    void elm_obj_genlist_item_show(Elm_Genlist_Item_Scrollto_Type type);
    void elm_obj_genlist_item_bring_in(Elm_Genlist_Item_Scrollto_Type type);
    void elm_obj_genlist_item_all_contents_unset(Eina_List * *l);
    void elm_obj_genlist_item_update(void);
    void elm_obj_genlist_item_fields_update(const char * parts, Elm_Genlist_Item_Field_Type itf);
    void elm_obj_genlist_item_class_update(const Elm_Genlist_Item_Class * itc);
    void elm_obj_genlist_item_decorate_mode_set(const char * decorate_it_type, Eina_Bool decorate_it_set);
]]

local __M = util.get_namespace(M, { "genlist" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    prev_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_prev_get()
        eo.__do_end()
        return v
    end,

    next_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_next_get()
        eo.__do_end()
        return v
    end,

    parent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_parent_get()
        eo.__do_end()
        return v
    end,

    subitems_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_subitems_get()
        eo.__do_end()
        return v
    end,

    selected_set = function(self, selected)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_item_selected_set(selected)
        eo.__do_end()
    end,

    selected_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_selected_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    expanded_set = function(self, expanded)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_item_expanded_set(expanded)
        eo.__do_end()
    end,

    expanded_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_expanded_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    expanded_depth_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_expanded_depth_get()
        eo.__do_end()
        return tonumber(v)
    end,

    item_class_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_class_get()
        eo.__do_end()
        return v
    end,

    index_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_index_get()
        eo.__do_end()
        return tonumber(v)
    end,

    decorate_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_decorate_mode_get()
        eo.__do_end()
        return v
    end,

    flip_set = function(self, flip)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_item_flip_set(flip)
        eo.__do_end()
    end,

    flip_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_flip_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    select_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_item_select_mode_set(mode)
        eo.__do_end()
    end,

    select_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_select_mode_get()
        eo.__do_end()
        return v
    end,

    type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_type_get()
        eo.__do_end()
        return v
    end,

    subitems_count = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_genlist_item_subitems_count()
        eo.__do_end()
        return v
    end,

    subitems_clear = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_item_subitems_clear()
        eo.__do_end()
    end,

    promote = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_item_promote()
        eo.__do_end()
    end,

    demote = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_item_demote()
        eo.__do_end()
    end,

    show = function(self, type)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_item_show(type)
        eo.__do_end()
    end,

    bring_in = function(self, type)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_item_bring_in(type)
        eo.__do_end()
    end,

    all_contents_unset = function(self)
        eo.__do_start(self, __class)
        local l = ffi.new("Eina_List *[1]")
        __lib.elm_obj_genlist_item_all_contents_unset(l)
        eo.__do_end()
        return l[0]
    end,

    update = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_item_update()
        eo.__do_end()
    end,

    fields_update = function(self, parts, itf)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_item_fields_update(parts, itf)
        eo.__do_end()
    end,

    item_class_update = function(self, itc)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_item_class_update(itc)
        eo.__do_end()
    end,

    decorate_mode_set = function(self, decorate_it_type, decorate_it_set)
        eo.__do_start(self, __class)
        __lib.elm_obj_genlist_item_decorate_mode_set(decorate_it_type, decorate_it_set)
        eo.__do_end()
    end,

    __properties = {
        ["expanded"] = { 0, 0, 1, 1, true, true },
        ["prev"] = { 0, 0, 1, 0, true, false },
        ["next"] = { 0, 0, 1, 0, true, false },
        ["parent"] = { 0, 0, 1, 0, true, false },
        ["decorate_mode"] = { 0, 0, 1, 0, true, false },
        ["expanded_depth"] = { 0, 0, 1, 0, true, false },
        ["item_class"] = { 0, 0, 1, 0, true, false },
        ["flip"] = { 0, 0, 1, 1, true, true },
        ["selected"] = { 0, 0, 1, 1, true, true },
        ["type"] = { 0, 0, 1, 0, true, false },
        ["subitems"] = { 0, 0, 1, 0, true, false },
        ["select_mode"] = { 0, 0, 1, 1, true, true },
        ["index"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Item = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Genlist_Item").__eo_ctor,
                            1, ...)
end

return M
