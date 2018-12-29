
unsigned int _ector_gl_surface_shader_get(Eo *obj, Ector_GL_Surface_Data *pd, uint64_t flags);

EOAPI EFL_FUNC_BODYV(ector_gl_surface_shader_get, unsigned int, 0, EFL_FUNC_CALL(flags), uint64_t flags);

Eina_Bool _ector_gl_surface_push(Eo *obj, Ector_GL_Surface_Data *pd, uint64_t flags, GLshort *vertex, unsigned int vertex_count, unsigned int mul_col);

EOAPI EFL_FUNC_BODYV(ector_gl_surface_push, Eina_Bool, 0, EFL_FUNC_CALL(flags, vertex, vertex_count, mul_col), uint64_t flags, GLshort *vertex, unsigned int vertex_count, unsigned int mul_col);

Eina_Bool _ector_gl_surface_state_define(Eo *obj, Ector_GL_Surface_Data *pd, Efl_Gfx_Render_Op op, Eina_Array *clips);

EOAPI EFL_FUNC_BODYV(ector_gl_surface_state_define, Eina_Bool, 0, EFL_FUNC_CALL(op, clips), Efl_Gfx_Render_Op op, Eina_Array *clips);

Efl_Object *_ector_gl_surface_ector_surface_renderer_factory_new(Eo *obj, Ector_GL_Surface_Data *pd, const Efl_Class *type);


void _ector_gl_surface_ector_surface_reference_point_set(Eo *obj, Ector_GL_Surface_Data *pd, int x, int y);


void _ector_gl_surface_efl_object_destructor(Eo *obj, Ector_GL_Surface_Data *pd);


Efl_Object *_ector_gl_surface_efl_object_constructor(Eo *obj, Ector_GL_Surface_Data *pd);


static Eina_Bool
_ector_gl_surface_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_GL_SURFACE_EXTRA_OPS
#define ECTOR_GL_SURFACE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ector_gl_surface_shader_get, _ector_gl_surface_shader_get),
      EFL_OBJECT_OP_FUNC(ector_gl_surface_push, _ector_gl_surface_push),
      EFL_OBJECT_OP_FUNC(ector_gl_surface_state_define, _ector_gl_surface_state_define),
      EFL_OBJECT_OP_FUNC(ector_surface_renderer_factory_new, _ector_gl_surface_ector_surface_renderer_factory_new),
      EFL_OBJECT_OP_FUNC(ector_surface_reference_point_set, _ector_gl_surface_ector_surface_reference_point_set),
      EFL_OBJECT_OP_FUNC(efl_destructor, _ector_gl_surface_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_constructor, _ector_gl_surface_efl_object_constructor),
      ECTOR_GL_SURFACE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_GL_SURFACE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_GL_SURFACE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_gl_surface_class_desc = {
   EO_VERSION,
   "Ector.GL.Surface",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Ector_GL_Surface_Data),
   _ector_gl_surface_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_gl_surface_class_get, &_ector_gl_surface_class_desc, ECTOR_GL_BUFFER_CLASS, ECTOR_SURFACE_MIXIN, NULL);
