-- EFL LuaJIT bindings: elm_index_item.eo (class Elm.Index.Item)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_index_item_class_get()
    eo.class_register("Elm_Index_Item", {"Elm_Widget_Item"}, {"Elm_Interface_Atspi_Widget_Action"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_index_item_class_get(void);
    void elm_obj_index_item_selected_set(Eina_Bool selected);
    void elm_obj_index_item_priority_set(int priority);
    const char *elm_obj_index_item_letter_get(void);
]]

local __M = util.get_namespace(M, { "index" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    selected_set = function(self, selected)
        eo.__do_start(self, __class)
        __lib.elm_obj_index_item_selected_set(selected)
        eo.__do_end()
    end,

    priority_set = function(self, priority)
        eo.__do_start(self, __class)
        __lib.elm_obj_index_item_priority_set(priority)
        eo.__do_end()
    end,

    letter_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_index_item_letter_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["priority"] = { 0, 0, 0, 1, false, true },
        ["selected"] = { 0, 0, 0, 1, false, true }
    }
}

__M.Item = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Index_Item").__eo_ctor,
                            1, ...)
end

return M
