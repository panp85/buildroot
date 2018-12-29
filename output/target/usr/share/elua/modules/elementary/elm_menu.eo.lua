-- EFL LuaJIT bindings: elm_menu.eo (class Elm.Menu)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_menu_class_get()
    eo.class_register("Elm_Menu", {"Elm_Widget", "Efl_Ui_Focus_Manager"}, {"Efl_Ui_Clickable", "Efl_Ui_Menu", "Elm_Interface_Atspi_Selection"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_menu_class_get(void);
    void elm_obj_menu_move(int x, int y);
    Elm_Widget_Item *elm_obj_menu_item_add(Elm_Widget_Item * parent, const char * icon, const char * label, Evas_Smart_Cb func, const void * data);
    void elm_obj_menu_open(void);
    void elm_obj_menu_close(void);
    Elm_Widget_Item *elm_obj_menu_item_separator_add(Elm_Widget_Item * parent);
    extern const Eo_Event_Description _ELM_MENU_EVENT_DISMISSED;
    extern const Eo_Event_Description _ELM_MENU_EVENT_ELM_ACTION_BLOCK_MENU;
    extern const Eo_Event_Description _ELM_MENU_EVENT_ELM_ACTION_UNBLOCK_MENU;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    move = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.elm_obj_menu_move(x, y)
        eo.__do_end()
    end,

    item_add = function(self, parent, icon, label, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_menu_item_add(parent, icon, label, func, data)
        eo.__do_end()
        return v
    end,

    open = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_menu_open()
        eo.__do_end()
    end,

    close = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_menu_close()
        eo.__do_end()
    end,

    item_separator_add = function(self, parent)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_menu_item_separator_add(parent)
        eo.__do_end()
        return v
    end,

    __events = {
        ["dismissed"] = __lib._ELM_MENU_EVENT_DISMISSED,
        ["elm,action,block_menu"] = __lib._ELM_MENU_EVENT_ELM_ACTION_BLOCK_MENU,
        ["elm,action,unblock_menu"] = __lib._ELM_MENU_EVENT_ELM_ACTION_UNBLOCK_MENU
    }
}

M.Menu = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Menu").__eo_ctor,
                            1, ...)
end

return M
