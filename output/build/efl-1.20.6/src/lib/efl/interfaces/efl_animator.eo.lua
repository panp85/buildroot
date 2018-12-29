-- EFL LuaJIT bindings: efl_animator.eo (class Efl.Animator)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_animator_interface_get()
    eo.class_register("Efl_Animator", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_animator_interface_get(void);
    extern const Eo_Event_Description _EFL_EVENT_ANIMATOR_TICK;
]]

__body = {
    __events = {
        ["animator,tick"] = __lib._EFL_EVENT_ANIMATOR_TICK
    }
}
__body["__iface_Efl_Animator"] = true

return M
