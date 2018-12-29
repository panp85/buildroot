-- EFL LuaJIT bindings: elm_multibuttonentry_item.eo (class Elm.Multibuttonentry.Item)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_multibuttonentry_item_class_get()
    eo.class_register("Elm_Multibuttonentry_Item", {"Elm_Widget_Item"}, {"Elm_Interface_Atspi_Widget_Action"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_multibuttonentry_item_class_get(void);
    void elm_obj_multibuttonentry_item_selected_set(Eina_Bool selected);
    Eina_Bool elm_obj_multibuttonentry_item_selected_get(void);
    Elm_Widget_Item *elm_obj_multibuttonentry_item_prev_get(void);
    Elm_Widget_Item *elm_obj_multibuttonentry_item_next_get(void);
]]

local __M = util.get_namespace(M, { "multibuttonentry" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    selected_set = function(self, selected)
        eo.__do_start(self, __class)
        __lib.elm_obj_multibuttonentry_item_selected_set(selected)
        eo.__do_end()
    end,

    selected_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_multibuttonentry_item_selected_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    prev_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_multibuttonentry_item_prev_get()
        eo.__do_end()
        return v
    end,

    next_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_multibuttonentry_item_next_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["selected"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Item = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Multibuttonentry_Item").__eo_ctor,
                            1, ...)
end

return M
