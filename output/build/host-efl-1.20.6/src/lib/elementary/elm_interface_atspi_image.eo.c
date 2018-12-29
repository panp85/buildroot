EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_atspi_image_extents_get, EFL_FUNC_CALL(screen_coords, x, y, width, height), Eina_Bool screen_coords, int *x, int *y, int *width, int *height);

void _elm_interface_atspi_image_description_set(Eo *obj, void *pd, const char *description);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_atspi_image_description_set, EFL_FUNC_CALL(description), const char *description);

const char *_elm_interface_atspi_image_description_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_image_description_get, const char *, NULL);

const char *_elm_interface_atspi_image_locale_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_image_locale_get, const char *, NULL);

static Eina_Bool
_elm_interface_atspi_image_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_INTERFACE_ATSPI_IMAGE_EXTRA_OPS
#define ELM_INTERFACE_ATSPI_IMAGE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_image_extents_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_image_description_set, _elm_interface_atspi_image_description_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_image_description_get, _elm_interface_atspi_image_description_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_image_locale_get, _elm_interface_atspi_image_locale_get),
      ELM_INTERFACE_ATSPI_IMAGE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_INTERFACE_ATSPI_IMAGE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_INTERFACE_ATSPI_IMAGE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_interface_atspi_image_class_desc = {
   EO_VERSION,
   "Elm.Interface.Atspi_Image",
   EFL_CLASS_TYPE_MIXIN,
   0,
   _elm_interface_atspi_image_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_interface_atspi_image_mixin_get, &_elm_interface_atspi_image_class_desc, NULL, NULL);
