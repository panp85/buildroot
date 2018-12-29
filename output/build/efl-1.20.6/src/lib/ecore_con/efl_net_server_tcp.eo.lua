-- EFL LuaJIT bindings: efl_net_server_tcp.eo (class Efl.Net.Server.Tcp)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_server_tcp_class_get()
    eo.class_register("Efl_Net_Server_Tcp", {"Efl_Net_Server_Fd"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_server_tcp_class_get(void);
    void efl_net_server_tcp_ipv6_only_set(Eina_Bool ipv6_only);
    Eina_Bool efl_net_server_tcp_ipv6_only_get(void);
]]

local __M = util.get_namespace(M, { "net", "server" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    ipv6_only_set = function(self, ipv6_only)
        eo.__do_start(self, __class)
        __lib.efl_net_server_tcp_ipv6_only_set(ipv6_only)
        eo.__do_end()
    end,

    ipv6_only_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_tcp_ipv6_only_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["ipv6_only"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Tcp = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Server_Tcp").__eo_ctor,
                            1, ...)
end

return M
