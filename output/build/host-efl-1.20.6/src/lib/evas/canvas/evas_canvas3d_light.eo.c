
void _evas_canvas3d_light_directional_set(Eo *obj, Evas_Canvas3D_Light_Data *pd, Eina_Bool directional);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_light_directional_set, EFL_FUNC_CALL(directional), Eina_Bool directional);

Eina_Bool _evas_canvas3d_light_directional_get(Eo *obj, Evas_Canvas3D_Light_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_light_directional_get, Eina_Bool, 0);

void _evas_canvas3d_light_spot_exponent_set(Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Real exponent);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_light_spot_exponent_set, EFL_FUNC_CALL(exponent), Evas_Real exponent);

Evas_Real _evas_canvas3d_light_spot_exponent_get(Eo *obj, Evas_Canvas3D_Light_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_light_spot_exponent_get, Evas_Real, 0);

void _evas_canvas3d_light_spot_cutoff_set(Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Real cutoff);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_light_spot_cutoff_set, EFL_FUNC_CALL(cutoff), Evas_Real cutoff);

Evas_Real _evas_canvas3d_light_spot_cutoff_get(Eo *obj, Evas_Canvas3D_Light_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_light_spot_cutoff_get, Evas_Real, 0);

void _evas_canvas3d_light_attenuation_enable_set(Eo *obj, Evas_Canvas3D_Light_Data *pd, Eina_Bool enable);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_light_attenuation_enable_set, EFL_FUNC_CALL(enable), Eina_Bool enable);

Eina_Bool _evas_canvas3d_light_attenuation_enable_get(Eo *obj, Evas_Canvas3D_Light_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_light_attenuation_enable_get, Eina_Bool, 0);

void _evas_canvas3d_light_ambient_set(Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_light_ambient_set, EFL_FUNC_CALL(r, g, b, a), Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

void _evas_canvas3d_light_ambient_get(const Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_light_ambient_get, EFL_FUNC_CALL(r, g, b, a), Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

void _evas_canvas3d_light_diffuse_set(Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_light_diffuse_set, EFL_FUNC_CALL(r, g, b, a), Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

void _evas_canvas3d_light_diffuse_get(const Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_light_diffuse_get, EFL_FUNC_CALL(r, g, b, a), Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

void _evas_canvas3d_light_specular_set(Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_light_specular_set, EFL_FUNC_CALL(r, g, b, a), Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

void _evas_canvas3d_light_specular_get(const Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_light_specular_get, EFL_FUNC_CALL(r, g, b, a), Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

void _evas_canvas3d_light_attenuation_set(Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Real constant, Evas_Real linear, Evas_Real quadratic);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_light_attenuation_set, EFL_FUNC_CALL(constant, linear, quadratic), Evas_Real constant, Evas_Real linear, Evas_Real quadratic);

void _evas_canvas3d_light_attenuation_get(const Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Real *constant, Evas_Real *linear, Evas_Real *quadratic);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_light_attenuation_get, EFL_FUNC_CALL(constant, linear, quadratic), Evas_Real *constant, Evas_Real *linear, Evas_Real *quadratic);

void _evas_canvas3d_light_projection_matrix_set(Eo *obj, Evas_Canvas3D_Light_Data *pd, const Evas_Real *matrix);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_light_projection_matrix_set, EFL_FUNC_CALL(matrix), const Evas_Real *matrix);

void _evas_canvas3d_light_projection_matrix_get(const Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Real *matrix);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_light_projection_matrix_get, EFL_FUNC_CALL(matrix), Evas_Real *matrix);

void _evas_canvas3d_light_projection_perspective_set(Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Real fovy, Evas_Real aspect, Evas_Real dnear, Evas_Real dfar);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_light_projection_perspective_set, EFL_FUNC_CALL(fovy, aspect, dnear, dfar), Evas_Real fovy, Evas_Real aspect, Evas_Real dnear, Evas_Real dfar);

void _evas_canvas3d_light_projection_frustum_set(Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_light_projection_frustum_set, EFL_FUNC_CALL(left, right, bottom, top, dnear, dfar), Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);

void _evas_canvas3d_light_projection_ortho_set(Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_light_projection_ortho_set, EFL_FUNC_CALL(left, right, bottom, top, dnear, dfar), Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);

Efl_Object *_evas_canvas3d_light_efl_object_constructor(Eo *obj, Evas_Canvas3D_Light_Data *pd);


void _evas_canvas3d_light_efl_object_destructor(Eo *obj, Evas_Canvas3D_Light_Data *pd);


void _evas_canvas3d_light_evas_canvas3d_object_update_notify(Eo *obj, Evas_Canvas3D_Light_Data *pd);


void _evas_canvas3d_light_evas_canvas3d_object_change_notify(Eo *obj, Evas_Canvas3D_Light_Data *pd, Evas_Canvas3D_State state, Evas_Canvas3D_Object *ref);


static Eina_Bool
_evas_canvas3d_light_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_CANVAS3D_LIGHT_EXTRA_OPS
#define EVAS_CANVAS3D_LIGHT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_directional_set, _evas_canvas3d_light_directional_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_directional_get, _evas_canvas3d_light_directional_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_spot_exponent_set, _evas_canvas3d_light_spot_exponent_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_spot_exponent_get, _evas_canvas3d_light_spot_exponent_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_spot_cutoff_set, _evas_canvas3d_light_spot_cutoff_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_spot_cutoff_get, _evas_canvas3d_light_spot_cutoff_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_attenuation_enable_set, _evas_canvas3d_light_attenuation_enable_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_attenuation_enable_get, _evas_canvas3d_light_attenuation_enable_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_ambient_set, _evas_canvas3d_light_ambient_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_ambient_get, _evas_canvas3d_light_ambient_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_diffuse_set, _evas_canvas3d_light_diffuse_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_diffuse_get, _evas_canvas3d_light_diffuse_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_specular_set, _evas_canvas3d_light_specular_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_specular_get, _evas_canvas3d_light_specular_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_attenuation_set, _evas_canvas3d_light_attenuation_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_attenuation_get, _evas_canvas3d_light_attenuation_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_projection_matrix_set, _evas_canvas3d_light_projection_matrix_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_projection_matrix_get, _evas_canvas3d_light_projection_matrix_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_projection_perspective_set, _evas_canvas3d_light_projection_perspective_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_projection_frustum_set, _evas_canvas3d_light_projection_frustum_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_light_projection_ortho_set, _evas_canvas3d_light_projection_ortho_set),
      EFL_OBJECT_OP_FUNC(efl_constructor, _evas_canvas3d_light_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _evas_canvas3d_light_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_update_notify, _evas_canvas3d_light_evas_canvas3d_object_update_notify),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_change_notify, _evas_canvas3d_light_evas_canvas3d_object_change_notify),
      EVAS_CANVAS3D_LIGHT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_CANVAS3D_LIGHT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_CANVAS3D_LIGHT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_canvas3d_light_class_desc = {
   EO_VERSION,
   "Evas.Canvas3D.Light",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Canvas3D_Light_Data),
   _evas_canvas3d_light_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_canvas3d_light_class_get, &_evas_canvas3d_light_class_desc, EVAS_CANVAS3D_OBJECT_CLASS, NULL);
