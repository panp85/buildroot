EOAPI EFL_FUNC_BODY(ector_renderer_software_fill, Eina_Bool, 0);

static Eina_Bool
_ector_renderer_software_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_RENDERER_SOFTWARE_EXTRA_OPS
#define ECTOR_RENDERER_SOFTWARE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ector_renderer_software_fill, NULL),
      ECTOR_RENDERER_SOFTWARE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_RENDERER_SOFTWARE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_RENDERER_SOFTWARE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_renderer_software_class_desc = {
   EO_VERSION,
   "Ector.Renderer.Software",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _ector_renderer_software_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_renderer_software_class_get, &_ector_renderer_software_class_desc, ECTOR_RENDERER_CLASS, NULL);
