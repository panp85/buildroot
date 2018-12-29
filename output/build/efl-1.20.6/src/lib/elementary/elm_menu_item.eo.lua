-- EFL LuaJIT bindings: elm_menu_item.eo (class Elm.Menu.Item)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_menu_item_class_get()
    eo.class_register("Elm_Menu_Item", {"Elm_Widget_Item"}, {"Elm_Interface_Atspi_Selection", "Efl_Ui_Item"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_menu_item_class_get(void);
    void elm_obj_menu_item_icon_name_set(const char * icon);
    const char *elm_obj_menu_item_icon_name_get(void);
    unsigned int elm_obj_menu_item_index_get(void);
    void elm_obj_menu_item_subitems_clear(void);
    const Eina_List *elm_obj_menu_item_subitems_get(void);
    Eina_Bool elm_obj_menu_item_is_separator(void);
    Efl_Canvas_Object *elm_obj_menu_item_object_get(void);
]]

local __M = util.get_namespace(M, { "menu" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    icon_name_set = function(self, icon)
        eo.__do_start(self, __class)
        __lib.elm_obj_menu_item_icon_name_set(icon)
        eo.__do_end()
    end,

    icon_name_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_menu_item_icon_name_get()
        eo.__do_end()
        return v
    end,

    index_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_menu_item_index_get()
        eo.__do_end()
        return v
    end,

    subitems_clear = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_menu_item_subitems_clear()
        eo.__do_end()
    end,

    subitems_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_menu_item_subitems_get()
        eo.__do_end()
        return v
    end,

    is_separator = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_menu_item_is_separator()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    object_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_menu_item_object_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["icon_name"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Item = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Menu_Item").__eo_ctor,
                            1, ...)
end

return M
