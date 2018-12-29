
void _evas_canvas3d_primitive_form_set(Eo *obj, Evas_Canvas3D_Primitive_Data *pd, Evas_Canvas3D_Mesh_Primitive form);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_primitive_form_set, EFL_FUNC_CALL(form), Evas_Canvas3D_Mesh_Primitive form);

Evas_Canvas3D_Mesh_Primitive _evas_canvas3d_primitive_form_get(Eo *obj, Evas_Canvas3D_Primitive_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_primitive_form_get, Evas_Canvas3D_Mesh_Primitive, 0);

void _evas_canvas3d_primitive_mode_set(Eo *obj, Evas_Canvas3D_Primitive_Data *pd, Evas_Canvas3D_Primitive_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_primitive_mode_set, EFL_FUNC_CALL(mode), Evas_Canvas3D_Primitive_Mode mode);

Evas_Canvas3D_Primitive_Mode _evas_canvas3d_primitive_mode_get(Eo *obj, Evas_Canvas3D_Primitive_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_primitive_mode_get, Evas_Canvas3D_Primitive_Mode, 0);

void _evas_canvas3d_primitive_ratio_set(Eo *obj, Evas_Canvas3D_Primitive_Data *pd, Evas_Real ratio);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_primitive_ratio_set, EFL_FUNC_CALL(ratio), Evas_Real ratio);

Evas_Real _evas_canvas3d_primitive_ratio_get(Eo *obj, Evas_Canvas3D_Primitive_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_primitive_ratio_get, Evas_Real, 0);

void _evas_canvas3d_primitive_precision_set(Eo *obj, Evas_Canvas3D_Primitive_Data *pd, int precision);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_primitive_precision_set, EFL_FUNC_CALL(precision), int precision);

int _evas_canvas3d_primitive_precision_get(Eo *obj, Evas_Canvas3D_Primitive_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_primitive_precision_get, int, 0);

void _evas_canvas3d_primitive_surface_set(Eo *obj, Evas_Canvas3D_Primitive_Data *pd, Evas_Canvas3D_Surface_Func *surface);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_primitive_surface_set, EFL_FUNC_CALL(surface), Evas_Canvas3D_Surface_Func *surface);

void _evas_canvas3d_primitive_tex_scale_set(Eo *obj, Evas_Canvas3D_Primitive_Data *pd, Evas_Real tex_scale_x, Evas_Real tex_scale_y);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_primitive_tex_scale_set, EFL_FUNC_CALL(tex_scale_x, tex_scale_y), Evas_Real tex_scale_x, Evas_Real tex_scale_y);

void _evas_canvas3d_primitive_tex_scale_get(Eo *obj, Evas_Canvas3D_Primitive_Data *pd, Evas_Real *tex_scale_x, Evas_Real *tex_scale_y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_primitive_tex_scale_get, EFL_FUNC_CALL(tex_scale_x, tex_scale_y), Evas_Real *tex_scale_x, Evas_Real *tex_scale_y);

Efl_Object *_evas_canvas3d_primitive_efl_object_constructor(Eo *obj, Evas_Canvas3D_Primitive_Data *pd);


void _evas_canvas3d_primitive_efl_object_destructor(Eo *obj, Evas_Canvas3D_Primitive_Data *pd);


static Eina_Bool
_evas_canvas3d_primitive_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_CANVAS3D_PRIMITIVE_EXTRA_OPS
#define EVAS_CANVAS3D_PRIMITIVE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_canvas3d_primitive_form_set, _evas_canvas3d_primitive_form_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_primitive_form_get, _evas_canvas3d_primitive_form_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_primitive_mode_set, _evas_canvas3d_primitive_mode_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_primitive_mode_get, _evas_canvas3d_primitive_mode_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_primitive_ratio_set, _evas_canvas3d_primitive_ratio_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_primitive_ratio_get, _evas_canvas3d_primitive_ratio_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_primitive_precision_set, _evas_canvas3d_primitive_precision_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_primitive_precision_get, _evas_canvas3d_primitive_precision_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_primitive_surface_set, _evas_canvas3d_primitive_surface_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_primitive_tex_scale_set, _evas_canvas3d_primitive_tex_scale_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_primitive_tex_scale_get, _evas_canvas3d_primitive_tex_scale_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _evas_canvas3d_primitive_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _evas_canvas3d_primitive_efl_object_destructor),
      EVAS_CANVAS3D_PRIMITIVE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_CANVAS3D_PRIMITIVE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_CANVAS3D_PRIMITIVE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_canvas3d_primitive_class_desc = {
   EO_VERSION,
   "Evas.Canvas3D.Primitive",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Canvas3D_Primitive_Data),
   _evas_canvas3d_primitive_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_canvas3d_primitive_class_get, &_evas_canvas3d_primitive_class_desc, EVAS_CANVAS3D_OBJECT_CLASS, NULL);
