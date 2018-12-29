-- EFL LuaJIT bindings: efl_net_dialer_tcp.eo (class Efl.Net.Dialer.Tcp)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_dialer_tcp_class_get()
    eo.class_register("Efl_Net_Dialer_Tcp", {"Efl_Net_Socket_Tcp"}, {"Efl_Net_Dialer"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_dialer_tcp_class_get(void);
]]

local __M = util.get_namespace(M, { "net", "dialer" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Tcp = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Dialer_Tcp").__eo_ctor,
                            1, ...)
end

return M
