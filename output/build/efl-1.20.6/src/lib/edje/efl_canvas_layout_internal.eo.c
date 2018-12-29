
void _efl_canvas_layout_internal_state_get(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd, const char **state, double *val);

static void __eolian_efl_canvas_layout_internal_state_get(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd, const char **state, double *val)
{
   if (state) *state = "default";
   _efl_canvas_layout_internal_state_get(obj, pd, state, val);
}

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_canvas_layout_internal_state_get, EFL_FUNC_CALL(state, val), const char **state, double *val);

Efl_Object *_efl_canvas_layout_internal_efl_object_finalize(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd);


void _efl_canvas_layout_internal_efl_gfx_geometry_get(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd, int *x, int *y, int *w, int *h);


Eina_Bool _efl_canvas_layout_internal_efl_ui_drag_drag_value_set(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd, double dx, double dy);


Eina_Bool _efl_canvas_layout_internal_efl_ui_drag_drag_value_get(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd, double *dx, double *dy);


Eina_Bool _efl_canvas_layout_internal_efl_ui_drag_drag_size_set(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd, double dw, double dh);


Eina_Bool _efl_canvas_layout_internal_efl_ui_drag_drag_size_get(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd, double *dw, double *dh);


Efl_Ui_Drag_Dir _efl_canvas_layout_internal_efl_ui_drag_drag_dir_get(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd);


Eina_Bool _efl_canvas_layout_internal_efl_ui_drag_drag_step_set(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd, double dx, double dy);


Eina_Bool _efl_canvas_layout_internal_efl_ui_drag_drag_step_get(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd, double *dx, double *dy);


Eina_Bool _efl_canvas_layout_internal_efl_ui_drag_drag_step_move(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd, double dx, double dy);


Eina_Bool _efl_canvas_layout_internal_efl_ui_drag_drag_page_set(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd, double dx, double dy);


Eina_Bool _efl_canvas_layout_internal_efl_ui_drag_drag_page_get(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd, double *dx, double *dy);


Eina_Bool _efl_canvas_layout_internal_efl_ui_drag_drag_page_move(Eo *obj, Efl_Canvas_Layout_Internal_Data *pd, double dx, double dy);


static Eina_Bool
_efl_canvas_layout_internal_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_LAYOUT_INTERNAL_EXTRA_OPS
#define EFL_CANVAS_LAYOUT_INTERNAL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_canvas_layout_internal_state_get, __eolian_efl_canvas_layout_internal_state_get),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_canvas_layout_internal_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_gfx_geometry_get, _efl_canvas_layout_internal_efl_gfx_geometry_get),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_value_set, _efl_canvas_layout_internal_efl_ui_drag_drag_value_set),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_value_get, _efl_canvas_layout_internal_efl_ui_drag_drag_value_get),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_size_set, _efl_canvas_layout_internal_efl_ui_drag_drag_size_set),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_size_get, _efl_canvas_layout_internal_efl_ui_drag_drag_size_get),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_dir_get, _efl_canvas_layout_internal_efl_ui_drag_drag_dir_get),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_step_set, _efl_canvas_layout_internal_efl_ui_drag_drag_step_set),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_step_get, _efl_canvas_layout_internal_efl_ui_drag_drag_step_get),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_step_move, _efl_canvas_layout_internal_efl_ui_drag_drag_step_move),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_page_set, _efl_canvas_layout_internal_efl_ui_drag_drag_page_set),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_page_get, _efl_canvas_layout_internal_efl_ui_drag_drag_page_get),
      EFL_OBJECT_OP_FUNC(efl_ui_drag_page_move, _efl_canvas_layout_internal_efl_ui_drag_drag_page_move),
      EFL_CANVAS_LAYOUT_INTERNAL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_LAYOUT_INTERNAL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_LAYOUT_INTERNAL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_layout_internal_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Layout_Internal",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Canvas_Layout_Internal_Data),
   _efl_canvas_layout_internal_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_layout_internal_class_get, &_efl_canvas_layout_internal_class_desc, EFL_OBJECT_CLASS, EFL_GFX_INTERFACE, EFL_UI_DRAG_INTERFACE, NULL);
