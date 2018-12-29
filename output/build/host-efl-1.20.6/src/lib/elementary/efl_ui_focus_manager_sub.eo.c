
Efl_Object *_efl_ui_focus_manager_sub_efl_object_constructor(Eo *obj, Efl_Ui_Focus_Manager_Sub_Data *pd);


void _efl_ui_focus_manager_sub_efl_object_destructor(Eo *obj, Efl_Ui_Focus_Manager_Sub_Data *pd);


void _efl_ui_focus_manager_sub_efl_object_parent_set(Eo *obj, Efl_Ui_Focus_Manager_Sub_Data *pd, Efl_Object *parent);


static Eina_Bool
_efl_ui_focus_manager_sub_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_FOCUS_MANAGER_SUB_EXTRA_OPS
#define EFL_UI_FOCUS_MANAGER_SUB_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_focus_manager_sub_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_ui_focus_manager_sub_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_parent_set, _efl_ui_focus_manager_sub_efl_object_parent_set),
      EFL_UI_FOCUS_MANAGER_SUB_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_FOCUS_MANAGER_SUB_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_FOCUS_MANAGER_SUB_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_focus_manager_sub_class_desc = {
   EO_VERSION,
   "Efl.Ui.Focus.Manager.Sub",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Focus_Manager_Sub_Data),
   _efl_ui_focus_manager_sub_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_focus_manager_sub_class_get, &_efl_ui_focus_manager_sub_class_desc, EFL_UI_FOCUS_MANAGER_CLASS, EFL_OBJECT_CLASS, NULL);
