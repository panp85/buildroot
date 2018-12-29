
Efl_Object *_elm_access_efl_object_constructor(Eo *obj, void *pd);


Eina_Bool _elm_access_elm_widget_activate(Eo *obj, void *pd, Elm_Activate act);


Eina_Bool _elm_access_elm_widget_on_focus(Eo *obj, void *pd, Elm_Widget_Item *item);


const Elm_Atspi_Action *_elm_access_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, void *pd);


Elm_Atspi_State_Set _elm_access_elm_interface_atspi_accessible_state_set_get(Eo *obj, void *pd);


static Eina_Bool
_elm_access_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_ACCESS_EXTRA_OPS
#define ELM_ACCESS_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_access_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_activate, _elm_access_elm_widget_activate),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _elm_access_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_access_elm_interface_atspi_widget_action_elm_actions_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _elm_access_elm_interface_atspi_accessible_state_set_get),
      ELM_ACCESS_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_ACCESS_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_ACCESS_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_access_class_desc = {
   EO_VERSION,
   "Elm.Access",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _elm_access_class_initializer,
   _elm_access_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_access_class_get, &_elm_access_class_desc, ELM_WIDGET_CLASS, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, NULL);
