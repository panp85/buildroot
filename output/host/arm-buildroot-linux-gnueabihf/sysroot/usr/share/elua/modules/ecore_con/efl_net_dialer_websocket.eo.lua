-- EFL LuaJIT bindings: efl_net_dialer_websocket.eo (class Efl.Net.Dialer.Websocket)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_net_dialer_websocket_class_get()
    eo.class_register("Efl_Net_Dialer_Websocket", {"Efl_Loop_User"}, {"Efl_Net_Dialer"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_net_dialer_websocket_class_get(void);
    void efl_net_dialer_websocket_streaming_mode_set(Efl_Net_Dialer_Websocket_Streaming_Mode streaming_mode);
    Efl_Net_Dialer_Websocket_Streaming_Mode efl_net_dialer_websocket_streaming_mode_get(void);
    void efl_net_dialer_websocket_user_agent_set(const char * user_agent);
    const char *efl_net_dialer_websocket_user_agent_get(void);
    void efl_net_dialer_websocket_authentication_set(const char * username, const char * password, Efl_Net_Http_Authentication_Method method, Eina_Bool restricted);
    void efl_net_dialer_websocket_authentication_get(const char * *username, const char * *password, Efl_Net_Http_Authentication_Method *method, Eina_Bool *restricted);
    void efl_net_dialer_websocket_allow_redirects_set(Eina_Bool allow_redirects);
    Eina_Bool efl_net_dialer_websocket_allow_redirects_get(void);
    void efl_net_dialer_websocket_cookie_jar_set(const char * path);
    const char *efl_net_dialer_websocket_cookie_jar_get(void);
    void efl_net_dialer_websocket_ping(const char * reason);
    void efl_net_dialer_websocket_text_send(const char * text);
    void efl_net_dialer_websocket_binary_send(const Eina_Slice blob);
    void efl_net_dialer_websocket_close_request(Efl_Net_Dialer_Websocket_Close_Reason reason, const char * message);
    void efl_net_dialer_websocket_request_protocol_add(const char * protocol);
    Eina_Iterator *efl_net_dialer_websocket_request_protocols_get(void);
    void efl_net_dialer_websocket_request_protocols_clear(void);
    Eina_Iterator *efl_net_dialer_websocket_response_protocols_get(void);
    void efl_net_dialer_websocket_request_header_add(const char * key, const char * value);
    void efl_net_dialer_websocket_request_headers_clear(void);
    Eina_Iterator *efl_net_dialer_websocket_request_headers_get(void);
    extern const Eo_Event_Description _EFL_NET_DIALER_WEBSOCKET_EVENT_MESSAGE_TEXT;
    extern const Eo_Event_Description _EFL_NET_DIALER_WEBSOCKET_EVENT_MESSAGE_BINARY;
    extern const Eo_Event_Description _EFL_NET_DIALER_WEBSOCKET_EVENT_PONG;
    extern const Eo_Event_Description _EFL_NET_DIALER_WEBSOCKET_EVENT_CLOSED_REASON;
]]

local __M = util.get_namespace(M, { "net", "dialer" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    streaming_mode_set = function(self, streaming_mode)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_websocket_streaming_mode_set(streaming_mode)
        eo.__do_end()
    end,

    streaming_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_websocket_streaming_mode_get()
        eo.__do_end()
        return v
    end,

    user_agent_set = function(self, user_agent)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_websocket_user_agent_set(user_agent)
        eo.__do_end()
    end,

    user_agent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_websocket_user_agent_get()
        eo.__do_end()
        return v
    end,

    authentication_set = function(self, username, password, method, restricted)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_websocket_authentication_set(username, password, method, restricted)
        eo.__do_end()
    end,

    authentication_get = function(self)
        eo.__do_start(self, __class)
        local username = ffi.new("const char *[1]")
        local password = ffi.new("const char *[1]")
        local method = ffi.new("Efl_Net_Http_Authentication_Method[1]")
        local restricted = ffi.new("Eina_Bool[1]")
        __lib.efl_net_dialer_websocket_authentication_get(username, password, method, restricted)
        eo.__do_end()
        return username[0], password[0], method[0], ((restricted[0]) ~= 0)
    end,

    allow_redirects_set = function(self, allow_redirects)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_websocket_allow_redirects_set(allow_redirects)
        eo.__do_end()
    end,

    allow_redirects_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_websocket_allow_redirects_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    cookie_jar_set = function(self, path)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_websocket_cookie_jar_set(path)
        eo.__do_end()
    end,

    cookie_jar_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_websocket_cookie_jar_get()
        eo.__do_end()
        return v
    end,

    ping = function(self, reason)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_websocket_ping(reason)
        eo.__do_end()
    end,

    text_send = function(self, text)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_websocket_text_send(text)
        eo.__do_end()
    end,

    binary_send = function(self, blob)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_websocket_binary_send(blob)
        eo.__do_end()
    end,

    close_request = function(self, reason, message)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_websocket_close_request(reason, message)
        eo.__do_end()
    end,

    request_protocol_add = function(self, protocol)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_websocket_request_protocol_add(protocol)
        eo.__do_end()
    end,

    request_protocols_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_websocket_request_protocols_get()
        eo.__do_end()
        return v
    end,

    request_protocols_clear = function(self)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_websocket_request_protocols_clear()
        eo.__do_end()
    end,

    response_protocols_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_websocket_response_protocols_get()
        eo.__do_end()
        return v
    end,

    request_header_add = function(self, key, value)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_websocket_request_header_add(key, value)
        eo.__do_end()
    end,

    request_headers_clear = function(self)
        eo.__do_start(self, __class)
        __lib.efl_net_dialer_websocket_request_headers_clear()
        eo.__do_end()
    end,

    request_headers_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_net_dialer_websocket_request_headers_get()
        eo.__do_end()
        return v
    end,

    __events = {
        ["message,text"] = __lib._EFL_NET_DIALER_WEBSOCKET_EVENT_MESSAGE_TEXT,
        ["message,binary"] = __lib._EFL_NET_DIALER_WEBSOCKET_EVENT_MESSAGE_BINARY,
        ["pong"] = __lib._EFL_NET_DIALER_WEBSOCKET_EVENT_PONG,
        ["closed,reason"] = __lib._EFL_NET_DIALER_WEBSOCKET_EVENT_CLOSED_REASON
    },

    __properties = {
        ["streaming_mode"] = { 0, 0, 1, 1, true, true },
        ["authentication"] = { 0, 0, 4, 4, true, true },
        ["cookie_jar"] = { 0, 0, 1, 1, true, true },
        ["user_agent"] = { 0, 0, 1, 1, true, true },
        ["allow_redirects"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Websocket = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Net_Dialer_Websocket").__eo_ctor,
                            1, ...)
end

return M
