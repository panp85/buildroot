
void _efl_canvas_scene3d_scene3d_set(Eo *obj, void *pd, Evas_Canvas3D_Scene *scene);

EOAPI EFL_VOID_FUNC_BODYV(efl_canvas_scene3d_set, EFL_FUNC_CALL(scene), Evas_Canvas3D_Scene *scene);

Evas_Canvas3D_Scene *_efl_canvas_scene3d_scene3d_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_canvas_scene3d_get, Evas_Canvas3D_Scene *, NULL);

Eina_Bool _efl_canvas_scene3d_efl_gfx_buffer_buffer_map(Eo *obj, void *pd, Eina_Rw_Slice *slice, Efl_Gfx_Buffer_Access_Mode mode, int x, int y, int w, int h, Efl_Gfx_Colorspace cspace, int plane, int *stride);


Eina_Bool _efl_canvas_scene3d_efl_gfx_buffer_buffer_unmap(Eo *obj, void *pd, const Eina_Rw_Slice *slice);


static Eina_Bool
_efl_canvas_scene3d_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_SCENE3D_EXTRA_OPS
#define EFL_CANVAS_SCENE3D_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_canvas_scene3d_set, _efl_canvas_scene3d_scene3d_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_scene3d_get, _efl_canvas_scene3d_scene3d_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_map, _efl_canvas_scene3d_efl_gfx_buffer_buffer_map),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_unmap, _efl_canvas_scene3d_efl_gfx_buffer_buffer_unmap),
      EFL_CANVAS_SCENE3D_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_SCENE3D_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_SCENE3D_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_scene3d_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Scene3d",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _efl_canvas_scene3d_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_scene3d_class_get, &_efl_canvas_scene3d_class_desc, EFL_CANVAS_IMAGE_INTERNAL_CLASS, EFL_GFX_BUFFER_INTERFACE, NULL);
