
Eina_Bool _efl_canvas_image_efl_gfx_buffer_buffer_managed_get(Eo *obj, void *pd, Eina_Slice *slice, int plane);


Eina_Bool _efl_canvas_image_efl_gfx_buffer_buffer_managed_set(Eo *obj, void *pd, const Eina_Slice *slice, int width, int height, int stride, Efl_Gfx_Colorspace cspace, int plane);


Eina_Bool _efl_canvas_image_efl_gfx_buffer_buffer_copy_set(Eo *obj, void *pd, const Eina_Slice *slice, int width, int height, int stride, Efl_Gfx_Colorspace cspace, int plane);


void _efl_canvas_image_efl_gfx_buffer_buffer_size_get(Eo *obj, void *pd, int *w, int *h);


Eina_Bool _efl_canvas_image_efl_gfx_buffer_buffer_map(Eo *obj, void *pd, Eina_Rw_Slice *slice, Efl_Gfx_Buffer_Access_Mode mode, int x, int y, int w, int h, Efl_Gfx_Colorspace cspace, int plane, int *stride);


Eina_Bool _efl_canvas_image_efl_gfx_buffer_buffer_unmap(Eo *obj, void *pd, const Eina_Rw_Slice *slice);


Eina_Bool _efl_canvas_image_efl_file_file_set(Eo *obj, void *pd, const char *file, const char *key);


void _efl_canvas_image_efl_file_file_get(Eo *obj, void *pd, const char **file, const char **key);


Eina_Bool _efl_canvas_image_efl_file_mmap_set(Eo *obj, void *pd, const Eina_File *f, const char *key);


void _efl_canvas_image_efl_file_mmap_get(Eo *obj, void *pd, const Eina_File **f, const char **key);


Eina_Bool _efl_canvas_image_efl_image_animated_animated_get(Eo *obj, void *pd);


Eina_Bool _efl_canvas_image_efl_image_animated_animated_frame_set(Eo *obj, void *pd, int frame_index);


int _efl_canvas_image_efl_image_animated_animated_frame_get(Eo *obj, void *pd);


int _efl_canvas_image_efl_image_animated_animated_frame_count_get(Eo *obj, void *pd);


Efl_Image_Animated_Loop_Hint _efl_canvas_image_efl_image_animated_animated_loop_type_get(Eo *obj, void *pd);


int _efl_canvas_image_efl_image_animated_animated_loop_count_get(Eo *obj, void *pd);


double _efl_canvas_image_efl_image_animated_animated_frame_duration_get(Eo *obj, void *pd, int start_frame, int frame_num);


Efl_Image_Load_Error _efl_canvas_image_efl_image_load_load_error_get(Eo *obj, void *pd);


void _efl_canvas_image_efl_image_load_load_async_start(Eo *obj, void *pd);


void _efl_canvas_image_efl_image_load_load_async_cancel(Eo *obj, void *pd);


void _efl_canvas_image_efl_image_load_load_dpi_set(Eo *obj, void *pd, double dpi);


double _efl_canvas_image_efl_image_load_load_dpi_get(Eo *obj, void *pd);


void _efl_canvas_image_efl_image_load_load_size_set(Eo *obj, void *pd, int w, int h);


void _efl_canvas_image_efl_image_load_load_size_get(Eo *obj, void *pd, int *w, int *h);


void _efl_canvas_image_efl_image_load_load_orientation_set(Eo *obj, void *pd, Eina_Bool enable);


Eina_Bool _efl_canvas_image_efl_image_load_load_orientation_get(Eo *obj, void *pd);


void _efl_canvas_image_efl_image_load_load_scale_down_set(Eo *obj, void *pd, int div);


int _efl_canvas_image_efl_image_load_load_scale_down_get(Eo *obj, void *pd);


void _efl_canvas_image_efl_image_load_load_skip_header_set(Eo *obj, void *pd, Eina_Bool skip);


Eina_Bool _efl_canvas_image_efl_image_load_load_skip_header_get(Eo *obj, void *pd);


void _efl_canvas_image_efl_image_load_load_region_set(Eo *obj, void *pd, int x, int y, int w, int h);


void _efl_canvas_image_efl_image_load_load_region_get(Eo *obj, void *pd, int *x, int *y, int *w, int *h);


Eina_Bool _efl_canvas_image_efl_image_load_load_region_support_get(Eo *obj, void *pd);


static Eina_Bool
_efl_canvas_image_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_CANVAS_IMAGE_EXTRA_OPS
#define EFL_CANVAS_IMAGE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_managed_get, _efl_canvas_image_efl_gfx_buffer_buffer_managed_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_managed_set, _efl_canvas_image_efl_gfx_buffer_buffer_managed_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_copy_set, _efl_canvas_image_efl_gfx_buffer_buffer_copy_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_size_get, _efl_canvas_image_efl_gfx_buffer_buffer_size_get),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_map, _efl_canvas_image_efl_gfx_buffer_buffer_map),
      EFL_OBJECT_OP_FUNC(efl_gfx_buffer_unmap, _efl_canvas_image_efl_gfx_buffer_buffer_unmap),
      EFL_OBJECT_OP_FUNC(efl_file_set, _efl_canvas_image_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_get, _efl_canvas_image_efl_file_file_get),
      EFL_OBJECT_OP_FUNC(efl_file_mmap_set, _efl_canvas_image_efl_file_mmap_set),
      EFL_OBJECT_OP_FUNC(efl_file_mmap_get, _efl_canvas_image_efl_file_mmap_get),
      EFL_OBJECT_OP_FUNC(efl_image_animated_get, _efl_canvas_image_efl_image_animated_animated_get),
      EFL_OBJECT_OP_FUNC(efl_image_animated_frame_set, _efl_canvas_image_efl_image_animated_animated_frame_set),
      EFL_OBJECT_OP_FUNC(efl_image_animated_frame_get, _efl_canvas_image_efl_image_animated_animated_frame_get),
      EFL_OBJECT_OP_FUNC(efl_image_animated_frame_count_get, _efl_canvas_image_efl_image_animated_animated_frame_count_get),
      EFL_OBJECT_OP_FUNC(efl_image_animated_loop_type_get, _efl_canvas_image_efl_image_animated_animated_loop_type_get),
      EFL_OBJECT_OP_FUNC(efl_image_animated_loop_count_get, _efl_canvas_image_efl_image_animated_animated_loop_count_get),
      EFL_OBJECT_OP_FUNC(efl_image_animated_frame_duration_get, _efl_canvas_image_efl_image_animated_animated_frame_duration_get),
      EFL_OBJECT_OP_FUNC(efl_image_load_error_get, _efl_canvas_image_efl_image_load_load_error_get),
      EFL_OBJECT_OP_FUNC(efl_image_load_async_start, _efl_canvas_image_efl_image_load_load_async_start),
      EFL_OBJECT_OP_FUNC(efl_image_load_async_cancel, _efl_canvas_image_efl_image_load_load_async_cancel),
      EFL_OBJECT_OP_FUNC(efl_image_load_dpi_set, _efl_canvas_image_efl_image_load_load_dpi_set),
      EFL_OBJECT_OP_FUNC(efl_image_load_dpi_get, _efl_canvas_image_efl_image_load_load_dpi_get),
      EFL_OBJECT_OP_FUNC(efl_image_load_size_set, _efl_canvas_image_efl_image_load_load_size_set),
      EFL_OBJECT_OP_FUNC(efl_image_load_size_get, _efl_canvas_image_efl_image_load_load_size_get),
      EFL_OBJECT_OP_FUNC(efl_image_load_orientation_set, _efl_canvas_image_efl_image_load_load_orientation_set),
      EFL_OBJECT_OP_FUNC(efl_image_load_orientation_get, _efl_canvas_image_efl_image_load_load_orientation_get),
      EFL_OBJECT_OP_FUNC(efl_image_load_scale_down_set, _efl_canvas_image_efl_image_load_load_scale_down_set),
      EFL_OBJECT_OP_FUNC(efl_image_load_scale_down_get, _efl_canvas_image_efl_image_load_load_scale_down_get),
      EFL_OBJECT_OP_FUNC(efl_image_load_skip_header_set, _efl_canvas_image_efl_image_load_load_skip_header_set),
      EFL_OBJECT_OP_FUNC(efl_image_load_skip_header_get, _efl_canvas_image_efl_image_load_load_skip_header_get),
      EFL_OBJECT_OP_FUNC(efl_image_load_region_set, _efl_canvas_image_efl_image_load_load_region_set),
      EFL_OBJECT_OP_FUNC(efl_image_load_region_get, _efl_canvas_image_efl_image_load_load_region_get),
      EFL_OBJECT_OP_FUNC(efl_image_load_region_support_get, _efl_canvas_image_efl_image_load_load_region_support_get),
      EFL_CANVAS_IMAGE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_CANVAS_IMAGE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_CANVAS_IMAGE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_canvas_image_class_desc = {
   EO_VERSION,
   "Efl.Canvas.Image",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _efl_canvas_image_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_canvas_image_class_get, &_efl_canvas_image_class_desc, EFL_CANVAS_IMAGE_INTERNAL_CLASS, EFL_GFX_BUFFER_INTERFACE, EFL_IMAGE_LOAD_INTERFACE, EFL_IMAGE_ANIMATED_INTERFACE, EFL_FILE_INTERFACE, NULL);
