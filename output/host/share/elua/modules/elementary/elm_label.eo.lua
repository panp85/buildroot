-- EFL LuaJIT bindings: elm_label.eo (class Elm.Label)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_label_class_get()
    eo.class_register("Elm_Label", {"Elm_Layout"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_label_class_get(void);
    void elm_obj_label_wrap_width_set(int w);
    int elm_obj_label_wrap_width_get(void);
    void elm_obj_label_slide_speed_set(double speed);
    double elm_obj_label_slide_speed_get(void);
    void elm_obj_label_slide_mode_set(Elm_Label_Slide_Mode mode);
    Elm_Label_Slide_Mode elm_obj_label_slide_mode_get(void);
    void elm_obj_label_slide_duration_set(double duration);
    double elm_obj_label_slide_duration_get(void);
    void elm_obj_label_line_wrap_set(Elm_Wrap_Type wrap);
    Elm_Wrap_Type elm_obj_label_line_wrap_get(void);
    void elm_obj_label_ellipsis_set(Eina_Bool ellipsis);
    Eina_Bool elm_obj_label_ellipsis_get(void);
    void elm_obj_label_slide_go(void);
    extern const Eo_Event_Description _ELM_LABEL_EVENT_SLIDE_END;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    wrap_width_set = function(self, w)
        eo.__do_start(self, __class)
        __lib.elm_obj_label_wrap_width_set(w)
        eo.__do_end()
    end,

    wrap_width_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_label_wrap_width_get()
        eo.__do_end()
        return tonumber(v)
    end,

    slide_speed_set = function(self, speed)
        eo.__do_start(self, __class)
        __lib.elm_obj_label_slide_speed_set(speed)
        eo.__do_end()
    end,

    slide_speed_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_label_slide_speed_get()
        eo.__do_end()
        return tonumber(v)
    end,

    slide_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_label_slide_mode_set(mode)
        eo.__do_end()
    end,

    slide_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_label_slide_mode_get()
        eo.__do_end()
        return v
    end,

    slide_duration_set = function(self, duration)
        eo.__do_start(self, __class)
        __lib.elm_obj_label_slide_duration_set(duration)
        eo.__do_end()
    end,

    slide_duration_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_label_slide_duration_get()
        eo.__do_end()
        return tonumber(v)
    end,

    line_wrap_set = function(self, wrap)
        eo.__do_start(self, __class)
        __lib.elm_obj_label_line_wrap_set(wrap)
        eo.__do_end()
    end,

    line_wrap_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_label_line_wrap_get()
        eo.__do_end()
        return v
    end,

    ellipsis_set = function(self, ellipsis)
        eo.__do_start(self, __class)
        __lib.elm_obj_label_ellipsis_set(ellipsis)
        eo.__do_end()
    end,

    ellipsis_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_label_ellipsis_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    slide_go = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_label_slide_go()
        eo.__do_end()
    end,

    __events = {
        ["slide,end"] = __lib._ELM_LABEL_EVENT_SLIDE_END
    },

    __properties = {
        ["wrap_width"] = { 0, 0, 1, 1, true, true },
        ["slide_speed"] = { 0, 0, 1, 1, true, true },
        ["slide_duration"] = { 0, 0, 1, 1, true, true },
        ["ellipsis"] = { 0, 0, 1, 1, true, true },
        ["line_wrap"] = { 0, 0, 1, 1, true, true },
        ["slide_mode"] = { 0, 0, 1, 1, true, true }
    }
}

M.Label = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Label").__eo_ctor,
                            1, ...)
end

return M
