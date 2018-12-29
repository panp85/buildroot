-- EFL LuaJIT bindings: efl_net_dialer_http.eo (class Efl.Net.Dialer.Http)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_dialer_http_class_get()
    eo.class_register("Efl_Net_Dialer_Http", {"Efl_Loop_User"}, {"Efl_Net_Dialer", "Efl_Io_Sizer"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_dialer_http_class_get(void);
    void efl_net_dialer_http_method_set(const char * method);
    const char *efl_net_dialer_http_method_get(void);
    void efl_net_dialer_http_primary_mode_set(Efl_Net_Dialer_Http_Primary_Mode primary_mode);
    Efl_Net_Dialer_Http_Primary_Mode efl_net_dialer_http_primary_mode_get(void);
    void efl_net_dialer_http_user_agent_set(const char * ser_agent);
    const char *efl_net_dialer_http_user_agent_get(void);
    void efl_net_dialer_http_version_set(Efl_Net_Http_Version http_version);
    Efl_Net_Http_Version efl_net_dialer_http_version_get(void);
    void efl_net_dialer_http_authentication_set(const char * username, const char * password, Efl_Net_Http_Authentication_Method method, Eina_Bool restricted);
    void efl_net_dialer_http_authentication_get(const char * *username, const char * *password, Efl_Net_Http_Authentication_Method *method, Eina_Bool *restricted);
    void efl_net_dialer_http_allow_redirects_set(Eina_Bool allow_redirects);
    Eina_Bool efl_net_dialer_http_allow_redirects_get(void);
    void efl_net_dialer_http_request_content_length_set(int64_t length);
    int64_t efl_net_dialer_http_request_content_length_get(void);
    int64_t efl_net_dialer_http_response_content_length_get(void);
    const char *efl_net_dialer_http_response_content_type_get(void);
    Efl_Net_Http_Status efl_net_dialer_http_response_status_get(void);
    void efl_net_dialer_http_progress_download_get(uint64_t *downloaded, uint64_t *total);
    void efl_net_dialer_http_progress_upload_get(uint64_t *uploaded, uint64_t *total);
    void efl_net_dialer_http_cookie_jar_set(const char * path);
    const char *efl_net_dialer_http_cookie_jar_get(void);
    void efl_net_dialer_http_ssl_verify_set(Eina_Bool peer, Eina_Bool hostname);
    void efl_net_dialer_http_ssl_verify_get(Eina_Bool *peer, Eina_Bool *hostname);
    void efl_net_dialer_http_ssl_certificate_authority_set(const char * path);
    const char *efl_net_dialer_http_ssl_certificate_authority_get(void);
    void efl_net_dialer_http_ssl_certificate_revocation_list_set(const char * file);
    const char *efl_net_dialer_http_ssl_certificate_revocation_list_get(void);
    void efl_net_dialer_http_request_header_add(const char * key, const char * value);
    void efl_net_dialer_http_request_headers_clear(void);
    Eina_Iterator *efl_net_dialer_http_request_headers_get(void);
    Eina_Iterator *efl_net_dialer_http_response_headers_get(void);
    Eina_Iterator *efl_net_dialer_http_response_headers_all_get(void);
    void efl_net_dialer_http_response_headers_clear(void);
    int64_t efl_net_dialer_http_date_parse(const char * str);
    char *efl_net_dialer_http_date_serialize(int64_t epochtime);
    extern const Eo_Event_Description _EFL_NET_DIALER_HTTP_EVENT_HEADERS_DONE;
]]

local __M = util.get_namespace(M, { "net", "dialer" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    method_set = function(self, method)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_http_method_set(method)
        eo.__do_end()
    end,

    method_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_method_get()
        eo.__do_end()
        return v
    end,

    primary_mode_set = function(self, primary_mode)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_http_primary_mode_set(primary_mode)
        eo.__do_end()
    end,

    primary_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_primary_mode_get()
        eo.__do_end()
        return v
    end,

    user_agent_set = function(self, ser_agent)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_http_user_agent_set(ser_agent)
        eo.__do_end()
    end,

    user_agent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_user_agent_get()
        eo.__do_end()
        return v
    end,

    http_version_set = function(self, http_version)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_http_version_set(http_version)
        eo.__do_end()
    end,

    http_version_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_version_get()
        eo.__do_end()
        return v
    end,

    authentication_set = function(self, username, password, method, restricted)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_http_authentication_set(username, password, method, restricted)
        eo.__do_end()
    end,

    authentication_get = function(self)
        eo.__do_start(self, __class)
        local username = ffi.new("const char *[1]")
        local password = ffi.new("const char *[1]")
        local method = ffi.new("Efl_Net_Http_Authentication_Method[1]")
        local restricted = ffi.new("Eina_Bool[1]")
        __lib.efl_net_dialer_http_authentication_get(username, password, method, restricted)
        eo.__do_end()
        return username[0], password[0], method[0], ((restricted[0]) ~= 0)
    end,

    allow_redirects_set = function(self, allow_redirects)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_http_allow_redirects_set(allow_redirects)
        eo.__do_end()
    end,

    allow_redirects_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_allow_redirects_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    request_content_length_set = function(self, length)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_http_request_content_length_set(length)
        eo.__do_end()
    end,

    request_content_length_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_request_content_length_get()
        eo.__do_end()
        return tonumber(v)
    end,

    response_content_length_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_response_content_length_get()
        eo.__do_end()
        return tonumber(v)
    end,

    response_content_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_response_content_type_get()
        eo.__do_end()
        return v
    end,

    response_status_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_response_status_get()
        eo.__do_end()
        return v
    end,

    progress_download_get = function(self)
        eo.__do_start(self, __class)
        local downloaded = ffi.new("uint64_t[1]")
        local total = ffi.new("uint64_t[1]")
        __lib.efl_net_dialer_http_progress_download_get(downloaded, total)
        eo.__do_end()
        return downloaded[0], total[0]
    end,

    progress_upload_get = function(self)
        eo.__do_start(self, __class)
        local uploaded = ffi.new("uint64_t[1]")
        local total = ffi.new("uint64_t[1]")
        __lib.efl_net_dialer_http_progress_upload_get(uploaded, total)
        eo.__do_end()
        return uploaded[0], total[0]
    end,

    cookie_jar_set = function(self, path)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_http_cookie_jar_set(path)
        eo.__do_end()
    end,

    cookie_jar_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_cookie_jar_get()
        eo.__do_end()
        return v
    end,

    ssl_verify_set = function(self, peer, hostname)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_http_ssl_verify_set(peer, hostname)
        eo.__do_end()
    end,

    ssl_verify_get = function(self)
        eo.__do_start(self, __class)
        local peer = ffi.new("Eina_Bool[1]")
        local hostname = ffi.new("Eina_Bool[1]")
        __lib.efl_net_dialer_http_ssl_verify_get(peer, hostname)
        eo.__do_end()
        return ((peer[0]) ~= 0), ((hostname[0]) ~= 0)
    end,

    ssl_certificate_authority_set = function(self, path)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_http_ssl_certificate_authority_set(path)
        eo.__do_end()
    end,

    ssl_certificate_authority_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_ssl_certificate_authority_get()
        eo.__do_end()
        return v
    end,

    ssl_certificate_revocation_list_set = function(self, file)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_http_ssl_certificate_revocation_list_set(file)
        eo.__do_end()
    end,

    ssl_certificate_revocation_list_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_ssl_certificate_revocation_list_get()
        eo.__do_end()
        return v
    end,

    request_header_add = function(self, key, value)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_http_request_header_add(key, value)
        eo.__do_end()
    end,

    request_headers_clear = function(self)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_http_request_headers_clear()
        eo.__do_end()
    end,

    request_headers_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_request_headers_get()
        eo.__do_end()
        return v
    end,

    response_headers_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_response_headers_get()
        eo.__do_end()
        return v
    end,

    response_headers_all_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_response_headers_all_get()
        eo.__do_end()
        return v
    end,

    response_headers_clear = function(self)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_http_response_headers_clear()
        eo.__do_end()
    end,

    date_parse = function(self, str)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_date_parse(str)
        eo.__do_end()
        return tonumber(v)
    end,

    date_serialize = function(self, epochtime)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_http_date_serialize(epochtime)
        eo.__do_end()
        return string.char(v)
    end,

    __events = {
        ["headers,done"] = __lib._EFL_NET_DIALER_HTTP_EVENT_HEADERS_DONE
    },

    __properties = {
        ["response_content_length"] = { 0, 0, 1, 0, true, false },
        ["authentication"] = { 0, 0, 4, 4, true, true },
        ["ssl_certificate_revocation_list"] = { 0, 0, 1, 1, true, true },
        ["ssl_verify"] = { 0, 0, 2, 2, true, true },
        ["progress_download"] = { 0, 0, 2, 0, true, false },
        ["progress_upload"] = { 0, 0, 2, 0, true, false },
        ["primary_mode"] = { 0, 0, 1, 1, true, true },
        ["allow_redirects"] = { 0, 0, 1, 1, true, true },
        ["user_agent"] = { 0, 0, 1, 1, true, true },
        ["method"] = { 0, 0, 1, 1, true, true },
        ["cookie_jar"] = { 0, 0, 1, 1, true, true },
        ["ssl_certificate_authority"] = { 0, 0, 1, 1, true, true },
        ["http_version"] = { 0, 0, 1, 1, true, true },
        ["response_status"] = { 0, 0, 1, 0, true, false },
        ["response_content_type"] = { 0, 0, 1, 0, true, false },
        ["request_content_length"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Http = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Dialer_Http").__eo_ctor,
                            1, ...)
end

return M
