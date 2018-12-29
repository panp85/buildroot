-- EFL LuaJIT bindings: efl_net_server_simple.eo (class Efl.Net.Server.Simple)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_server_simple_class_get()
    eo.class_register("Efl_Net_Server_Simple", {"Efl_Loop_User"}, {"Efl_Net_Server"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_server_simple_class_get(void);
    void efl_net_server_simple_inner_class_set(const Efl_Class * klass);
    const Efl_Class *efl_net_server_simple_inner_class_get(void);
    void efl_net_server_simple_inner_server_set(Efl_Object * server);
    Efl_Object *efl_net_server_simple_inner_server_get(void);
]]

local __M = util.get_namespace(M, { "net", "server" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    inner_class_set = function(self, klass)
        eo.__do_start(self, __class)
        __lib.efl_net_server_simple_inner_class_set(klass)
        eo.__do_end()
    end,

    inner_class_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_simple_inner_class_get()
        eo.__do_end()
        return v
    end,

    inner_server_set = function(self, server)
        eo.__do_start(self, __class)
        __lib.efl_net_server_simple_inner_server_set(server)
        eo.__do_end()
    end,

    inner_server_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_server_simple_inner_server_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["inner_class"] = { 0, 0, 1, 1, true, true },
        ["inner_server"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Simple = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Server_Simple").__eo_ctor,
                            1, ...)
end

return M
