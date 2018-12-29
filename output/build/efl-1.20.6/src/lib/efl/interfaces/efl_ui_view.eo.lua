-- EFL LuaJIT bindings: efl_ui_view.eo (class Efl.Ui.View)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_view_interface_get()
    eo.class_register("Efl_Ui_View", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_view_interface_get(void);
    void efl_ui_view_model_set(Efl_Model * model);
    Efl_Model *efl_ui_view_model_get(void);
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    model_set = function(self, model)
        eo.__do_start(self, __class)
        __lib.efl_ui_view_model_set(model)
        eo.__do_end()
    end,

    model_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_view_model_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["model"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Ui_View"] = true

return M
