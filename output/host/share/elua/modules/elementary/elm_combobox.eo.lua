-- EFL LuaJIT bindings: elm_combobox.eo (class Elm.Combobox)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_combobox_class_get()
    eo.class_register("Elm_Combobox", {"Efl_Ui_Button", "Elm_Entry", "Elm_Genlist", "Elm_Hover"}, {"Efl_Ui_Selectable", "Elm_Interface_Atspi_Widget_Action"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_combobox_class_get(void);
    Eina_Bool elm_obj_combobox_expanded_get(void);
    void elm_obj_combobox_hover_begin(void);
    void elm_obj_combobox_hover_end(void);
    extern const Eo_Event_Description _ELM_COMBOBOX_EVENT_DISMISSED;
    extern const Eo_Event_Description _ELM_COMBOBOX_EVENT_EXPANDED;
    extern const Eo_Event_Description _ELM_COMBOBOX_EVENT_CLICKED;
    extern const Eo_Event_Description _ELM_COMBOBOX_EVENT_ITEM_SELECTED;
    extern const Eo_Event_Description _ELM_COMBOBOX_EVENT_ITEM_PRESSED;
    extern const Eo_Event_Description _ELM_COMBOBOX_EVENT_FILTER_DONE;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    expanded_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_combobox_expanded_get()
        eo.__do_end()
    end,

    hover_begin = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_combobox_hover_begin()
        eo.__do_end()
    end,

    hover_end = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_combobox_hover_end()
        eo.__do_end()
    end,

    __events = {
        ["dismissed"] = __lib._ELM_COMBOBOX_EVENT_DISMISSED,
        ["expanded"] = __lib._ELM_COMBOBOX_EVENT_EXPANDED,
        ["clicked"] = __lib._ELM_COMBOBOX_EVENT_CLICKED,
        ["item,selected"] = __lib._ELM_COMBOBOX_EVENT_ITEM_SELECTED,
        ["item,pressed"] = __lib._ELM_COMBOBOX_EVENT_ITEM_PRESSED,
        ["filter,done"] = __lib._ELM_COMBOBOX_EVENT_FILTER_DONE
    },

    __properties = {
        ["expanded"] = { 0, 0, 1, 0, true, false }
    }
}

M.Combobox = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Combobox").__eo_ctor,
                            1, ...)
end

return M
