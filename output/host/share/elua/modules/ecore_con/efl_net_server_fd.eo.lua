-- EFL LuaJIT bindings: efl_net_server_fd.eo (class Efl.Net.Server.Fd)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_server_fd_class_get()
    eo.class_register("Efl_Net_Server_Fd", {"Efl_Loop_Fd"}, {"Efl_Net_Server"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_server_fd_class_get(void);
    int efl_net_server_fd_family_get(void);
    Eina_Bool efl_net_server_fd_close_on_exec_set(Eina_Bool close_on_exec);
    Eina_Bool efl_net_server_fd_close_on_exec_get(void);
    Eina_Bool efl_net_server_fd_reuse_address_set(Eina_Bool reuse_address);
    Eina_Bool efl_net_server_fd_reuse_address_get(void);
    Eina_Bool efl_net_server_fd_reuse_port_set(Eina_Bool reuse_port);
    Eina_Bool efl_net_server_fd_reuse_port_get(void);
    Eina_Error efl_net_server_fd_socket_activate(const char * address);
]]

local __M = util.get_namespace(M, { "net", "server" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    family_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_fd_family_get()
        eo.__do_end()
        return tonumber(v)
    end,

    close_on_exec_set = function(self, close_on_exec)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_fd_close_on_exec_set(close_on_exec)
        eo.__do_end()
    end,

    close_on_exec_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_fd_close_on_exec_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    reuse_address_set = function(self, reuse_address)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_fd_reuse_address_set(reuse_address)
        eo.__do_end()
    end,

    reuse_address_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_fd_reuse_address_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    reuse_port_set = function(self, reuse_port)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_fd_reuse_port_set(reuse_port)
        eo.__do_end()
    end,

    reuse_port_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_fd_reuse_port_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    socket_activate = function(self, address)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_fd_socket_activate(address)
        eo.__do_end()
        return v
    end,

    __properties = {
        ["close_on_exec"] = { 0, 0, 1, 1, true, true },
        ["reuse_address"] = { 0, 0, 1, 1, true, true },
        ["family"] = { 0, 0, 1, 0, true, false },
        ["reuse_port"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Fd = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Server_Fd").__eo_ctor,
                            1, ...)
end

return M
