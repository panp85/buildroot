-- EFL LuaJIT bindings: elm_fileselector.eo (class Elm.Fileselector)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_fileselector_class_get()
    eo.class_register("Elm_Fileselector", {"Elm_Layout"}, {"Elm_Interface_Fileselector", "Elm_Interface_Atspi_Widget_Action", "Efl_Ui_Clickable", "Efl_Ui_Selectable"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_fileselector_class_get(void);
    void elm_obj_fileselector_buttons_ok_cancel_set(Eina_Bool visible);
    Eina_Bool elm_obj_fileselector_buttons_ok_cancel_get(void);
    extern const Eo_Event_Description _ELM_FILESELECTOR_EVENT_DONE;
    extern const Eo_Event_Description _ELM_FILESELECTOR_EVENT_ACTIVATED;
    extern const Eo_Event_Description _ELM_FILESELECTOR_EVENT_SELECTED_INVALID;
    extern const Eo_Event_Description _ELM_FILESELECTOR_EVENT_DIRECTORY_OPEN;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    buttons_ok_cancel_set = function(self, visible)
        eo.__do_start(self, __class)
        __lib.elm_obj_fileselector_buttons_ok_cancel_set(visible)
        eo.__do_end()
    end,

    buttons_ok_cancel_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_fileselector_buttons_ok_cancel_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["done"] = __lib._ELM_FILESELECTOR_EVENT_DONE,
        ["activated"] = __lib._ELM_FILESELECTOR_EVENT_ACTIVATED,
        ["selected,invalid"] = __lib._ELM_FILESELECTOR_EVENT_SELECTED_INVALID,
        ["directory,open"] = __lib._ELM_FILESELECTOR_EVENT_DIRECTORY_OPEN
    },

    __properties = {
        ["buttons_ok_cancel"] = { 0, 0, 1, 1, true, true }
    }
}

M.Fileselector = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Fileselector").__eo_ctor,
                            1, ...)
end

return M
