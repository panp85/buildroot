-- EFL LuaJIT bindings: elm_notify.eo (class Elm.Notify)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_notify_class_get()
    eo.class_register("Elm_Notify", {"Elm_Widget"}, {"Efl_Container", "Efl_Part"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_notify_class_get(void);
    void elm_obj_notify_align_set(double horizontal, double vertical);
    void elm_obj_notify_align_get(double *horizontal, double *vertical);
    void elm_obj_notify_allow_events_set(Eina_Bool allow);
    Eina_Bool elm_obj_notify_allow_events_get(void);
    void elm_obj_notify_timeout_set(double timeout);
    double elm_obj_notify_timeout_get(void);
    void elm_obj_notify_dismiss(void);
    extern const Eo_Event_Description _ELM_NOTIFY_EVENT_BLOCK_CLICKED;
    extern const Eo_Event_Description _ELM_NOTIFY_EVENT_TIMEOUT;
    extern const Eo_Event_Description _ELM_NOTIFY_EVENT_DISMISSED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    align_set = function(self, horizontal, vertical)
        eo.__do_start(self, __class)
        __lib.elm_obj_notify_align_set(horizontal, vertical)
        eo.__do_end()
    end,

    align_get = function(self)
        eo.__do_start(self, __class)
        local horizontal = ffi.new("double[1]")
        local vertical = ffi.new("double[1]")
        __lib.elm_obj_notify_align_get(horizontal, vertical)
        eo.__do_end()
        return tonumber(horizontal[0]), tonumber(vertical[0])
    end,

    allow_events_set = function(self, allow)
        eo.__do_start(self, __class)
        __lib.elm_obj_notify_allow_events_set(allow)
        eo.__do_end()
    end,

    allow_events_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_notify_allow_events_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    timeout_set = function(self, timeout)
        eo.__do_start(self, __class)
        __lib.elm_obj_notify_timeout_set(timeout)
        eo.__do_end()
    end,

    timeout_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_notify_timeout_get()
        eo.__do_end()
        return tonumber(v)
    end,

    dismiss = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_notify_dismiss()
        eo.__do_end()
    end,

    __events = {
        ["block,clicked"] = __lib._ELM_NOTIFY_EVENT_BLOCK_CLICKED,
        ["timeout"] = __lib._ELM_NOTIFY_EVENT_TIMEOUT,
        ["dismissed"] = __lib._ELM_NOTIFY_EVENT_DISMISSED
    },

    __properties = {
        ["allow_events"] = { 0, 0, 1, 1, true, true },
        ["align"] = { 0, 0, 2, 2, true, true },
        ["timeout"] = { 0, 0, 1, 1, true, true }
    }
}

M.Notify = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Notify").__eo_ctor,
                            1, ...)
end

return M
