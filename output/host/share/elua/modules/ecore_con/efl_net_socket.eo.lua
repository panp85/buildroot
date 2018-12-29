-- EFL LuaJIT bindings: efl_net_socket.eo (class Efl.Net.Socket)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_socket_interface_get()
    eo.class_register("Efl_Net_Socket", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_socket_interface_get(void);
    const char *efl_net_socket_address_local_get(void);
    const char *efl_net_socket_address_remote_get(void);
]]

local __M = util.get_namespace(M, { "net" })
__body = {
    address_local_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_address_local_get()
        eo.__do_end()
        return v
    end,

    address_remote_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_socket_address_remote_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["address_local"] = { 0, 0, 1, 0, true, false },
        ["address_remote"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Net_Socket"] = true

return M
