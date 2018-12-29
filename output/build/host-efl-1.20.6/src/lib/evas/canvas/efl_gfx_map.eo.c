
Eina_Bool _efl_gfx_map_map_has(Eo *obj, Efl_Gfx_Map_Data *pd);

EOAPI EFL_FUNC_BODY(efl_gfx_map_has, Eina_Bool, 0);

void _efl_gfx_map_map_reset(Eo *obj, Efl_Gfx_Map_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(efl_gfx_map_reset);

void _efl_gfx_map_map_point_count_set(Eo *obj, Efl_Gfx_Map_Data *pd, int count);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_point_count_set, EFL_FUNC_CALL(count), int count);

int _efl_gfx_map_map_point_count_get(Eo *obj, Efl_Gfx_Map_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_gfx_map_point_count_get, int, 0);

Eina_Bool _efl_gfx_map_map_clockwise_get(Eo *obj, Efl_Gfx_Map_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_gfx_map_clockwise_get, Eina_Bool, 0);

void _efl_gfx_map_map_smooth_set(Eo *obj, Efl_Gfx_Map_Data *pd, Eina_Bool smooth);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_smooth_set, EFL_FUNC_CALL(smooth), Eina_Bool smooth);

Eina_Bool _efl_gfx_map_map_smooth_get(Eo *obj, Efl_Gfx_Map_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_gfx_map_smooth_get, Eina_Bool, 0);

void _efl_gfx_map_map_alpha_set(Eo *obj, Efl_Gfx_Map_Data *pd, Eina_Bool alpha);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_alpha_set, EFL_FUNC_CALL(alpha), Eina_Bool alpha);

Eina_Bool _efl_gfx_map_map_alpha_get(Eo *obj, Efl_Gfx_Map_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_gfx_map_alpha_get, Eina_Bool, 0);

void _efl_gfx_map_map_coord_absolute_set(Eo *obj, Efl_Gfx_Map_Data *pd, int idx, double x, double y, double z);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_coord_absolute_set, EFL_FUNC_CALL(idx, x, y, z), int idx, double x, double y, double z);

void _efl_gfx_map_map_coord_absolute_get(Eo *obj, Efl_Gfx_Map_Data *pd, int idx, double *x, double *y, double *z);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_map_coord_absolute_get, EFL_FUNC_CALL(idx, x, y, z), int idx, double *x, double *y, double *z);

void _efl_gfx_map_map_uv_set(Eo *obj, Efl_Gfx_Map_Data *pd, int idx, double u, double v);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_uv_set, EFL_FUNC_CALL(idx, u, v), int idx, double u, double v);

void _efl_gfx_map_map_uv_get(Eo *obj, Efl_Gfx_Map_Data *pd, int idx, double *u, double *v);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_map_uv_get, EFL_FUNC_CALL(idx, u, v), int idx, double *u, double *v);

void _efl_gfx_map_map_color_set(Eo *obj, Efl_Gfx_Map_Data *pd, int idx, int r, int g, int b, int a);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_color_set, EFL_FUNC_CALL(idx, r, g, b, a), int idx, int r, int g, int b, int a);

void _efl_gfx_map_map_color_get(Eo *obj, Efl_Gfx_Map_Data *pd, int idx, int *r, int *g, int *b, int *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_map_color_get, EFL_FUNC_CALL(idx, r, g, b, a), int idx, int *r, int *g, int *b, int *a);

void _efl_gfx_map_translate(Eo *obj, Efl_Gfx_Map_Data *pd, double dx, double dy, double dz);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_translate, EFL_FUNC_CALL(dx, dy, dz), double dx, double dy, double dz);

void _efl_gfx_map_rotate(Eo *obj, Efl_Gfx_Map_Data *pd, double degrees, const Efl_Gfx *pivot, double cx, double cy);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_rotate, EFL_FUNC_CALL(degrees, pivot, cx, cy), double degrees, const Efl_Gfx *pivot, double cx, double cy);

void _efl_gfx_map_rotate_3d(Eo *obj, Efl_Gfx_Map_Data *pd, double dx, double dy, double dz, const Efl_Gfx *pivot, double cx, double cy, double cz);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_rotate_3d, EFL_FUNC_CALL(dx, dy, dz, pivot, cx, cy, cz), double dx, double dy, double dz, const Efl_Gfx *pivot, double cx, double cy, double cz);

void _efl_gfx_map_rotate_quat(Eo *obj, Efl_Gfx_Map_Data *pd, double qx, double qy, double qz, double qw, const Efl_Gfx *pivot, double cx, double cy, double cz);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_rotate_quat, EFL_FUNC_CALL(qx, qy, qz, qw, pivot, cx, cy, cz), double qx, double qy, double qz, double qw, const Efl_Gfx *pivot, double cx, double cy, double cz);

void _efl_gfx_map_zoom(Eo *obj, Efl_Gfx_Map_Data *pd, double zoomx, double zoomy, const Efl_Gfx *pivot, double cx, double cy);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_zoom, EFL_FUNC_CALL(zoomx, zoomy, pivot, cx, cy), double zoomx, double zoomy, const Efl_Gfx *pivot, double cx, double cy);

void _efl_gfx_map_lightning_3d(Eo *obj, Efl_Gfx_Map_Data *pd, const Efl_Gfx *pivot, double lx, double ly, double lz, int lr, int lg, int lb, int ar, int ag, int ab);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_lightning_3d, EFL_FUNC_CALL(pivot, lx, ly, lz, lr, lg, lb, ar, ag, ab), const Efl_Gfx *pivot, double lx, double ly, double lz, int lr, int lg, int lb, int ar, int ag, int ab);

void _efl_gfx_map_perspective_3d(Eo *obj, Efl_Gfx_Map_Data *pd, const Efl_Gfx *pivot, double px, double py, double z0, double foc);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_perspective_3d, EFL_FUNC_CALL(pivot, px, py, z0, foc), const Efl_Gfx *pivot, double px, double py, double z0, double foc);

void _efl_gfx_map_rotate_absolute(Eo *obj, Efl_Gfx_Map_Data *pd, double degrees, double cx, double cy);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_rotate_absolute, EFL_FUNC_CALL(degrees, cx, cy), double degrees, double cx, double cy);

void _efl_gfx_map_rotate_3d_absolute(Eo *obj, Efl_Gfx_Map_Data *pd, double dx, double dy, double dz, double cx, double cy, double cz);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_rotate_3d_absolute, EFL_FUNC_CALL(dx, dy, dz, cx, cy, cz), double dx, double dy, double dz, double cx, double cy, double cz);

void _efl_gfx_map_rotate_quat_absolute(Eo *obj, Efl_Gfx_Map_Data *pd, double qx, double qy, double qz, double qw, double cx, double cy, double cz);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_rotate_quat_absolute, EFL_FUNC_CALL(qx, qy, qz, qw, cx, cy, cz), double qx, double qy, double qz, double qw, double cx, double cy, double cz);

void _efl_gfx_map_zoom_absolute(Eo *obj, Efl_Gfx_Map_Data *pd, double zoomx, double zoomy, double cx, double cy);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_zoom_absolute, EFL_FUNC_CALL(zoomx, zoomy, cx, cy), double zoomx, double zoomy, double cx, double cy);

void _efl_gfx_map_lightning_3d_absolute(Eo *obj, Efl_Gfx_Map_Data *pd, double lx, double ly, double lz, int lr, int lg, int lb, int ar, int ag, int ab);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_lightning_3d_absolute, EFL_FUNC_CALL(lx, ly, lz, lr, lg, lb, ar, ag, ab), double lx, double ly, double lz, int lr, int lg, int lb, int ar, int ag, int ab);

void _efl_gfx_map_perspective_3d_absolute(Eo *obj, Efl_Gfx_Map_Data *pd, double px, double py, double z0, double foc);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_map_perspective_3d_absolute, EFL_FUNC_CALL(px, py, z0, foc), double px, double py, double z0, double foc);

Efl_Object *_efl_gfx_map_efl_object_constructor(Eo *obj, Efl_Gfx_Map_Data *pd);


void _efl_gfx_map_efl_object_destructor(Eo *obj, Efl_Gfx_Map_Data *pd);


static Eina_Bool
_efl_gfx_map_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_GFX_MAP_EXTRA_OPS
#define EFL_GFX_MAP_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_map_has, _efl_gfx_map_map_has),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_reset, _efl_gfx_map_map_reset),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_point_count_set, _efl_gfx_map_map_point_count_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_point_count_get, _efl_gfx_map_map_point_count_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_clockwise_get, _efl_gfx_map_map_clockwise_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_smooth_set, _efl_gfx_map_map_smooth_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_smooth_get, _efl_gfx_map_map_smooth_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_alpha_set, _efl_gfx_map_map_alpha_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_alpha_get, _efl_gfx_map_map_alpha_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_coord_absolute_set, _efl_gfx_map_map_coord_absolute_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_coord_absolute_get, _efl_gfx_map_map_coord_absolute_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_uv_set, _efl_gfx_map_map_uv_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_uv_get, _efl_gfx_map_map_uv_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_color_set, _efl_gfx_map_map_color_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_color_get, _efl_gfx_map_map_color_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_translate, _efl_gfx_map_translate),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_rotate, _efl_gfx_map_rotate),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_rotate_3d, _efl_gfx_map_rotate_3d),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_rotate_quat, _efl_gfx_map_rotate_quat),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_zoom, _efl_gfx_map_zoom),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_lightning_3d, _efl_gfx_map_lightning_3d),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_perspective_3d, _efl_gfx_map_perspective_3d),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_rotate_absolute, _efl_gfx_map_rotate_absolute),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_rotate_3d_absolute, _efl_gfx_map_rotate_3d_absolute),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_rotate_quat_absolute, _efl_gfx_map_rotate_quat_absolute),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_zoom_absolute, _efl_gfx_map_zoom_absolute),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_lightning_3d_absolute, _efl_gfx_map_lightning_3d_absolute),
      EFL_OBJECT_OP_FUNC(efl_gfx_map_perspective_3d_absolute, _efl_gfx_map_perspective_3d_absolute),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_gfx_map_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_gfx_map_efl_object_destructor),
      EFL_GFX_MAP_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_GFX_MAP_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_GFX_MAP_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_gfx_map_class_desc = {
   EO_VERSION,
   "Efl.Gfx.Map",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Efl_Gfx_Map_Data),
   _efl_gfx_map_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_gfx_map_mixin_get, &_efl_gfx_map_class_desc, EFL_INTERFACE_INTERFACE, EFL_OBJECT_CLASS, NULL);
