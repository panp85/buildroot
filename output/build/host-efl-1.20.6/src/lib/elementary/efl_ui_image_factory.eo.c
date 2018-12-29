
Efl_Object *_efl_ui_image_factory_efl_object_constructor(Eo *obj, Efl_Ui_Image_Factory_Data *pd);


void _efl_ui_image_factory_efl_object_destructor(Eo *obj, Efl_Ui_Image_Factory_Data *pd);


Efl_Gfx *_efl_ui_image_factory_efl_ui_factory_create(Eo *obj, Efl_Ui_Image_Factory_Data *pd, Efl_Model *model, Efl_Gfx *parent);


void _efl_ui_image_factory_efl_ui_factory_release(Eo *obj, Efl_Ui_Image_Factory_Data *pd, Efl_Gfx *ui_view);


void _efl_ui_image_factory_efl_ui_model_connect_connect(Eo *obj, Efl_Ui_Image_Factory_Data *pd, const char *name, const char *property);


static Eina_Bool
_efl_ui_image_factory_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_IMAGE_FACTORY_EXTRA_OPS
#define EFL_UI_IMAGE_FACTORY_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_image_factory_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_ui_image_factory_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_ui_factory_create, _efl_ui_image_factory_efl_ui_factory_create),
      EFL_OBJECT_OP_FUNC(efl_ui_factory_release, _efl_ui_image_factory_efl_ui_factory_release),
      EFL_OBJECT_OP_FUNC(efl_ui_model_connect, _efl_ui_image_factory_efl_ui_model_connect_connect),
      EFL_UI_IMAGE_FACTORY_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_IMAGE_FACTORY_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_IMAGE_FACTORY_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_image_factory_class_desc = {
   EO_VERSION,
   "Efl.Ui.Image.Factory",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Image_Factory_Data),
   _efl_ui_image_factory_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_image_factory_class_get, &_efl_ui_image_factory_class_desc, EFL_OBJECT_CLASS, EFL_UI_FACTORY_INTERFACE, NULL);
