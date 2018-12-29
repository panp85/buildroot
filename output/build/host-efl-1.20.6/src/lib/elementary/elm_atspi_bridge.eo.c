EWAPI const Efl_Event_Description _ELM_ATSPI_BRIDGE_EVENT_CONNECTED =
   EFL_EVENT_DESCRIPTION("connected");
EWAPI const Efl_Event_Description _ELM_ATSPI_BRIDGE_EVENT_DISCONNECTED =
   EFL_EVENT_DESCRIPTION("disconnected");

Eina_Bool _elm_atspi_bridge_connected_get(Eo *obj, Elm_Atspi_Bridge_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_atspi_bridge_connected_get, Eina_Bool, 0);

Efl_Object *_elm_atspi_bridge_efl_object_constructor(Eo *obj, Elm_Atspi_Bridge_Data *pd);


void _elm_atspi_bridge_efl_object_destructor(Eo *obj, Elm_Atspi_Bridge_Data *pd);


static Eina_Bool
_elm_atspi_bridge_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_ATSPI_BRIDGE_EXTRA_OPS
#define ELM_ATSPI_BRIDGE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_atspi_bridge_connected_get, _elm_atspi_bridge_connected_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_atspi_bridge_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_atspi_bridge_efl_object_destructor),
      ELM_ATSPI_BRIDGE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_ATSPI_BRIDGE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_ATSPI_BRIDGE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_atspi_bridge_class_desc = {
   EO_VERSION,
   "Elm.Atspi.Bridge",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Atspi_Bridge_Data),
   _elm_atspi_bridge_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_atspi_bridge_class_get, &_elm_atspi_bridge_class_desc, EFL_OBJECT_CLASS, NULL);

EAPI Eina_Bool
elm_atspi_bridge_connected_get(const Elm_Atspi_Bridge *obj)
{
   return elm_obj_atspi_bridge_connected_get(obj);
}
