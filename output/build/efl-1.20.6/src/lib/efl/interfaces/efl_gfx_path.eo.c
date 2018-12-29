EWAPI const Efl_Event_Description _EFL_GFX_PATH_EVENT_CHANGED =
   EFL_EVENT_DESCRIPTION("changed");

void _efl_gfx_path_path_set(Eo *obj, Efl_Gfx_Path_Data *pd, const Efl_Gfx_Path_Command_Type *op, const double *points);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_path_set, EFL_FUNC_CALL(op, points), const Efl_Gfx_Path_Command_Type *op, const double *points);

void _efl_gfx_path_path_get(Eo *obj, Efl_Gfx_Path_Data *pd, const Efl_Gfx_Path_Command_Type **op, const double **points);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_path_get, EFL_FUNC_CALL(op, points), const Efl_Gfx_Path_Command_Type **op, const double **points);

void _efl_gfx_path_length_get(Eo *obj, Efl_Gfx_Path_Data *pd, unsigned int *commands, unsigned int *points);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_path_length_get, EFL_FUNC_CALL(commands, points), unsigned int *commands, unsigned int *points);

void _efl_gfx_path_current_get(Eo *obj, Efl_Gfx_Path_Data *pd, double *x, double *y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_path_current_get, EFL_FUNC_CALL(x, y), double *x, double *y);

void _efl_gfx_path_current_ctrl_get(Eo *obj, Efl_Gfx_Path_Data *pd, double *x, double *y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_path_current_ctrl_get, EFL_FUNC_CALL(x, y), double *x, double *y);

void _efl_gfx_path_dup(Eo *obj, Efl_Gfx_Path_Data *pd, const Efl_Object *dup_from);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_path_dup, EFL_FUNC_CALL(dup_from), const Efl_Object *dup_from);

void _efl_gfx_path_bounds_get(Eo *obj, Efl_Gfx_Path_Data *pd, Eina_Rectangle *r);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_path_bounds_get, EFL_FUNC_CALL(r), Eina_Rectangle *r);

void _efl_gfx_path_reset(Eo *obj, Efl_Gfx_Path_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_gfx_path_reset);

void _efl_gfx_path_append_move_to(Eo *obj, Efl_Gfx_Path_Data *pd, double x, double y);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_path_append_move_to, EFL_FUNC_CALL(x, y), double x, double y);

void _efl_gfx_path_append_line_to(Eo *obj, Efl_Gfx_Path_Data *pd, double x, double y);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_path_append_line_to, EFL_FUNC_CALL(x, y), double x, double y);

void _efl_gfx_path_append_quadratic_to(Eo *obj, Efl_Gfx_Path_Data *pd, double x, double y, double ctrl_x, double ctrl_y);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_path_append_quadratic_to, EFL_FUNC_CALL(x, y, ctrl_x, ctrl_y), double x, double y, double ctrl_x, double ctrl_y);

void _efl_gfx_path_append_squadratic_to(Eo *obj, Efl_Gfx_Path_Data *pd, double x, double y);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_path_append_squadratic_to, EFL_FUNC_CALL(x, y), double x, double y);

void _efl_gfx_path_append_cubic_to(Eo *obj, Efl_Gfx_Path_Data *pd, double ctrl_x0, double ctrl_y0, double ctrl_x1, double ctrl_y1, double x, double y);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_path_append_cubic_to, EFL_FUNC_CALL(ctrl_x0, ctrl_y0, ctrl_x1, ctrl_y1, x, y), double ctrl_x0, double ctrl_y0, double ctrl_x1, double ctrl_y1, double x, double y);

void _efl_gfx_path_append_scubic_to(Eo *obj, Efl_Gfx_Path_Data *pd, double x, double y, double ctrl_x, double ctrl_y);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_path_append_scubic_to, EFL_FUNC_CALL(x, y, ctrl_x, ctrl_y), double x, double y, double ctrl_x, double ctrl_y);

void _efl_gfx_path_append_arc_to(Eo *obj, Efl_Gfx_Path_Data *pd, double x, double y, double rx, double ry, double angle, Eina_Bool large_arc, Eina_Bool sweep);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_path_append_arc_to, EFL_FUNC_CALL(x, y, rx, ry, angle, large_arc, sweep), double x, double y, double rx, double ry, double angle, Eina_Bool large_arc, Eina_Bool sweep);

void _efl_gfx_path_append_arc(Eo *obj, Efl_Gfx_Path_Data *pd, double x, double y, double w, double h, double start_angle, double sweep_length);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_path_append_arc, EFL_FUNC_CALL(x, y, w, h, start_angle, sweep_length), double x, double y, double w, double h, double start_angle, double sweep_length);

void _efl_gfx_path_append_close(Eo *obj, Efl_Gfx_Path_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_gfx_path_append_close);

void _efl_gfx_path_append_circle(Eo *obj, Efl_Gfx_Path_Data *pd, double x, double y, double radius);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_path_append_circle, EFL_FUNC_CALL(x, y, radius), double x, double y, double radius);

void _efl_gfx_path_append_rect(Eo *obj, Efl_Gfx_Path_Data *pd, double x, double y, double w, double h, double rx, double ry);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_path_append_rect, EFL_FUNC_CALL(x, y, w, h, rx, ry), double x, double y, double w, double h, double rx, double ry);

void _efl_gfx_path_append_svg_path(Eo *obj, Efl_Gfx_Path_Data *pd, const char *svg_path_data);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_path_append_svg_path, EFL_FUNC_CALL(svg_path_data), const char *svg_path_data);

Eina_Bool _efl_gfx_path_interpolate(Eo *obj, Efl_Gfx_Path_Data *pd, const Efl_Object *from, const Efl_Object *to, double pos_map);

EOAPI EFL_FUNC_BODYV(efl_gfx_path_interpolate, Eina_Bool, 0, EFL_FUNC_CALL(from, to, pos_map), const Efl_Object *from, const Efl_Object *to, double pos_map);

Eina_Bool _efl_gfx_path_equal_commands(Eo *obj, Efl_Gfx_Path_Data *pd, const Efl_Object *with);

EOAPI EFL_FUNC_BODYV(efl_gfx_path_equal_commands, Eina_Bool, 0, EFL_FUNC_CALL(with), const Efl_Object *with);

static Eina_Bool
_efl_gfx_path_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_GFX_PATH_EXTRA_OPS
#define EFL_GFX_PATH_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_path_set, _efl_gfx_path_path_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_get, _efl_gfx_path_path_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_length_get, _efl_gfx_path_length_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_current_get, _efl_gfx_path_current_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_current_ctrl_get, _efl_gfx_path_current_ctrl_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_dup, _efl_gfx_path_dup),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_bounds_get, _efl_gfx_path_bounds_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_reset, _efl_gfx_path_reset),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_append_move_to, _efl_gfx_path_append_move_to),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_append_line_to, _efl_gfx_path_append_line_to),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_append_quadratic_to, _efl_gfx_path_append_quadratic_to),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_append_squadratic_to, _efl_gfx_path_append_squadratic_to),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_append_cubic_to, _efl_gfx_path_append_cubic_to),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_append_scubic_to, _efl_gfx_path_append_scubic_to),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_append_arc_to, _efl_gfx_path_append_arc_to),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_append_arc, _efl_gfx_path_append_arc),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_append_close, _efl_gfx_path_append_close),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_append_circle, _efl_gfx_path_append_circle),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_append_rect, _efl_gfx_path_append_rect),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_append_svg_path, _efl_gfx_path_append_svg_path),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_interpolate, _efl_gfx_path_interpolate),
      EFL_OBJECT_OP_FUNC(efl_gfx_path_equal_commands, _efl_gfx_path_equal_commands),
      EFL_GFX_PATH_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_GFX_PATH_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_GFX_PATH_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_gfx_path_class_desc = {
   EO_VERSION,
   "Efl.Gfx.Path",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Efl_Gfx_Path_Data),
   _efl_gfx_path_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_gfx_path_mixin_get, &_efl_gfx_path_class_desc, NULL, NULL);
