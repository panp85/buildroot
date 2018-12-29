-- EFL LuaJIT bindings: efl_ui_factory.eo (class Efl.Ui.Factory)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_factory_interface_get()
    eo.class_register("Efl_Ui_Factory", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_factory_interface_get(void);
    Efl_Gfx *efl_ui_factory_create(Efl_Model * model, Efl_Gfx * parent);
    void efl_ui_factory_release(Efl_Gfx * ui_view);
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    create = function(self, model, parent)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_factory_create(model, parent)
        eo.__do_end()
        return v
    end,

    release = function(self, ui_view)
        eo.__do_start(self, __class)
        __lib.efl_ui_factory_release(ui_view)
        eo.__do_end()
    end
}
__body["__iface_Efl_Ui_Factory"] = true

return M
