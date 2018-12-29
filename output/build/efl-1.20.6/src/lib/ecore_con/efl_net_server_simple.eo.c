
void _efl_net_server_simple_inner_class_set(Eo *obj, Efl_Net_Server_Simple_Data *pd, const Efl_Class *klass);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_simple_inner_class_set, EFL_FUNC_CALL(klass), const Efl_Class *klass);

const Efl_Class *_efl_net_server_simple_inner_class_get(Eo *obj, Efl_Net_Server_Simple_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_simple_inner_class_get, const Efl_Class *, NULL);

void _efl_net_server_simple_inner_server_set(Eo *obj, Efl_Net_Server_Simple_Data *pd, Efl_Object *server);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_server_simple_inner_server_set, EFL_FUNC_CALL(server), Efl_Object *server);

Efl_Object *_efl_net_server_simple_inner_server_get(Eo *obj, Efl_Net_Server_Simple_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_server_simple_inner_server_get, Efl_Object *, NULL);

Efl_Object *_efl_net_server_simple_efl_object_finalize(Eo *obj, Efl_Net_Server_Simple_Data *pd);


void _efl_net_server_simple_efl_object_destructor(Eo *obj, Efl_Net_Server_Simple_Data *pd);


Eina_Error _efl_net_server_simple_efl_net_server_serve(Eo *obj, Efl_Net_Server_Simple_Data *pd, const char *address);


Eina_Bool _efl_net_server_simple_efl_net_server_client_announce(Eo *obj, Efl_Net_Server_Simple_Data *pd, Efl_Net_Socket *client);


const char *_efl_net_server_simple_efl_net_server_address_get(Eo *obj, Efl_Net_Server_Simple_Data *pd);


unsigned int _efl_net_server_simple_efl_net_server_clients_count_get(Eo *obj, Efl_Net_Server_Simple_Data *pd);


void _efl_net_server_simple_efl_net_server_clients_limit_set(Eo *obj, Efl_Net_Server_Simple_Data *pd, unsigned int limit, Eina_Bool reject_excess);


void _efl_net_server_simple_efl_net_server_clients_limit_get(Eo *obj, Efl_Net_Server_Simple_Data *pd, unsigned int *limit, Eina_Bool *reject_excess);


Eina_Bool _efl_net_server_simple_efl_net_server_serving_get(Eo *obj, Efl_Net_Server_Simple_Data *pd);


static Eina_Bool
_efl_net_server_simple_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SERVER_SIMPLE_EXTRA_OPS
#define EFL_NET_SERVER_SIMPLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_server_simple_inner_class_set, _efl_net_server_simple_inner_class_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_simple_inner_class_get, _efl_net_server_simple_inner_class_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_simple_inner_server_set, _efl_net_server_simple_inner_server_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_simple_inner_server_get, _efl_net_server_simple_inner_server_get),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_net_server_simple_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_server_simple_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_net_server_serve, _efl_net_server_simple_efl_net_server_serve),
      EFL_OBJECT_OP_FUNC(efl_net_server_client_announce, _efl_net_server_simple_efl_net_server_client_announce),
      EFL_OBJECT_OP_FUNC(efl_net_server_address_get, _efl_net_server_simple_efl_net_server_address_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_clients_count_get, _efl_net_server_simple_efl_net_server_clients_count_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_clients_limit_set, _efl_net_server_simple_efl_net_server_clients_limit_set),
      EFL_OBJECT_OP_FUNC(efl_net_server_clients_limit_get, _efl_net_server_simple_efl_net_server_clients_limit_get),
      EFL_OBJECT_OP_FUNC(efl_net_server_serving_get, _efl_net_server_simple_efl_net_server_serving_get),
      EFL_NET_SERVER_SIMPLE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SERVER_SIMPLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SERVER_SIMPLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_server_simple_class_desc = {
   EO_VERSION,
   "Efl.Net.Server.Simple",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Server_Simple_Data),
   _efl_net_server_simple_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_server_simple_class_get, &_efl_net_server_simple_class_desc, EFL_LOOP_USER_CLASS, EFL_NET_SERVER_INTERFACE, NULL);
