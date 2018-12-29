-- EFL LuaJIT bindings: elm_toolbar_item.eo (class Elm.Toolbar.Item)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_toolbar_item_class_get()
    eo.class_register("Elm_Toolbar_Item", {"Elm_Widget_Item"}, {"Efl_Ui_Item", "Efl_Ui_Focus_Object"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_toolbar_item_class_get(void);
    void elm_obj_toolbar_item_priority_set(int priority);
    int elm_obj_toolbar_item_priority_get(void);
    void elm_obj_toolbar_item_icon_set(const char * icon);
    const char *elm_obj_toolbar_item_icon_get(void);
    Efl_Canvas_Object *elm_obj_toolbar_item_object_get(void);
    Efl_Canvas_Object *elm_obj_toolbar_item_icon_object_get(void);
    void elm_obj_toolbar_item_separator_set(Eina_Bool separator);
    Eina_Bool elm_obj_toolbar_item_separator_get(void);
    Efl_Canvas_Object *elm_obj_toolbar_item_menu_get(void);
    Eina_Bool elm_obj_toolbar_item_state_set(Elm_Toolbar_Item_State * state);
    Elm_Toolbar_Item_State *elm_obj_toolbar_item_state_get(void);
    Eina_Bool elm_obj_toolbar_item_icon_memfile_set(const void * img, size_t size, const char * format, const char * key);
    Eina_Bool elm_obj_toolbar_item_icon_file_set(const char * file, const char * key);
    Elm_Toolbar_Item_State *elm_obj_toolbar_item_state_add(const char * icon, const char * label, Evas_Smart_Cb func, const void * data);
    Eina_Bool elm_obj_toolbar_item_state_del(Elm_Toolbar_Item_State * state);
    Elm_Toolbar_Item_State *elm_obj_toolbar_item_state_next(void);
    Elm_Toolbar_Item_State *elm_obj_toolbar_item_state_prev(void);
    void elm_obj_toolbar_item_show(Elm_Toolbar_Item_Scrollto_Type scrollto);
    void elm_obj_toolbar_item_bring_in(Elm_Toolbar_Item_Scrollto_Type scrollto);
    void elm_obj_toolbar_item_menu_set(Eina_Bool menu);
]]

local __M = util.get_namespace(M, { "toolbar" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    priority_set = function(self, priority)
        eo.__do_start(self, __class)
        __lib.elm_obj_toolbar_item_priority_set(priority)
        eo.__do_end()
    end,

    priority_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_priority_get()
        eo.__do_end()
        return tonumber(v)
    end,

    icon_set = function(self, icon)
        eo.__do_start(self, __class)
        __lib.elm_obj_toolbar_item_icon_set(icon)
        eo.__do_end()
    end,

    icon_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_icon_get()
        eo.__do_end()
        return v
    end,

    object_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_object_get()
        eo.__do_end()
        return v
    end,

    icon_object_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_icon_object_get()
        eo.__do_end()
        return v
    end,

    separator_set = function(self, separator)
        eo.__do_start(self, __class)
        __lib.elm_obj_toolbar_item_separator_set(separator)
        eo.__do_end()
    end,

    separator_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_separator_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    menu_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_menu_get()
        eo.__do_end()
        return v
    end,

    state_set = function(self, state)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_state_set(state)
        eo.__do_end()
    end,

    state_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_state_get()
        eo.__do_end()
        return v
    end,

    icon_memfile_set = function(self, img, size, format, key)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_icon_memfile_set(img, size, format, key)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    icon_file_set = function(self, file, key)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_icon_file_set(file, key)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    state_add = function(self, icon, label, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_state_add(icon, label, func, data)
        eo.__do_end()
        return v
    end,

    state_del = function(self, state)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_state_del(state)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    state_next = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_state_next()
        eo.__do_end()
        return v
    end,

    state_prev = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_toolbar_item_state_prev()
        eo.__do_end()
        return v
    end,

    show = function(self, scrollto)
        eo.__do_start(self, __class)
        __lib.elm_obj_toolbar_item_show(scrollto)
        eo.__do_end()
    end,

    bring_in = function(self, scrollto)
        eo.__do_start(self, __class)
        __lib.elm_obj_toolbar_item_bring_in(scrollto)
        eo.__do_end()
    end,

    menu_set = function(self, menu)
        eo.__do_start(self, __class)
        __lib.elm_obj_toolbar_item_menu_set(menu)
        eo.__do_end()
    end,

    __properties = {
        ["object"] = { 0, 0, 1, 0, true, false },
        ["menu"] = { 0, 0, 1, 0, true, false },
        ["icon"] = { 0, 0, 1, 1, true, true },
        ["separator"] = { 0, 0, 1, 1, true, true },
        ["state"] = { 0, 0, 1, 1, true, true },
        ["icon_object"] = { 0, 0, 1, 0, true, false },
        ["priority"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Item = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Toolbar_Item").__eo_ctor,
                            1, ...)
end

return M
