EWAPI const Efl_Event_Description _EFL_NET_DIALER_HTTP_EVENT_HEADERS_DONE =
   EFL_EVENT_DESCRIPTION("headers,done");

void _efl_net_dialer_http_method_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, const char *method);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_http_method_set, EFL_FUNC_CALL(method), const char *method);

const char *_efl_net_dialer_http_method_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_http_method_get, const char *, NULL);

void _efl_net_dialer_http_primary_mode_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, Efl_Net_Dialer_Http_Primary_Mode primary_mode);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_http_primary_mode_set, EFL_FUNC_CALL(primary_mode), Efl_Net_Dialer_Http_Primary_Mode primary_mode);

Efl_Net_Dialer_Http_Primary_Mode _efl_net_dialer_http_primary_mode_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_http_primary_mode_get, Efl_Net_Dialer_Http_Primary_Mode, 0);

void _efl_net_dialer_http_user_agent_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, const char *ser_agent);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_http_user_agent_set, EFL_FUNC_CALL(ser_agent), const char *ser_agent);

const char *_efl_net_dialer_http_user_agent_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_http_user_agent_get, const char *, NULL);

void _efl_net_dialer_http_http_version_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, Efl_Net_Http_Version http_version);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_http_version_set, EFL_FUNC_CALL(http_version), Efl_Net_Http_Version http_version);

Efl_Net_Http_Version _efl_net_dialer_http_http_version_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_http_version_get, Efl_Net_Http_Version, 0);

void _efl_net_dialer_http_authentication_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, const char *username, const char *password, Efl_Net_Http_Authentication_Method method, Eina_Bool restricted);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_http_authentication_set, EFL_FUNC_CALL(username, password, method, restricted), const char *username, const char *password, Efl_Net_Http_Authentication_Method method, Eina_Bool restricted);

void _efl_net_dialer_http_authentication_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd, const char **username, const char **password, Efl_Net_Http_Authentication_Method *method, Eina_Bool *restricted);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_dialer_http_authentication_get, EFL_FUNC_CALL(username, password, method, restricted), const char **username, const char **password, Efl_Net_Http_Authentication_Method *method, Eina_Bool *restricted);

void _efl_net_dialer_http_allow_redirects_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, Eina_Bool allow_redirects);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_http_allow_redirects_set, EFL_FUNC_CALL(allow_redirects), Eina_Bool allow_redirects);

Eina_Bool _efl_net_dialer_http_allow_redirects_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_http_allow_redirects_get, Eina_Bool, 0);

void _efl_net_dialer_http_request_header_add(Eo *obj, Efl_Net_Dialer_Http_Data *pd, const char *key, const char *value);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_http_request_header_add, EFL_FUNC_CALL(key, value), const char *key, const char *value);

void _efl_net_dialer_http_request_headers_clear(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_net_dialer_http_request_headers_clear);

Eina_Iterator *_efl_net_dialer_http_request_headers_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY(efl_net_dialer_http_request_headers_get, Eina_Iterator *, NULL);

void _efl_net_dialer_http_request_content_length_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, int64_t length);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_http_request_content_length_set, EFL_FUNC_CALL(length), int64_t length);

int64_t _efl_net_dialer_http_request_content_length_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_http_request_content_length_get, int64_t, 0);

void _efl_net_dialer_http_response_content_length_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, int64_t length);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_http_response_content_length_set, EFL_FUNC_CALL(length), int64_t length);

int64_t _efl_net_dialer_http_response_content_length_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_http_response_content_length_get, int64_t, 0);

void _efl_net_dialer_http_response_content_type_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, const char *content_type);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_http_response_content_type_set, EFL_FUNC_CALL(content_type), const char *content_type);

const char *_efl_net_dialer_http_response_content_type_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_http_response_content_type_get, const char *, NULL);

Efl_Net_Http_Status _efl_net_dialer_http_response_status_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_http_response_status_get, Efl_Net_Http_Status, 0);

Eina_Iterator *_efl_net_dialer_http_response_headers_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY(efl_net_dialer_http_response_headers_get, Eina_Iterator *, NULL);

Eina_Iterator *_efl_net_dialer_http_response_headers_all_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY(efl_net_dialer_http_response_headers_all_get, Eina_Iterator *, NULL);

void _efl_net_dialer_http_response_headers_clear(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_net_dialer_http_response_headers_clear);

void _efl_net_dialer_http_progress_download_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd, uint64_t *downloaded, uint64_t *total);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_dialer_http_progress_download_get, EFL_FUNC_CALL(downloaded, total), uint64_t *downloaded, uint64_t *total);

void _efl_net_dialer_http_progress_upload_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd, uint64_t *uploaded, uint64_t *total);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_dialer_http_progress_upload_get, EFL_FUNC_CALL(uploaded, total), uint64_t *uploaded, uint64_t *total);

void _efl_net_dialer_http_cookie_jar_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, const char *path);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_http_cookie_jar_set, EFL_FUNC_CALL(path), const char *path);

const char *_efl_net_dialer_http_cookie_jar_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_http_cookie_jar_get, const char *, NULL);

void _efl_net_dialer_http_ssl_verify_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, Eina_Bool peer, Eina_Bool hostname);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_http_ssl_verify_set, EFL_FUNC_CALL(peer, hostname), Eina_Bool peer, Eina_Bool hostname);

void _efl_net_dialer_http_ssl_verify_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd, Eina_Bool *peer, Eina_Bool *hostname);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_dialer_http_ssl_verify_get, EFL_FUNC_CALL(peer, hostname), Eina_Bool *peer, Eina_Bool *hostname);

void _efl_net_dialer_http_ssl_certificate_authority_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, const char *path);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_http_ssl_certificate_authority_set, EFL_FUNC_CALL(path), const char *path);

const char *_efl_net_dialer_http_ssl_certificate_authority_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_http_ssl_certificate_authority_get, const char *, NULL);

void _efl_net_dialer_http_ssl_certificate_revocation_list_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, const char *file);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_dialer_http_ssl_certificate_revocation_list_set, EFL_FUNC_CALL(file), const char *file);

const char *_efl_net_dialer_http_ssl_certificate_revocation_list_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_dialer_http_ssl_certificate_revocation_list_get, const char *, NULL);

int64_t _efl_net_dialer_http_date_parse(Eo *obj, void *pd, const char *str);

EOAPI EFL_FUNC_BODYV_CONST(efl_net_dialer_http_date_parse, int64_t, 0, EFL_FUNC_CALL(str), const char *str);

char *_efl_net_dialer_http_date_serialize(Eo *obj, void *pd, int64_t epochtime);

EOAPI EFL_FUNC_BODYV_CONST(efl_net_dialer_http_date_serialize, char *, NULL, EFL_FUNC_CALL(epochtime), int64_t epochtime);

Efl_Object *_efl_net_dialer_http_efl_object_constructor(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


void _efl_net_dialer_http_efl_object_destructor(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


Eina_Error _efl_net_dialer_http_efl_net_dialer_dial(Eo *obj, Efl_Net_Dialer_Http_Data *pd, const char *address);


void _efl_net_dialer_http_efl_net_dialer_address_dial_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, const char *address);


const char *_efl_net_dialer_http_efl_net_dialer_address_dial_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


void _efl_net_dialer_http_efl_net_dialer_connected_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, Eina_Bool connected);


Eina_Bool _efl_net_dialer_http_efl_net_dialer_connected_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


void _efl_net_dialer_http_efl_net_dialer_proxy_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, const char *proxy_url);


const char *_efl_net_dialer_http_efl_net_dialer_proxy_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


void _efl_net_dialer_http_efl_net_dialer_timeout_dial_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, double seconds);


double _efl_net_dialer_http_efl_net_dialer_timeout_dial_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


void _efl_net_dialer_http_efl_net_socket_address_local_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, const char *address);


const char *_efl_net_dialer_http_efl_net_socket_address_local_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


void _efl_net_dialer_http_efl_net_socket_address_remote_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, const char *address);


const char *_efl_net_dialer_http_efl_net_socket_address_remote_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


Eina_Error _efl_net_dialer_http_efl_io_reader_read(Eo *obj, Efl_Net_Dialer_Http_Data *pd, Eina_Rw_Slice *rw_slice);


void _efl_net_dialer_http_efl_io_reader_can_read_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, Eina_Bool can_read);


Eina_Bool _efl_net_dialer_http_efl_io_reader_can_read_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


void _efl_net_dialer_http_efl_io_reader_eos_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, Eina_Bool is_eos);


Eina_Bool _efl_net_dialer_http_efl_io_reader_eos_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


Eina_Error _efl_net_dialer_http_efl_io_writer_write(Eo *obj, Efl_Net_Dialer_Http_Data *pd, Eina_Slice *slice, Eina_Slice *remaining);


void _efl_net_dialer_http_efl_io_writer_can_write_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, Eina_Bool can_write);


Eina_Bool _efl_net_dialer_http_efl_io_writer_can_write_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


Eina_Error _efl_net_dialer_http_efl_io_closer_close(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


Eina_Bool _efl_net_dialer_http_efl_io_closer_closed_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


Eina_Bool _efl_net_dialer_http_efl_io_closer_close_on_exec_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, Eina_Bool close_on_exec);


Eina_Bool _efl_net_dialer_http_efl_io_closer_close_on_exec_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


void _efl_net_dialer_http_efl_io_closer_close_on_destructor_set(Eo *obj, Efl_Net_Dialer_Http_Data *pd, Eina_Bool close_on_destructor);


Eina_Bool _efl_net_dialer_http_efl_io_closer_close_on_destructor_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


Eina_Error _efl_net_dialer_http_efl_io_sizer_resize(Eo *obj, Efl_Net_Dialer_Http_Data *pd, uint64_t size);


uint64_t _efl_net_dialer_http_efl_io_sizer_size_get(Eo *obj, Efl_Net_Dialer_Http_Data *pd);


static Eina_Bool
_efl_net_dialer_http_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_DIALER_HTTP_EXTRA_OPS
#define EFL_NET_DIALER_HTTP_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_method_set, _efl_net_dialer_http_method_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_method_get, _efl_net_dialer_http_method_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_primary_mode_set, _efl_net_dialer_http_primary_mode_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_primary_mode_get, _efl_net_dialer_http_primary_mode_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_user_agent_set, _efl_net_dialer_http_user_agent_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_user_agent_get, _efl_net_dialer_http_user_agent_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_version_set, _efl_net_dialer_http_http_version_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_version_get, _efl_net_dialer_http_http_version_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_authentication_set, _efl_net_dialer_http_authentication_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_authentication_get, _efl_net_dialer_http_authentication_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_allow_redirects_set, _efl_net_dialer_http_allow_redirects_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_allow_redirects_get, _efl_net_dialer_http_allow_redirects_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_request_header_add, _efl_net_dialer_http_request_header_add),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_request_headers_clear, _efl_net_dialer_http_request_headers_clear),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_request_headers_get, _efl_net_dialer_http_request_headers_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_request_content_length_set, _efl_net_dialer_http_request_content_length_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_request_content_length_get, _efl_net_dialer_http_request_content_length_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_response_content_length_set, _efl_net_dialer_http_response_content_length_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_response_content_length_get, _efl_net_dialer_http_response_content_length_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_response_content_type_set, _efl_net_dialer_http_response_content_type_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_response_content_type_get, _efl_net_dialer_http_response_content_type_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_response_status_get, _efl_net_dialer_http_response_status_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_response_headers_get, _efl_net_dialer_http_response_headers_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_response_headers_all_get, _efl_net_dialer_http_response_headers_all_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_response_headers_clear, _efl_net_dialer_http_response_headers_clear),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_progress_download_get, _efl_net_dialer_http_progress_download_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_progress_upload_get, _efl_net_dialer_http_progress_upload_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_cookie_jar_set, _efl_net_dialer_http_cookie_jar_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_cookie_jar_get, _efl_net_dialer_http_cookie_jar_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_ssl_verify_set, _efl_net_dialer_http_ssl_verify_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_ssl_verify_get, _efl_net_dialer_http_ssl_verify_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_ssl_certificate_authority_set, _efl_net_dialer_http_ssl_certificate_authority_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_ssl_certificate_authority_get, _efl_net_dialer_http_ssl_certificate_authority_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_ssl_certificate_revocation_list_set, _efl_net_dialer_http_ssl_certificate_revocation_list_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_ssl_certificate_revocation_list_get, _efl_net_dialer_http_ssl_certificate_revocation_list_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_net_dialer_http_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_dialer_http_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_dial, _efl_net_dialer_http_efl_net_dialer_dial),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_address_dial_set, _efl_net_dialer_http_efl_net_dialer_address_dial_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_address_dial_get, _efl_net_dialer_http_efl_net_dialer_address_dial_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_connected_set, _efl_net_dialer_http_efl_net_dialer_connected_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_connected_get, _efl_net_dialer_http_efl_net_dialer_connected_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_proxy_set, _efl_net_dialer_http_efl_net_dialer_proxy_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_proxy_get, _efl_net_dialer_http_efl_net_dialer_proxy_get),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_timeout_dial_set, _efl_net_dialer_http_efl_net_dialer_timeout_dial_set),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_timeout_dial_get, _efl_net_dialer_http_efl_net_dialer_timeout_dial_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_local_set, _efl_net_dialer_http_efl_net_socket_address_local_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_local_get, _efl_net_dialer_http_efl_net_socket_address_local_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_remote_set, _efl_net_dialer_http_efl_net_socket_address_remote_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_remote_get, _efl_net_dialer_http_efl_net_socket_address_remote_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_read, _efl_net_dialer_http_efl_io_reader_read),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_set, _efl_net_dialer_http_efl_io_reader_can_read_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_get, _efl_net_dialer_http_efl_io_reader_can_read_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_set, _efl_net_dialer_http_efl_io_reader_eos_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_get, _efl_net_dialer_http_efl_io_reader_eos_get),
      EFL_OBJECT_OP_FUNC(efl_io_writer_write, _efl_net_dialer_http_efl_io_writer_write),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_set, _efl_net_dialer_http_efl_io_writer_can_write_set),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_get, _efl_net_dialer_http_efl_io_writer_can_write_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close, _efl_net_dialer_http_efl_io_closer_close),
      EFL_OBJECT_OP_FUNC(efl_io_closer_closed_get, _efl_net_dialer_http_efl_io_closer_closed_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_set, _efl_net_dialer_http_efl_io_closer_close_on_exec_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_get, _efl_net_dialer_http_efl_io_closer_close_on_exec_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_set, _efl_net_dialer_http_efl_io_closer_close_on_destructor_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_get, _efl_net_dialer_http_efl_io_closer_close_on_destructor_get),
      EFL_OBJECT_OP_FUNC(efl_io_sizer_resize, _efl_net_dialer_http_efl_io_sizer_resize),
      EFL_OBJECT_OP_FUNC(efl_io_sizer_size_get, _efl_net_dialer_http_efl_io_sizer_size_get),
      EFL_NET_DIALER_HTTP_EXTRA_OPS
   );
   opsp = &ops;

#ifndef EFL_NET_DIALER_HTTP_EXTRA_CLASS_OPS
#define EFL_NET_DIALER_HTTP_EXTRA_CLASS_OPS
#endif

   EFL_OPS_DEFINE(cops,
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_date_parse, _efl_net_dialer_http_date_parse),
      EFL_OBJECT_OP_FUNC(efl_net_dialer_http_date_serialize, _efl_net_dialer_http_date_serialize),
      EFL_NET_DIALER_HTTP_EXTRA_CLASS_OPS
   );
   copsp = &cops;

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_dialer_http_class_desc = {
   EO_VERSION,
   "Efl.Net.Dialer.Http",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Dialer_Http_Data),
   _efl_net_dialer_http_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_dialer_http_class_get, &_efl_net_dialer_http_class_desc, EFL_LOOP_USER_CLASS, EFL_NET_DIALER_INTERFACE, EFL_IO_SIZER_MIXIN, NULL);
