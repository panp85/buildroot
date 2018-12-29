EWAPI const Efl_Event_Description _EFL_NET_DIALER_WEBSOCKET_EVENT_MESSAGE_TEXT =
   EFL_EVENT_DESCRIPTION("message,text");
EWAPI const Efl_Event_Description _EFL_NET_DIALER_WEBSOCKET_EVENT_MESSAGE_BINARY =
   EFL_EVENT_DESCRIPTION("message,binary");
EWAPI const Efl_Event_Description _EFL_NET_DIALER_WEBSOCKET_EVENT_PONG =
   EFL_EVENT_DESCRIPTION("pong");
EWAPI const Efl_Event_Description _EFL_NET_DIALER_WEBSOCKET_EVENT_CLOSED_REASON =
   EFL_EVENT_DESCRIPTION("closed,reason");

void _efl_net_dialer_websocket_ping(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, const char *reason);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_websocket_ping, EFL_FUNC_CALL(reason), const char *reason);

void _efl_net_dialer_websocket_text_send(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, const char *text);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_websocket_text_send, EFL_FUNC_CALL(text), const char *text);

void _efl_net_dialer_websocket_binary_send(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, const Eina_Slice blob);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_websocket_binary_send, EFL_FUNC_CALL(blob), const Eina_Slice blob);

void _efl_net_dialer_websocket_close_request(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, Efl_Net_Dialer_Websocket_Close_Reason reason, const char *message);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_websocket_close_request, EFL_FUNC_CALL(reason, message), Efl_Net_Dialer_Websocket_Close_Reason reason, const char *message);

void _efl_net_dialer_websocket_request_protocol_add(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, const char *protocol);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_websocket_request_protocol_add, EFL_FUNC_CALL(protocol), const char *protocol);

Eina_Iterator *_efl_net_dialer_websocket_request_protocols_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);

EOAPI EFL_FUNC_BODY(efl_net_dialer_websocket_request_protocols_get, Eina_Iterator *, NULL);

void _efl_net_dialer_websocket_request_protocols_clear(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_net_dialer_websocket_request_protocols_clear);

Eina_Iterator *_efl_net_dialer_websocket_response_protocols_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);

EOAPI EFL_FUNC_BODY(efl_net_dialer_websocket_response_protocols_get, Eina_Iterator *, NULL);

void _efl_net_dialer_websocket_streaming_mode_set(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, Efl_Net_Dialer_Websocket_Streaming_Mode streaming_mode);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_websocket_streaming_mode_set, EFL_FUNC_CALL(streaming_mode), Efl_Net_Dialer_Websocket_Streaming_Mode streaming_mode);

Efl_Net_Dialer_Websocket_Streaming_Mode _efl_net_dialer_websocket_streaming_mode_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_websocket_streaming_mode_get, Efl_Net_Dialer_Websocket_Streaming_Mode, 0);

void _efl_net_dialer_websocket_user_agent_set(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, const char *user_agent);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_websocket_user_agent_set, EFL_FUNC_CALL(user_agent), const char *user_agent);

const char *_efl_net_dialer_websocket_user_agent_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_websocket_user_agent_get, const char *, NULL);

void _efl_net_dialer_websocket_authentication_set(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, const char *username, const char *password, Efl_Net_Http_Authentication_Method method, Eina_Bool restricted);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_websocket_authentication_set, EFL_FUNC_CALL(username, password, method, restricted), const char *username, const char *password, Efl_Net_Http_Authentication_Method method, Eina_Bool restricted);

void _efl_net_dialer_websocket_authentication_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, const char **username, const char **password, Efl_Net_Http_Authentication_Method *method, Eina_Bool *restricted);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_dialer_websocket_authentication_get, EFL_FUNC_CALL(username, password, method, restricted), const char **username, const char **password, Efl_Net_Http_Authentication_Method *method, Eina_Bool *restricted);

void _efl_net_dialer_websocket_allow_redirects_set(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, Eina_Bool allow_redirects);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_websocket_allow_redirects_set, EFL_FUNC_CALL(allow_redirects), Eina_Bool allow_redirects);

Eina_Bool _efl_net_dialer_websocket_allow_redirects_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_websocket_allow_redirects_get, Eina_Bool, 0);

void _efl_net_dialer_websocket_request_header_add(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, const char *key, const char *value);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_websocket_request_header_add, EFL_FUNC_CALL(key, value), const char *key, const char *value);

void _efl_net_dialer_websocket_request_headers_clear(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_net_dialer_websocket_request_headers_clear);

Eina_Iterator *_efl_net_dialer_websocket_request_headers_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);

EOAPI EFL_FUNC_BODY(efl_net_dialer_websocket_request_headers_get, Eina_Iterator *, NULL);

void _efl_net_dialer_websocket_cookie_jar_set(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, const char *path);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_websocket_cookie_jar_set, EFL_FUNC_CALL(path), const char *path);

const char *_efl_net_dialer_websocket_cookie_jar_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_websocket_cookie_jar_get, const char *, NULL);

Efl_Object *_efl_net_dialer_websocket_efl_object_constructor(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


void _efl_net_dialer_websocket_efl_object_destructor(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


Eina_Error _efl_net_dialer_websocket_efl_net_dialer_dial(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, const char *address);


void _efl_net_dialer_websocket_efl_net_dialer_address_dial_set(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, const char *address);


const char *_efl_net_dialer_websocket_efl_net_dialer_address_dial_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


void _efl_net_dialer_websocket_efl_net_dialer_connected_set(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, Eina_Bool connected);


Eina_Bool _efl_net_dialer_websocket_efl_net_dialer_connected_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


void _efl_net_dialer_websocket_efl_net_dialer_proxy_set(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, const char *proxy_url);


const char *_efl_net_dialer_websocket_efl_net_dialer_proxy_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


void _efl_net_dialer_websocket_efl_net_dialer_timeout_dial_set(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, double seconds);


double _efl_net_dialer_websocket_efl_net_dialer_timeout_dial_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


const char *_efl_net_dialer_websocket_efl_net_socket_address_local_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


void _efl_net_dialer_websocket_efl_net_socket_address_remote_set(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, const char *address);


const char *_efl_net_dialer_websocket_efl_net_socket_address_remote_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


Eina_Error _efl_net_dialer_websocket_efl_io_reader_read(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, Eina_Rw_Slice *rw_slice);


void _efl_net_dialer_websocket_efl_io_reader_can_read_set(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, Eina_Bool can_read);


Eina_Bool _efl_net_dialer_websocket_efl_io_reader_can_read_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


Eina_Bool _efl_net_dialer_websocket_efl_io_reader_eos_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


Eina_Error _efl_net_dialer_websocket_efl_io_writer_write(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, Eina_Slice *slice, Eina_Slice *remaining);


void _efl_net_dialer_websocket_efl_io_writer_can_write_set(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, Eina_Bool can_write);


Eina_Bool _efl_net_dialer_websocket_efl_io_writer_can_write_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


Eina_Error _efl_net_dialer_websocket_efl_io_closer_close(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


Eina_Bool _efl_net_dialer_websocket_efl_io_closer_closed_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


Eina_Bool _efl_net_dialer_websocket_efl_io_closer_close_on_exec_set(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, Eina_Bool close_on_exec);


Eina_Bool _efl_net_dialer_websocket_efl_io_closer_close_on_exec_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


void _efl_net_dialer_websocket_efl_io_closer_close_on_destructor_set(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd, Eina_Bool close_on_destructor);


Eina_Bool _efl_net_dialer_websocket_efl_io_closer_close_on_destructor_get(Eo *obj, Efl_Net_Dialer_Websocket_Data *pd);


static Eina_Bool
_efl_net_dialer_websocket_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_DIALER_WEBSOCKET_EXTRA_OPS
#define EFL_NET_DIALER_WEBSOCKET_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_ping, _efl_net_dialer_websocket_ping),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_text_send, _efl_net_dialer_websocket_text_send),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_binary_send, _efl_net_dialer_websocket_binary_send),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_close_request, _efl_net_dialer_websocket_close_request),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_request_protocol_add, _efl_net_dialer_websocket_request_protocol_add),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_request_protocols_get, _efl_net_dialer_websocket_request_protocols_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_request_protocols_clear, _efl_net_dialer_websocket_request_protocols_clear),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_response_protocols_get, _efl_net_dialer_websocket_response_protocols_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_streaming_mode_set, _efl_net_dialer_websocket_streaming_mode_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_streaming_mode_get, _efl_net_dialer_websocket_streaming_mode_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_user_agent_set, _efl_net_dialer_websocket_user_agent_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_user_agent_get, _efl_net_dialer_websocket_user_agent_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_authentication_set, _efl_net_dialer_websocket_authentication_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_authentication_get, _efl_net_dialer_websocket_authentication_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_allow_redirects_set, _efl_net_dialer_websocket_allow_redirects_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_allow_redirects_get, _efl_net_dialer_websocket_allow_redirects_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_request_header_add, _efl_net_dialer_websocket_request_header_add),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_request_headers_clear, _efl_net_dialer_websocket_request_headers_clear),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_request_headers_get, _efl_net_dialer_websocket_request_headers_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_cookie_jar_set, _efl_net_dialer_websocket_cookie_jar_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_websocket_cookie_jar_get, _efl_net_dialer_websocket_cookie_jar_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_net_dialer_websocket_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_dialer_websocket_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_dial, _efl_net_dialer_websocket_efl_net_dialer_dial),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_address_dial_set, _efl_net_dialer_websocket_efl_net_dialer_address_dial_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_address_dial_get, _efl_net_dialer_websocket_efl_net_dialer_address_dial_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_connected_set, _efl_net_dialer_websocket_efl_net_dialer_connected_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_connected_get, _efl_net_dialer_websocket_efl_net_dialer_connected_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_proxy_set, _efl_net_dialer_websocket_efl_net_dialer_proxy_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_proxy_get, _efl_net_dialer_websocket_efl_net_dialer_proxy_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_timeout_dial_set, _efl_net_dialer_websocket_efl_net_dialer_timeout_dial_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_timeout_dial_get, _efl_net_dialer_websocket_efl_net_dialer_timeout_dial_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_local_get, _efl_net_dialer_websocket_efl_net_socket_address_local_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_remote_set, _efl_net_dialer_websocket_efl_net_socket_address_remote_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_remote_get, _efl_net_dialer_websocket_efl_net_socket_address_remote_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_read, _efl_net_dialer_websocket_efl_io_reader_read),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_set, _efl_net_dialer_websocket_efl_io_reader_can_read_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_get, _efl_net_dialer_websocket_efl_io_reader_can_read_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_get, _efl_net_dialer_websocket_efl_io_reader_eos_get),
      EFL_OBJECT_OP_FUNC(efl_io_writer_write, _efl_net_dialer_websocket_efl_io_writer_write),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_set, _efl_net_dialer_websocket_efl_io_writer_can_write_set),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_get, _efl_net_dialer_websocket_efl_io_writer_can_write_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close, _efl_net_dialer_websocket_efl_io_closer_close),
      EFL_OBJECT_OP_FUNC(efl_io_closer_closed_get, _efl_net_dialer_websocket_efl_io_closer_closed_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_set, _efl_net_dialer_websocket_efl_io_closer_close_on_exec_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_get, _efl_net_dialer_websocket_efl_io_closer_close_on_exec_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_set, _efl_net_dialer_websocket_efl_io_closer_close_on_destructor_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_get, _efl_net_dialer_websocket_efl_io_closer_close_on_destructor_get),
      EFL_NET_DIALER_WEBSOCKET_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_DIALER_WEBSOCKET_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_DIALER_WEBSOCKET_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_dialer_websocket_class_desc = {
   EO_VERSION,
   "Efl.Net.Dialer.Websocket",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Dialer_Websocket_Data),
   _efl_net_dialer_websocket_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_dialer_websocket_class_get, &_efl_net_dialer_websocket_class_desc, EFL_LOOP_USER_CLASS, EFL_NET_DIALER_INTERFACE, NULL);
