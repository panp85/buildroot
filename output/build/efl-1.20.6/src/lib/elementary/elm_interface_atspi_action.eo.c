EOAPI EFL_FUNC_BODYV_CONST(elm_interface_atspi_action_name_get, const char *, NULL, EFL_FUNC_CALL(id), int id);

const char *_elm_interface_atspi_action_localized_name_get(Eo *obj, void *pd, int id);

EOAPI EFL_FUNC_BODYV_CONST(elm_interface_atspi_action_localized_name_get, const char *, NULL, EFL_FUNC_CALL(id), int id);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_action_description_set, Eina_Bool, 0, EFL_FUNC_CALL(id, description), int id, const char *description);
EOAPI EFL_FUNC_BODYV_CONST(elm_interface_atspi_action_description_get, const char *, NULL, EFL_FUNC_CALL(id), int id);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_action_actions_get, Eina_List *, NULL);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_action_do, Eina_Bool, 0, EFL_FUNC_CALL(id), int id);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_action_keybinding_get, char *, NULL, EFL_FUNC_CALL(id), int id);

static Eina_Bool
_elm_interface_atspi_action_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_INTERFACE_ATSPI_ACTION_EXTRA_OPS
#define ELM_INTERFACE_ATSPI_ACTION_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_action_name_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_action_localized_name_get, _elm_interface_atspi_action_localized_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_action_description_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_action_description_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_action_actions_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_action_do, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_action_keybinding_get, NULL),
      ELM_INTERFACE_ATSPI_ACTION_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_INTERFACE_ATSPI_ACTION_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_INTERFACE_ATSPI_ACTION_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_interface_atspi_action_class_desc = {
   EO_VERSION,
   "Elm.Interface.Atspi_Action",
   EFL_CLASS_TYPE_MIXIN,
   0,
   _elm_interface_atspi_action_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_interface_atspi_action_mixin_get, &_elm_interface_atspi_action_class_desc, NULL, NULL);
