-- EFL LuaJIT bindings: elm_bg.eo (class Elm.Bg)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_bg_class_get()
    eo.class_register("Elm_Bg", {"Elm_Layout"}, {"Efl_File"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_bg_class_get(void);
    void elm_obj_bg_option_set(Elm_Bg_Option option);
    Elm_Bg_Option elm_obj_bg_option_get(void);
    void elm_obj_bg_color_set(int r, int g, int b, int a);
    void elm_obj_bg_color_get(int *r, int *g, int *b, int *a);
    void elm_obj_bg_load_size_set(int w, int h);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    option_set = function(self, option)
        eo.__do_start(self, __class)
        __lib.elm_obj_bg_option_set(option)
        eo.__do_end()
    end,

    option_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_bg_option_get()
        eo.__do_end()
        return v
    end,

    color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.elm_obj_bg_color_set(r, g, b, a)
        eo.__do_end()
    end,

    color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        __lib.elm_obj_bg_color_get(r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    load_size_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.elm_obj_bg_load_size_set(w, h)
        eo.__do_end()
    end,

    __properties = {
        ["option"] = { 0, 0, 1, 1, true, true },
        ["load_size"] = { 0, 0, 0, 2, false, true },
        ["color"] = { 0, 0, 4, 4, true, true }
    }
}

M.Bg = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Bg").__eo_ctor,
                            1, ...)
end

return M
