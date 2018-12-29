-- EFL LuaJIT bindings: efl_net_socket_unix.eo (class Efl.Net.Socket.Unix)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_socket_unix_class_get()
    eo.class_register("Efl_Net_Socket_Unix", {"Efl_Net_Socket_Fd"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_socket_unix_class_get(void);
]]

local __M = util.get_namespace(M, { "net", "socket" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Unix = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Socket_Unix").__eo_ctor,
                            1, ...)
end

return M
