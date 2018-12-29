
static Eina_Bool
_ector_gl_buffer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifdef ECTOR_GL_BUFFER_EXTRA_OPS
   EFL_OPS_DEFINE(ops, ECTOR_GL_BUFFER_EXTRA_OPS);
   opsp = &ops;
#endif

#ifdef ECTOR_GL_BUFFER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_GL_BUFFER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_gl_buffer_class_desc = {
   EO_VERSION,
   "Ector.GL.Buffer",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _ector_gl_buffer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_gl_buffer_class_get, &_ector_gl_buffer_class_desc, EFL_OBJECT_CLASS, ECTOR_BUFFER_MIXIN, NULL);
