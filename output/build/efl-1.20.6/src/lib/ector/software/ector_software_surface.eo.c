
Efl_Object *_ector_software_surface_ector_surface_renderer_factory_new(Eo *obj, Ector_Software_Surface_Data *pd, const Efl_Class *type);


void _ector_software_surface_ector_surface_reference_point_set(Eo *obj, Ector_Software_Surface_Data *pd, int x, int y);


void _ector_software_surface_efl_object_destructor(Eo *obj, Ector_Software_Surface_Data *pd);


Efl_Object *_ector_software_surface_efl_object_constructor(Eo *obj, Ector_Software_Surface_Data *pd);


static Eina_Bool
_ector_software_surface_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_SOFTWARE_SURFACE_EXTRA_OPS
#define ECTOR_SOFTWARE_SURFACE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ector_surface_renderer_factory_new, _ector_software_surface_ector_surface_renderer_factory_new),
      EFL_OBJECT_OP_FUNC(ector_surface_reference_point_set, _ector_software_surface_ector_surface_reference_point_set),
      EFL_OBJECT_OP_FUNC(efl_destructor, _ector_software_surface_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_constructor, _ector_software_surface_efl_object_constructor),
      ECTOR_SOFTWARE_SURFACE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_SOFTWARE_SURFACE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_SOFTWARE_SURFACE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_software_surface_class_desc = {
   EO_VERSION,
   "Ector.Software.Surface",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Ector_Software_Surface_Data),
   _ector_software_surface_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_software_surface_class_get, &_ector_software_surface_class_desc, ECTOR_SOFTWARE_BUFFER_CLASS, ECTOR_SURFACE_MIXIN, NULL);
