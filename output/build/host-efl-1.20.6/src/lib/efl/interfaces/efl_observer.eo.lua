-- EFL LuaJIT bindings: efl_observer.eo (class Efl.Observer)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_observer_interface_get()
    eo.class_register("Efl_Observer", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_observer_interface_get(void);
    void efl_observer_update(Efl_Object * obs, const char * key, void * data);
]]

__body = {
    update = function(self, obs, key, data)
        eo.__do_start(self, __class)
        __lib.efl_observer_update(obs, key, data)
        eo.__do_end()
    end
}
__body["__iface_Efl_Observer"] = true

return M
