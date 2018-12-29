EWAPI const Efl_Event_Description _EFL_NET_CONTROL_TECHNOLOGY_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");

void _efl_net_control_technology_powered_set(Eo *obj, Efl_Net_Control_Technology_Data *pd, Eina_Bool powered);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_control_technology_powered_set, EFL_FUNC_CALL(powered), Eina_Bool powered);

Eina_Bool _efl_net_control_technology_powered_get(Eo *obj, Efl_Net_Control_Technology_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_technology_powered_get, Eina_Bool, 0);

void _efl_net_control_technology_tethering_set(Eo *obj, Efl_Net_Control_Technology_Data *pd, Eina_Bool enabled, const char *identifier, const char *passphrase);

EOAPI EFL_VOID_FUNC_BODYV(efl_net_control_technology_tethering_set, EFL_FUNC_CALL(enabled, identifier, passphrase), Eina_Bool enabled, const char *identifier, const char *passphrase);

void _efl_net_control_technology_tethering_get(Eo *obj, Efl_Net_Control_Technology_Data *pd, Eina_Bool *enabled, const char **identifier, const char **passphrase);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_net_control_technology_tethering_get, EFL_FUNC_CALL(enabled, identifier, passphrase), Eina_Bool *enabled, const char **identifier, const char **passphrase);

Eina_Bool _efl_net_control_technology_connected_get(Eo *obj, Efl_Net_Control_Technology_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_technology_connected_get, Eina_Bool, 0);

const char *_efl_net_control_technology_name_get(Eo *obj, Efl_Net_Control_Technology_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_technology_name_get, const char *, NULL);

Efl_Net_Control_Technology_Type _efl_net_control_technology_type_get(Eo *obj, Efl_Net_Control_Technology_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_net_control_technology_type_get, Efl_Net_Control_Technology_Type, 0);

Efl_Future *_efl_net_control_technology_scan(Eo *obj, Efl_Net_Control_Technology_Data *pd);

EOAPI EFL_FUNC_BODY(efl_net_control_technology_scan, Efl_Future *, NULL);

void _efl_net_control_technology_efl_object_destructor(Eo *obj, Efl_Net_Control_Technology_Data *pd);


static Eina_Bool
_efl_net_control_technology_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_NET_CONTROL_TECHNOLOGY_EXTRA_OPS
#define EFL_NET_CONTROL_TECHNOLOGY_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_net_control_technology_powered_set, _efl_net_control_technology_powered_set),
      EFL_OBJECT_OP_FUNC(efl_net_control_technology_powered_get, _efl_net_control_technology_powered_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_technology_tethering_set, _efl_net_control_technology_tethering_set),
      EFL_OBJECT_OP_FUNC(efl_net_control_technology_tethering_get, _efl_net_control_technology_tethering_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_technology_connected_get, _efl_net_control_technology_connected_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_technology_name_get, _efl_net_control_technology_name_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_technology_type_get, _efl_net_control_technology_type_get),
      EFL_OBJECT_OP_FUNC(efl_net_control_technology_scan, _efl_net_control_technology_scan),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_net_control_technology_efl_object_destructor),
      EFL_NET_CONTROL_TECHNOLOGY_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_NET_CONTROL_TECHNOLOGY_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_NET_CONTROL_TECHNOLOGY_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_net_control_technology_class_desc = {
   EO_VERSION,
   "Efl.Net.Control.Technology",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Net_Control_Technology_Data),
   _efl_net_control_technology_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_net_control_technology_class_get, &_efl_net_control_technology_class_desc, EFL_LOOP_USER_CLASS, NULL);
