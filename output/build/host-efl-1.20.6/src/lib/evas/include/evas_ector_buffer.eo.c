EOAPI EFL_VOID_FUNC_BODYV(evas_ector_buffer_engine_image_set, EFL_FUNC_CALL(engine, image), void *engine, void *image);
EOAPI EFL_FUNC_BODY(evas_ector_buffer_drawable_image_get, void *, NULL);
EOAPI EFL_FUNC_BODY(evas_ector_buffer_render_image_get, void *, NULL);
EOAPI EFL_FUNC_BODYV(evas_ector_buffer_engine_image_release, Eina_Bool, 0, EFL_FUNC_CALL(image), void *image);

static Eina_Bool
_evas_ector_buffer_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_ECTOR_BUFFER_EXTRA_OPS
#define EVAS_ECTOR_BUFFER_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_ector_buffer_engine_image_set, NULL),
      EFL_OBJECT_OP_FUNC(evas_ector_buffer_drawable_image_get, NULL),
      EFL_OBJECT_OP_FUNC(evas_ector_buffer_render_image_get, NULL),
      EFL_OBJECT_OP_FUNC(evas_ector_buffer_engine_image_release, NULL),
      EVAS_ECTOR_BUFFER_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_ECTOR_BUFFER_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_ECTOR_BUFFER_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_ector_buffer_class_desc = {
   EO_VERSION,
   "Evas.Ector.Buffer",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _evas_ector_buffer_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_ector_buffer_interface_get, &_evas_ector_buffer_class_desc, NULL, NULL);
