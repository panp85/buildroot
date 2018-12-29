-- EFL LuaJIT bindings: efl_ui_focus_user.eo (class Efl.Ui.Focus.User)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_focus_user_interface_get()
    eo.class_register("Efl_Ui_Focus_User", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_focus_user_interface_get(void);
    Efl_Ui_Focus_Manager *efl_ui_focus_user_manager_get(void);
    Efl_Ui_Focus_Object *efl_ui_focus_user_parent_get(void);
    extern const Eo_Event_Description _EFL_UI_FOCUS_USER_EVENT_MANAGER_CHANGED;
    extern const Eo_Event_Description _EFL_UI_FOCUS_USER_EVENT_LOGICAL_CHANGED;
]]

local __M = util.get_namespace(M, { "ui", "focus" })
__body = {
    manager_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_user_manager_get()
        eo.__do_end()
        return v
    end,

    parent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_focus_user_parent_get()
        eo.__do_end()
        return v
    end,

    __events = {
        ["manager,changed"] = __lib._EFL_UI_FOCUS_USER_EVENT_MANAGER_CHANGED,
        ["logical,changed"] = __lib._EFL_UI_FOCUS_USER_EVENT_LOGICAL_CHANGED
    },

    __properties = {
        ["manager"] = { 0, 0, 1, 0, true, false },
        ["parent"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Ui_Focus_User"] = true

return M
