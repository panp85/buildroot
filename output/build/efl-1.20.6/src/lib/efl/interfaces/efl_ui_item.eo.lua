-- EFL LuaJIT bindings: efl_ui_item.eo (class Efl.Ui.Item)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_item_interface_get()
    eo.class_register("Efl_Ui_Item", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_item_interface_get(void);
    Efl_Ui_Item *efl_ui_item_prev_get(void);
    Efl_Ui_Item *efl_ui_item_next_get(void);
    void efl_ui_item_selected_set(Eina_Bool selected);
    Eina_Bool efl_ui_item_selected_get(void);
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    prev_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_item_prev_get()
        eo.__do_end()
        return v
    end,

    next_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_item_next_get()
        eo.__do_end()
        return v
    end,

    selected_set = function(self, selected)
        eo.__do_start(self, __class)
        __lib.efl_ui_item_selected_set(selected)
        eo.__do_end()
    end,

    selected_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_item_selected_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["prev"] = { 0, 0, 1, 0, true, false },
        ["next"] = { 0, 0, 1, 0, true, false },
        ["selected"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Ui_Item"] = true

return M
