EWAPI const Efl_Event_Description _EFL_NET_SESSION_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");

void _efl_net_session_connect(Eo *obj, Efl_Net_Session_Data *pd, Eina_Bool online_required, Efl_Net_Session_Technology technologies_allowed);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_session_connect, EFL_FUNC_CALL(online_required, technologies_allowed), Eina_Bool online_required, Efl_Net_Session_Technology technologies_allowed);

void _efl_net_session_disconnect(Eo *obj, Efl_Net_Session_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_net_session_disconnect);

const char *_efl_net_session_name_get(Eo *obj, Efl_Net_Session_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_session_name_get, const char *, NULL);

Efl_Net_Session_State _efl_net_session_state_get(Eo *obj, Efl_Net_Session_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_session_state_get, Efl_Net_Session_State, 0);

Efl_Net_Session_Technology _efl_net_session_technology_get(Eo *obj, Efl_Net_Session_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_session_technology_get, Efl_Net_Session_Technology, 0);

const char *_efl_net_session_interface_get(Eo *obj, Efl_Net_Session_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_session_interface_get, const char *, NULL);

void _efl_net_session_ipv4_get(Eo *obj, Efl_Net_Session_Data *pd, const char **address, const char **netmask, const char **gateway);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_session_ipv4_get, EFL_FUNC_CALL(address, netmask, gateway), const char **address, const char **netmask, const char **gateway);

void _efl_net_session_ipv6_get(Eo *obj, Efl_Net_Session_Data *pd, const char **address, uint8_t *prefix_length, const char **netmask, const char **gateway);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_session_ipv6_get, EFL_FUNC_CALL(address, prefix_length, netmask, gateway), const char **address, uint8_t *prefix_length, const char **netmask, const char **gateway);

void _efl_net_session_efl_object_destructor(Eo *obj, Efl_Net_Session_Data *pd);


Efl_Object *_efl_net_session_efl_object_constructor(Eo *obj, Efl_Net_Session_Data *pd);


Efl_Object *_efl_net_session_efl_object_finalize(Eo *obj, Efl_Net_Session_Data *pd);


static Eina_Bool
_efl_net_session_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_SESSION_EXTRA_OPS
#define EFL_NET_SESSION_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_session_connect, _efl_net_session_connect),
      EFL_OBJECT_OP_FUNC(efl_net_session_disconnect, _efl_net_session_disconnect),
      EFL_OBJECT_OP_FUNC(efl_net_session_name_get, _efl_net_session_name_get),
      EFL_OBJECT_OP_FUNC(efl_net_session_state_get, _efl_net_session_state_get),
      EFL_OBJECT_OP_FUNC(efl_net_session_technology_get, _efl_net_session_technology_get),
      EFL_OBJECT_OP_FUNC(efl_net_session_interface_get, _efl_net_session_interface_get),
      EFL_OBJECT_OP_FUNC(efl_net_session_ipv4_get, _efl_net_session_ipv4_get),
      EFL_OBJECT_OP_FUNC(efl_net_session_ipv6_get, _efl_net_session_ipv6_get),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_session_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_net_session_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_net_session_efl_object_finalize),
      EFL_NET_SESSION_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_SESSION_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_SESSION_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_session_class_desc = {
   EO_VERSION,
   "Efl.Net.Session",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Session_Data),
   _efl_net_session_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_session_class_get, &_efl_net_session_class_desc, EFL_LOOP_USER_CLASS, NULL);
