
Eina_Bool _ector_renderer_gl_gradient_radial_ector_renderer_prepare(Eo *obj, Ector_Renderer_GL_Gradient_Radial_Data *pd);


Eina_Bool _ector_renderer_gl_gradient_radial_ector_renderer_draw(Eo *obj, Ector_Renderer_GL_Gradient_Radial_Data *pd, Efl_Gfx_Render_Op op, Eina_Array *clips, unsigned int mul_col);


void _ector_renderer_gl_gradient_radial_ector_renderer_bounds_get(Eo *obj, Ector_Renderer_GL_Gradient_Radial_Data *pd, Eina_Rectangle *r);


unsigned int _ector_renderer_gl_gradient_radial_ector_renderer_crc_get(Eo *obj, Ector_Renderer_GL_Gradient_Radial_Data *pd);


Eina_Bool _ector_renderer_gl_gradient_radial_ector_renderer_gl_fill(Eo *obj, Ector_Renderer_GL_Gradient_Radial_Data *pd, uint64_t flags, GLshort *vertex, unsigned int vertex_count, unsigned int mul_col);


Efl_Object *_ector_renderer_gl_gradient_radial_efl_object_constructor(Eo *obj, Ector_Renderer_GL_Gradient_Radial_Data *pd);


void _ector_renderer_gl_gradient_radial_efl_object_destructor(Eo *obj, Ector_Renderer_GL_Gradient_Radial_Data *pd);


void _ector_renderer_gl_gradient_radial_efl_gfx_gradient_stop_set(Eo *obj, Ector_Renderer_GL_Gradient_Radial_Data *pd, const Efl_Gfx_Gradient_Stop *colors, unsigned int length);


static Eina_Bool
_ector_renderer_gl_gradient_radial_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_RENDERER_GL_GRADIENT_RADIAL_EXTRA_OPS
#define ECTOR_RENDERER_GL_GRADIENT_RADIAL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ector_renderer_prepare, _ector_renderer_gl_gradient_radial_ector_renderer_prepare),
      EFL_OBJECT_OP_FUNC(ector_renderer_draw, _ector_renderer_gl_gradient_radial_ector_renderer_draw),
      EFL_OBJECT_OP_FUNC(ector_renderer_bounds_get, _ector_renderer_gl_gradient_radial_ector_renderer_bounds_get),
      EFL_OBJECT_OP_FUNC(ector_renderer_crc_get, _ector_renderer_gl_gradient_radial_ector_renderer_crc_get),
      EFL_OBJECT_OP_FUNC(ector_renderer_gl_fill, _ector_renderer_gl_gradient_radial_ector_renderer_gl_fill),
      EFL_OBJECT_OP_FUNC(efl_constructor, _ector_renderer_gl_gradient_radial_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _ector_renderer_gl_gradient_radial_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_gradient_stop_set, _ector_renderer_gl_gradient_radial_efl_gfx_gradient_stop_set),
      ECTOR_RENDERER_GL_GRADIENT_RADIAL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_RENDERER_GL_GRADIENT_RADIAL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_RENDERER_GL_GRADIENT_RADIAL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_renderer_gl_gradient_radial_class_desc = {
   EO_VERSION,
   "Ector.Renderer.GL.Gradient.Radial",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Ector_Renderer_GL_Gradient_Radial_Data),
   _ector_renderer_gl_gradient_radial_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_renderer_gl_gradient_radial_class_get, &_ector_renderer_gl_gradient_radial_class_desc, ECTOR_RENDERER_GL_CLASS, ECTOR_RENDERER_GRADIENT_MIXIN, ECTOR_RENDERER_GRADIENT_RADIAL_MIXIN, NULL);
