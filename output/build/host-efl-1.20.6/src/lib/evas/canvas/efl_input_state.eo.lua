-- EFL LuaJIT bindings: efl_input_state.eo (class Efl.Input.State)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_input_state_interface_get()
    eo.class_register("Efl_Input_State", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_input_state_interface_get(void);
    Eina_Bool efl_input_modifier_enabled_get(Efl_Input_Modifier mod, const Efl_Input_Device * seat);
    Eina_Bool efl_input_lock_enabled_get(Efl_Input_Lock lock, const Efl_Input_Device * seat);
]]

local __M = util.get_namespace(M, { "input" })
__body = {
    modifier_enabled_get = function(self, mod, seat)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_modifier_enabled_get(mod, seat)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    lock_enabled_get = function(self, lock, seat)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_lock_enabled_get(lock, seat)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["modifier_enabled"] = { 2, 0, 1, 0, true, false },
        ["lock_enabled"] = { 2, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Input_State"] = true

return M
