EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_widget_action_elm_actions_get, const Elm_Atspi_Action *, NULL);

Eina_Bool _elm_interface_atspi_widget_action_elm_interface_atspi_action_action_do(Eo *obj, void *pd, int id);


char *_elm_interface_atspi_widget_action_elm_interface_atspi_action_keybinding_get(Eo *obj, void *pd, int id);


const char *_elm_interface_atspi_widget_action_elm_interface_atspi_action_name_get(Eo *obj, void *pd, int id);


Eina_Bool _elm_interface_atspi_widget_action_elm_interface_atspi_action_description_set(Eo *obj, void *pd, int id, const char *description);


const char *_elm_interface_atspi_widget_action_elm_interface_atspi_action_description_get(Eo *obj, void *pd, int id);


Eina_List *_elm_interface_atspi_widget_action_elm_interface_atspi_action_actions_get(Eo *obj, void *pd);


static Eina_Bool
_elm_interface_atspi_widget_action_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_INTERFACE_ATSPI_WIDGET_ACTION_EXTRA_OPS
#define ELM_INTERFACE_ATSPI_WIDGET_ACTION_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_action_do, _elm_interface_atspi_widget_action_elm_interface_atspi_action_action_do),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_action_keybinding_get, _elm_interface_atspi_widget_action_elm_interface_atspi_action_keybinding_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_action_name_get, _elm_interface_atspi_widget_action_elm_interface_atspi_action_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_action_description_set, _elm_interface_atspi_widget_action_elm_interface_atspi_action_description_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_action_description_get, _elm_interface_atspi_widget_action_elm_interface_atspi_action_description_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_action_actions_get, _elm_interface_atspi_widget_action_elm_interface_atspi_action_actions_get),
      ELM_INTERFACE_ATSPI_WIDGET_ACTION_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_INTERFACE_ATSPI_WIDGET_ACTION_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_INTERFACE_ATSPI_WIDGET_ACTION_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_interface_atspi_widget_action_class_desc = {
   EO_VERSION,
   "Elm.Interface.Atspi_Widget_Action",
   EFL_CLASS_TYPE_MIXIN,
   0,
   _elm_interface_atspi_widget_action_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_interface_atspi_widget_action_mixin_get, &_elm_interface_atspi_widget_action_class_desc, ELM_INTERFACE_ATSPI_ACTION_MIXIN, NULL);
