-- EFL LuaJIT bindings: elm_colorselector.eo (class Elm.Colorselector)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_colorselector_class_get()
    eo.class_register("Elm_Colorselector", {"Elm_Layout"}, {"Elm_Interface_Atspi_Widget_Action", "Efl_Ui_Clickable"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_colorselector_class_get(void);
    void elm_obj_colorselector_color_set(int r, int g, int b, int a);
    void elm_obj_colorselector_color_get(int *r, int *g, int *b, int *a);
    void elm_obj_colorselector_palette_name_set(const char * palette_name);
    const char *elm_obj_colorselector_palette_name_get(void);
    void elm_obj_colorselector_mode_set(Elm_Colorselector_Mode mode);
    Elm_Colorselector_Mode elm_obj_colorselector_mode_get(void);
    const Eina_List *elm_obj_colorselector_palette_items_get(void);
    Elm_Widget_Item *elm_obj_colorselector_palette_selected_item_get(void);
    Elm_Widget_Item *elm_obj_colorselector_palette_color_add(int r, int g, int b, int a);
    void elm_obj_colorselector_palette_clear(void);
    extern const Eo_Event_Description _ELM_COLORSELECTOR_EVENT_COLOR_ITEM_SELECTED;
    extern const Eo_Event_Description _ELM_COLORSELECTOR_EVENT_COLOR_ITEM_LONGPRESSED;
    extern const Eo_Event_Description _ELM_COLORSELECTOR_EVENT_CHANGED;
    extern const Eo_Event_Description _ELM_COLORSELECTOR_EVENT_CHANGED_USER;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.elm_obj_colorselector_color_set(r, g, b, a)
        eo.__do_end()
    end,

    color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        __lib.elm_obj_colorselector_color_get(r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    palette_name_set = function(self, palette_name)
        eo.__do_start(self, __class)
        __lib.elm_obj_colorselector_palette_name_set(palette_name)
        eo.__do_end()
    end,

    palette_name_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_colorselector_palette_name_get()
        eo.__do_end()
        return v
    end,

    mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_colorselector_mode_set(mode)
        eo.__do_end()
    end,

    mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_colorselector_mode_get()
        eo.__do_end()
        return v
    end,

    palette_items_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_colorselector_palette_items_get()
        eo.__do_end()
    end,

    palette_selected_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_colorselector_palette_selected_item_get()
        eo.__do_end()
    end,

    palette_color_add = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_colorselector_palette_color_add(r, g, b, a)
        eo.__do_end()
        return v
    end,

    palette_clear = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_colorselector_palette_clear()
        eo.__do_end()
    end,

    __events = {
        ["color,item,selected"] = __lib._ELM_COLORSELECTOR_EVENT_COLOR_ITEM_SELECTED,
        ["color,item,longpressed"] = __lib._ELM_COLORSELECTOR_EVENT_COLOR_ITEM_LONGPRESSED,
        ["changed"] = __lib._ELM_COLORSELECTOR_EVENT_CHANGED,
        ["changed,user"] = __lib._ELM_COLORSELECTOR_EVENT_CHANGED_USER
    },

    __properties = {
        ["palette_items"] = { 0, 0, 1, 0, true, false },
        ["color"] = { 0, 0, 4, 4, true, true },
        ["palette_selected_item"] = { 0, 0, 1, 0, true, false },
        ["mode"] = { 0, 0, 1, 1, true, true },
        ["palette_name"] = { 0, 0, 1, 1, true, true }
    }
}

M.Colorselector = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Colorselector").__eo_ctor,
                            1, ...)
end

return M
