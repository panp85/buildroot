
void _evas_canvas3d_material_color_set(Eo *obj, Evas_Canvas3D_Material_Data *pd, Evas_Canvas3D_Material_Attrib attrib, Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_material_color_set, EFL_FUNC_CALL(attrib, r, g, b, a), Evas_Canvas3D_Material_Attrib attrib, Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

void _evas_canvas3d_material_color_get(const Eo *obj, Evas_Canvas3D_Material_Data *pd, Evas_Canvas3D_Material_Attrib attrib, Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_material_color_get, EFL_FUNC_CALL(attrib, r, g, b, a), Evas_Canvas3D_Material_Attrib attrib, Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

void _evas_canvas3d_material_enable_set(Eo *obj, Evas_Canvas3D_Material_Data *pd, Evas_Canvas3D_Material_Attrib attrib, Eina_Bool enable);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_material_enable_set, EFL_FUNC_CALL(attrib, enable), Evas_Canvas3D_Material_Attrib attrib, Eina_Bool enable);

Eina_Bool _evas_canvas3d_material_enable_get(Eo *obj, Evas_Canvas3D_Material_Data *pd, Evas_Canvas3D_Material_Attrib attrib);

EOAPI EFL_FUNC_BODYV_CONST(evas_canvas3d_material_enable_get, Eina_Bool, 0, EFL_FUNC_CALL(attrib), Evas_Canvas3D_Material_Attrib attrib);

void _evas_canvas3d_material_shininess_set(Eo *obj, Evas_Canvas3D_Material_Data *pd, Evas_Real shininess);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_material_shininess_set, EFL_FUNC_CALL(shininess), Evas_Real shininess);

Evas_Real _evas_canvas3d_material_shininess_get(Eo *obj, Evas_Canvas3D_Material_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_material_shininess_get, Evas_Real, 0);

void _evas_canvas3d_material_texture_set(Eo *obj, Evas_Canvas3D_Material_Data *pd, Evas_Canvas3D_Material_Attrib attrib, Evas_Canvas3D_Texture *texture);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_material_texture_set, EFL_FUNC_CALL(attrib, texture), Evas_Canvas3D_Material_Attrib attrib, Evas_Canvas3D_Texture *texture);

Evas_Canvas3D_Texture *_evas_canvas3d_material_texture_get(Eo *obj, Evas_Canvas3D_Material_Data *pd, Evas_Canvas3D_Material_Attrib attrib);

EOAPI EFL_FUNC_BODYV_CONST(evas_canvas3d_material_texture_get, Evas_Canvas3D_Texture *, NULL, EFL_FUNC_CALL(attrib), Evas_Canvas3D_Material_Attrib attrib);

Efl_Object *_evas_canvas3d_material_efl_object_constructor(Eo *obj, Evas_Canvas3D_Material_Data *pd);


void _evas_canvas3d_material_efl_object_destructor(Eo *obj, Evas_Canvas3D_Material_Data *pd);


void _evas_canvas3d_material_evas_canvas3d_object_update_notify(Eo *obj, Evas_Canvas3D_Material_Data *pd);


void _evas_canvas3d_material_evas_canvas3d_object_change_notify(Eo *obj, Evas_Canvas3D_Material_Data *pd, Evas_Canvas3D_State state, Evas_Canvas3D_Object *ref);


static Eina_Bool
_evas_canvas3d_material_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_CANVAS3D_MATERIAL_EXTRA_OPS
#define EVAS_CANVAS3D_MATERIAL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_canvas3d_material_color_set, _evas_canvas3d_material_color_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_material_color_get, _evas_canvas3d_material_color_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_material_enable_set, _evas_canvas3d_material_enable_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_material_enable_get, _evas_canvas3d_material_enable_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_material_shininess_set, _evas_canvas3d_material_shininess_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_material_shininess_get, _evas_canvas3d_material_shininess_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_material_texture_set, _evas_canvas3d_material_texture_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_material_texture_get, _evas_canvas3d_material_texture_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _evas_canvas3d_material_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _evas_canvas3d_material_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_update_notify, _evas_canvas3d_material_evas_canvas3d_object_update_notify),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_change_notify, _evas_canvas3d_material_evas_canvas3d_object_change_notify),
      EVAS_CANVAS3D_MATERIAL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_CANVAS3D_MATERIAL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_CANVAS3D_MATERIAL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_canvas3d_material_class_desc = {
   EO_VERSION,
   "Evas.Canvas3D.Material",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Canvas3D_Material_Data),
   _evas_canvas3d_material_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_canvas3d_material_class_get, &_evas_canvas3d_material_class_desc, EVAS_CANVAS3D_OBJECT_CLASS, NULL);
