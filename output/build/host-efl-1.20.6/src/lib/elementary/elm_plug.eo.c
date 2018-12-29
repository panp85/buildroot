EWAPI const Efl_Event_Description _ELM_PLUG_EVENT_IMAGE_DELETED =
   EFL_EVENT_DESCRIPTION("image,deleted");
EWAPI const Efl_Event_Description _ELM_PLUG_EVENT_IMAGE_RESIZED =
   EFL_EVENT_DESCRIPTION("image,resized");

Efl_Canvas_Object *_elm_plug_image_object_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_plug_image_object_get, Efl_Canvas_Object *, NULL);

Eina_Bool _elm_plug_connect(Eo *obj, void *pd, const char *svcname, int svcnum, Eina_Bool svcsys);

EOAPI EFL_FUNC_BODYV(elm_obj_plug_connect, Eina_Bool, 0, EFL_FUNC_CALL(svcname, svcnum, svcsys), const char *svcname, int svcnum, Eina_Bool svcsys);

Efl_Object *_elm_plug_efl_object_constructor(Eo *obj, void *pd);


Elm_Theme_Apply _elm_plug_elm_widget_theme_apply(Eo *obj, void *pd);


Eina_Bool _elm_plug_elm_widget_on_focus(Eo *obj, void *pd, Elm_Widget_Item *item);


static Eina_Bool
_elm_plug_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_PLUG_EXTRA_OPS
#define ELM_PLUG_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_plug_image_object_get, _elm_plug_image_object_get),
      EFL_OBJECT_OP_FUNC(elm_obj_plug_connect, _elm_plug_connect),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_plug_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_plug_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _elm_plug_elm_widget_on_focus),
      ELM_PLUG_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_PLUG_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_PLUG_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_plug_class_desc = {
   EO_VERSION,
   "Elm.Plug",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _elm_plug_class_initializer,
   _elm_plug_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_plug_class_get, &_elm_plug_class_desc, ELM_WIDGET_CLASS, EFL_UI_CLICKABLE_INTERFACE, NULL);

EAPI Efl_Canvas_Object *
elm_plug_image_object_get(const Elm_Plug *obj)
{
   return elm_obj_plug_image_object_get(obj);
}

EAPI Eina_Bool
elm_plug_connect(Elm_Plug *obj, const char *svcname, int svcnum, Eina_Bool svcsys)
{
   return elm_obj_plug_connect(obj, svcname, svcnum, svcsys);
}
