
Eina_Bool _efl_ui_focus_manager_root_focus_efl_ui_focus_manager_register(Eo *obj, Efl_Ui_Focus_Manager_Root_Focus_Data *pd, Efl_Ui_Focus_Object *child, Efl_Ui_Focus_Object *parent, Efl_Ui_Focus_Manager *redirect);


void _efl_ui_focus_manager_root_focus_efl_ui_focus_manager_unregister(Eo *obj, Efl_Ui_Focus_Manager_Root_Focus_Data *pd, Efl_Ui_Focus_Object *child);


void _efl_ui_focus_manager_root_focus_efl_ui_focus_manager_focus(Eo *obj, Efl_Ui_Focus_Manager_Root_Focus_Data *pd, Efl_Ui_Focus_Object *focus);


Efl_Ui_Focus_Object *_efl_ui_focus_manager_root_focus_efl_ui_focus_manager_focused(Eo *obj, Efl_Ui_Focus_Manager_Root_Focus_Data *pd);


Efl_Ui_Focus_Relations *_efl_ui_focus_manager_root_focus_efl_ui_focus_manager_fetch(Eo *obj, Efl_Ui_Focus_Manager_Root_Focus_Data *pd, Efl_Ui_Focus_Object *child);


Efl_Ui_Focus_Object *_efl_ui_focus_manager_root_focus_efl_ui_focus_manager_logical_end(Eo *obj, Efl_Ui_Focus_Manager_Root_Focus_Data *pd);


Eina_Iterator *_efl_ui_focus_manager_root_focus_efl_ui_focus_manager_border_elements_get(Eo *obj, Efl_Ui_Focus_Manager_Root_Focus_Data *pd);


Efl_Ui_Focus_Object *_efl_ui_focus_manager_root_focus_efl_ui_focus_manager_request_move(Eo *obj, Efl_Ui_Focus_Manager_Root_Focus_Data *pd, Efl_Ui_Focus_Direction direction);


Efl_Ui_Focus_Object *_efl_ui_focus_manager_root_focus_efl_ui_focus_manager_move(Eo *obj, Efl_Ui_Focus_Manager_Root_Focus_Data *pd, Efl_Ui_Focus_Direction direction);


Efl_Object *_efl_ui_focus_manager_root_focus_efl_object_finalize(Eo *obj, Efl_Ui_Focus_Manager_Root_Focus_Data *pd);


static Eina_Bool
_efl_ui_focus_manager_root_focus_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EXTRA_OPS
#define EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_register, _efl_ui_focus_manager_root_focus_efl_ui_focus_manager_register),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_unregister, _efl_ui_focus_manager_root_focus_efl_ui_focus_manager_unregister),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_focus, _efl_ui_focus_manager_root_focus_efl_ui_focus_manager_focus),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_focused, _efl_ui_focus_manager_root_focus_efl_ui_focus_manager_focused),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_fetch, _efl_ui_focus_manager_root_focus_efl_ui_focus_manager_fetch),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_logical_end, _efl_ui_focus_manager_root_focus_efl_ui_focus_manager_logical_end),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_border_elements_get, _efl_ui_focus_manager_root_focus_efl_ui_focus_manager_border_elements_get),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_request_move, _efl_ui_focus_manager_root_focus_efl_ui_focus_manager_request_move),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_manager_move, _efl_ui_focus_manager_root_focus_efl_ui_focus_manager_move),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_ui_focus_manager_root_focus_efl_object_finalize),
      EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_focus_manager_root_focus_class_desc = {
   EO_VERSION,
   "Efl.Ui.Focus.Manager.Root_Focus",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Focus_Manager_Root_Focus_Data),
   _efl_ui_focus_manager_root_focus_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_focus_manager_root_focus_class_get, &_efl_ui_focus_manager_root_focus_class_desc, EFL_UI_FOCUS_MANAGER_CLASS, NULL);
