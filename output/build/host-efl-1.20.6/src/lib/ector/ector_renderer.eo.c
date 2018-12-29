
void _ector_renderer_surface_set(Eo *obj, Ector_Renderer_Data *pd, Ector_Surface *s);

EOAPI EFL_VOID_FUNC_BODYV(ector_renderer_surface_set, EFL_FUNC_CALL(s), Ector_Surface *s);

Ector_Surface *_ector_renderer_surface_get(Eo *obj, Ector_Renderer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(ector_renderer_surface_get, Ector_Surface *, NULL);

void _ector_renderer_transformation_set(Eo *obj, Ector_Renderer_Data *pd, const Eina_Matrix3 *m);

EOAPI EFL_VOID_FUNC_BODYV(ector_renderer_transformation_set, EFL_FUNC_CALL(m), const Eina_Matrix3 *m);

const Eina_Matrix3 *_ector_renderer_transformation_get(Eo *obj, Ector_Renderer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(ector_renderer_transformation_get, const Eina_Matrix3 *, NULL);

void _ector_renderer_origin_set(Eo *obj, Ector_Renderer_Data *pd, double x, double y);

EOAPI EFL_VOID_FUNC_BODYV(ector_renderer_origin_set, EFL_FUNC_CALL(x, y), double x, double y);

void _ector_renderer_origin_get(Eo *obj, Ector_Renderer_Data *pd, double *x, double *y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(ector_renderer_origin_get, EFL_FUNC_CALL(x, y), double *x, double *y);

void _ector_renderer_visibility_set(Eo *obj, Ector_Renderer_Data *pd, Eina_Bool v);

EOAPI EFL_VOID_FUNC_BODYV(ector_renderer_visibility_set, EFL_FUNC_CALL(v), Eina_Bool v);

Eina_Bool _ector_renderer_visibility_get(Eo *obj, Ector_Renderer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(ector_renderer_visibility_get, Eina_Bool, 0);

void _ector_renderer_color_set(Eo *obj, Ector_Renderer_Data *pd, int r, int g, int b, int a);

EOAPI EFL_VOID_FUNC_BODYV(ector_renderer_color_set, EFL_FUNC_CALL(r, g, b, a), int r, int g, int b, int a);

void _ector_renderer_color_get(Eo *obj, Ector_Renderer_Data *pd, int *r, int *g, int *b, int *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(ector_renderer_color_get, EFL_FUNC_CALL(r, g, b, a), int *r, int *g, int *b, int *a);

void _ector_renderer_mask_set(Eo *obj, Ector_Renderer_Data *pd, Ector_Renderer *r);

EOAPI EFL_VOID_FUNC_BODYV(ector_renderer_mask_set, EFL_FUNC_CALL(r), Ector_Renderer *r);

Ector_Renderer *_ector_renderer_mask_get(Eo *obj, Ector_Renderer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(ector_renderer_mask_get, Ector_Renderer *, NULL);

void _ector_renderer_quality_set(Eo *obj, Ector_Renderer_Data *pd, Ector_Quality q);

EOAPI EFL_VOID_FUNC_BODYV(ector_renderer_quality_set, EFL_FUNC_CALL(q), Ector_Quality q);

Ector_Quality _ector_renderer_quality_get(Eo *obj, Ector_Renderer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(ector_renderer_quality_get, Ector_Quality, 0);

unsigned int _ector_renderer_crc_get(Eo *obj, Ector_Renderer_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(ector_renderer_crc_get, unsigned int, 0);
EOAPI EFL_VOID_FUNC_BODYV(ector_renderer_bounds_get, EFL_FUNC_CALL(r), Eina_Rectangle *r);
EOAPI EFL_FUNC_BODYV(ector_renderer_draw, Eina_Bool, 0, EFL_FUNC_CALL(op, clips, mul_col), Efl_Gfx_Render_Op op, Eina_Array *clips, unsigned int mul_col);

Eina_Bool _ector_renderer_prepare(Eo *obj, Ector_Renderer_Data *pd);

EOAPI EFL_FUNC_BODY(ector_renderer_prepare, Eina_Bool, 0);
EOAPI EFL_FUNC_BODY(ector_renderer_done, Eina_Bool, 0);

void _ector_renderer_efl_object_destructor(Eo *obj, Ector_Renderer_Data *pd);


Efl_Object *_ector_renderer_efl_object_finalize(Eo *obj, Ector_Renderer_Data *pd);


static Eina_Bool
_ector_renderer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_RENDERER_EXTRA_OPS
#define ECTOR_RENDERER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ector_renderer_surface_set, _ector_renderer_surface_set),
      EFL_OBJECT_OP_FUNC(ector_renderer_surface_get, _ector_renderer_surface_get),
      EFL_OBJECT_OP_FUNC(ector_renderer_transformation_set, _ector_renderer_transformation_set),
      EFL_OBJECT_OP_FUNC(ector_renderer_transformation_get, _ector_renderer_transformation_get),
      EFL_OBJECT_OP_FUNC(ector_renderer_origin_set, _ector_renderer_origin_set),
      EFL_OBJECT_OP_FUNC(ector_renderer_origin_get, _ector_renderer_origin_get),
      EFL_OBJECT_OP_FUNC(ector_renderer_visibility_set, _ector_renderer_visibility_set),
      EFL_OBJECT_OP_FUNC(ector_renderer_visibility_get, _ector_renderer_visibility_get),
      EFL_OBJECT_OP_FUNC(ector_renderer_color_set, _ector_renderer_color_set),
      EFL_OBJECT_OP_FUNC(ector_renderer_color_get, _ector_renderer_color_get),
      EFL_OBJECT_OP_FUNC(ector_renderer_mask_set, _ector_renderer_mask_set),
      EFL_OBJECT_OP_FUNC(ector_renderer_mask_get, _ector_renderer_mask_get),
      EFL_OBJECT_OP_FUNC(ector_renderer_quality_set, _ector_renderer_quality_set),
      EFL_OBJECT_OP_FUNC(ector_renderer_quality_get, _ector_renderer_quality_get),
      EFL_OBJECT_OP_FUNC(ector_renderer_crc_get, _ector_renderer_crc_get),
      EFL_OBJECT_OP_FUNC(ector_renderer_bounds_get, NULL),
      EFL_OBJECT_OP_FUNC(ector_renderer_draw, NULL),
      EFL_OBJECT_OP_FUNC(ector_renderer_prepare, _ector_renderer_prepare),
      EFL_OBJECT_OP_FUNC(ector_renderer_done, NULL),
      EFL_OBJECT_OP_FUNC(efl_destructor, _ector_renderer_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _ector_renderer_efl_object_finalize),
      ECTOR_RENDERER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_RENDERER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_RENDERER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_renderer_class_desc = {
   EO_VERSION,
   "Ector.Renderer",
   EFL_CLASS_TYPE_REGULAR_NO_INSTANT,
   sizeof(Ector_Renderer_Data),
   _ector_renderer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_renderer_class_get, &_ector_renderer_class_desc, EFL_OBJECT_CLASS, NULL);
