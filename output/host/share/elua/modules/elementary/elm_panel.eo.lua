-- EFL LuaJIT bindings: elm_panel.eo (class Elm.Panel)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_panel_class_get()
    eo.class_register("Elm_Panel", {"Elm_Layout"}, {"Elm_Interface_Scrollable", "Elm_Interface_Atspi_Widget_Action"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_panel_class_get(void);
    void elm_obj_panel_orient_set(Elm_Panel_Orient orient);
    Elm_Panel_Orient elm_obj_panel_orient_get(void);
    void elm_obj_panel_hidden_set(Eina_Bool hidden);
    Eina_Bool elm_obj_panel_hidden_get(void);
    void elm_obj_panel_scrollable_set(Eina_Bool scrollable);
    Eina_Bool elm_obj_panel_scrollable_get(void);
    void elm_obj_panel_scrollable_content_size_set(double ratio);
    double elm_obj_panel_scrollable_content_size_get(void);
    void elm_obj_panel_toggle(void);
    extern const Eo_Event_Description _ELM_PANEL_EVENT_TOGGLED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    orient_set = function(self, orient)
        eo.__do_start(self, __class)
        __lib.elm_obj_panel_orient_set(orient)
        eo.__do_end()
    end,

    orient_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_panel_orient_get()
        eo.__do_end()
        return v
    end,

    hidden_set = function(self, hidden)
        eo.__do_start(self, __class)
        __lib.elm_obj_panel_hidden_set(hidden)
        eo.__do_end()
    end,

    hidden_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_panel_hidden_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    scrollable_set = function(self, scrollable)
        eo.__do_start(self, __class)
        __lib.elm_obj_panel_scrollable_set(scrollable)
        eo.__do_end()
    end,

    scrollable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_panel_scrollable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    scrollable_content_size_set = function(self, ratio)
        eo.__do_start(self, __class)
        __lib.elm_obj_panel_scrollable_content_size_set(ratio)
        eo.__do_end()
    end,

    scrollable_content_size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_panel_scrollable_content_size_get()
        eo.__do_end()
        return tonumber(v)
    end,

    toggle = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_panel_toggle()
        eo.__do_end()
    end,

    __events = {
        ["toggled"] = __lib._ELM_PANEL_EVENT_TOGGLED
    },

    __properties = {
        ["scrollable"] = { 0, 0, 1, 1, true, true },
        ["orient"] = { 0, 0, 1, 1, true, true },
        ["scrollable_content_size"] = { 0, 0, 1, 1, true, true },
        ["hidden"] = { 0, 0, 1, 1, true, true }
    }
}

M.Panel = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Panel").__eo_ctor,
                            1, ...)
end

return M
