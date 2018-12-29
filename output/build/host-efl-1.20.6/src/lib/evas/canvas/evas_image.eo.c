
Eina_Bool _evas_image_efl_file_file_set(Eo *obj, void *pd, const char *file, const char *key);


void _evas_image_efl_file_file_get(Eo *obj, void *pd, const char **file, const char **key);


Eina_Bool _evas_image_efl_file_mmap_set(Eo *obj, void *pd, const Eina_File *f, const char *key);


void _evas_image_efl_file_mmap_get(Eo *obj, void *pd, const Eina_File **f, const char **key);


static Eina_Bool
_evas_image_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_IMAGE_EXTRA_OPS
#define EVAS_IMAGE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_file_set, _evas_image_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_get, _evas_image_efl_file_file_get),
      EFL_OBJECT_OP_FUNC(efl_file_mmap_set, _evas_image_efl_file_mmap_set),
      EFL_OBJECT_OP_FUNC(efl_file_mmap_get, _evas_image_efl_file_mmap_get),
      EVAS_IMAGE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_IMAGE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_IMAGE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_image_class_desc = {
   EO_VERSION,
   "Evas.Image",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _evas_image_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_image_class_get, &_evas_image_class_desc, EFL_CANVAS_IMAGE_INTERNAL_CLASS, EFL_FILE_INTERFACE, NULL);
