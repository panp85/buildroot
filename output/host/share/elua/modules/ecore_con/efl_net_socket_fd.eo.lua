-- EFL LuaJIT bindings: efl_net_socket_fd.eo (class Efl.Net.Socket.Fd)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_socket_fd_class_get()
    eo.class_register("Efl_Net_Socket_Fd", {"Efl_Loop_Fd"}, {"Efl_Io_Reader_Fd", "Efl_Io_Writer_Fd", "Efl_Io_Closer_Fd", "Efl_Net_Socket"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_socket_fd_class_get(void);
    int efl_net_socket_fd_family_get(void);
]]

local __M = util.get_namespace(M, { "net", "socket" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    family_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_fd_family_get()
        eo.__do_end()
        return tonumber(v)
    end,

    __properties = {
        ["family"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Fd = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Socket_Fd").__eo_ctor,
                            1, ...)
end

return M
