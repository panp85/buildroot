-- EFL LuaJIT bindings: efl_net_server_udp_client.eo (class Efl.Net.Server.Udp.Client)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_server_udp_client_class_get()
    eo.class_register("Efl_Net_Server_Udp_Client", {"Efl_Object"}, {"Efl_Net_Socket"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_server_udp_client_class_get(void);
    size_t efl_net_server_udp_client_next_datagram_size_query(void);
]]

local __M = util.get_namespace(M, { "net", "server", "udp" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    next_datagram_size_query = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_udp_client_next_datagram_size_query()
        eo.__do_end()
        return tonumber(v)
    end
}

__M.Client = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Server_Udp_Client").__eo_ctor,
                            1, ...)
end

return M
