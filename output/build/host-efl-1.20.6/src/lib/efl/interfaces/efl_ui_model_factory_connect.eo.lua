-- EFL LuaJIT bindings: efl_ui_model_factory_connect.eo (class Efl.Ui.Model.Factory.Connect)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_model_factory_connect_interface_get()
    eo.class_register("Efl_Ui_Model_Factory_Connect", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_model_factory_connect_interface_get(void);
    void efl_ui_model_factory_connect(const char * name, Efl_Ui_Factory * factory);
]]

local __M = util.get_namespace(M, { "ui", "model", "factory" })
__body = {
    connect = function(self, name, factory)
        eo.__do_start(self, __class)
        __lib.efl_ui_model_factory_connect(name, factory)
        eo.__do_end()
    end
}
__body["__iface_Efl_Ui_Model_Factory_Connect"] = true

return M
