-- EFL LuaJIT bindings: efl_io_writer_fd.eo (class Efl.Io.Writer.Fd)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_io_writer_fd_mixin_get()
    eo.class_register("Efl_Io_Writer_Fd", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_io_writer_fd_mixin_get(void);
    int efl_io_writer_fd_get(void);
]]

local __M = util.get_namespace(M, { "io", "writer" })
__body = {
    writer_fd_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_writer_fd_get()
        eo.__do_end()
        return tonumber(v)
    end,

    __properties = {
        ["writer_fd"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__mixin_Efl_Io_Writer_Fd"] = true

return M
