-- EFL LuaJIT bindings: elm_color_item.eo (class Elm.Color.Item)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_color_item_class_get()
    eo.class_register("Elm_Color_Item", {"Elm_Widget_Item"}, {"Elm_Interface_Atspi_Widget_Action"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_color_item_class_get(void);
    void elm_obj_color_item_color_set(int r, int g, int b, int a);
    void elm_obj_color_item_color_get(int *r, int *g, int *b, int *a);
    void elm_obj_color_item_selected_set(Eina_Bool selected);
    Eina_Bool elm_obj_color_item_selected_get(void);
]]

local __M = util.get_namespace(M, { "color" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.elm_obj_color_item_color_set(r, g, b, a)
        eo.__do_end()
    end,

    color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("int[1]")
        local g = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        local a = ffi.new("int[1]")
        __lib.elm_obj_color_item_color_get(r, g, b, a)
        eo.__do_end()
        return tonumber(r[0]), tonumber(g[0]), tonumber(b[0]), tonumber(a[0])
    end,

    selected_set = function(self, selected)
        eo.__do_start(self, __class)
        __lib.elm_obj_color_item_selected_set(selected)
        eo.__do_end()
    end,

    selected_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_color_item_selected_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["selected"] = { 0, 0, 1, 1, true, true },
        ["color"] = { 0, 0, 4, 4, true, true }
    }
}

__M.Item = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Color_Item").__eo_ctor,
                            1, ...)
end

return M
