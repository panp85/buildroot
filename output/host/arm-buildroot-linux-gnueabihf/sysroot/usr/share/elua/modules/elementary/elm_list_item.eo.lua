-- EFL LuaJIT bindings: elm_list_item.eo (class Elm.List.Item)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_list_item_class_get()
    eo.class_register("Elm_List_Item", {"Elm_Widget_Item"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_list_item_class_get(void);
    void elm_obj_list_item_separator_set(Eina_Bool setting);
    Eina_Bool elm_obj_list_item_separator_get(void);
    void elm_obj_list_item_selected_set(Eina_Bool selected);
    Eina_Bool elm_obj_list_item_selected_get(void);
    Efl_Canvas_Object *elm_obj_list_item_object_get(void);
    Elm_Widget_Item *elm_obj_list_item_prev_get(void);
    Elm_Widget_Item *elm_obj_list_item_next_get(void);
    void elm_obj_list_item_show(void);
    void elm_obj_list_item_bring_in(void);
]]

local __M = util.get_namespace(M, { "list" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    separator_set = function(self, setting)
        eo.__do_start(self, __class)
        __lib.elm_obj_list_item_separator_set(setting)
        eo.__do_end()
    end,

    separator_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_item_separator_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    selected_set = function(self, selected)
        eo.__do_start(self, __class)
        __lib.elm_obj_list_item_selected_set(selected)
        eo.__do_end()
    end,

    selected_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_item_selected_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    object_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_item_object_get()
        eo.__do_end()
        return v
    end,

    prev_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_item_prev_get()
        eo.__do_end()
        return v
    end,

    next_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_list_item_next_get()
        eo.__do_end()
        return v
    end,

    show = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_list_item_show()
        eo.__do_end()
    end,

    bring_in = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_list_item_bring_in()
        eo.__do_end()
    end,

    __properties = {
        ["object"] = { 0, 0, 1, 0, true, false },
        ["selected"] = { 0, 0, 1, 1, true, true },
        ["separator"] = { 0, 0, 1, 1, true, true },
        ["next"] = { 0, 0, 1, 0, true, false },
        ["prev"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Item = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_List_Item").__eo_ctor,
                            1, ...)
end

return M
