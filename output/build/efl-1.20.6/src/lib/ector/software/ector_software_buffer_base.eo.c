
void _ector_software_buffer_base_pixels_clear(Eo *obj, Ector_Software_Buffer_Base_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(ector_software_buffer_pixels_clear);

Ector_Buffer_Flag _ector_software_buffer_base_ector_buffer_flags_get(Eo *obj, Ector_Software_Buffer_Base_Data *pd);


Eina_Bool _ector_software_buffer_base_ector_buffer_pixels_set(Eo *obj, Ector_Software_Buffer_Base_Data *pd, void *pixels, int width, int height, Efl_Gfx_Colorspace cspace, Eina_Bool writable);


void *_ector_software_buffer_base_ector_buffer_map(Eo *obj, Ector_Software_Buffer_Base_Data *pd, unsigned int *length, Ector_Buffer_Access_Flag mode, unsigned int x, unsigned int y, unsigned int w, unsigned int h, Efl_Gfx_Colorspace cspace, unsigned int *stride);


void _ector_software_buffer_base_ector_buffer_unmap(Eo *obj, Ector_Software_Buffer_Base_Data *pd, void *data, unsigned int length);


static Eina_Bool
_ector_software_buffer_base_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ECTOR_SOFTWARE_BUFFER_BASE_EXTRA_OPS
#define ECTOR_SOFTWARE_BUFFER_BASE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(ector_software_buffer_pixels_clear, _ector_software_buffer_base_pixels_clear),
      EFL_OBJECT_OP_FUNC(ector_buffer_flags_get, _ector_software_buffer_base_ector_buffer_flags_get),
      EFL_OBJECT_OP_FUNC(ector_buffer_pixels_set, _ector_software_buffer_base_ector_buffer_pixels_set),
      EFL_OBJECT_OP_FUNC(ector_buffer_map, _ector_software_buffer_base_ector_buffer_map),
      EFL_OBJECT_OP_FUNC(ector_buffer_unmap, _ector_software_buffer_base_ector_buffer_unmap),
      ECTOR_SOFTWARE_BUFFER_BASE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ECTOR_SOFTWARE_BUFFER_BASE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ECTOR_SOFTWARE_BUFFER_BASE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _ector_software_buffer_base_class_desc = {
   EO_VERSION,
   "Ector.Software.Buffer.Base",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Ector_Software_Buffer_Base_Data),
   _ector_software_buffer_base_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(ector_software_buffer_base_mixin_get, &_ector_software_buffer_base_class_desc, ECTOR_BUFFER_MIXIN, NULL);
