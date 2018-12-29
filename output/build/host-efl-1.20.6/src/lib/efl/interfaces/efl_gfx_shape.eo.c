
void _efl_gfx_shape_stroke_scale_set(Eo *obj, Efl_Gfx_Shape_Data *pd, double s);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_shape_stroke_scale_set, EFL_FUNC_CALL(s), double s);

double _efl_gfx_shape_stroke_scale_get(Eo *obj, Efl_Gfx_Shape_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_gfx_shape_stroke_scale_get, double, 0);

void _efl_gfx_shape_stroke_color_set(Eo *obj, Efl_Gfx_Shape_Data *pd, int r, int g, int b, int a);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_shape_stroke_color_set, EFL_FUNC_CALL(r, g, b, a), int r, int g, int b, int a);

void _efl_gfx_shape_stroke_color_get(Eo *obj, Efl_Gfx_Shape_Data *pd, int *r, int *g, int *b, int *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_shape_stroke_color_get, EFL_FUNC_CALL(r, g, b, a), int *r, int *g, int *b, int *a);

void _efl_gfx_shape_stroke_width_set(Eo *obj, Efl_Gfx_Shape_Data *pd, double w);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_shape_stroke_width_set, EFL_FUNC_CALL(w), double w);

double _efl_gfx_shape_stroke_width_get(Eo *obj, Efl_Gfx_Shape_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_gfx_shape_stroke_width_get, double, 0);

void _efl_gfx_shape_stroke_location_set(Eo *obj, Efl_Gfx_Shape_Data *pd, double centered);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_shape_stroke_location_set, EFL_FUNC_CALL(centered), double centered);

double _efl_gfx_shape_stroke_location_get(Eo *obj, Efl_Gfx_Shape_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_gfx_shape_stroke_location_get, double, 0);

void _efl_gfx_shape_stroke_dash_set(Eo *obj, Efl_Gfx_Shape_Data *pd, const Efl_Gfx_Dash *dash, unsigned int length);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_shape_stroke_dash_set, EFL_FUNC_CALL(dash, length), const Efl_Gfx_Dash *dash, unsigned int length);

void _efl_gfx_shape_stroke_dash_get(Eo *obj, Efl_Gfx_Shape_Data *pd, const Efl_Gfx_Dash **dash, unsigned int *length);

EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_gfx_shape_stroke_dash_get, EFL_FUNC_CALL(dash, length), const Efl_Gfx_Dash **dash, unsigned int *length);

void _efl_gfx_shape_stroke_cap_set(Eo *obj, Efl_Gfx_Shape_Data *pd, Efl_Gfx_Cap c);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_shape_stroke_cap_set, EFL_FUNC_CALL(c), Efl_Gfx_Cap c);

Efl_Gfx_Cap _efl_gfx_shape_stroke_cap_get(Eo *obj, Efl_Gfx_Shape_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_gfx_shape_stroke_cap_get, Efl_Gfx_Cap, 0);

void _efl_gfx_shape_stroke_join_set(Eo *obj, Efl_Gfx_Shape_Data *pd, Efl_Gfx_Join j);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_shape_stroke_join_set, EFL_FUNC_CALL(j), Efl_Gfx_Join j);

Efl_Gfx_Join _efl_gfx_shape_stroke_join_get(Eo *obj, Efl_Gfx_Shape_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_gfx_shape_stroke_join_get, Efl_Gfx_Join, 0);

void _efl_gfx_shape_fill_rule_set(Eo *obj, Efl_Gfx_Shape_Data *pd, Efl_Gfx_Fill_Rule fill_rule);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_shape_fill_rule_set, EFL_FUNC_CALL(fill_rule), Efl_Gfx_Fill_Rule fill_rule);

Efl_Gfx_Fill_Rule _efl_gfx_shape_fill_rule_get(Eo *obj, Efl_Gfx_Shape_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_gfx_shape_fill_rule_get, Efl_Gfx_Fill_Rule, 0);

Eina_Bool _efl_gfx_shape_interpolate(Eo *obj, Efl_Gfx_Shape_Data *pd, const Efl_Object *from, const Efl_Object *to, double pos_map);

EOAPI EFL_FUNC_BODYV(efl_gfx_shape_interpolate, Eina_Bool, 0, EFL_FUNC_CALL(from, to, pos_map), const Efl_Object *from, const Efl_Object *to, double pos_map);

void _efl_gfx_shape_dup(Eo *obj, Efl_Gfx_Shape_Data *pd, const Efl_Object *dup_from);

EOAPI EFL_VOID_FUNC_BODYV(efl_gfx_shape_dup, EFL_FUNC_CALL(dup_from), const Efl_Object *dup_from);

static Eina_Bool
_efl_gfx_shape_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_GFX_SHAPE_EXTRA_OPS
#define EFL_GFX_SHAPE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_stroke_scale_set, _efl_gfx_shape_stroke_scale_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_stroke_scale_get, _efl_gfx_shape_stroke_scale_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_stroke_color_set, _efl_gfx_shape_stroke_color_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_stroke_color_get, _efl_gfx_shape_stroke_color_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_stroke_width_set, _efl_gfx_shape_stroke_width_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_stroke_width_get, _efl_gfx_shape_stroke_width_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_stroke_location_set, _efl_gfx_shape_stroke_location_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_stroke_location_get, _efl_gfx_shape_stroke_location_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_stroke_dash_set, _efl_gfx_shape_stroke_dash_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_stroke_dash_get, _efl_gfx_shape_stroke_dash_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_stroke_cap_set, _efl_gfx_shape_stroke_cap_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_stroke_cap_get, _efl_gfx_shape_stroke_cap_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_stroke_join_set, _efl_gfx_shape_stroke_join_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_stroke_join_get, _efl_gfx_shape_stroke_join_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_fill_rule_set, _efl_gfx_shape_fill_rule_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_fill_rule_get, _efl_gfx_shape_fill_rule_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_interpolate, _efl_gfx_shape_interpolate),
      EFL_OBJECT_OP_FUNC(efl_gfx_shape_dup, _efl_gfx_shape_dup),
      EFL_GFX_SHAPE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_GFX_SHAPE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_GFX_SHAPE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_gfx_shape_class_desc = {
   EO_VERSION,
   "Efl.Gfx.Shape",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Efl_Gfx_Shape_Data),
   _efl_gfx_shape_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_gfx_shape_mixin_get, &_efl_gfx_shape_class_desc, EFL_GFX_PATH_MIXIN, NULL);
