-- EFL LuaJIT bindings: elm_ctxpopup.eo (class Elm.Ctxpopup)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_ctxpopup_class_get()
    eo.class_register("Elm_Ctxpopup", {"Elm_Layout"}, {"Elm_Interface_Atspi_Widget_Action", "Efl_Orientation", "Efl_Ui_Menu"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_ctxpopup_class_get(void);
    void elm_obj_ctxpopup_auto_hide_disabled_set(Eina_Bool disabled);
    Eina_Bool elm_obj_ctxpopup_auto_hide_disabled_get(void);
    void elm_obj_ctxpopup_hover_parent_set(Efl_Canvas_Object * parent);
    Efl_Canvas_Object *elm_obj_ctxpopup_hover_parent_get(void);
    void elm_obj_ctxpopup_direction_priority_set(Elm_Ctxpopup_Direction first, Elm_Ctxpopup_Direction second, Elm_Ctxpopup_Direction third, Elm_Ctxpopup_Direction fourth);
    void elm_obj_ctxpopup_direction_priority_get(Elm_Ctxpopup_Direction *first, Elm_Ctxpopup_Direction *second, Elm_Ctxpopup_Direction *third, Elm_Ctxpopup_Direction *fourth);
    Elm_Ctxpopup_Direction elm_obj_ctxpopup_direction_get(void);
    void elm_obj_ctxpopup_dismiss(void);
    void elm_obj_ctxpopup_clear(void);
    Elm_Widget_Item *elm_obj_ctxpopup_item_append(const char * label, Efl_Canvas_Object * icon, Evas_Smart_Cb func, const void * data);
    Elm_Widget_Item *elm_obj_ctxpopup_item_prepend(const char * label, Efl_Canvas_Object * icon, Evas_Smart_Cb func, const void * data);
    extern const Eo_Event_Description _ELM_CTXPOPUP_EVENT_DISMISSED;
    extern const Eo_Event_Description _ELM_CTXPOPUP_EVENT_GEOMETRY_UPDATE;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    auto_hide_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_ctxpopup_auto_hide_disabled_set(disabled)
        eo.__do_end()
    end,

    auto_hide_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_ctxpopup_auto_hide_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    hover_parent_set = function(self, parent)
        eo.__do_start(self, __class)
        __lib.elm_obj_ctxpopup_hover_parent_set(parent)
        eo.__do_end()
    end,

    hover_parent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_ctxpopup_hover_parent_get()
        eo.__do_end()
        return v
    end,

    direction_priority_set = function(self, first, second, third, fourth)
        eo.__do_start(self, __class)
        __lib.elm_obj_ctxpopup_direction_priority_set(first, second, third, fourth)
        eo.__do_end()
    end,

    direction_priority_get = function(self)
        eo.__do_start(self, __class)
        local first = ffi.new("Elm_Ctxpopup_Direction[1]")
        local second = ffi.new("Elm_Ctxpopup_Direction[1]")
        local third = ffi.new("Elm_Ctxpopup_Direction[1]")
        local fourth = ffi.new("Elm_Ctxpopup_Direction[1]")
        __lib.elm_obj_ctxpopup_direction_priority_get(first, second, third, fourth)
        eo.__do_end()
        return first[0], second[0], third[0], fourth[0]
    end,

    direction_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_ctxpopup_direction_get()
        eo.__do_end()
    end,

    dismiss = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_ctxpopup_dismiss()
        eo.__do_end()
    end,

    clear = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_ctxpopup_clear()
        eo.__do_end()
    end,

    item_append = function(self, label, icon, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_ctxpopup_item_append(label, icon, func, data)
        eo.__do_end()
        return v
    end,

    item_prepend = function(self, label, icon, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_ctxpopup_item_prepend(label, icon, func, data)
        eo.__do_end()
        return v
    end,

    __events = {
        ["dismissed"] = __lib._ELM_CTXPOPUP_EVENT_DISMISSED,
        ["geometry,update"] = __lib._ELM_CTXPOPUP_EVENT_GEOMETRY_UPDATE
    },

    __properties = {
        ["direction"] = { 0, 0, 1, 0, true, false },
        ["direction_priority"] = { 0, 0, 4, 4, true, true },
        ["auto_hide_disabled"] = { 0, 0, 1, 1, true, true },
        ["hover_parent"] = { 0, 0, 1, 1, true, true }
    }
}

M.Ctxpopup = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Ctxpopup").__eo_ctor,
                            1, ...)
end

return M
