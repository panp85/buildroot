-- EFL LuaJIT bindings: elm_pan.eo (class Elm.Pan)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_pan_class_get()
    eo.class_register("Elm_Pan", {"Efl_Canvas_Group_Clipped"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_pan_class_get(void);
    void elm_obj_pan_pos_set(int x, int y);
    void elm_obj_pan_pos_get(int *x, int *y);
    void elm_obj_pan_content_size_get(int *w, int *h);
    void elm_obj_pan_pos_min_get(int *x, int *y);
    void elm_obj_pan_pos_max_get(int *x, int *y);
    extern const Eo_Event_Description _ELM_PAN_EVENT_CHANGED;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    pos_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.elm_obj_pan_pos_set(x, y)
        eo.__do_end()
    end,

    pos_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.elm_obj_pan_pos_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    content_size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.elm_obj_pan_content_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    pos_min_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.elm_obj_pan_pos_min_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    pos_max_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.elm_obj_pan_pos_max_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    __events = {
        ["changed"] = __lib._ELM_PAN_EVENT_CHANGED
    },

    __properties = {
        ["content_size"] = { 0, 0, 2, 0, true, false },
        ["pos"] = { 0, 0, 2, 2, true, true },
        ["pos_max"] = { 0, 0, 2, 0, true, false },
        ["pos_min"] = { 0, 0, 2, 0, true, false }
    }
}

M.Pan = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Pan").__eo_ctor,
                            1, ...)
end

return M
