-- EFL LuaJIT bindings: efl_ui_model_connect.eo (class Efl.Ui.Model.Connect)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_model_connect_interface_get()
    eo.class_register("Efl_Ui_Model_Connect", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_model_connect_interface_get(void);
    void efl_ui_model_connect(const char * name, const char * property);
]]

local __M = util.get_namespace(M, { "ui", "model" })
__body = {
    connect = function(self, name, property)
        eo.__do_start(self, __class)
        __lib.efl_ui_model_connect(name, property)
        eo.__do_end()
    end
}
__body["__iface_Efl_Ui_Model_Connect"] = true

return M
