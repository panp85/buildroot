EOAPI EFL_FUNC_BODYV(efl_ui_drag_value_set, Eina_Bool, 0, EFL_FUNC_CALL(dx, dy), double dx, double dy);
EOAPI EFL_FUNC_BODYV_CONST(efl_ui_drag_value_get, Eina_Bool, 0, EFL_FUNC_CALL(dx, dy), double *dx, double *dy);
EOAPI EFL_FUNC_BODYV(efl_ui_drag_size_set, Eina_Bool, 0, EFL_FUNC_CALL(dw, dh), double dw, double dh);
EOAPI EFL_FUNC_BODYV_CONST(efl_ui_drag_size_get, Eina_Bool, 0, EFL_FUNC_CALL(dw, dh), double *dw, double *dh);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_drag_dir_get, Efl_Ui_Drag_Dir, 0);
EOAPI EFL_FUNC_BODYV(efl_ui_drag_step_set, Eina_Bool, 0, EFL_FUNC_CALL(dx, dy), double dx, double dy);
EOAPI EFL_FUNC_BODYV_CONST(efl_ui_drag_step_get, Eina_Bool, 0, EFL_FUNC_CALL(dx, dy), double *dx, double *dy);
EOAPI EFL_FUNC_BODYV(efl_ui_drag_step_move, Eina_Bool, 0, EFL_FUNC_CALL(dx, dy), double dx, double dy);
EOAPI EFL_FUNC_BODYV(efl_ui_drag_page_set, Eina_Bool, 0, EFL_FUNC_CALL(dx, dy), double dx, double dy);
EOAPI EFL_FUNC_BODYV_CONST(efl_ui_drag_page_get, Eina_Bool, 0, EFL_FUNC_CALL(dx, dy), double *dx, double *dy);
EOAPI EFL_FUNC_BODYV(efl_ui_drag_page_move, Eina_Bool, 0, EFL_FUNC_CALL(dx, dy), double dx, double dy);

static Eina_Bool
_efl_ui_drag_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_DRAG_EXTRA_OPS
#define EFL_UI_DRAG_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_drag_value_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_value_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_size_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_size_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_dir_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_step_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_step_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_step_move, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_page_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_page_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_page_move, NULL),
      EFL_UI_DRAG_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_DRAG_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_DRAG_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_drag_class_desc = {
   EO_VERSION,
   "Efl.Ui.Drag",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_drag_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_drag_interface_get, &_efl_ui_drag_class_desc, NULL, NULL);
