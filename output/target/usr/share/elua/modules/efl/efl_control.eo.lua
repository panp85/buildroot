-- EFL LuaJIT bindings: efl_control.eo (class Efl.Control)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_control_interface_get()
    eo.class_register("Efl_Control", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_control_interface_get(void);
    void efl_control_priority_set(int priority);
    int efl_control_priority_get(void);
    void efl_control_suspend_set(Eina_Bool suspend);
    Eina_Bool efl_control_suspend_get(void);
]]

__body = {
    priority_set = function(self, priority)
        eo.__do_start(self, __class)
        __lib.efl_control_priority_set(priority)
        eo.__do_end()
    end,

    priority_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_control_priority_get()
        eo.__do_end()
        return tonumber(v)
    end,

    suspend_set = function(self, suspend)
        eo.__do_start(self, __class)
        __lib.efl_control_suspend_set(suspend)
        eo.__do_end()
    end,

    suspend_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_control_suspend_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["priority"] = { 0, 0, 1, 1, true, true },
        ["suspend"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Control"] = true

return M
