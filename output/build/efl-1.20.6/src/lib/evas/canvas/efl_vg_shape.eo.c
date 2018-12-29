
void _efl_vg_shape_fill_set(Eo *obj, Efl_VG_Shape_Data *pd, Efl_VG *f);

EOAPI EFL_VOID_FUNC_BODYV(efl_vg_shape_fill_set, EFL_FUNC_CALL(f), Efl_VG *f);

Efl_VG *_efl_vg_shape_fill_get(Eo *obj, Efl_VG_Shape_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_vg_shape_fill_get, Efl_VG *, NULL);

void _efl_vg_shape_stroke_fill_set(Eo *obj, Efl_VG_Shape_Data *pd, Efl_VG *f);

EOAPI EFL_VOID_FUNC_BODYV(efl_vg_shape_stroke_fill_set, EFL_FUNC_CALL(f), Efl_VG *f);

Efl_VG *_efl_vg_shape_stroke_fill_get(Eo *obj, Efl_VG_Shape_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_vg_shape_stroke_fill_get, Efl_VG *, NULL);

void _efl_vg_shape_stroke_marker_set(Eo *obj, Efl_VG_Shape_Data *pd, Efl_VG *m);

EOAPI EFL_VOID_FUNC_BODYV(efl_vg_shape_stroke_marker_set, EFL_FUNC_CALL(m), Efl_VG *m);

Efl_VG *_efl_vg_shape_stroke_marker_get(Eo *obj, Efl_VG_Shape_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_vg_shape_stroke_marker_get, Efl_VG *, NULL);

Eina_Bool _efl_vg_shape_efl_gfx_color_part_set(Eo *obj, Efl_VG_Shape_Data *pd, const char *part, int r, int g, int b, int a);


Eina_Bool _efl_vg_shape_efl_gfx_color_part_get(Eo *obj, Efl_VG_Shape_Data *pd, const char *part, int *r, int *g, int *b, int *a);


void _efl_vg_shape_efl_vg_bounds_get(Eo *obj, Efl_VG_Shape_Data *pd, Eina_Rectangle *r);


Eina_Bool _efl_vg_shape_efl_vg_interpolate(Eo *obj, Efl_VG_Shape_Data *pd, const Efl_VG *from, const Efl_VG *to, double pos_map);


void _efl_vg_shape_efl_vg_dup(Eo *obj, Efl_VG_Shape_Data *pd, const Efl_VG *from);


Efl_Object *_efl_vg_shape_efl_object_constructor(Eo *obj, Efl_VG_Shape_Data *pd);


void _efl_vg_shape_efl_object_destructor(Eo *obj, Efl_VG_Shape_Data *pd);


static Eina_Bool
_efl_vg_shape_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_VG_SHAPE_EXTRA_OPS
#define EFL_VG_SHAPE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_vg_shape_fill_set, _efl_vg_shape_fill_set),
      EFL_OBJECT_OP_FUNC(efl_vg_shape_fill_get, _efl_vg_shape_fill_get),
      EFL_OBJECT_OP_FUNC(efl_vg_shape_stroke_fill_set, _efl_vg_shape_stroke_fill_set),
      EFL_OBJECT_OP_FUNC(efl_vg_shape_stroke_fill_get, _efl_vg_shape_stroke_fill_get),
      EFL_OBJECT_OP_FUNC(efl_vg_shape_stroke_marker_set, _efl_vg_shape_stroke_marker_set),
      EFL_OBJECT_OP_FUNC(efl_vg_shape_stroke_marker_get, _efl_vg_shape_stroke_marker_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_part_set, _efl_vg_shape_efl_gfx_color_part_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_color_part_get, _efl_vg_shape_efl_gfx_color_part_get),
      EFL_OBJECT_OP_FUNC(efl_vg_bounds_get, _efl_vg_shape_efl_vg_bounds_get),
      EFL_OBJECT_OP_FUNC(efl_vg_interpolate, _efl_vg_shape_efl_vg_interpolate),
      EFL_OBJECT_OP_FUNC(efl_vg_dup, _efl_vg_shape_efl_vg_dup),
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_vg_shape_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_vg_shape_efl_object_destructor),
      EFL_VG_SHAPE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_VG_SHAPE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_VG_SHAPE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_vg_shape_class_desc = {
   EO_VERSION,
   "Efl.VG.Shape",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_VG_Shape_Data),
   _efl_vg_shape_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_vg_shape_class_get, &_efl_vg_shape_class_desc, EFL_VG_CLASS, EFL_GFX_SHAPE_MIXIN, NULL);

EAPI void
evas_vg_shape_fill_set(Efl_VG_Shape *obj, Efl_VG *f)
{
   efl_vg_shape_fill_set(obj, f);
}

EAPI Efl_VG *
evas_vg_shape_fill_get(const Efl_VG_Shape *obj)
{
   return efl_vg_shape_fill_get(obj);
}

EAPI void
evas_vg_shape_stroke_fill_set(Efl_VG_Shape *obj, Efl_VG *f)
{
   efl_vg_shape_stroke_fill_set(obj, f);
}

EAPI Efl_VG *
evas_vg_shape_stroke_fill_get(const Efl_VG_Shape *obj)
{
   return efl_vg_shape_stroke_fill_get(obj);
}

EAPI void
evas_vg_shape_stroke_marker_set(Efl_VG_Shape *obj, Efl_VG *m)
{
   efl_vg_shape_stroke_marker_set(obj, m);
}

EAPI Efl_VG *
evas_vg_shape_stroke_marker_get(const Efl_VG_Shape *obj)
{
   return efl_vg_shape_stroke_marker_get(obj);
}
