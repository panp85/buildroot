
void _elm_atspi_app_object_efl_object_destructor(Eo *obj, Elm_Atspi_App_Object_Data *pd);


const char *_elm_atspi_app_object_elm_interface_atspi_accessible_name_get(Eo *obj, Elm_Atspi_App_Object_Data *pd);


void _elm_atspi_app_object_elm_interface_atspi_accessible_description_set(Eo *obj, Elm_Atspi_App_Object_Data *pd, const char *description);


const char *_elm_atspi_app_object_elm_interface_atspi_accessible_description_get(Eo *obj, Elm_Atspi_App_Object_Data *pd);


Elm_Atspi_Role _elm_atspi_app_object_elm_interface_atspi_accessible_role_get(Eo *obj, Elm_Atspi_App_Object_Data *pd);


Eina_List *_elm_atspi_app_object_elm_interface_atspi_accessible_children_get(Eo *obj, Elm_Atspi_App_Object_Data *pd);


static Eina_Bool
_elm_atspi_app_object_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_ATSPI_APP_OBJECT_EXTRA_OPS
#define ELM_ATSPI_APP_OBJECT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_atspi_app_object_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_name_get, _elm_atspi_app_object_elm_interface_atspi_accessible_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_description_set, _elm_atspi_app_object_elm_interface_atspi_accessible_description_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_description_get, _elm_atspi_app_object_elm_interface_atspi_accessible_description_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_role_get, _elm_atspi_app_object_elm_interface_atspi_accessible_role_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_children_get, _elm_atspi_app_object_elm_interface_atspi_accessible_children_get),
      ELM_ATSPI_APP_OBJECT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_ATSPI_APP_OBJECT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_ATSPI_APP_OBJECT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_atspi_app_object_class_desc = {
   EO_VERSION,
   "Elm.Atspi.App.Object",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Atspi_App_Object_Data),
   _elm_atspi_app_object_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_atspi_app_object_class_get, &_elm_atspi_app_object_class_desc, EFL_OBJECT_CLASS, ELM_INTERFACE_ATSPI_ACCESSIBLE_MIXIN, NULL);
