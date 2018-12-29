
Eina_Bool _ector_cairo_software_surface_ector_buffer_pixels_set(Eo *obj, Ector_Cairo_Software_Surface_Data *pd, void *pixels, int width, int height, Efl_Gfx_Colorspace cspace, Eina_Bool writable);


Efl_Object *_ector_cairo_software_surface_efl_object_constructor(Eo *obj, Ector_Cairo_Software_Surface_Data *pd);


void _ector_cairo_software_surface_efl_object_destructor(Eo *obj, Ector_Cairo_Software_Surface_Data *pd);


static Eina_Bool
_ector_cairo_software_surface_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_CAIRO_SOFTWARE_SURFACE_EXTRA_OPS
#define ECTOR_CAIRO_SOFTWARE_SURFACE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ector_buffer_pixels_set, _ector_cairo_software_surface_ector_buffer_pixels_set),
      EFL_OBJECT_OP_FUNC(efl_constructor, _ector_cairo_software_surface_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _ector_cairo_software_surface_efl_object_destructor),
      ECTOR_CAIRO_SOFTWARE_SURFACE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_CAIRO_SOFTWARE_SURFACE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_CAIRO_SOFTWARE_SURFACE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_cairo_software_surface_class_desc = {
   EO_VERSION,
   "Ector.Cairo.Software.Surface",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Ector_Cairo_Software_Surface_Data),
   _ector_cairo_software_surface_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_cairo_software_surface_class_get, &_ector_cairo_software_surface_class_desc, ECTOR_CAIRO_SURFACE_CLASS, ECTOR_SOFTWARE_BUFFER_BASE_MIXIN, NULL);
