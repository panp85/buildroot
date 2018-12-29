-- EFL LuaJIT bindings: efl_net_ssl_context.eo (class Efl.Net.Ssl.Context)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_ssl_context_class_get()
    eo.class_register("Efl_Net_Ssl_Context", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_ssl_context_class_get(void);
    Efl_Net_Ssl_Context *efl_net_ssl_context_default_dialer_get(void);
    void efl_net_ssl_context_certificates_set(Eina_Iterator * paths);
    Eina_Iterator *efl_net_ssl_context_certificates_get(void);
    void efl_net_ssl_context_private_keys_set(Eina_Iterator * paths);
    Eina_Iterator *efl_net_ssl_context_private_keys_get(void);
    void efl_net_ssl_context_certificate_revocation_lists_set(Eina_Iterator * paths);
    Eina_Iterator *efl_net_ssl_context_certificate_revocation_lists_get(void);
    void efl_net_ssl_context_certificate_authorities_set(Eina_Iterator * paths);
    Eina_Iterator *efl_net_ssl_context_certificate_authorities_get(void);
    void efl_net_ssl_context_default_paths_load_set(Eina_Bool default_paths_load);
    Eina_Bool efl_net_ssl_context_default_paths_load_get(void);
    void efl_net_ssl_context_verify_mode_set(Efl_Net_Ssl_Verify_Mode verify_mode);
    Efl_Net_Ssl_Verify_Mode efl_net_ssl_context_verify_mode_get(void);
    void efl_net_ssl_context_hostname_verify_set(Eina_Bool hostname_verify);
    Eina_Bool efl_net_ssl_context_hostname_verify_get(void);
    void efl_net_ssl_context_hostname_set(const char * hostname);
    const char *efl_net_ssl_context_hostname_get(void);
    void efl_net_ssl_context_setup(Efl_Net_Ssl_Cipher cipher, Eina_Bool is_dialer);
]]

local __M = util.get_namespace(M, { "net", "ssl" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    default_dialer_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ssl_context_default_dialer_get()
        eo.__do_end()
        return v
    end,

    certificates_set = function(self, paths)
        eo.__do_start(self, __class)
        __lib.efl_net_ssl_context_certificates_set(paths)
        eo.__do_end()
    end,

    certificates_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ssl_context_certificates_get()
        eo.__do_end()
        return v
    end,

    private_keys_set = function(self, paths)
        eo.__do_start(self, __class)
        __lib.efl_net_ssl_context_private_keys_set(paths)
        eo.__do_end()
    end,

    private_keys_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ssl_context_private_keys_get()
        eo.__do_end()
        return v
    end,

    certificate_revocation_lists_set = function(self, paths)
        eo.__do_start(self, __class)
        __lib.efl_net_ssl_context_certificate_revocation_lists_set(paths)
        eo.__do_end()
    end,

    certificate_revocation_lists_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ssl_context_certificate_revocation_lists_get()
        eo.__do_end()
        return v
    end,

    certificate_authorities_set = function(self, paths)
        eo.__do_start(self, __class)
        __lib.efl_net_ssl_context_certificate_authorities_set(paths)
        eo.__do_end()
    end,

    certificate_authorities_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ssl_context_certificate_authorities_get()
        eo.__do_end()
        return v
    end,

    default_paths_load_set = function(self, default_paths_load)
        eo.__do_start(self, __class)
        __lib.efl_net_ssl_context_default_paths_load_set(default_paths_load)
        eo.__do_end()
    end,

    default_paths_load_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ssl_context_default_paths_load_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    verify_mode_set = function(self, verify_mode)
        eo.__do_start(self, __class)
        __lib.efl_net_ssl_context_verify_mode_set(verify_mode)
        eo.__do_end()
    end,

    verify_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ssl_context_verify_mode_get()
        eo.__do_end()
        return v
    end,

    hostname_verify_set = function(self, hostname_verify)
        eo.__do_start(self, __class)
        __lib.efl_net_ssl_context_hostname_verify_set(hostname_verify)
        eo.__do_end()
    end,

    hostname_verify_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ssl_context_hostname_verify_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    hostname_set = function(self, hostname)
        eo.__do_start(self, __class)
        __lib.efl_net_ssl_context_hostname_set(hostname)
        eo.__do_end()
    end,

    hostname_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_ssl_context_hostname_get()
        eo.__do_end()
        return v
    end,

    setup = function(self, cipher, is_dialer)
        eo.__do_start(self, __class)
        __lib.efl_net_ssl_context_setup(cipher, is_dialer)
        eo.__do_end()
    end,

    __properties = {
        ["default_paths_load"] = { 0, 0, 1, 1, true, true },
        ["verify_mode"] = { 0, 0, 1, 1, true, true },
        ["certificate_revocation_lists"] = { 0, 0, 1, 1, true, true },
        ["certificate_authorities"] = { 0, 0, 1, 1, true, true },
        ["private_keys"] = { 0, 0, 1, 1, true, true },
        ["hostname"] = { 0, 0, 1, 1, true, true },
        ["hostname_verify"] = { 0, 0, 1, 1, true, true },
        ["certificates"] = { 0, 0, 1, 1, true, true },
        ["default_dialer"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Context = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Ssl_Context").__eo_ctor,
                            1, ...)
end

return M
