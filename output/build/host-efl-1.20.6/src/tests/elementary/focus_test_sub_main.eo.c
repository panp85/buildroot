
Efl_Ui_Focus_Manager *_focus_test_sub_main_efl_ui_focus_user_manager_get(Eo *obj, Focus_Test_Sub_Main_Data *pd);


Efl_Ui_Focus_Object *_focus_test_sub_main_efl_ui_focus_user_parent_get(Eo *obj, Focus_Test_Sub_Main_Data *pd);


Eina_Rectangle _focus_test_sub_main_efl_ui_focus_object_focus_geometry_get(Eo *obj, Focus_Test_Sub_Main_Data *pd);


static Eina_Bool
_focus_test_sub_main_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef FOCUS_TEST_SUB_MAIN_EXTRA_OPS
#define FOCUS_TEST_SUB_MAIN_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_focus_user_manager_get, _focus_test_sub_main_efl_ui_focus_user_manager_get),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_user_parent_get, _focus_test_sub_main_efl_ui_focus_user_parent_get),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_object_focus_geometry_get, _focus_test_sub_main_efl_ui_focus_object_focus_geometry_get),
      FOCUS_TEST_SUB_MAIN_EXTRA_OPS
   );
   opsp = &ops;

#ifdef FOCUS_TEST_SUB_MAIN_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, FOCUS_TEST_SUB_MAIN_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _focus_test_sub_main_class_desc = {
   EO_VERSION,
   "Focus.Test.Sub.Main",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Focus_Test_Sub_Main_Data),
   _focus_test_sub_main_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(focus_test_sub_main_class_get, &_focus_test_sub_main_class_desc, EFL_OBJECT_CLASS, EFL_UI_FOCUS_USER_INTERFACE, EFL_UI_FOCUS_OBJECT_MIXIN, EFL_UI_FOCUS_MANAGER_CLASS, NULL);
