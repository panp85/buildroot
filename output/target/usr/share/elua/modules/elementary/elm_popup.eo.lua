-- EFL LuaJIT bindings: elm_popup.eo (class Elm.Popup)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_popup_class_get()
    eo.class_register("Elm_Popup", {"Elm_Layout"}, {"Elm_Interface_Atspi_Widget_Action"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_popup_class_get(void);
    void elm_obj_popup_align_set(double horizontal, double vertical);
    void elm_obj_popup_align_get(double *horizontal, double *vertical);
    void elm_obj_popup_allow_events_set(Eina_Bool allow);
    Eina_Bool elm_obj_popup_allow_events_get(void);
    void elm_obj_popup_content_text_wrap_type_set(Elm_Wrap_Type wrap);
    Elm_Wrap_Type elm_obj_popup_content_text_wrap_type_get(void);
    void elm_obj_popup_orient_set(Elm_Popup_Orient orient);
    Elm_Popup_Orient elm_obj_popup_orient_get(void);
    void elm_obj_popup_timeout_set(double timeout);
    double elm_obj_popup_timeout_get(void);
    void elm_obj_popup_scrollable_set(Eina_Bool scroll);
    Eina_Bool elm_obj_popup_scrollable_get(void);
    Elm_Widget_Item *elm_obj_popup_item_append(const char * label, Efl_Canvas_Object * icon, Evas_Smart_Cb func, const void * data);
    void elm_obj_popup_dismiss(void);
    extern const Eo_Event_Description _ELM_POPUP_EVENT_BLOCK_CLICKED;
    extern const Eo_Event_Description _ELM_POPUP_EVENT_TIMEOUT;
    extern const Eo_Event_Description _ELM_POPUP_EVENT_ITEM_FOCUSED;
    extern const Eo_Event_Description _ELM_POPUP_EVENT_ITEM_UNFOCUSED;
    extern const Eo_Event_Description _ELM_POPUP_EVENT_DISMISSED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    align_set = function(self, horizontal, vertical)
        eo.__do_start(self, __class)
        __lib.elm_obj_popup_align_set(horizontal, vertical)
        eo.__do_end()
    end,

    align_get = function(self)
        eo.__do_start(self, __class)
        local horizontal = ffi.new("double[1]")
        local vertical = ffi.new("double[1]")
        __lib.elm_obj_popup_align_get(horizontal, vertical)
        eo.__do_end()
        return tonumber(horizontal[0]), tonumber(vertical[0])
    end,

    allow_events_set = function(self, allow)
        eo.__do_start(self, __class)
        __lib.elm_obj_popup_allow_events_set(allow)
        eo.__do_end()
    end,

    allow_events_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_popup_allow_events_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    content_text_wrap_type_set = function(self, wrap)
        eo.__do_start(self, __class)
        __lib.elm_obj_popup_content_text_wrap_type_set(wrap)
        eo.__do_end()
    end,

    content_text_wrap_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_popup_content_text_wrap_type_get()
        eo.__do_end()
        return v
    end,

    orient_set = function(self, orient)
        eo.__do_start(self, __class)
        __lib.elm_obj_popup_orient_set(orient)
        eo.__do_end()
    end,

    orient_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_popup_orient_get()
        eo.__do_end()
        return v
    end,

    timeout_set = function(self, timeout)
        eo.__do_start(self, __class)
        __lib.elm_obj_popup_timeout_set(timeout)
        eo.__do_end()
    end,

    timeout_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_popup_timeout_get()
        eo.__do_end()
        return tonumber(v)
    end,

    scrollable_set = function(self, scroll)
        eo.__do_start(self, __class)
        __lib.elm_obj_popup_scrollable_set(scroll)
        eo.__do_end()
    end,

    scrollable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_popup_scrollable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    item_append = function(self, label, icon, func, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_popup_item_append(label, icon, func, data)
        eo.__do_end()
        return v
    end,

    dismiss = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_popup_dismiss()
        eo.__do_end()
    end,

    __events = {
        ["block,clicked"] = __lib._ELM_POPUP_EVENT_BLOCK_CLICKED,
        ["timeout"] = __lib._ELM_POPUP_EVENT_TIMEOUT,
        ["item,focused"] = __lib._ELM_POPUP_EVENT_ITEM_FOCUSED,
        ["item,unfocused"] = __lib._ELM_POPUP_EVENT_ITEM_UNFOCUSED,
        ["dismissed"] = __lib._ELM_POPUP_EVENT_DISMISSED
    },

    __properties = {
        ["allow_events"] = { 0, 0, 1, 1, true, true },
        ["align"] = { 0, 0, 2, 2, true, true },
        ["scrollable"] = { 0, 0, 1, 1, true, true },
        ["orient"] = { 0, 0, 1, 1, true, true },
        ["timeout"] = { 0, 0, 1, 1, true, true },
        ["content_text_wrap_type"] = { 0, 0, 1, 1, true, true }
    }
}

M.Popup = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Popup").__eo_ctor,
                            1, ...)
end

return M
