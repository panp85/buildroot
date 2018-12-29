EOAPI EFL_FUNC_BODYV(ector_renderer_gl_fill, Eina_Bool, 0, EFL_FUNC_CALL(flags, vertex, vertex_count, mul_col), uint64_t flags, GLshort *vertex, unsigned int vertex_count, unsigned int mul_col);

Eina_Bool _ector_renderer_gl_ector_renderer_prepare(Eo *obj, Ector_Renderer_GL_Data *pd);


Eina_Bool _ector_renderer_gl_ector_renderer_draw(Eo *obj, Ector_Renderer_GL_Data *pd, Efl_Gfx_Render_Op op, Eina_Array *clips, unsigned int mul_col);


Efl_Object *_ector_renderer_gl_efl_object_constructor(Eo *obj, Ector_Renderer_GL_Data *pd);


void _ector_renderer_gl_efl_object_destructor(Eo *obj, Ector_Renderer_GL_Data *pd);


static Eina_Bool
_ector_renderer_gl_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_RENDERER_GL_EXTRA_OPS
#define ECTOR_RENDERER_GL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ector_renderer_gl_fill, NULL),
      EFL_OBJECT_OP_FUNC(ector_renderer_prepare, _ector_renderer_gl_ector_renderer_prepare),
      EFL_OBJECT_OP_FUNC(ector_renderer_draw, _ector_renderer_gl_ector_renderer_draw),
      EFL_OBJECT_OP_FUNC(efl_constructor, _ector_renderer_gl_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _ector_renderer_gl_efl_object_destructor),
      ECTOR_RENDERER_GL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_RENDERER_GL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_RENDERER_GL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_renderer_gl_class_desc = {
   EO_VERSION,
   "Ector.Renderer.GL",
   EFL_CLASS_TYPE_REGULAR_NO_INSTANT,
   sizeof(Ector_Renderer_GL_Data),
   _ector_renderer_gl_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_renderer_gl_class_get, &_ector_renderer_gl_class_desc, ECTOR_RENDERER_CLASS, NULL);
