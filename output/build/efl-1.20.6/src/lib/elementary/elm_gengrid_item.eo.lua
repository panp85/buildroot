-- EFL LuaJIT bindings: elm_gengrid_item.eo (class Elm.Gengrid.Item)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_gengrid_item_class_get()
    eo.class_register("Elm_Gengrid_Item", {"Elm_Widget_Item"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_gengrid_item_class_get(void);
    Elm_Widget_Item *elm_obj_gengrid_item_prev_get(void);
    Elm_Widget_Item *elm_obj_gengrid_item_next_get(void);
    void elm_obj_gengrid_item_selected_set(Eina_Bool selected);
    Eina_Bool elm_obj_gengrid_item_selected_get(void);
    const Elm_Gengrid_Item_Class *elm_obj_gengrid_item_class_get(void);
    int elm_obj_gengrid_item_index_get(void);
    void elm_obj_gengrid_item_pos_get(unsigned int *x, unsigned int *y);
    void elm_obj_gengrid_item_select_mode_set(Elm_Object_Select_Mode mode);
    Elm_Object_Select_Mode elm_obj_gengrid_item_select_mode_get(void);
    void elm_obj_gengrid_item_custom_size_set(int w, int h);
    void elm_obj_gengrid_item_custom_size_get(int *w, int *h);
    void elm_obj_gengrid_item_show(Elm_Gengrid_Item_Scrollto_Type type);
    void elm_obj_gengrid_item_bring_in(Elm_Gengrid_Item_Scrollto_Type type);
    void elm_obj_gengrid_item_update(void);
    void elm_obj_gengrid_item_fields_update(const char * parts, Elm_Gengrid_Item_Field_Type itf);
    void elm_obj_gengrid_item_class_update(const Elm_Gengrid_Item_Class * itc);
    void elm_obj_gengrid_item_all_contents_unset(Eina_List * *l);
]]

local __M = util.get_namespace(M, { "gengrid" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    prev_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_item_prev_get()
        eo.__do_end()
        return v
    end,

    next_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_item_next_get()
        eo.__do_end()
        return v
    end,

    selected_set = function(self, selected)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_item_selected_set(selected)
        eo.__do_end()
    end,

    selected_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_item_selected_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    item_class_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_item_class_get()
        eo.__do_end()
        return v
    end,

    index_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_item_index_get()
        eo.__do_end()
        return tonumber(v)
    end,

    pos_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("unsigned int[1]")
        local y = ffi.new("unsigned int[1]")
        __lib.elm_obj_gengrid_item_pos_get(x, y)
        eo.__do_end()
        return x[0], y[0]
    end,

    select_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_item_select_mode_set(mode)
        eo.__do_end()
    end,

    select_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_gengrid_item_select_mode_get()
        eo.__do_end()
        return v
    end,

    custom_size_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_item_custom_size_set(w, h)
        eo.__do_end()
    end,

    custom_size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.elm_obj_gengrid_item_custom_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    show = function(self, type)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_item_show(type)
        eo.__do_end()
    end,

    bring_in = function(self, type)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_item_bring_in(type)
        eo.__do_end()
    end,

    update = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_item_update()
        eo.__do_end()
    end,

    fields_update = function(self, parts, itf)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_item_fields_update(parts, itf)
        eo.__do_end()
    end,

    item_class_update = function(self, itc)
        eo.__do_start(self, __class)
        __lib.elm_obj_gengrid_item_class_update(itc)
        eo.__do_end()
    end,

    all_contents_unset = function(self)
        eo.__do_start(self, __class)
        local l = ffi.new("Eina_List *[1]")
        __lib.elm_obj_gengrid_item_all_contents_unset(l)
        eo.__do_end()
        return l[0]
    end,

    __properties = {
        ["custom_size"] = { 0, 0, 2, 2, true, true },
        ["item_class"] = { 0, 0, 1, 0, true, false },
        ["pos"] = { 0, 0, 2, 0, true, false },
        ["selected"] = { 0, 0, 1, 1, true, true },
        ["prev"] = { 0, 0, 1, 0, true, false },
        ["next"] = { 0, 0, 1, 0, true, false },
        ["select_mode"] = { 0, 0, 1, 1, true, true },
        ["index"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Item = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Gengrid_Item").__eo_ctor,
                            1, ...)
end

return M
