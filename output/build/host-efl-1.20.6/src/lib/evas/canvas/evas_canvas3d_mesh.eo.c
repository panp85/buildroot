
void _evas_canvas3d_mesh_frame_vertex_data_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, int frame, Evas_Canvas3D_Vertex_Attrib attrib, int stride, const void *data);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_frame_vertex_data_set, EFL_FUNC_CALL(frame, attrib, stride, data), int frame, Evas_Canvas3D_Vertex_Attrib attrib, int stride, const void *data);

void _evas_canvas3d_mesh_frame_vertex_data_copy_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, int frame, Evas_Canvas3D_Vertex_Attrib attrib, int stride, const void *data);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_frame_vertex_data_copy_set, EFL_FUNC_CALL(frame, attrib, stride, data), int frame, Evas_Canvas3D_Vertex_Attrib attrib, int stride, const void *data);

void *_evas_canvas3d_mesh_frame_vertex_data_map(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, int frame, Evas_Canvas3D_Vertex_Attrib attrib);

EOAPI EFL_FUNC_BODYV(evas_canvas3d_mesh_frame_vertex_data_map, void *, NULL, EFL_FUNC_CALL(frame, attrib), int frame, Evas_Canvas3D_Vertex_Attrib attrib);

void _evas_canvas3d_mesh_frame_vertex_data_unmap(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, int frame, Evas_Canvas3D_Vertex_Attrib attrib);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_frame_vertex_data_unmap, EFL_FUNC_CALL(frame, attrib), int frame, Evas_Canvas3D_Vertex_Attrib attrib);

int _evas_canvas3d_mesh_frame_vertex_stride_get(const Eo *obj, Evas_Canvas3D_Mesh_Data *pd, int frame, Evas_Canvas3D_Vertex_Attrib attrib);

EOAPI EFL_FUNC_BODYV_CONST(evas_canvas3d_mesh_frame_vertex_stride_get, int, 0, EFL_FUNC_CALL(frame, attrib), int frame, Evas_Canvas3D_Vertex_Attrib attrib);

void _evas_canvas3d_mesh_index_data_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Evas_Canvas3D_Index_Format format, int count, const void *indices);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_index_data_set, EFL_FUNC_CALL(format, count, indices), Evas_Canvas3D_Index_Format format, int count, const void *indices);

void _evas_canvas3d_mesh_convex_hull_data_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, int frame, Eina_Inarray *vertex, Eina_Inarray *index);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_convex_hull_data_get, EFL_FUNC_CALL(frame, vertex, index), int frame, Eina_Inarray *vertex, Eina_Inarray *index);

void _evas_canvas3d_mesh_index_data_copy_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Evas_Canvas3D_Index_Format format, int count, const void *indices);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_index_data_copy_set, EFL_FUNC_CALL(format, count, indices), Evas_Canvas3D_Index_Format format, int count, const void *indices);

Evas_Canvas3D_Index_Format _evas_canvas3d_mesh_index_format_get(const Eo *obj, Evas_Canvas3D_Mesh_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_mesh_index_format_get, Evas_Canvas3D_Index_Format, 0);

int _evas_canvas3d_mesh_index_count_get(const Eo *obj, Evas_Canvas3D_Mesh_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_mesh_index_count_get, int, 0);

void *_evas_canvas3d_mesh_index_data_map(Eo *obj, Evas_Canvas3D_Mesh_Data *pd);

EOAPI EFL_FUNC_BODY(evas_canvas3d_mesh_index_data_map, void *, NULL);

void _evas_canvas3d_mesh_index_data_unmap(Eo *obj, Evas_Canvas3D_Mesh_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(evas_canvas3d_mesh_index_data_unmap);

Eina_Bool _evas_canvas3d_mesh_frame_exist(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, int frame);

EOAPI EFL_FUNC_BODYV(evas_canvas3d_mesh_frame_exist, Eina_Bool, 0, EFL_FUNC_CALL(frame), int frame);

void _evas_canvas3d_mesh_frame_add(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, int frame);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_frame_add, EFL_FUNC_CALL(frame), int frame);

void _evas_canvas3d_mesh_frame_del(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, int frame);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_frame_del, EFL_FUNC_CALL(frame), int frame);

void _evas_canvas3d_mesh_fog_color_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_fog_color_set, EFL_FUNC_CALL(r, g, b, a), Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

void _evas_canvas3d_mesh_fog_color_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_fog_color_get, EFL_FUNC_CALL(r, g, b, a), Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

void _evas_canvas3d_mesh_blending_func_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Evas_Canvas3D_Blend_Func sfactor, Evas_Canvas3D_Blend_Func dfactor);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_blending_func_set, EFL_FUNC_CALL(sfactor, dfactor), Evas_Canvas3D_Blend_Func sfactor, Evas_Canvas3D_Blend_Func dfactor);

void _evas_canvas3d_mesh_blending_func_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Evas_Canvas3D_Blend_Func *sfactor, Evas_Canvas3D_Blend_Func *dfactor);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_blending_func_get, EFL_FUNC_CALL(sfactor, dfactor), Evas_Canvas3D_Blend_Func *sfactor, Evas_Canvas3D_Blend_Func *dfactor);

void _evas_canvas3d_mesh_from_primitive_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, int frame, Evas_Canvas3D_Primitive *primitive);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_from_primitive_set, EFL_FUNC_CALL(frame, primitive), int frame, Evas_Canvas3D_Primitive *primitive);

void _evas_canvas3d_mesh_shader_mode_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Evas_Canvas3D_Shader_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_shader_mode_set, EFL_FUNC_CALL(mode), Evas_Canvas3D_Shader_Mode mode);

Evas_Canvas3D_Shader_Mode _evas_canvas3d_mesh_shader_mode_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_mesh_shader_mode_get, Evas_Canvas3D_Shader_Mode, 0);

void _evas_canvas3d_mesh_color_pick_enable_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_color_pick_enable_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);

Eina_Bool _evas_canvas3d_mesh_color_pick_enable_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_mesh_color_pick_enable_get, Eina_Bool, 0);

void _evas_canvas3d_mesh_vertex_count_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, unsigned int count);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_vertex_count_set, EFL_FUNC_CALL(count), unsigned int count);

unsigned int _evas_canvas3d_mesh_vertex_count_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_mesh_vertex_count_get, unsigned int, 0);

void _evas_canvas3d_mesh_fog_enable_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_fog_enable_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);

Eina_Bool _evas_canvas3d_mesh_fog_enable_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_mesh_fog_enable_get, Eina_Bool, 0);

void _evas_canvas3d_mesh_alpha_test_enable_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Eina_Bool enabled);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_alpha_test_enable_set, EFL_FUNC_CALL(enabled), Eina_Bool enabled);

Eina_Bool _evas_canvas3d_mesh_alpha_test_enable_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_mesh_alpha_test_enable_get, Eina_Bool, 0);

void _evas_canvas3d_mesh_alpha_func_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Evas_Canvas3D_Comparison comparison_func, Evas_Real ref_value);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_alpha_func_set, EFL_FUNC_CALL(comparison_func, ref_value), Evas_Canvas3D_Comparison comparison_func, Evas_Real ref_value);

void _evas_canvas3d_mesh_alpha_func_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Evas_Canvas3D_Comparison *comparison_func, Evas_Real *ref_value);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_mesh_alpha_func_get, EFL_FUNC_CALL(comparison_func, ref_value), Evas_Canvas3D_Comparison *comparison_func, Evas_Real *ref_value);

void _evas_canvas3d_mesh_blending_enable_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Eina_Bool blending);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_blending_enable_set, EFL_FUNC_CALL(blending), Eina_Bool blending);

Eina_Bool _evas_canvas3d_mesh_blending_enable_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_mesh_blending_enable_get, Eina_Bool, 0);

void _evas_canvas3d_mesh_frame_material_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, int frame, Evas_Canvas3D_Material *material);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_frame_material_set, EFL_FUNC_CALL(frame, material), int frame, Evas_Canvas3D_Material *material);

Evas_Canvas3D_Material *_evas_canvas3d_mesh_frame_material_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, int frame);

EOAPI EFL_FUNC_BODYV_CONST(evas_canvas3d_mesh_frame_material_get, Evas_Canvas3D_Material *, NULL, EFL_FUNC_CALL(frame), int frame);

void _evas_canvas3d_mesh_vertex_assembly_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Evas_Canvas3D_Vertex_Assembly assembly);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_vertex_assembly_set, EFL_FUNC_CALL(assembly), Evas_Canvas3D_Vertex_Assembly assembly);

Evas_Canvas3D_Vertex_Assembly _evas_canvas3d_mesh_vertex_assembly_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_mesh_vertex_assembly_get, Evas_Canvas3D_Vertex_Assembly, 0);

void _evas_canvas3d_mesh_shadows_edges_filtering_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, int blur_level, Evas_Real edges_size);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_shadows_edges_filtering_set, EFL_FUNC_CALL(blur_level, edges_size), int blur_level, Evas_Real edges_size);

void _evas_canvas3d_mesh_shadows_edges_filtering_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, int *blur_level, Evas_Real *edges_size);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_mesh_shadows_edges_filtering_get, EFL_FUNC_CALL(blur_level, edges_size), int *blur_level, Evas_Real *edges_size);

void _evas_canvas3d_mesh_shadows_constant_bias_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Evas_Real bias);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_shadows_constant_bias_set, EFL_FUNC_CALL(bias), Evas_Real bias);

Evas_Real _evas_canvas3d_mesh_shadows_constant_bias_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_mesh_shadows_constant_bias_get, Evas_Real, 0);

void _evas_canvas3d_mesh_lod_boundary_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Evas_Real near_lod, Evas_Real far_lod);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_mesh_lod_boundary_set, EFL_FUNC_CALL(near_lod, far_lod), Evas_Real near_lod, Evas_Real far_lod);

void _evas_canvas3d_mesh_lod_boundary_get(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Evas_Real *near_lod, Evas_Real *far_lod);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_mesh_lod_boundary_get, EFL_FUNC_CALL(near_lod, far_lod), Evas_Real *near_lod, Evas_Real *far_lod);

Efl_Object *_evas_canvas3d_mesh_efl_object_constructor(Eo *obj, Evas_Canvas3D_Mesh_Data *pd);


void _evas_canvas3d_mesh_efl_object_destructor(Eo *obj, Evas_Canvas3D_Mesh_Data *pd);


void _evas_canvas3d_mesh_evas_canvas3d_object_update_notify(Eo *obj, Evas_Canvas3D_Mesh_Data *pd);


void _evas_canvas3d_mesh_evas_canvas3d_object_change_notify(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, Evas_Canvas3D_State state, Evas_Canvas3D_Object *ref);


Eina_Bool _evas_canvas3d_mesh_efl_file_file_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, const char *file, const char *key);


Eina_Bool _evas_canvas3d_mesh_efl_file_mmap_set(Eo *obj, Evas_Canvas3D_Mesh_Data *pd, const Eina_File *f, const char *key);


Eina_Bool _evas_canvas3d_mesh_efl_file_save(const Eo *obj, Evas_Canvas3D_Mesh_Data *pd, const char *file, const char *key, const char *flags);


static Eina_Bool
_evas_canvas3d_mesh_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_CANVAS3D_MESH_EXTRA_OPS
#define EVAS_CANVAS3D_MESH_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_frame_vertex_data_set, _evas_canvas3d_mesh_frame_vertex_data_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_frame_vertex_data_copy_set, _evas_canvas3d_mesh_frame_vertex_data_copy_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_frame_vertex_data_map, _evas_canvas3d_mesh_frame_vertex_data_map),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_frame_vertex_data_unmap, _evas_canvas3d_mesh_frame_vertex_data_unmap),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_frame_vertex_stride_get, _evas_canvas3d_mesh_frame_vertex_stride_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_index_data_set, _evas_canvas3d_mesh_index_data_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_convex_hull_data_get, _evas_canvas3d_mesh_convex_hull_data_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_index_data_copy_set, _evas_canvas3d_mesh_index_data_copy_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_index_format_get, _evas_canvas3d_mesh_index_format_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_index_count_get, _evas_canvas3d_mesh_index_count_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_index_data_map, _evas_canvas3d_mesh_index_data_map),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_index_data_unmap, _evas_canvas3d_mesh_index_data_unmap),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_frame_exist, _evas_canvas3d_mesh_frame_exist),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_frame_add, _evas_canvas3d_mesh_frame_add),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_frame_del, _evas_canvas3d_mesh_frame_del),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_fog_color_set, _evas_canvas3d_mesh_fog_color_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_fog_color_get, _evas_canvas3d_mesh_fog_color_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_blending_func_set, _evas_canvas3d_mesh_blending_func_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_blending_func_get, _evas_canvas3d_mesh_blending_func_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_from_primitive_set, _evas_canvas3d_mesh_from_primitive_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_shader_mode_set, _evas_canvas3d_mesh_shader_mode_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_shader_mode_get, _evas_canvas3d_mesh_shader_mode_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_color_pick_enable_set, _evas_canvas3d_mesh_color_pick_enable_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_color_pick_enable_get, _evas_canvas3d_mesh_color_pick_enable_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_vertex_count_set, _evas_canvas3d_mesh_vertex_count_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_vertex_count_get, _evas_canvas3d_mesh_vertex_count_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_fog_enable_set, _evas_canvas3d_mesh_fog_enable_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_fog_enable_get, _evas_canvas3d_mesh_fog_enable_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_alpha_test_enable_set, _evas_canvas3d_mesh_alpha_test_enable_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_alpha_test_enable_get, _evas_canvas3d_mesh_alpha_test_enable_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_alpha_func_set, _evas_canvas3d_mesh_alpha_func_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_alpha_func_get, _evas_canvas3d_mesh_alpha_func_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_blending_enable_set, _evas_canvas3d_mesh_blending_enable_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_blending_enable_get, _evas_canvas3d_mesh_blending_enable_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_frame_material_set, _evas_canvas3d_mesh_frame_material_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_frame_material_get, _evas_canvas3d_mesh_frame_material_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_vertex_assembly_set, _evas_canvas3d_mesh_vertex_assembly_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_vertex_assembly_get, _evas_canvas3d_mesh_vertex_assembly_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_shadows_edges_filtering_set, _evas_canvas3d_mesh_shadows_edges_filtering_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_shadows_edges_filtering_get, _evas_canvas3d_mesh_shadows_edges_filtering_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_shadows_constant_bias_set, _evas_canvas3d_mesh_shadows_constant_bias_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_shadows_constant_bias_get, _evas_canvas3d_mesh_shadows_constant_bias_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_lod_boundary_set, _evas_canvas3d_mesh_lod_boundary_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_mesh_lod_boundary_get, _evas_canvas3d_mesh_lod_boundary_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _evas_canvas3d_mesh_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _evas_canvas3d_mesh_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_update_notify, _evas_canvas3d_mesh_evas_canvas3d_object_update_notify),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_change_notify, _evas_canvas3d_mesh_evas_canvas3d_object_change_notify),
      EFL_OBJECT_OP_FUNC(efl_file_set, _evas_canvas3d_mesh_efl_file_file_set),
      EFL_OBJECT_OP_FUNC(efl_file_mmap_set, _evas_canvas3d_mesh_efl_file_mmap_set),
      EFL_OBJECT_OP_FUNC(efl_file_save, _evas_canvas3d_mesh_efl_file_save),
      EVAS_CANVAS3D_MESH_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_CANVAS3D_MESH_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_CANVAS3D_MESH_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_canvas3d_mesh_class_desc = {
   EO_VERSION,
   "Evas.Canvas3D.Mesh",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Canvas3D_Mesh_Data),
   _evas_canvas3d_mesh_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_canvas3d_mesh_class_get, &_evas_canvas3d_mesh_class_desc, EVAS_CANVAS3D_OBJECT_CLASS, EFL_FILE_INTERFACE, NULL);
