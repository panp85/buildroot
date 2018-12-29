EWAPI const Efl_Event_Description _EFL_NET_CONTROL_EVENT_ACCESS_POINT_ADD =
   EFL_EVENT_DESCRIPTION("access_point,add");
EWAPI const Efl_Event_Description _EFL_NET_CONTROL_EVENT_ACCESS_POINT_DEL =
   EFL_EVENT_DESCRIPTION("access_point,del");
EWAPI const Efl_Event_Description _EFL_NET_CONTROL_EVENT_ACCESS_POINTS_CHANGED =
   EFL_EVENT_DESCRIPTION("access_points,changed");
EWAPI const Efl_Event_Description _EFL_NET_CONTROL_EVENT_TECHNOLOGY_ADD =
   EFL_EVENT_DESCRIPTION("technology,add");
EWAPI const Efl_Event_Description _EFL_NET_CONTROL_EVENT_TECHNOLOGY_DEL =
   EFL_EVENT_DESCRIPTION("technology,del");
EWAPI const Efl_Event_Description _EFL_NET_CONTROL_EVENT_RADIOS_OFFLINE_CHANGED =
   EFL_EVENT_DESCRIPTION("radios_offline,changed");
EWAPI const Efl_Event_Description _EFL_NET_CONTROL_EVENT_STATE_CHANGED =
   EFL_EVENT_DESCRIPTION("state,changed");
EWAPI const Efl_Event_Description _EFL_NET_CONTROL_EVENT_AGENT_RELEASED =
   EFL_EVENT_DESCRIPTION("agent_released");
EWAPI const Efl_Event_Description _EFL_NET_CONTROL_EVENT_AGENT_ERROR =
   EFL_EVENT_DESCRIPTION("agent_error");
EWAPI const Efl_Event_Description _EFL_NET_CONTROL_EVENT_AGENT_BROWSER_URL =
   EFL_EVENT_DESCRIPTION("agent_browser_url");
EWAPI const Efl_Event_Description _EFL_NET_CONTROL_EVENT_AGENT_REQUEST_INPUT =
   EFL_EVENT_DESCRIPTION("agent_request_input");

void _efl_net_control_radios_offline_set(Eo *obj, Efl_Net_Control_Data *pd, Eina_Bool radios_offline);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_control_radios_offline_set, EFL_FUNC_CALL(radios_offline), Eina_Bool radios_offline);

Eina_Bool _efl_net_control_radios_offline_get(Eo *obj, Efl_Net_Control_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_radios_offline_get, Eina_Bool, 0);

Efl_Net_Control_State _efl_net_control_state_get(Eo *obj, Efl_Net_Control_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_state_get, Efl_Net_Control_State, 0);

Eina_Iterator *_efl_net_control_access_points_get(Eo *obj, Efl_Net_Control_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_access_points_get, Eina_Iterator *, NULL);

Eina_Iterator *_efl_net_control_technologies_get(Eo *obj, Efl_Net_Control_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_technologies_get, Eina_Iterator *, NULL);

void _efl_net_control_agent_enabled_set(Eo *obj, Efl_Net_Control_Data *pd, Eina_Bool agent_enabled);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_control_agent_enabled_set, EFL_FUNC_CALL(agent_enabled), Eina_Bool agent_enabled);

Eina_Bool _efl_net_control_agent_enabled_get(Eo *obj, Efl_Net_Control_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_agent_enabled_get, Eina_Bool, 0);

void _efl_net_control_agent_reply(Eo *obj, Efl_Net_Control_Data *pd, const char *name, const Eina_Slice *ssid, const char *username, const char *passphrase, const char *wps);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_control_agent_reply, EFL_FUNC_CALL(name, ssid, username, passphrase, wps), const char *name, const Eina_Slice *ssid, const char *username, const char *passphrase, const char *wps);

void _efl_net_control_efl_object_destructor(Eo *obj, Efl_Net_Control_Data *pd);


Efl_Object *_efl_net_control_efl_object_constructor(Eo *obj, Efl_Net_Control_Data *pd);


Efl_Object *_efl_net_control_efl_object_finalize(Eo *obj, Efl_Net_Control_Data *pd);


static Eina_Bool
_efl_net_control_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_CONTROL_EXTRA_OPS
#define EFL_NET_CONTROL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_control_radios_offline_set, _efl_net_control_radios_offline_set),
      EFL_OBJECT_OP_FUNC(efl_net_control_radios_offline_get, _efl_net_control_radios_offline_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_state_get, _efl_net_control_state_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_access_points_get, _efl_net_control_access_points_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_technologies_get, _efl_net_control_technologies_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_agent_enabled_set, _efl_net_control_agent_enabled_set),
      EFL_OBJECT_OP_FUNC(efl_net_control_agent_enabled_get, _efl_net_control_agent_enabled_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_agent_reply, _efl_net_control_agent_reply),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_control_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_net_control_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_net_control_efl_object_finalize),
      EFL_NET_CONTROL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_CONTROL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_CONTROL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_control_class_desc = {
   EO_VERSION,
   "Efl.Net.Control",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Control_Data),
   _efl_net_control_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_control_class_get, &_efl_net_control_class_desc, EFL_LOOP_USER_CLASS, NULL);
