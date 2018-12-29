
Efl_Object *_elm_photo_efl_object_constructor(Eo *obj, Elm_Photo_Data *pd);


Eina_Bool _elm_photo_efl_file_file_set(Eo *obj, Elm_Photo_Data *pd, const char *file, const char *key);


Elm_Theme_Apply _elm_photo_elm_widget_theme_apply(Eo *obj, Elm_Photo_Data *pd);


static Eina_Bool
_elm_photo_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_PHOTO_EXTRA_OPS
#define ELM_PHOTO_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_photo_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_file_set, _elm_photo_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_photo_elm_widget_theme_apply),
      ELM_PHOTO_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_PHOTO_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_PHOTO_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_photo_class_desc = {
   EO_VERSION,
   "Elm.Photo",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Photo_Data),
   _elm_photo_class_initializer,
   _elm_photo_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_photo_class_get, &_elm_photo_class_desc, ELM_WIDGET_CLASS, EFL_FILE_INTERFACE, EFL_UI_CLICKABLE_INTERFACE, EFL_UI_DRAGGABLE_INTERFACE, NULL);
