
void _focus_test_size(Eo *obj, Focus_Test_Data *pd, Eina_Rectangle rect);

EOAPI EFL_VOID_FUNC_BODYV(focus_test_size, EFL_FUNC_CALL(rect), Eina_Rectangle rect);

Efl_Object *_focus_test_efl_object_constructor(Eo *obj, Focus_Test_Data *pd);


Eina_Rectangle _focus_test_efl_ui_focus_object_focus_geometry_get(Eo *obj, Focus_Test_Data *pd);


void _focus_test_efl_ui_focus_object_focus_set(Eo *obj, Focus_Test_Data *pd, Eina_Bool focus);


void _focus_test_efl_gfx_geometry_get(Eo *obj, Focus_Test_Data *pd, int *x, int *y, int *w, int *h);


static Eina_Bool
_focus_test_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef FOCUS_TEST_EXTRA_OPS
#define FOCUS_TEST_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(focus_test_size, _focus_test_size),
      EFL_OBJECT_OP_FUNC(efl_constructor, _focus_test_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_object_focus_geometry_get, _focus_test_efl_ui_focus_object_focus_geometry_get),
      EFL_OBJECT_OP_FUNC(efl_ui_focus_object_focus_set, _focus_test_efl_ui_focus_object_focus_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_geometry_get, _focus_test_efl_gfx_geometry_get),
      FOCUS_TEST_EXTRA_OPS
   );
   opsp = &ops;

#ifdef FOCUS_TEST_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, FOCUS_TEST_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _focus_test_class_desc = {
   EO_VERSION,
   "Focus.Test",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Focus_Test_Data),
   _focus_test_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(focus_test_class_get, &_focus_test_class_desc, EFL_OBJECT_CLASS, EFL_UI_FOCUS_OBJECT_MIXIN, EFL_GFX_INTERFACE, NULL);
