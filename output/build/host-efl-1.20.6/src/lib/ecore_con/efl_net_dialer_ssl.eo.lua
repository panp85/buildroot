-- EFL LuaJIT bindings: efl_net_dialer_ssl.eo (class Efl.Net.Dialer.Ssl)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_dialer_ssl_class_get()
    eo.class_register("Efl_Net_Dialer_Ssl", {"Efl_Net_Socket_Ssl"}, {"Efl_Net_Dialer"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_dialer_ssl_class_get(void);
    void efl_net_dialer_ssl_context_set(Efl_Net_Ssl_Context * ssl_context);
    Efl_Net_Ssl_Context *efl_net_dialer_ssl_context_get(void);
    Eina_Bool efl_net_dialer_ssl_keep_alive_set(Eina_Bool keep_alive);
    Eina_Bool efl_net_dialer_ssl_keep_alive_get(void);
    Eina_Bool efl_net_dialer_ssl_no_delay_set(Eina_Bool no_delay);
    Eina_Bool efl_net_dialer_ssl_no_delay_get(void);
]]

local __M = util.get_namespace(M, { "net", "dialer" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    ssl_context_set = function(self, ssl_context)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_ssl_context_set(ssl_context)
        eo.__do_end()
    end,

    ssl_context_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_ssl_context_get()
        eo.__do_end()
        return v
    end,

    keep_alive_set = function(self, keep_alive)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_ssl_keep_alive_set(keep_alive)
        eo.__do_end()
    end,

    keep_alive_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_ssl_keep_alive_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    no_delay_set = function(self, no_delay)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_ssl_no_delay_set(no_delay)
        eo.__do_end()
    end,

    no_delay_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_ssl_no_delay_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["keep_alive"] = { 0, 0, 1, 1, true, true },
        ["ssl_context"] = { 0, 0, 1, 1, true, true },
        ["no_delay"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Ssl = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Dialer_Ssl").__eo_ctor,
                            1, ...)
end

return M
