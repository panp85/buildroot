EWAPI const Efl_Event_Description _EFL_NET_SOCKET_SSL_EVENT_SSL_READY =
   EFL_EVENT_DESCRIPTION("ssl,ready");
EWAPI const Efl_Event_Description _EFL_NET_SOCKET_SSL_EVENT_SSL_ERROR =
   EFL_EVENT_DESCRIPTION("ssl,error");

void _efl_net_socket_ssl_adopt(Eo *obj, Efl_Net_Socket_Ssl_Data *pd, Efl_Net_Socket *efl_net_socket, Efl_Net_Ssl_Context *ctx);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_socket_ssl_adopt, EFL_FUNC_CALL(efl_net_socket, ctx), Efl_Net_Socket *efl_net_socket, Efl_Net_Ssl_Context *ctx);

Eina_Bool _efl_net_socket_ssl_adopted_get(Eo *obj, Efl_Net_Socket_Ssl_Data *pd, Efl_Net_Socket **efl_net_socket, Efl_Net_Ssl_Context **ctx);

EOAPI EFL_FUNC_BODYV_CONST(efl_net_socket_ssl_adopted_get, Eina_Bool, EINA_FALSE /* false */, EFL_FUNC_CALL(efl_net_socket, ctx), Efl_Net_Socket **efl_net_socket, Efl_Net_Ssl_Context **ctx);

void _efl_net_socket_ssl_verify_mode_set(Eo *obj, Efl_Net_Socket_Ssl_Data *pd, Efl_Net_Ssl_Verify_Mode verify_mode);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_socket_ssl_verify_mode_set, EFL_FUNC_CALL(verify_mode), Efl_Net_Ssl_Verify_Mode verify_mode);

Efl_Net_Ssl_Verify_Mode _efl_net_socket_ssl_verify_mode_get(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_ssl_verify_mode_get, Efl_Net_Ssl_Verify_Mode, 0);

void _efl_net_socket_ssl_hostname_verify_set(Eo *obj, Efl_Net_Socket_Ssl_Data *pd, Eina_Bool hostname_verify);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_socket_ssl_hostname_verify_set, EFL_FUNC_CALL(hostname_verify), Eina_Bool hostname_verify);

Eina_Bool _efl_net_socket_ssl_hostname_verify_get(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_ssl_hostname_verify_get, Eina_Bool, 0);

void _efl_net_socket_ssl_hostname_override_set(Eo *obj, Efl_Net_Socket_Ssl_Data *pd, const char *hostname_override);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_socket_ssl_hostname_override_set, EFL_FUNC_CALL(hostname_override), const char *hostname_override);

const char *_efl_net_socket_ssl_hostname_override_get(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_ssl_hostname_override_get, const char *, NULL);

Efl_Object *_efl_net_socket_ssl_efl_object_constructor(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);


void _efl_net_socket_ssl_efl_object_destructor(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);


Efl_Object *_efl_net_socket_ssl_efl_object_finalize(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);


Eina_Error _efl_net_socket_ssl_efl_io_closer_close(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);


Eina_Bool _efl_net_socket_ssl_efl_io_closer_closed_get(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);


Eina_Bool _efl_net_socket_ssl_efl_io_closer_close_on_exec_set(Eo *obj, Efl_Net_Socket_Ssl_Data *pd, Eina_Bool close_on_exec);


Eina_Bool _efl_net_socket_ssl_efl_io_closer_close_on_exec_get(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);


void _efl_net_socket_ssl_efl_io_closer_close_on_destructor_set(Eo *obj, Efl_Net_Socket_Ssl_Data *pd, Eina_Bool close_on_destructor);


Eina_Bool _efl_net_socket_ssl_efl_io_closer_close_on_destructor_get(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);


Eina_Error _efl_net_socket_ssl_efl_io_reader_read(Eo *obj, Efl_Net_Socket_Ssl_Data *pd, Eina_Rw_Slice *rw_slice);


void _efl_net_socket_ssl_efl_io_reader_can_read_set(Eo *obj, Efl_Net_Socket_Ssl_Data *pd, Eina_Bool can_read);


Eina_Bool _efl_net_socket_ssl_efl_io_reader_can_read_get(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);


void _efl_net_socket_ssl_efl_io_reader_eos_set(Eo *obj, Efl_Net_Socket_Ssl_Data *pd, Eina_Bool is_eos);


Eina_Bool _efl_net_socket_ssl_efl_io_reader_eos_get(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);


Eina_Error _efl_net_socket_ssl_efl_io_writer_write(Eo *obj, Efl_Net_Socket_Ssl_Data *pd, Eina_Slice *slice, Eina_Slice *remaining);


void _efl_net_socket_ssl_efl_io_writer_can_write_set(Eo *obj, Efl_Net_Socket_Ssl_Data *pd, Eina_Bool can_write);


Eina_Bool _efl_net_socket_ssl_efl_io_writer_can_write_get(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);


const char *_efl_net_socket_ssl_efl_net_socket_address_remote_get(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);


const char *_efl_net_socket_ssl_efl_net_socket_address_local_get(Eo *obj, Efl_Net_Socket_Ssl_Data *pd);


static Eina_Bool
_efl_net_socket_ssl_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SOCKET_SSL_EXTRA_OPS
#define EFL_NET_SOCKET_SSL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_socket_ssl_adopt, _efl_net_socket_ssl_adopt),
      EFL_OBJECT_OP_FUNC(efl_net_socket_ssl_adopted_get, _efl_net_socket_ssl_adopted_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_ssl_verify_mode_set, _efl_net_socket_ssl_verify_mode_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_ssl_verify_mode_get, _efl_net_socket_ssl_verify_mode_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_ssl_hostname_verify_set, _efl_net_socket_ssl_hostname_verify_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_ssl_hostname_verify_get, _efl_net_socket_ssl_hostname_verify_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_ssl_hostname_override_set, _efl_net_socket_ssl_hostname_override_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_ssl_hostname_override_get, _efl_net_socket_ssl_hostname_override_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_net_socket_ssl_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_socket_ssl_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_net_socket_ssl_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close, _efl_net_socket_ssl_efl_io_closer_close),
      EFL_OBJECT_OP_FUNC(efl_io_closer_closed_get, _efl_net_socket_ssl_efl_io_closer_closed_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_set, _efl_net_socket_ssl_efl_io_closer_close_on_exec_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_exec_get, _efl_net_socket_ssl_efl_io_closer_close_on_exec_get),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_set, _efl_net_socket_ssl_efl_io_closer_close_on_destructor_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close_on_destructor_get, _efl_net_socket_ssl_efl_io_closer_close_on_destructor_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_read, _efl_net_socket_ssl_efl_io_reader_read),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_set, _efl_net_socket_ssl_efl_io_reader_can_read_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_get, _efl_net_socket_ssl_efl_io_reader_can_read_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_set, _efl_net_socket_ssl_efl_io_reader_eos_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_get, _efl_net_socket_ssl_efl_io_reader_eos_get),
      EFL_OBJECT_OP_FUNC(efl_io_writer_write, _efl_net_socket_ssl_efl_io_writer_write),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_set, _efl_net_socket_ssl_efl_io_writer_can_write_set),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_get, _efl_net_socket_ssl_efl_io_writer_can_write_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_remote_get, _efl_net_socket_ssl_efl_net_socket_address_remote_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_local_get, _efl_net_socket_ssl_efl_net_socket_address_local_get),
      EFL_NET_SOCKET_SSL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SOCKET_SSL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SOCKET_SSL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_socket_ssl_class_desc = {
   EO_VERSION,
   "Efl.Net.Socket.Ssl",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Socket_Ssl_Data),
   _efl_net_socket_ssl_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_socket_ssl_class_get, &_efl_net_socket_ssl_class_desc, EFL_LOOP_USER_CLASS, EFL_NET_SOCKET_INTERFACE, NULL);
