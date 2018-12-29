-- EFL LuaJIT bindings: elm_panes.eo (class Elm.Panes)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_panes_class_get()
    eo.class_register("Elm_Panes", {"Elm_Layout"}, {"Efl_Orientation", "Efl_Ui_Clickable"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_panes_class_get(void);
    void elm_obj_panes_content_left_size_set(double size);
    double elm_obj_panes_content_left_size_get(void);
    void elm_obj_panes_fixed_set(Eina_Bool fixed);
    Eina_Bool elm_obj_panes_fixed_get(void);
    void elm_obj_panes_content_right_size_set(double size);
    double elm_obj_panes_content_right_size_get(void);
    void elm_obj_panes_content_left_min_relative_size_set(double size);
    double elm_obj_panes_content_left_min_relative_size_get(void);
    void elm_obj_panes_content_right_min_relative_size_set(double size);
    double elm_obj_panes_content_right_min_relative_size_get(void);
    void elm_obj_panes_content_left_min_size_set(int size);
    int elm_obj_panes_content_left_min_size_get(void);
    void elm_obj_panes_content_right_min_size_set(int size);
    int elm_obj_panes_content_right_min_size_get(void);
    extern const Eo_Event_Description _ELM_PANES_EVENT_PRESS;
    extern const Eo_Event_Description _ELM_PANES_EVENT_UNPRESS;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    content_left_size_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.elm_obj_panes_content_left_size_set(size)
        eo.__do_end()
    end,

    content_left_size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_panes_content_left_size_get()
        eo.__do_end()
        return tonumber(v)
    end,

    fixed_set = function(self, fixed)
        eo.__do_start(self, __class)
        __lib.elm_obj_panes_fixed_set(fixed)
        eo.__do_end()
    end,

    fixed_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_panes_fixed_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    content_right_size_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.elm_obj_panes_content_right_size_set(size)
        eo.__do_end()
    end,

    content_right_size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_panes_content_right_size_get()
        eo.__do_end()
        return tonumber(v)
    end,

    content_left_min_relative_size_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.elm_obj_panes_content_left_min_relative_size_set(size)
        eo.__do_end()
    end,

    content_left_min_relative_size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_panes_content_left_min_relative_size_get()
        eo.__do_end()
        return tonumber(v)
    end,

    content_right_min_relative_size_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.elm_obj_panes_content_right_min_relative_size_set(size)
        eo.__do_end()
    end,

    content_right_min_relative_size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_panes_content_right_min_relative_size_get()
        eo.__do_end()
        return tonumber(v)
    end,

    content_left_min_size_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.elm_obj_panes_content_left_min_size_set(size)
        eo.__do_end()
    end,

    content_left_min_size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_panes_content_left_min_size_get()
        eo.__do_end()
        return tonumber(v)
    end,

    content_right_min_size_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.elm_obj_panes_content_right_min_size_set(size)
        eo.__do_end()
    end,

    content_right_min_size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_panes_content_right_min_size_get()
        eo.__do_end()
        return tonumber(v)
    end,

    __events = {
        ["press"] = __lib._ELM_PANES_EVENT_PRESS,
        ["unpress"] = __lib._ELM_PANES_EVENT_UNPRESS
    },

    __properties = {
        ["fixed"] = { 0, 0, 1, 1, true, true },
        ["content_left_size"] = { 0, 0, 1, 1, true, true },
        ["content_right_size"] = { 0, 0, 1, 1, true, true },
        ["content_right_min_size"] = { 0, 0, 1, 1, true, true },
        ["content_right_min_relative_size"] = { 0, 0, 1, 1, true, true },
        ["content_left_min_size"] = { 0, 0, 1, 1, true, true },
        ["content_left_min_relative_size"] = { 0, 0, 1, 1, true, true }
    }
}

M.Panes = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Panes").__eo_ctor,
                            1, ...)
end

return M
