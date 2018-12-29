
void _efl_net_socket_fd_family_set(Eo *obj, Efl_Net_Socket_Fd_Data *pd, int family);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_socket_fd_family_set, EFL_FUNC_CALL(family), int family);

int _efl_net_socket_fd_family_get(Eo *obj, Efl_Net_Socket_Fd_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_socket_fd_family_get, int, 0);

Efl_Object *_efl_net_socket_fd_efl_object_finalize(Eo *obj, Efl_Net_Socket_Fd_Data *pd);


Efl_Object *_efl_net_socket_fd_efl_object_constructor(Eo *obj, Efl_Net_Socket_Fd_Data *pd);


void _efl_net_socket_fd_efl_object_destructor(Eo *obj, Efl_Net_Socket_Fd_Data *pd);


void _efl_net_socket_fd_efl_loop_fd_fd_set(Eo *obj, Efl_Net_Socket_Fd_Data *pd, int fd);


Eina_Error _efl_net_socket_fd_efl_io_closer_close(Eo *obj, Efl_Net_Socket_Fd_Data *pd);


Eina_Bool _efl_net_socket_fd_efl_io_closer_closed_get(Eo *obj, Efl_Net_Socket_Fd_Data *pd);


Eina_Error _efl_net_socket_fd_efl_io_reader_read(Eo *obj, Efl_Net_Socket_Fd_Data *pd, Eina_Rw_Slice *rw_slice);


void _efl_net_socket_fd_efl_io_reader_can_read_set(Eo *obj, Efl_Net_Socket_Fd_Data *pd, Eina_Bool can_read);


void _efl_net_socket_fd_efl_io_reader_eos_set(Eo *obj, Efl_Net_Socket_Fd_Data *pd, Eina_Bool is_eos);


Eina_Error _efl_net_socket_fd_efl_io_writer_write(Eo *obj, Efl_Net_Socket_Fd_Data *pd, Eina_Slice *slice, Eina_Slice *remaining);


void _efl_net_socket_fd_efl_io_writer_can_write_set(Eo *obj, Efl_Net_Socket_Fd_Data *pd, Eina_Bool can_write);


void _efl_net_socket_fd_efl_net_socket_address_local_set(Eo *obj, Efl_Net_Socket_Fd_Data *pd, const char *address);


const char *_efl_net_socket_fd_efl_net_socket_address_local_get(Eo *obj, Efl_Net_Socket_Fd_Data *pd);


void _efl_net_socket_fd_efl_net_socket_address_remote_set(Eo *obj, Efl_Net_Socket_Fd_Data *pd, const char *address);


const char *_efl_net_socket_fd_efl_net_socket_address_remote_get(Eo *obj, Efl_Net_Socket_Fd_Data *pd);


static Eina_Bool
_efl_net_socket_fd_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SOCKET_FD_EXTRA_OPS
#define EFL_NET_SOCKET_FD_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_socket_fd_family_set, _efl_net_socket_fd_family_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_fd_family_get, _efl_net_socket_fd_family_get),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_net_socket_fd_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_net_socket_fd_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_socket_fd_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_loop_fd_set, _efl_net_socket_fd_efl_loop_fd_fd_set),
      EFL_OBJECT_OP_FUNC(efl_io_closer_close, _efl_net_socket_fd_efl_io_closer_close),
      EFL_OBJECT_OP_FUNC(efl_io_closer_closed_get, _efl_net_socket_fd_efl_io_closer_closed_get),
      EFL_OBJECT_OP_FUNC(efl_io_reader_read, _efl_net_socket_fd_efl_io_reader_read),
      EFL_OBJECT_OP_FUNC(efl_io_reader_can_read_set, _efl_net_socket_fd_efl_io_reader_can_read_set),
      EFL_OBJECT_OP_FUNC(efl_io_reader_eos_set, _efl_net_socket_fd_efl_io_reader_eos_set),
      EFL_OBJECT_OP_FUNC(efl_io_writer_write, _efl_net_socket_fd_efl_io_writer_write),
      EFL_OBJECT_OP_FUNC(efl_io_writer_can_write_set, _efl_net_socket_fd_efl_io_writer_can_write_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_local_set, _efl_net_socket_fd_efl_net_socket_address_local_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_local_get, _efl_net_socket_fd_efl_net_socket_address_local_get),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_remote_set, _efl_net_socket_fd_efl_net_socket_address_remote_set),
      EFL_OBJECT_OP_FUNC(efl_net_socket_address_remote_get, _efl_net_socket_fd_efl_net_socket_address_remote_get),
      EFL_NET_SOCKET_FD_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SOCKET_FD_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SOCKET_FD_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_socket_fd_class_desc = {
   EO_VERSION,
   "Efl.Net.Socket.Fd",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Socket_Fd_Data),
   _efl_net_socket_fd_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_socket_fd_class_get, &_efl_net_socket_fd_class_desc, EFL_LOOP_FD_CLASS, EFL_IO_READER_FD_MIXIN, EFL_IO_WRITER_FD_MIXIN, EFL_IO_CLOSER_FD_MIXIN, EFL_NET_SOCKET_INTERFACE, NULL);
