-- EFL LuaJIT bindings: efl_input_hold.eo (class Efl.Input.Hold)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_input_hold_class_get()
    eo.class_register("Efl_Input_Hold", {"Efl_Object"}, {"Efl_Input_Event"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_input_hold_class_get(void);
    void efl_input_hold_set(Eina_Bool val);
    Eina_Bool efl_input_hold_get(void);
]]

local __M = util.get_namespace(M, { "input" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    hold_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_input_hold_set(val)
        eo.__do_end()
    end,

    hold_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_hold_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["hold"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Hold = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Input_Hold").__eo_ctor,
                            1, ...)
end

return M
