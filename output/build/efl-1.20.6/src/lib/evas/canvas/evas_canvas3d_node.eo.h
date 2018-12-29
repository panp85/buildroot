#ifndef _EVAS_CANVAS3D_NODE_EO_H_
#define _EVAS_CANVAS3D_NODE_EO_H_

#ifndef _EVAS_CANVAS3D_NODE_EO_CLASS_TYPE
#define _EVAS_CANVAS3D_NODE_EO_CLASS_TYPE

typedef Eo Evas_Canvas3D_Node;

#endif

#ifndef _EVAS_CANVAS3D_NODE_EO_TYPES
#define _EVAS_CANVAS3D_NODE_EO_TYPES


#endif
/** Evas 3D canvas node class
 *
 * @ingroup Evas_Canvas3D_Node
 */
#define EVAS_CANVAS3D_NODE_CLASS evas_canvas3d_node_class_get()

EWAPI const Efl_Class *evas_canvas3d_node_class_get(void);

/**
 * @brief Constructor.
 *
 * @param[in] type Node type
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_constructor(Eo *obj, Evas_Canvas3D_Node_Type type);

/**
 * @brief Get the type of the given node.
 *
 * See also @ref evas_canvas3d_node_member_add.
 *
 * @return The type of the given node.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI Evas_Canvas3D_Node_Type evas_canvas3d_node_type_get(const Eo *obj);

/**
 * @brief Add a member node to the given node.
 *
 * Nodes can be constructed into N-ary tree structure like other ordinary scene
 * graph. Basically a node inherit transforms from its parent.
 *
 * See also @ref evas_canvas3d_node_parent_get.
 *
 * @param[in] member Node object to be added.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_member_add(Eo *obj, Evas_Canvas3D_Node *member);

/**
 * @brief Delete a member node from the given node.
 *
 * See also @ref evas_canvas3d_node_member_add.
 *
 * @param[in] member Member node to be deleted from the given node.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_member_del(Eo *obj, Evas_Canvas3D_Node *member);

/**
 * @brief Get the parent node of the given node.
 *
 * See also @ref evas_canvas3d_node_member_add.
 *
 * @return The parent node of the given node.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI Evas_Canvas3D_Node *evas_canvas3d_node_parent_get(const Eo *obj);

/**
 * @brief Get the list of member nodes of the given node.
 *
 * See also @ref evas_canvas3d_node_member_add.
 *
 * @return The list of member nodes if any or @c null if there are none.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI const Eina_List *evas_canvas3d_node_member_list_get(const Eo *obj);

/**
 * @brief Get hash table of scenes using this node as root.
 *
 * @return scenes using this node as root. FIXME: Actually a scene, not object.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI Eina_Hash *evas_canvas3d_node_scene_root_get(Eo *obj);

/**
 * @brief Set the position of the given node.
 *
 * According to the inheritance flag, (x, y, z) can be a world space position
 * or parent space position.
 *
 * Default position is (0.0, 0.0, 0.0).
 *
 * See also @ref evas_canvas3d_node_position_inherit_set.
 *
 * @param[in] x X coordinate of the position.
 * @param[in] y Y coordinate of the position.
 * @param[in] z Z coordinate of the position.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_position_set(Eo *obj, Evas_Real x, Evas_Real y, Evas_Real z);

/**
 * @brief Set the orientation of the given node using quaternion.
 *
 * According the the inheritance flag, (w, x, y, z) can be a world space
 * orientation or parent space orientation.
 *
 * Default orientation is (1.0, 0.0, 0.0, 0.0) (identity quaternion).
 *
 * See also @ref evas_canvas3d_node_orientation_inherit_set.
 *
 * @param[in] x X term of the orientation quaternion (w, x, y, z.
 * @param[in] y Y term of the orientation quaternion (w, x, y, z.
 * @param[in] z Z term of the orientation quaternion (w, x, y, z.
 * @param[in] w W term of the orientation quaternion (w, x, y, z.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_orientation_set(Eo *obj, Evas_Real x, Evas_Real y, Evas_Real z, Evas_Real w);

/**
 * @brief Set the orientation of the given node using axis-angle.
 *
 * See also @ref evas_canvas3d_node_orientation_set.
 *
 * @param[in] angle Rotation angle.
 * @param[in] x X term of the rotation axis.
 * @param[in] y Y term of the rotation axis.
 * @param[in] z Z term of the rotation axis.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_orientation_angle_axis_set(Eo *obj, Evas_Real angle, Evas_Real x, Evas_Real y, Evas_Real z);

/**
 * @brief Set the scale of the given node.
 *
 * According to the inheritance flag, (x, y, z) can be a world space scale or
 * parent space scale. Be careful when using non-uniform scale factor with
 * inheritance, each transform attributes are not affected by other attributes.
 *
 * Default scale is (1.0, 1.0, 1.0).
 *
 * See also @ref evas_canvas3d_node_scale_inherit_set.
 *
 * @param[in] x Scale factor along X-axis.
 * @param[in] y Scale factor along Y-axis.
 * @param[in] z Scale factor along Z-axis.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_scale_set(Eo *obj, Evas_Real x, Evas_Real y, Evas_Real z);

/**
 * @brief Get the position of the given node.
 *
 * See also @ref evas_canvas3d_node_position_set.
 *
 * @param[in] space The given node.
 * @param[out] x Pointer to receive X coordinate of the position.
 * @param[out] y Pointer to receive Y coordinate of the position.
 * @param[out] z Pointer to receive Z coordinate of the position.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_position_get(const Eo *obj, Evas_Canvas3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z);

/**
 * @brief Get the orientation of the given node as quaternion.
 *
 * See also @ref evas_canvas3d_node_orientation_set.
 *
 * @param[in] space The given node.
 * @param[out] x Pointer to receive X term of the orientation quaternion.
 * @param[out] y Pointer to receive Y term of the orientation quaternion.
 * @param[out] z Pointer to receive Z term of the orientation quaternion.
 * @param[out] w Pointer to receive W term of the orientation quaternion.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_orientation_get(const Eo *obj, Evas_Canvas3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z, Evas_Real *w);

/**
 * @brief Get the scale of the given node.
 *
 * See also @ref evas_canvas3d_node_scale_get.
 *
 * @param[in] space The given node.
 * @param[out] x Pointer to receive Scale factor along X-axis.
 * @param[out] y Pointer to receive Scale factor along X-axis.
 * @param[out] z Pointer to receive Scale factor along X-axis.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_scale_get(const Eo *obj, Evas_Canvas3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z);

/**
 * @brief Rotate the given node to look at desired position.
 *
 * This function rotate the given node so that its forward vector (negative
 * Z-axis) points to the desired position and the up vector coincide with the
 * given up vector.
 *
 * See also @ref evas_canvas3d_node_orientation_set.
 *
 * @param[in] target_space Space where the target position belongs to.
 * @param[in] x X coordinate of the target position.
 * @param[in] y Y coordinate of the target position.
 * @param[in] z Z coordinate of the target position.
 * @param[in] up_space Space where the up vector belongs to.
 * @param[in] ux X term of the up vector.
 * @param[in] uy Y term of the up vector.
 * @param[in] uz Z term of the up vector.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_look_at_set(Eo *obj, Evas_Canvas3D_Space target_space, Evas_Real x, Evas_Real y, Evas_Real z, Evas_Canvas3D_Space up_space, Evas_Real ux, Evas_Real uy, Evas_Real uz);

/**
 * @brief Add a mesh to the given node.
 *
 * If the node is not of type EVAS_CANVAS3D_NODE_TYPE_MESH, error message will
 * be generated and nothing happens.
 *
 * See also @ref evas_canvas3d_node_member_add.
 *
 * @param[in] mesh The mesh to be added.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_mesh_add(Eo *obj, Evas_Canvas3D_Mesh *mesh);

/**
 * @brief Delete a mesh from the given node.
 *
 * If the node is not of type EVAS_CANVAS3D_NODE_TYPE_MESH or the given mesh
 * does not belong to the given node, error message will be gnerated and
 * nothing happens.
 *
 * See also @ref evas_canvas3d_node_mesh_add.
 *
 * @param[in] mesh The mesh to be deleted.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_mesh_del(Eo *obj, Evas_Canvas3D_Mesh *mesh);

/**
 * @brief Get the list of meshes of the given node.
 *
 * If the node is not of type EVAS_CANVAS3D_NODE_TYPE_MESH, error message will
 * be generated and @c null will be returned. If there're no meshes in the
 * given node, @c null will be returned.
 *
 * See also @ref evas_canvas3d_node_mesh_add.
 *
 * @return The list of meshes if any, or @c null if there're none.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI const Eina_List *evas_canvas3d_node_mesh_list_get(const Eo *obj);

/**
 * @brief Get axis-aligned bounding box (AABB) of the given node.
 *
 * @param[in] x Pointer to receive X coordinate of the first point of AABB.
 * @param[in] y Pointer to receive Y coordinate of the first point of AABB.
 * @param[in] z Pointer to receive Z coordinate of the first point of AABB.
 * @param[in] x2 Pointer to receive X coordinate of the second point of AABB.
 * @param[in] y2 Pointer to receive Y coordinate of the second point of AABB.
 * @param[in] z2 Pointer to receive Z coordinate of the second point of AABB.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_bounding_box_get(Eo *obj, Evas_Real *x, Evas_Real *y, Evas_Real *z, Evas_Real *x2, Evas_Real *y2, Evas_Real *z2);

/**
 * @brief Get bounding sphere of the given node.
 *
 * @param[in] x Pointer to receive X coordinate of the center of sphere.
 * @param[in] y Pointer to receive Y coordinate of the center of sphere.
 * @param[in] z Pointer to receive Z coordinate of center of sphere.
 * @param[in] r Pointer to receive radius of center of sphere.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_bounding_sphere_get(Eo *obj, Evas_Real *x, Evas_Real *y, Evas_Real *z, Evas_Real *r);

/**
 * @brief Set the position inheritance flag of the given node.
 *
 * When inheritance is enabled, a node's world space position is determined by
 * adding the parent node's world position and the node's position, otherwise,
 * the node's position will be the world space position.
 *
 * @param[in] inherit Whether to inherit parent position.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_position_inherit_set(Eo *obj, Eina_Bool inherit);

/**
 * @brief Get the position inheritance flag of the given node.
 *
 * See also @ref evas_canvas3d_node_position_inherit_set.
 *
 * @return Whether to inherit parent position.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI Eina_Bool evas_canvas3d_node_position_inherit_get(const Eo *obj);

/**
 * @brief Set the orientation inheritance flag of the given node.
 *
 * When inheritance is enabled, a node's world space orientation is determined
 * by multiplying the parent node's world orientation and the node's
 * orientation, otherwise, the node's orientation will be the world space
 * orientation.
 *
 * @param[in] inherit Whether to inherit parent orientation.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_orientation_inherit_set(Eo *obj, Eina_Bool inherit);

/**
 * @brief Get the orientation inheritance flag of the given node.
 *
 * See also @ref evas_canvas3d_node_orientation_inherit_set.
 *
 * @return Whether to inherit parent orientation.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI Eina_Bool evas_canvas3d_node_orientation_inherit_get(const Eo *obj);

/**
 * @brief Set the scale inheritance flag of the given node.
 *
 * When inheritance is enabled, a node's world space scale is determined by
 * multiplying the parent node's world scale and the node's scale, otherwise,
 * the node's scale will be the world space scale.
 *
 * @param[in] inherit Whether to inherit parent scale.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_scale_inherit_set(Eo *obj, Eina_Bool inherit);

/**
 * @brief Get the scale inheritance flag of the given node.
 *
 * See also @ref evas_canvas3d_node_scale_inherit_set.
 *
 * @return Whether to inherit parent scale.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI Eina_Bool evas_canvas3d_node_scale_inherit_get(const Eo *obj);

/**
 * @brief Set a camera to the given node.
 *
 * If the node is not of type EVAS_CANVAS3D_NODE_TYPE_CAMERA, error message
 * will be generated and nothing happens.
 *
 * See also @ref evas_canvas3d_node_member_add.
 *
 * @param[in] camera The camera of the given node if any, or @c null if
 * there're none.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_camera_set(Eo *obj, Evas_Canvas3D_Object *camera);

/**
 * @brief Get the camera of the given node.
 *
 * See also @ref evas_canvas3d_node_camera_set.
 *
 * @return The camera of the given node if any, or @c null if there're none.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI Evas_Canvas3D_Object *evas_canvas3d_node_camera_get(const Eo *obj);

/**
 * @brief Set the light of the given node.
 *
 * If the node is not of type EVAS_CANVAS3D_NODE_TYPE_LIGHT, error message will
 * be generated and nothing happens.
 *
 * See also @ref evas_canvas3d_node_member_add.
 *
 * @param[in] light The light of the given node if any, or @c null if there're
 * none.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_light_set(Eo *obj, Evas_Canvas3D_Light *light);

/**
 * @brief Get the light of the given node.
 *
 * See also @ref evas_canvas3d_node_light_set.
 *
 * @return The light of the given node if any, or @c null if there're none.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI Evas_Canvas3D_Light *evas_canvas3d_node_light_get(const Eo *obj);

/**
 * @brief Set the animation frame number of the given node for the given mesh.
 *
 * If the node is not of type EVAS_CANVAS3D_NODE_TYPE_MESH or the given mesh
 * does not belong to the given mesh error mesh will be generated and nothing
 * happens.
 *
 * Default mesh frame is 0.
 *
 * See also @ref evas_canvas3d_node_mesh_add.
 *
 * @param[in] mesh The given mesh.
 * @param[in] frame The animation frame number.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_mesh_frame_set(Eo *obj, Evas_Canvas3D_Mesh * mesh, int frame);

/**
 * @brief Set the animation frame number of the given node for the given mesh.
 *
 * If the node is not of type EVAS_CANVAS3D_NODE_TYPE_MESH or the given mesh
 * does not belong to the given mesh error mesh will be generated and nothing
 * happens.
 *
 * See also @ref evas_canvas3d_node_mesh_add.
 *
 * @param[in] mesh The given mesh.
 *
 * @return The animation frame number.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI int evas_canvas3d_node_mesh_frame_get(const Eo *obj, Evas_Canvas3D_Mesh * mesh);

/**
 * @brief Set behavior of node like billboard object.
 *
 * @param[in] target The pointer to target node for billboard object, or
 * @c null if there're none.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_billboard_target_set(Eo *obj, Evas_Canvas3D_Node *target);

/**
 * @brief Get the target node for billboard object.
 *
 * See also @ref evas_canvas3d_node_billboard_target_set.
 *
 * @return The pointer to target node for billboard object, or @c null if
 * there're none.
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI Evas_Canvas3D_Node *evas_canvas3d_node_billboard_target_get(const Eo *obj);

/**
 * @brief Enable behavior of node like LOD object.
 *
 * @param[in] enable status property (true/false)
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI void evas_canvas3d_node_lod_enable_set(Eo *obj, Eina_Bool enable);

/**
 * @brief Get(check) status of node does node is LOD object.
 *
 * See also @ref evas_canvas3d_node_lod_enable_set.
 *
 * @return status property (true/false)
 *
 * @ingroup Evas_Canvas3D_Node
 */
EOAPI Eina_Bool evas_canvas3d_node_lod_enable_get(const Eo *obj);

#endif
