
Efl_Object *_evas_ector_software_buffer_efl_object_constructor(Eo *obj, Evas_Ector_Software_Buffer_Data *pd);


Efl_Object *_evas_ector_software_buffer_efl_object_finalize(Eo *obj, Evas_Ector_Software_Buffer_Data *pd);


void _evas_ector_software_buffer_efl_object_destructor(Eo *obj, Evas_Ector_Software_Buffer_Data *pd);


void _evas_ector_software_buffer_evas_ector_buffer_engine_image_set(Eo *obj, Evas_Ector_Software_Buffer_Data *pd, void *engine, void *image);


void *_evas_ector_software_buffer_evas_ector_buffer_drawable_image_get(Eo *obj, Evas_Ector_Software_Buffer_Data *pd);


void *_evas_ector_software_buffer_evas_ector_buffer_render_image_get(Eo *obj, Evas_Ector_Software_Buffer_Data *pd);


Eina_Bool _evas_ector_software_buffer_evas_ector_buffer_engine_image_release(Eo *obj, Evas_Ector_Software_Buffer_Data *pd, void *image);


static Eina_Bool
_evas_ector_software_buffer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_ECTOR_SOFTWARE_BUFFER_EXTRA_OPS
#define EVAS_ECTOR_SOFTWARE_BUFFER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _evas_ector_software_buffer_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _evas_ector_software_buffer_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_destructor, _evas_ector_software_buffer_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(evas_ector_buffer_engine_image_set, _evas_ector_software_buffer_evas_ector_buffer_engine_image_set),
      EFL_OBJECT_OP_FUNC(evas_ector_buffer_drawable_image_get, _evas_ector_software_buffer_evas_ector_buffer_drawable_image_get),
      EFL_OBJECT_OP_FUNC(evas_ector_buffer_render_image_get, _evas_ector_software_buffer_evas_ector_buffer_render_image_get),
      EFL_OBJECT_OP_FUNC(evas_ector_buffer_engine_image_release, _evas_ector_software_buffer_evas_ector_buffer_engine_image_release),
      EVAS_ECTOR_SOFTWARE_BUFFER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_ECTOR_SOFTWARE_BUFFER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_ECTOR_SOFTWARE_BUFFER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_ector_software_buffer_class_desc = {
   EO_VERSION,
   "Evas.Ector.Software.Buffer",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Ector_Software_Buffer_Data),
   _evas_ector_software_buffer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_ector_software_buffer_class_get, &_evas_ector_software_buffer_class_desc, ECTOR_SOFTWARE_BUFFER_CLASS, EVAS_ECTOR_BUFFER_INTERFACE, NULL);
