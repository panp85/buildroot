EOAPI EFL_VOID_FUNC_BODYV(ector_surface_reference_point_set, EFL_FUNC_CALL(x, y), int x, int y);
EOAPI EFL_FUNC_BODYV(ector_surface_renderer_factory_new, Efl_Object *, NULL, EFL_FUNC_CALL(type), const Efl_Class *type);

static Eina_Bool
_ector_surface_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_SURFACE_EXTRA_OPS
#define ECTOR_SURFACE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ector_surface_reference_point_set, NULL),
      EFL_OBJECT_OP_FUNC(ector_surface_renderer_factory_new, NULL),
      ECTOR_SURFACE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_SURFACE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_SURFACE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_surface_class_desc = {
   EO_VERSION,
   "Ector.Surface",
   EFL_CLASS_TYPE_MIXIN,
   0,
   _ector_surface_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_surface_mixin_get, &_ector_surface_class_desc, ECTOR_BUFFER_MIXIN, NULL);
