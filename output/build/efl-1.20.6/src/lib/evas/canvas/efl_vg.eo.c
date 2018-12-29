
void _efl_vg_name_set(Eo *obj, Efl_VG_Data *pd, const char *name);

EOAPI EFL_VOID_FUNC_BODYV(efl_vg_name_set, EFL_FUNC_CALL(name), const char *name);

const char *_efl_vg_name_get(Eo *obj, Efl_VG_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_vg_name_get, const char *, NULL);

void _efl_vg_transformation_set(Eo *obj, Efl_VG_Data *pd, const Eina_Matrix3 *m);

EOAPI EFL_VOID_FUNC_BODYV(efl_vg_transformation_set, EFL_FUNC_CALL(m), const Eina_Matrix3 *m);

const Eina_Matrix3 *_efl_vg_transformation_get(Eo *obj, Efl_VG_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_vg_transformation_get, const Eina_Matrix3 *, NULL);

void _efl_vg_origin_set(Eo *obj, Efl_VG_Data *pd, double x, double y);

EOAPI EFL_VOID_FUNC_BODYV(efl_vg_origin_set, EFL_FUNC_CALL(x, y), double x, double y);

void _efl_vg_origin_get(Eo *obj, Efl_VG_Data *pd, double *x, double *y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_vg_origin_get, EFL_FUNC_CALL(x, y), double *x, double *y);

void _efl_vg_mask_set(Eo *obj, Efl_VG_Data *pd, Efl_VG *m);

EOAPI EFL_VOID_FUNC_BODYV(efl_vg_mask_set, EFL_FUNC_CALL(m), Efl_VG *m);

Efl_VG *_efl_vg_mask_get(Eo *obj, Efl_VG_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_vg_mask_get, Efl_VG *, NULL);
EOAPI EFL_VOID_FUNC_BODYV(efl_vg_bounds_get, EFL_FUNC_CALL(r), Eina_Rectangle *r);

Eina_Bool _efl_vg_interpolate(Eo *obj, Efl_VG_Data *pd, const Efl_VG *from, const Efl_VG *to, double pos_map);

EOAPI EFL_FUNC_BODYV(efl_vg_interpolate, Eina_Bool, 0, EFL_FUNC_CALL(from, to, pos_map), const Efl_VG *from, const Efl_VG *to, double pos_map);

void _efl_vg_dup(Eo *obj, Efl_VG_Data *pd, const Efl_VG *from);

EOAPI EFL_VOID_FUNC_BODYV(efl_vg_dup, EFL_FUNC_CALL(from), const Efl_VG *from);

void _efl_vg_efl_object_parent_set(Eo *obj, Efl_VG_Data *pd, Efl_Object *parent);


Efl_Object *_efl_vg_efl_object_constructor(Eo *obj, Efl_VG_Data *pd);


void _efl_vg_efl_object_destructor(Eo *obj, Efl_VG_Data *pd);


void _efl_vg_efl_gfx_visible_set(Eo *obj, Efl_VG_Data *pd, Eina_Bool v);


Eina_Bool _efl_vg_efl_gfx_visible_get(Eo *obj, Efl_VG_Data *pd);


void _efl_vg_efl_gfx_color_set(Eo *obj, Efl_VG_Data *pd, int r, int g, int b, int a);


void _efl_vg_efl_gfx_color_get(Eo *obj, Efl_VG_Data *pd, int *r, int *g, int *b, int *a);


Eina_Bool _efl_vg_efl_gfx_color_part_set(Eo *obj, Efl_VG_Data *pd, const char *part, int r, int g, int b, int a);


Eina_Bool _efl_vg_efl_gfx_color_part_get(Eo *obj, Efl_VG_Data *pd, const char *part, int *r, int *g, int *b, int *a);


void _efl_vg_efl_gfx_size_get(Eo *obj, Efl_VG_Data *pd, int *w, int *h);


void _efl_vg_efl_gfx_position_set(Eo *obj, Efl_VG_Data *pd, int x, int y);


void _efl_vg_efl_gfx_position_get(Eo *obj, Efl_VG_Data *pd, int *x, int *y);


void _efl_vg_efl_gfx_geometry_get(Eo *obj, Efl_VG_Data *pd, int *x, int *y, int *w, int *h);


Efl_Gfx_Stack *_efl_vg_efl_gfx_stack_below_get(Eo *obj, Efl_VG_Data *pd);


Efl_Gfx_Stack *_efl_vg_efl_gfx_stack_above_get(Eo *obj, Efl_VG_Data *pd);


void _efl_vg_efl_gfx_stack_stack_below(Eo *obj, Efl_VG_Data *pd, Efl_Gfx_Stack *below);


void _efl_vg_efl_gfx_stack_stack_above(Eo *obj, Efl_VG_Data *pd, Efl_Gfx_Stack *above);


void _efl_vg_efl_gfx_stack_raise(Eo *obj, Efl_VG_Data *pd);


void _efl_vg_efl_gfx_stack_lower(Eo *obj, Efl_VG_Data *pd);


static Eina_Bool
_efl_vg_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_VG_EXTRA_OPS
#define EFL_VG_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_vg_name_set, _efl_vg_name_set),
      EFL_OBJECT_OP_FUNC(efl_vg_name_get, _efl_vg_name_get),
      EFL_OBJECT_OP_FUNC(efl_vg_transformation_set, _efl_vg_transformation_set),
      EFL_OBJECT_OP_FUNC(efl_vg_transformation_get, _efl_vg_transformation_get),
      EFL_OBJECT_OP_FUNC(efl_vg_origin_set, _efl_vg_origin_set),
      EFL_OBJECT_OP_FUNC(efl_vg_origin_get, _efl_vg_origin_get),
      EFL_OBJECT_OP_FUNC(efl_vg_mask_set, _efl_vg_mask_set),
      EFL_OBJECT_OP_FUNC(efl_vg_mask_get, _efl_vg_mask_get),
      EFL_OBJECT_OP_FUNC(efl_vg_bounds_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_vg_interpolate, _efl_vg_interpolate),
      EFL_OBJECT_OP_FUNC(efl_vg_dup, _efl_vg_dup),
      EFL_OBJECT_OP_FUNC(efl_parent_set, _efl_vg_efl_object_parent_set),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_vg_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_vg_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_set, _efl_vg_efl_gfx_visible_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_visible_get, _efl_vg_efl_gfx_visible_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_set, _efl_vg_efl_gfx_color_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_get, _efl_vg_efl_gfx_color_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_part_set, _efl_vg_efl_gfx_color_part_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_part_get, _efl_vg_efl_gfx_color_part_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_get, _efl_vg_efl_gfx_size_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _efl_vg_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_get, _efl_vg_efl_gfx_position_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_geometry_get, _efl_vg_efl_gfx_geometry_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_below_get, _efl_vg_efl_gfx_stack_below_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_above_get, _efl_vg_efl_gfx_stack_above_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_below, _efl_vg_efl_gfx_stack_stack_below),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_above, _efl_vg_efl_gfx_stack_stack_above),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_raise, _efl_vg_efl_gfx_stack_raise),
      EFL_OBJECT_OP_FUNC(efl_gfx_stack_lower, _efl_vg_efl_gfx_stack_lower),
      EFL_VG_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_VG_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_VG_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_vg_class_desc = {
   EO_VERSION,
   "Efl.VG",
   EFL_CLASS_TYPE_REGULAR_NO_INSTANT,
   sizeof(Efl_VG_Data),
   _efl_vg_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_vg_class_get, &_efl_vg_class_desc, EFL_OBJECT_CLASS, EFL_GFX_INTERFACE, EFL_GFX_STACK_INTERFACE, NULL);

EAPI void
evas_vg_node_name_set(Efl_VG *obj, const char *name)
{
   efl_vg_name_set(obj, name);
}

EAPI const char *
evas_vg_node_name_get(const Efl_VG *obj)
{
   return efl_vg_name_get(obj);
}

EAPI void
evas_vg_node_transformation_set(Efl_VG *obj, const Eina_Matrix3 *m)
{
   efl_vg_transformation_set(obj, m);
}

EAPI const Eina_Matrix3 *
evas_vg_node_transformation_get(const Efl_VG *obj)
{
   return efl_vg_transformation_get(obj);
}

EAPI void
evas_vg_node_origin_set(Efl_VG *obj, double x, double y)
{
   efl_vg_origin_set(obj, x, y);
}

EAPI void
evas_vg_node_origin_get(const Efl_VG *obj, double *x, double *y)
{
   efl_vg_origin_get(obj, x, y);
}

EAPI void
evas_vg_node_mask_set(Efl_VG *obj, Efl_VG *m)
{
   efl_vg_mask_set(obj, m);
}

EAPI Efl_VG *
evas_vg_node_mask_get(const Efl_VG *obj)
{
   return efl_vg_mask_get(obj);
}

EAPI void
evas_vg_node_bounds_get(Efl_VG *obj, Eina_Rectangle *r)
{
   efl_vg_bounds_get(obj, r);
}

EAPI Eina_Bool
evas_vg_node_interpolate(Efl_VG *obj, const Efl_VG *from, const Efl_VG *to, double pos_map)
{
   return efl_vg_interpolate(obj, from, to, pos_map);
}

EAPI void
evas_vg_node_dup(Efl_VG *obj, const Efl_VG *from)
{
   efl_vg_dup(obj, from);
}
