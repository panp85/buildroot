-- EFL LuaJIT bindings: efl_ui_menu.eo (class Efl.Ui.Menu)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_menu_interface_get()
    eo.class_register("Efl_Ui_Menu", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_menu_interface_get(void);
    Efl_Ui_Item *efl_ui_menu_selected_item_get(void);
    Efl_Ui_Item *efl_ui_menu_first_item_get(void);
    Efl_Ui_Item *efl_ui_menu_last_item_get(void);
    Eina_Iterator *efl_ui_menu_items_get(void);
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    selected_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_menu_selected_item_get()
        eo.__do_end()
        return v
    end,

    first_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_menu_first_item_get()
        eo.__do_end()
        return v
    end,

    last_item_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_menu_last_item_get()
        eo.__do_end()
        return v
    end,

    items_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_menu_items_get()
        eo.__do_end()
    end,

    __properties = {
        ["items"] = { 0, 0, 1, 0, true, false },
        ["first_item"] = { 0, 0, 1, 0, true, false },
        ["last_item"] = { 0, 0, 1, 0, true, false },
        ["selected_item"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Ui_Menu"] = true

return M
