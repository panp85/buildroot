#ifndef _EVAS_CANVAS3D_MESH_EO_H_
#define _EVAS_CANVAS3D_MESH_EO_H_

#ifndef _EVAS_CANVAS3D_MESH_EO_CLASS_TYPE
#define _EVAS_CANVAS3D_MESH_EO_CLASS_TYPE

typedef Eo Evas_Canvas3D_Mesh;

#endif

#ifndef _EVAS_CANVAS3D_MESH_EO_TYPES
#define _EVAS_CANVAS3D_MESH_EO_TYPES


#endif
/** Evas 3D canvas mesh class
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
#define EVAS_CANVAS3D_MESH_CLASS evas_canvas3d_mesh_class_get()

EWAPI const Efl_Class *evas_canvas3d_mesh_class_get(void);

/**
 * @brief Set the vertex data of the key frame of the given mesh.
 *
 * This function make evas read from the given buffer whenever it requires. If
 * you want to release the buffer after calling this function, use
 * @ref evas_canvas3d_mesh_frame_vertex_data_copy_set instead.
 *
 * After setting the vertex data, further modifications should be protected by
 * map/unmap pair.
 *
 * See also @ref evas_canvas3d_mesh_frame_vertex_data_map,
 * @ref evas_canvas3d_mesh_frame_vertex_data_unmap.
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 * @param[in] stride Stride to go to the next vertex (in bytes).
 * @param[in] data Pointer to the vertex data buffer.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_frame_vertex_data_set(Eo *obj, int frame, Evas_Canvas3D_Vertex_Attrib attrib, int stride, const void *data);

/**
 * @brief Set the vertex data of the key frame of the given mesh by copying
 * from a buffer. This function allocates internal vertex buffer and copy from
 * the given buffer. So you can release the buffer. If you want to modify the
 * vertex data use @ref evas_canvas3d_mesh_frame_vertex_data_map. After
 * finishing the modifications, you should call
 * @ref evas_canvas3d_mesh_frame_vertex_data_unmap.
 *
 * See also @ref evas_canvas3d_mesh_frame_vertex_data_set.
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 * @param[in] stride Stride to go to the next vertex (in bytes).
 * @param[in] data Pointer to the vertex data buffer.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_frame_vertex_data_copy_set(Eo *obj, int frame, Evas_Canvas3D_Vertex_Attrib attrib, int stride, const void *data);

/**
 * @brief Map the vertex buffer of the key frame of the given mesh.
 *
 * After manipulating the mapped buffer,
 * @ref evas_canvas3d_mesh_frame_vertex_data_unmap should be called to properly
 * download the data to the engine. If the data was set using
 * @ref evas_canvas3d_mesh_frame_vertex_data_set, pointer to the original
 * buffer will be returned. Otherwise, the returned pointer can differ every
 * time calling this function.
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 *
 * @return Starting address of the mapped vertex buffer.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void *evas_canvas3d_mesh_frame_vertex_data_map(Eo *obj, int frame, Evas_Canvas3D_Vertex_Attrib attrib);

/**
 * @brief Unmap the vertex buffer of the key frame of the given mesh.
 *
 * See also @ref evas_canvas3d_mesh_frame_vertex_data_map.
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_frame_vertex_data_unmap(Eo *obj, int frame, Evas_Canvas3D_Vertex_Attrib attrib);

/**
 * @brief Get the vertex buffer stride of the key frame of the given mesh.
 *
 * This function returns valid stride only when the vertex buffer is mapped. If
 * the data was set with @ref evas_canvas3d_mesh_frame_vertex_data_set, the
 * original stride will be returned unchanged.
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 *
 * @return Stride to go to the next vertex (in bytes).
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI int evas_canvas3d_mesh_frame_vertex_stride_get(const Eo *obj, int frame, Evas_Canvas3D_Vertex_Attrib attrib);

/**
 * @brief Set the vertex index data of the given mesh.
 *
 * When the index data is set, Evas 3D assembles vertices using the index data.
 * If you want to free the data buffer, use
 * @ref evas_canvas3d_mesh_index_data_copy_set. Further modifications should be
 * made within map/unmap pair.
 *
 * @param[in] format Vertex index data format.
 * @param[in] count Vertex index count.
 * @param[in] indices Pointer to the index data.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_index_data_set(Eo *obj, Evas_Canvas3D_Index_Format format, int count, const void *indices);

/**
 * @brief Get the vertex and index data of convex hull around the given mesh.
 *
 * @param[in] frame The number of the key frame.
 * @param[in] vertex Vertex data pointer
 * @param[in] index Index data pointer
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_convex_hull_data_get(Eo *obj, int frame, Eina_Inarray *vertex, Eina_Inarray *index);

/**
 * @brief Set the vertex index data of the given mesh by copying from a buffer.
 *
 * This function allocates internal index buffer any copy data from the given
 * buffer. Further modifications can be made within map/unmap pair.
 *
 * See also @ref evas_canvas3d_mesh_index_data_set.
 *
 * @param[in] format Vertex index data format.
 * @param[in] count Vertex index count.
 * @param[in] indices Pointer to the index data.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_index_data_copy_set(Eo *obj, Evas_Canvas3D_Index_Format format, int count, const void *indices);

/**
 * @brief Get the format of the index data of the given mesh.
 *
 * Returns valid format only when the index buffer is mapped. First map the
 * index buffer and then query the properties of the mapped buffer. If the
 * index data was set by @ref evas_canvas3d_mesh_index_data_set, the original
 * format will be returned. Otherwise the format can differ every time you call
 * the @ref evas_canvas3d_mesh_index_data_map function.
 *
 * @return Format of the index data.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Evas_Canvas3D_Index_Format evas_canvas3d_mesh_index_format_get(const Eo *obj);

/**
 * @brief Get the count of the index data of the given mesh.
 *
 * This function returns the index count of the last called data_set function.
 *
 * @return Index data count.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI int evas_canvas3d_mesh_index_count_get(const Eo *obj);

/**
 * @brief Map the index buffer of the given mesh.
 *
 * @ref evas_canvas3d_mesh_index_data_unmap should be called after
 * modifications. If the data was set using
 * @ref evas_canvas3d_mesh_index_data_set, the original pointer will be
 * returned, otherwise, the returned pointer may differ every time you call
 * this function.
 *
 * @return Pointer to the mapped buffer.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void *evas_canvas3d_mesh_index_data_map(Eo *obj);

/**
 * @brief Unmap the index buffer of the given mesh.
 *
 * See also @ref evas_canvas3d_mesh_index_data_map.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_index_data_unmap(Eo *obj);

/**
 * @brief Returns @c true if frame was added and @c false in other case.
 *
 * @param[in] frame Frame number.
 *
 * @return @c true ifr frame was added, @c false otherwise
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Eina_Bool evas_canvas3d_mesh_frame_exist(Eo *obj, int frame);

/**
 * @brief Add a key frame to the given mesh.
 *
 * If specified frame is already exist, error message will be generated.
 *
 * @param[in] frame The number of the key frame to be added.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_frame_add(Eo *obj, int frame);

/**
 * @brief Delete a key frame from the given mesh.
 *
 * @param[in] frame The number of the key frame to be added.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_frame_del(Eo *obj, int frame);

/**
 * @brief Set the fog color and density for the given mesh.
 *
 * @param[in] r The red component of the fog color.
 * @param[in] g The green component of the fog color.
 * @param[in] b The blue component of the fog color.
 * @param[in] a The transparency of fog.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_fog_color_set(Eo *obj, Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

/**
 * @brief Set the fog color and density for the given mesh.
 *
 * @param[out] r Pointer to receive red component of the fog color.
 * @param[out] g Pointer to receive green component of the fog color.
 * @param[out] b Pointer to receive blue component of the fog color.
 * @param[out] a Pointer to receive transparency of fog.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_fog_color_get(Eo *obj, Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

/**
 * @brief Set the blending function for given mesh.
 *
 * @param[in] sfactor Specifies how the red, green, blue, and alpha source
 * blending factors are computed.
 * @param[in] dfactor Specifies how the red, green, blue, and alpha destination
 * blending factors are computed.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_blending_func_set(Eo *obj, Evas_Canvas3D_Blend_Func sfactor, Evas_Canvas3D_Blend_Func dfactor);

/**
 * @brief Get blending function for given mesh.
 *
 * @param[out] sfactor Pointer to receive source blending factors key.
 * @param[out] dfactor Pointer to receive destination blending factors key.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_blending_func_get(Eo *obj, Evas_Canvas3D_Blend_Func *sfactor, Evas_Canvas3D_Blend_Func *dfactor);

/**
 * @brief Set the data of given mesh frame from the given primitive.
 *
 * @param[in] frame Specifies data of which frame of given mesh will be set.
 * @param[in] primitive Specifies which data will be set.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_from_primitive_set(Eo *obj, int frame, Evas_Canvas3D_Primitive *primitive);

/**
 * @brief Set the shader mode of the given mesh.
 *
 * Default shader mode is EVAS_CANVAS3D_SHADER_MODE_VERTEX_COLOR.
 *
 * @param[in] mode The shader mode.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_shader_mode_set(Eo *obj, Evas_Canvas3D_Shader_Mode mode);

/**
 * @brief Get the shader mode of the given mesh.
 *
 * @return The shader mode.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Evas_Canvas3D_Shader_Mode evas_canvas3d_mesh_shader_mode_get(const Eo *obj);

/**
 * @brief Set possibility color picking.
 *
 * @param[in] enabled Possibility flag.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_color_pick_enable_set(Eo *obj, Eina_Bool enabled);

/**
 * @brief Get status of color picking of the mesh.
 *
 * @return Possibility flag.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Eina_Bool evas_canvas3d_mesh_color_pick_enable_get(const Eo *obj);

/**
 * @brief Set the vertex count of the given mesh.
 *
 * Each key frame should have same vertex count to be properly interpolated.
 * Key frames have their own vertex data and the data should have more vertices
 * than the mesh's vertex count.
 *
 * Default vertex count is 0.
 *
 * @param[in] count Vertex count.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_vertex_count_set(Eo *obj, unsigned int count);

/**
 * @brief Get the vertex count of the given mesh.
 *
 * @return Vertex count.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI unsigned int evas_canvas3d_mesh_vertex_count_get(const Eo *obj);

/**
 * @brief Enable or disable fog effect for given mesh.
 *
 * Default fog is disabled.
 *
 * @param[in] enabled Fog enabled status.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_fog_enable_set(Eo *obj, Eina_Bool enabled);

/**
 * @brief Get the enable status of fog effect for given mesh.
 *
 * @return Fog enabled status.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Eina_Bool evas_canvas3d_mesh_fog_enable_get(const Eo *obj);

/**
 * @brief Get the enable status of alpha test for given mesh.
 *
 * Default alpha test disabled.
 *
 * @param[in] enabled The alpha test status.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_alpha_test_enable_set(Eo *obj, Eina_Bool enabled);

/**
 * @brief Get the enable status of alpha test for given mesh.
 *
 * @return The alpha test status.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Eina_Bool evas_canvas3d_mesh_alpha_test_enable_get(const Eo *obj);

/**
 * @brief Set the alpha func.
 *
 * The alpha test discards fragments depending on the outcome of a comparison
 * between an incoming fragment's alpha value and a constant reference value.
 * This func specifies the reference value and the comparison function.
 *
 * @param[in] comparison_func The alpha comparison function.
 * @param[in] ref_value The reference value that incoming alpha values are
 * compared to.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_alpha_func_set(Eo *obj, Evas_Canvas3D_Comparison comparison_func, Evas_Real ref_value);

/**
 * @brief Get the reference value and the comparison function for alpha
 * testing.
 *
 * @param[out] comparison_func The alpha comparison function.
 * @param[out] ref_value The reference value that incoming alpha values are
 * compared to.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_alpha_func_get(const Eo *obj, Evas_Canvas3D_Comparison *comparison_func, Evas_Real *ref_value);

/**
 * @brief Enable or disable blending for given mesh.
 *
 * @param[in] blending The blending state.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_blending_enable_set(Eo *obj, Eina_Bool blending);

/**
 * @brief Get whether blending is enabled for the mesh.
 *
 * @return The blending state.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Eina_Bool evas_canvas3d_mesh_blending_enable_get(const Eo *obj);

/**
 * @brief Set the material of the key frame of the given mesh.
 *
 * Setting different materials for each key frame is useful for doing
 * animations like GIF images or color changing animations.
 *
 * @param[in] frame The number of the key frame.
 * @param[in] material The material to be set to the key frame.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_frame_material_set(Eo *obj, int frame, Evas_Canvas3D_Material *material);

/**
 * @brief Get the material of the key frame of the given mesh.
 *
 * @param[in] frame The number of the key frame.
 *
 * @return The material to be set to the key frame.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Evas_Canvas3D_Material *evas_canvas3d_mesh_frame_material_get(const Eo *obj, int frame);

/**
 * @brief Set the vertex assembly of the given mesh.
 *
 * Vertex assembly defines how the engine organizes vertices into geometric
 * primitives.
 *
 * Default vertex assembly is EVAS_CANVAS3D_VERTEX_ASSEMBLY_TRIANGLES.
 *
 * @param[in] assembly The vertex assembly.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_vertex_assembly_set(Eo *obj, Evas_Canvas3D_Vertex_Assembly assembly);

/**
 * @brief Get the vertex assembly of the given mesh.
 *
 * @return The vertex assembly.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Evas_Canvas3D_Vertex_Assembly evas_canvas3d_mesh_vertex_assembly_get(const Eo *obj);

/**
 * @brief Set the shadow edges blur parameters.
 *
 * The averaging values in window is used for blurring. User can set the size
 * of window and num of points in window.
 *
 * @param[in] blur_level Number of points within a bluring radius.
 * @param[in] edges_size The bluring radius.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_shadows_edges_filtering_set(Eo *obj, int blur_level, Evas_Real edges_size);

/**
 * @brief Get the shadow edges blur parameters.
 *
 * @param[out] blur_level Number of points within a bluring radius.
 * @param[out] edges_size The bluring radius.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_shadows_edges_filtering_get(const Eo *obj, int *blur_level, Evas_Real *edges_size);

/**
 * @brief Set offset shadow toward object.
 *
 * @param[in] bias Offset.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_shadows_constant_bias_set(Eo *obj, Evas_Real bias);

/**
 * @brief Get offset shadow toward object.
 *
 * @return Offset.
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI Evas_Real evas_canvas3d_mesh_shadows_constant_bias_get(const Eo *obj);

/**
 * @brief Set LOD boundary distances.
 *
 * @param[in] near_lod Up boundary
 * @param[in] far_lod Down boundary
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_lod_boundary_set(Eo *obj, Evas_Real near_lod, Evas_Real far_lod);

/**
 * @brief Get LOD boundary distances.
 *
 * See also @ref evas_canvas3d_mesh_lod_boundary_set.
 *
 * @param[out] near_lod Up boundary
 * @param[out] far_lod Down boundary
 *
 * @ingroup Evas_Canvas3D_Mesh
 */
EOAPI void evas_canvas3d_mesh_lod_boundary_get(const Eo *obj, Evas_Real *near_lod, Evas_Real *far_lod);

#endif
