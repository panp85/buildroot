-- EFL LuaJIT bindings: elm_scroller.eo (class Elm.Scroller)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_scroller_class_get()
    eo.class_register("Elm_Scroller", {"Elm_Layout"}, {"Elm_Interface_Scrollable", "Elm_Interface_Atspi_Widget_Action", "Efl_Ui_Scrollable"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_scroller_class_get(void);
    void elm_obj_scroller_custom_widget_base_theme_set(const char * klass, const char * group);
    void elm_obj_scroller_page_scroll_limit_set(int page_limit_h, int page_limit_v);
    void elm_obj_scroller_page_scroll_limit_get(int * page_limit_h, int * page_limit_v);
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_SCROLL_PAGE_CHANGED;
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_HBAR_UNPRESS;
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_HBAR_PRESS;
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_HBAR_DRAG;
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_VBAR_UNPRESS;
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_VBAR_PRESS;
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_VBAR_DRAG;
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_SCROLL_LEFT;
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_SCROLL_RIGHT;
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_SCROLL_UP;
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_SCROLL_DOWN;
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_EDGE_LEFT;
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_EDGE_RIGHT;
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_EDGE_TOP;
    extern const Eo_Event_Description _ELM_SCROLLER_EVENT_EDGE_BOTTOM;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    custom_widget_base_theme_set = function(self, klass, group)
        eo.__do_start(self, __class)
        __lib.elm_obj_scroller_custom_widget_base_theme_set(klass, group)
        eo.__do_end()
    end,

    page_scroll_limit_set = function(self, page_limit_h, page_limit_v)
        eo.__do_start(self, __class)
        __lib.elm_obj_scroller_page_scroll_limit_set(page_limit_h, page_limit_v)
        eo.__do_end()
    end,

    page_scroll_limit_get = function(self, page_limit_h, page_limit_v)
        eo.__do_start(self, __class)
        __lib.elm_obj_scroller_page_scroll_limit_get(page_limit_h, page_limit_v)
        eo.__do_end()
    end,

    __events = {
        ["scroll,page,changed"] = __lib._ELM_SCROLLER_EVENT_SCROLL_PAGE_CHANGED,
        ["hbar,unpress"] = __lib._ELM_SCROLLER_EVENT_HBAR_UNPRESS,
        ["hbar,press"] = __lib._ELM_SCROLLER_EVENT_HBAR_PRESS,
        ["hbar,drag"] = __lib._ELM_SCROLLER_EVENT_HBAR_DRAG,
        ["vbar,unpress"] = __lib._ELM_SCROLLER_EVENT_VBAR_UNPRESS,
        ["vbar,press"] = __lib._ELM_SCROLLER_EVENT_VBAR_PRESS,
        ["vbar,drag"] = __lib._ELM_SCROLLER_EVENT_VBAR_DRAG,
        ["scroll,left"] = __lib._ELM_SCROLLER_EVENT_SCROLL_LEFT,
        ["scroll,right"] = __lib._ELM_SCROLLER_EVENT_SCROLL_RIGHT,
        ["scroll,up"] = __lib._ELM_SCROLLER_EVENT_SCROLL_UP,
        ["scroll,down"] = __lib._ELM_SCROLLER_EVENT_SCROLL_DOWN,
        ["edge,left"] = __lib._ELM_SCROLLER_EVENT_EDGE_LEFT,
        ["edge,right"] = __lib._ELM_SCROLLER_EVENT_EDGE_RIGHT,
        ["edge,top"] = __lib._ELM_SCROLLER_EVENT_EDGE_TOP,
        ["edge,bottom"] = __lib._ELM_SCROLLER_EVENT_EDGE_BOTTOM
    },

    __properties = {
        ["custom_widget_base_theme"] = { 0, 0, 0, 2, false, true }
    }
}

M.Scroller = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Scroller").__eo_ctor,
                            1, ...)
end

return M
