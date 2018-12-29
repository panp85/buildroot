
void _evas_ector_gl_buffer_gl_buffer_prepare(Eo *obj, Evas_Ector_GL_Buffer_Data *pd, void *engine, int w, int h, Efl_Gfx_Colorspace cspace, Ector_Buffer_Flag flags);

EOAPI EFL_VOID_FUNC_BODYV(evas_ector_gl_buffer_prepare, EFL_FUNC_CALL(engine, w, h, cspace, flags), void *engine, int w, int h, Efl_Gfx_Colorspace cspace, Ector_Buffer_Flag flags);

Efl_Object *_evas_ector_gl_buffer_efl_object_finalize(Eo *obj, Evas_Ector_GL_Buffer_Data *pd);


void _evas_ector_gl_buffer_efl_object_destructor(Eo *obj, Evas_Ector_GL_Buffer_Data *pd);


void *_evas_ector_gl_buffer_evas_ector_buffer_drawable_image_get(Eo *obj, Evas_Ector_GL_Buffer_Data *pd);


void *_evas_ector_gl_buffer_evas_ector_buffer_render_image_get(Eo *obj, Evas_Ector_GL_Buffer_Data *pd);


Eina_Bool _evas_ector_gl_buffer_evas_ector_buffer_engine_image_release(Eo *obj, Evas_Ector_GL_Buffer_Data *pd, void *image);


void _evas_ector_gl_buffer_ector_buffer_size_get(Eo *obj, Evas_Ector_GL_Buffer_Data *pd, int *w, int *h);


Efl_Gfx_Colorspace _evas_ector_gl_buffer_ector_buffer_cspace_get(Eo *obj, Evas_Ector_GL_Buffer_Data *pd);


Ector_Buffer_Flag _evas_ector_gl_buffer_ector_buffer_flags_get(Eo *obj, Evas_Ector_GL_Buffer_Data *pd);


void *_evas_ector_gl_buffer_ector_buffer_map(Eo *obj, Evas_Ector_GL_Buffer_Data *pd, unsigned int *length, Ector_Buffer_Access_Flag mode, unsigned int x, unsigned int y, unsigned int w, unsigned int h, Efl_Gfx_Colorspace cspace, unsigned int *stride);


void _evas_ector_gl_buffer_ector_buffer_unmap(Eo *obj, Evas_Ector_GL_Buffer_Data *pd, void *data, unsigned int length);


static Eina_Bool
_evas_ector_gl_buffer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_ECTOR_GL_BUFFER_EXTRA_OPS
#define EVAS_ECTOR_GL_BUFFER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_ector_gl_buffer_prepare, _evas_ector_gl_buffer_gl_buffer_prepare),
      EFL_OBJECT_OP_FUNC(efl_finalize, _evas_ector_gl_buffer_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_destructor, _evas_ector_gl_buffer_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(evas_ector_buffer_drawable_image_get, _evas_ector_gl_buffer_evas_ector_buffer_drawable_image_get),
      EFL_OBJECT_OP_FUNC(evas_ector_buffer_render_image_get, _evas_ector_gl_buffer_evas_ector_buffer_render_image_get),
      EFL_OBJECT_OP_FUNC(evas_ector_buffer_engine_image_release, _evas_ector_gl_buffer_evas_ector_buffer_engine_image_release),
      EFL_OBJECT_OP_FUNC(ector_buffer_size_get, _evas_ector_gl_buffer_ector_buffer_size_get),
      EFL_OBJECT_OP_FUNC(ector_buffer_cspace_get, _evas_ector_gl_buffer_ector_buffer_cspace_get),
      EFL_OBJECT_OP_FUNC(ector_buffer_flags_get, _evas_ector_gl_buffer_ector_buffer_flags_get),
      EFL_OBJECT_OP_FUNC(ector_buffer_map, _evas_ector_gl_buffer_ector_buffer_map),
      EFL_OBJECT_OP_FUNC(ector_buffer_unmap, _evas_ector_gl_buffer_ector_buffer_unmap),
      EVAS_ECTOR_GL_BUFFER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_ECTOR_GL_BUFFER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_ECTOR_GL_BUFFER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_ector_gl_buffer_class_desc = {
   EO_VERSION,
   "Evas.Ector.GL.Buffer",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Ector_GL_Buffer_Data),
   _evas_ector_gl_buffer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_ector_gl_buffer_class_get, &_evas_ector_gl_buffer_class_desc, EFL_OBJECT_CLASS, EVAS_ECTOR_BUFFER_INTERFACE, ECTOR_GL_BUFFER_CLASS, NULL);
