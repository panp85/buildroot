-- EFL LuaJIT bindings: efl_io_stderr.eo (class Efl.Io.Stderr)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_io_stderr_class_get()
    eo.class_register("Efl_Io_Stderr", {"Efl_Loop_Fd"}, {"Efl_Io_Writer_Fd"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_io_stderr_class_get(void);
]]

local __M = util.get_namespace(M, { "io" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Stderr = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Io_Stderr").__eo_ctor,
                            1, ...)
end

return M
