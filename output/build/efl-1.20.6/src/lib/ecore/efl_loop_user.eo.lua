-- EFL LuaJIT bindings: efl_loop_user.eo (class Efl.Loop_User)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_loop_user_class_get()
    eo.class_register("Efl_Loop_User", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_loop_user_class_get(void);
    Efl_Loop *efl_loop_get(void);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    loop_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_loop_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["loop"] = { 0, 0, 1, 0, true, false }
    }
}

M.Loop_User = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Loop_User").__eo_ctor,
                            1, ...)
end

return M
