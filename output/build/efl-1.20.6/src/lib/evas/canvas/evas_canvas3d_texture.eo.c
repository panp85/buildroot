
void _evas_canvas3d_texture_source_visible_set(Eo *obj, Evas_Canvas3D_Texture_Data *pd, Eina_Bool visible);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_texture_source_visible_set, EFL_FUNC_CALL(visible), Eina_Bool visible);

Eina_Bool _evas_canvas3d_texture_source_visible_get(Eo *obj, Evas_Canvas3D_Texture_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_texture_source_visible_get, Eina_Bool, 0);

void _evas_canvas3d_texture_atlas_enable_set(Eo *obj, Evas_Canvas3D_Texture_Data *pd, Eina_Bool use_atlas);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_texture_atlas_enable_set, EFL_FUNC_CALL(use_atlas), Eina_Bool use_atlas);

Eina_Bool _evas_canvas3d_texture_atlas_enable_get(Eo *obj, Evas_Canvas3D_Texture_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_texture_atlas_enable_get, Eina_Bool, 0);

void _evas_canvas3d_texture_data_set(Eo *obj, Evas_Canvas3D_Texture_Data *pd, Evas_Colorspace color_format, int w, int h, const void *data);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_texture_data_set, EFL_FUNC_CALL(color_format, w, h, data), Evas_Colorspace color_format, int w, int h, const void *data);

void _evas_canvas3d_texture_file_set(Eo *obj, Evas_Canvas3D_Texture_Data *pd, const char *file, const char *key);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_texture_file_set, EFL_FUNC_CALL(file, key), const char *file, const char *key);

void _evas_canvas3d_texture_source_set(Eo *obj, Evas_Canvas3D_Texture_Data *pd, Efl_Canvas_Object *source);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_texture_source_set, EFL_FUNC_CALL(source), Efl_Canvas_Object *source);

Evas_Colorspace _evas_canvas3d_texture_color_format_get(const Eo *obj, Evas_Canvas3D_Texture_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_texture_color_format_get, Evas_Colorspace, 0);

void _evas_canvas3d_texture_size_get(const Eo *obj, Evas_Canvas3D_Texture_Data *pd, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_texture_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);

void _evas_canvas3d_texture_wrap_set(Eo *obj, Evas_Canvas3D_Texture_Data *pd, Evas_Canvas3D_Wrap_Mode s, Evas_Canvas3D_Wrap_Mode t);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_texture_wrap_set, EFL_FUNC_CALL(s, t), Evas_Canvas3D_Wrap_Mode s, Evas_Canvas3D_Wrap_Mode t);

void _evas_canvas3d_texture_wrap_get(Eo *obj, Evas_Canvas3D_Texture_Data *pd, Evas_Canvas3D_Wrap_Mode *s, Evas_Canvas3D_Wrap_Mode *t);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_texture_wrap_get, EFL_FUNC_CALL(s, t), Evas_Canvas3D_Wrap_Mode *s, Evas_Canvas3D_Wrap_Mode *t);

void _evas_canvas3d_texture_filter_set(Eo *obj, Evas_Canvas3D_Texture_Data *pd, Evas_Canvas3D_Texture_Filter min, Evas_Canvas3D_Texture_Filter mag);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_texture_filter_set, EFL_FUNC_CALL(min, mag), Evas_Canvas3D_Texture_Filter min, Evas_Canvas3D_Texture_Filter mag);

void _evas_canvas3d_texture_filter_get(const Eo *obj, Evas_Canvas3D_Texture_Data *pd, Evas_Canvas3D_Texture_Filter *min, Evas_Canvas3D_Texture_Filter *mag);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_texture_filter_get, EFL_FUNC_CALL(min, mag), Evas_Canvas3D_Texture_Filter *min, Evas_Canvas3D_Texture_Filter *mag);

Efl_Object *_evas_canvas3d_texture_efl_object_constructor(Eo *obj, Evas_Canvas3D_Texture_Data *pd);


void _evas_canvas3d_texture_efl_object_destructor(Eo *obj, Evas_Canvas3D_Texture_Data *pd);


void _evas_canvas3d_texture_evas_canvas3d_object_update_notify(Eo *obj, Evas_Canvas3D_Texture_Data *pd);


void _evas_canvas3d_texture_evas_canvas3d_object_change_notify(Eo *obj, Evas_Canvas3D_Texture_Data *pd, Evas_Canvas3D_State state, Evas_Canvas3D_Object *ref);


static Eina_Bool
_evas_canvas3d_texture_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_CANVAS3D_TEXTURE_EXTRA_OPS
#define EVAS_CANVAS3D_TEXTURE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_canvas3d_texture_source_visible_set, _evas_canvas3d_texture_source_visible_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_texture_source_visible_get, _evas_canvas3d_texture_source_visible_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_texture_atlas_enable_set, _evas_canvas3d_texture_atlas_enable_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_texture_atlas_enable_get, _evas_canvas3d_texture_atlas_enable_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_texture_data_set, _evas_canvas3d_texture_data_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_texture_file_set, _evas_canvas3d_texture_file_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_texture_source_set, _evas_canvas3d_texture_source_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_texture_color_format_get, _evas_canvas3d_texture_color_format_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_texture_size_get, _evas_canvas3d_texture_size_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_texture_wrap_set, _evas_canvas3d_texture_wrap_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_texture_wrap_get, _evas_canvas3d_texture_wrap_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_texture_filter_set, _evas_canvas3d_texture_filter_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_texture_filter_get, _evas_canvas3d_texture_filter_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _evas_canvas3d_texture_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _evas_canvas3d_texture_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_update_notify, _evas_canvas3d_texture_evas_canvas3d_object_update_notify),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_change_notify, _evas_canvas3d_texture_evas_canvas3d_object_change_notify),
      EVAS_CANVAS3D_TEXTURE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_CANVAS3D_TEXTURE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_CANVAS3D_TEXTURE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_canvas3d_texture_class_desc = {
   EO_VERSION,
   "Evas.Canvas3D.Texture",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Canvas3D_Texture_Data),
   _evas_canvas3d_texture_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_canvas3d_texture_class_get, &_evas_canvas3d_texture_class_desc, EVAS_CANVAS3D_OBJECT_CLASS, NULL);
