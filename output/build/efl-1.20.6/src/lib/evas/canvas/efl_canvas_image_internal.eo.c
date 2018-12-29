
Efl_Object *_efl_canvas_image_internal_efl_object_constructor(Eo *obj, Evas_Image_Data *pd);


void _efl_canvas_image_internal_efl_object_destructor(Eo *obj, Evas_Image_Data *pd);


Efl_Object *_efl_canvas_image_internal_efl_object_finalize(Eo *obj, Evas_Image_Data *pd);


Eina_Bool _efl_canvas_image_internal_efl_file_save(const Eo *obj, Evas_Image_Data *pd, const char *file, const char *key, const char *flags);


void _efl_canvas_image_internal_efl_orientation_orientation_set(Eo *obj, Evas_Image_Data *pd, Efl_Orient dir);


Efl_Orient _efl_canvas_image_internal_efl_orientation_orientation_get(Eo *obj, Evas_Image_Data *pd);


void _efl_canvas_image_internal_efl_flipable_flip_set(Eo *obj, Evas_Image_Data *pd, Efl_Flip flip);


Efl_Flip _efl_canvas_image_internal_efl_flipable_flip_get(Eo *obj, Evas_Image_Data *pd);


void _efl_canvas_image_internal_efl_image_smooth_scale_set(Eo *obj, Evas_Image_Data *pd, Eina_Bool smooth_scale);


Eina_Bool _efl_canvas_image_internal_efl_image_smooth_scale_get(Eo *obj, Evas_Image_Data *pd);


double _efl_canvas_image_internal_efl_image_ratio_get(Eo *obj, Evas_Image_Data *pd);


void _efl_canvas_image_internal_efl_image_border_set(Eo *obj, Evas_Image_Data *pd, int l, int r, int t, int b);


void _efl_canvas_image_internal_efl_image_border_get(Eo *obj, Evas_Image_Data *pd, int *l, int *r, int *t, int *b);


void _efl_canvas_image_internal_efl_image_border_scale_set(Eo *obj, Evas_Image_Data *pd, double scale);


double _efl_canvas_image_internal_efl_image_border_scale_get(Eo *obj, Evas_Image_Data *pd);


void _efl_canvas_image_internal_efl_image_border_center_fill_set(Eo *obj, Evas_Image_Data *pd, Efl_Gfx_Border_Fill_Mode fill);


Efl_Gfx_Border_Fill_Mode _efl_canvas_image_internal_efl_image_border_center_fill_get(Eo *obj, Evas_Image_Data *pd);


void _efl_canvas_image_internal_efl_image_scale_hint_set(Eo *obj, Evas_Image_Data *pd, Efl_Image_Scale_Hint hint);


Efl_Image_Scale_Hint _efl_canvas_image_internal_efl_image_scale_hint_get(Eo *obj, Evas_Image_Data *pd);


void _efl_canvas_image_internal_efl_image_content_hint_set(Eo *obj, Evas_Image_Data *pd, Efl_Image_Content_Hint hint);


Efl_Image_Content_Hint _efl_canvas_image_internal_efl_image_content_hint_get(Eo *obj, Evas_Image_Data *pd);


void _efl_canvas_image_internal_efl_image_image_size_get(Eo *obj, Evas_Image_Data *pd, int *w, int *h);


void _efl_canvas_image_internal_efl_gfx_buffer_alpha_set(Eo *obj, Evas_Image_Data *pd, Eina_Bool alpha);


Eina_Bool _efl_canvas_image_internal_efl_gfx_buffer_alpha_get(Eo *obj, Evas_Image_Data *pd);


void _efl_canvas_image_internal_efl_gfx_buffer_buffer_update_add(Eo *obj, Evas_Image_Data *pd, int x, int y, int w, int h);


Efl_Gfx_Colorspace _efl_canvas_image_internal_efl_gfx_buffer_colorspace_get(Eo *obj, Evas_Image_Data *pd);


void _efl_canvas_image_internal_efl_gfx_fill_fill_set(Eo *obj, Evas_Image_Data *pd, int x, int y, int w, int h);


void _efl_canvas_image_internal_efl_gfx_fill_fill_get(Eo *obj, Evas_Image_Data *pd, int *x, int *y, int *w, int *h);


void _efl_canvas_image_internal_efl_gfx_fill_fill_auto_set(Eo *obj, Evas_Image_Data *pd, Eina_Bool filled);


Eina_Bool _efl_canvas_image_internal_efl_gfx_fill_fill_auto_get(Eo *obj, Evas_Image_Data *pd);


void _efl_canvas_image_internal_efl_gfx_filter_filter_program_set(Eo *obj, Evas_Image_Data *pd, const char *code, const char *name);


void _efl_canvas_image_internal_efl_gfx_view_view_size_get(Eo *obj, Evas_Image_Data *pd, int *w, int *h);


void _efl_canvas_image_internal_efl_canvas_filter_internal_filter_dirty(Eo *obj, Evas_Image_Data *pd);


Eina_Bool _efl_canvas_image_internal_efl_canvas_filter_internal_filter_input_alpha(Eo *obj, Evas_Image_Data *pd);


Eina_Bool _efl_canvas_image_internal_efl_canvas_filter_internal_filter_input_render(Eo *obj, Evas_Image_Data *pd, void *filter, void *engine, void *output, void *drawctx, void *data, int l, int r, int t, int b, int x, int y, Eina_Bool do_async);


void _efl_canvas_image_internal_efl_canvas_filter_internal_filter_state_prepare(Eo *obj, Evas_Image_Data *pd, Efl_Canvas_Filter_State *state, void *data);


static Eina_Bool
_efl_canvas_image_internal_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_IMAGE_INTERNAL_EXTRA_OPS
#define EFL_CANVAS_IMAGE_INTERNAL_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_canvas_image_internal_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _efl_canvas_image_internal_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_canvas_image_internal_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_file_save, _efl_canvas_image_internal_efl_file_save),
      EFL_OBJECT_OP_FUNC(efl_orientation_set, _efl_canvas_image_internal_efl_orientation_orientation_set),
      EFL_OBJECT_OP_FUNC(efl_orientation_get, _efl_canvas_image_internal_efl_orientation_orientation_get),
      EFL_OBJECT_OP_FUNC(efl_flip_set, _efl_canvas_image_internal_efl_flipable_flip_set),
      EFL_OBJECT_OP_FUNC(efl_flip_get, _efl_canvas_image_internal_efl_flipable_flip_get),
      EFL_OBJECT_OP_FUNC(efl_image_smooth_scale_set, _efl_canvas_image_internal_efl_image_smooth_scale_set),
      EFL_OBJECT_OP_FUNC(efl_image_smooth_scale_get, _efl_canvas_image_internal_efl_image_smooth_scale_get),
      EFL_OBJECT_OP_FUNC(efl_image_ratio_get, _efl_canvas_image_internal_efl_image_ratio_get),
      EFL_OBJECT_OP_FUNC(efl_image_border_set, _efl_canvas_image_internal_efl_image_border_set),
      EFL_OBJECT_OP_FUNC(efl_image_border_get, _efl_canvas_image_internal_efl_image_border_get),
      EFL_OBJECT_OP_FUNC(efl_image_border_scale_set, _efl_canvas_image_internal_efl_image_border_scale_set),
      EFL_OBJECT_OP_FUNC(efl_image_border_scale_get, _efl_canvas_image_internal_efl_image_border_scale_get),
      EFL_OBJECT_OP_FUNC(efl_image_border_center_fill_set, _efl_canvas_image_internal_efl_image_border_center_fill_set),
      EFL_OBJECT_OP_FUNC(efl_image_border_center_fill_get, _efl_canvas_image_internal_efl_image_border_center_fill_get),
      EFL_OBJECT_OP_FUNC(efl_image_scale_hint_set, _efl_canvas_image_internal_efl_image_scale_hint_set),
      EFL_OBJECT_OP_FUNC(efl_image_scale_hint_get, _efl_canvas_image_internal_efl_image_scale_hint_get),
      EFL_OBJECT_OP_FUNC(efl_image_content_hint_set, _efl_canvas_image_internal_efl_image_content_hint_set),
      EFL_OBJECT_OP_FUNC(efl_image_content_hint_get, _efl_canvas_image_internal_efl_image_content_hint_get),
      EFL_OBJECT_OP_FUNC(efl_image_size_get, _efl_canvas_image_internal_efl_image_image_size_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_alpha_set, _efl_canvas_image_internal_efl_gfx_buffer_alpha_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_alpha_get, _efl_canvas_image_internal_efl_gfx_buffer_alpha_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_update_add, _efl_canvas_image_internal_efl_gfx_buffer_buffer_update_add),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_colorspace_get, _efl_canvas_image_internal_efl_gfx_buffer_colorspace_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_fill_set, _efl_canvas_image_internal_efl_gfx_fill_fill_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_fill_get, _efl_canvas_image_internal_efl_gfx_fill_fill_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_fill_auto_set, _efl_canvas_image_internal_efl_gfx_fill_fill_auto_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_fill_auto_get, _efl_canvas_image_internal_efl_gfx_fill_fill_auto_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_filter_program_set, _efl_canvas_image_internal_efl_gfx_filter_filter_program_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_view_size_get, _efl_canvas_image_internal_efl_gfx_view_view_size_get),
      EFL_OBJECT_OP_FUNC(evas_filter_dirty, _efl_canvas_image_internal_efl_canvas_filter_internal_filter_dirty),
      EFL_OBJECT_OP_FUNC(evas_filter_input_alpha, _efl_canvas_image_internal_efl_canvas_filter_internal_filter_input_alpha),
      EFL_OBJECT_OP_FUNC(evas_filter_input_render, _efl_canvas_image_internal_efl_canvas_filter_internal_filter_input_render),
      EFL_OBJECT_OP_FUNC(evas_filter_state_prepare, _efl_canvas_image_internal_efl_canvas_filter_internal_filter_state_prepare),
      EFL_CANVAS_IMAGE_INTERNAL_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_IMAGE_INTERNAL_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_IMAGE_INTERNAL_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_image_internal_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Image.Internal",
   EFL_CLASS_TYPE_REGULAR_NO_INSTANT,
   sizeof(Evas_Image_Data),
   _efl_canvas_image_internal_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_image_internal_class_get, &_efl_canvas_image_internal_class_desc, EFL_CANVAS_OBJECT_CLASS, EFL_CANVAS_FILTER_INTERNAL_MIXIN, EFL_IMAGE_INTERFACE, EFL_GFX_BUFFER_INTERFACE, EFL_GFX_FILL_INTERFACE, EFL_GFX_VIEW_INTERFACE, EFL_ORIENTATION_INTERFACE, EFL_FLIPABLE_INTERFACE, EFL_FILE_INTERFACE, NULL);
