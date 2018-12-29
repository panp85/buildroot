#ifndef _EVAS_CANVAS3D_CAMERA_EO_H_
#define _EVAS_CANVAS3D_CAMERA_EO_H_

#ifndef _EVAS_CANVAS3D_CAMERA_EO_CLASS_TYPE
#define _EVAS_CANVAS3D_CAMERA_EO_CLASS_TYPE

typedef Eo Evas_Canvas3D_Camera;

#endif

#ifndef _EVAS_CANVAS3D_CAMERA_EO_TYPES
#define _EVAS_CANVAS3D_CAMERA_EO_TYPES


#endif
/** Evas 3D canvas camera class
 *
 * @ingroup Evas_Canvas3D_Camera
 */
#define EVAS_CANVAS3D_CAMERA_CLASS evas_canvas3d_camera_class_get()

EWAPI const Efl_Class *evas_canvas3d_camera_class_get(void);

/**
 * @brief Set the projection matrix of the given camera.
 *
 * Default projection matrix is identity matrix.
 *
 * See also @ref evas_canvas3d_camera_projection_perspective_set,
 * @ref evas_canvas3d_camera_projection_ortho_set and
 * @ref evas_canvas3d_camera_projection_frustum_set.
 *
 * @param[in] matrix Projection Matrix
 *
 * @ingroup Evas_Canvas3D_Camera
 */
EOAPI void evas_canvas3d_camera_projection_matrix_set(Eo *obj, const Evas_Real *matrix);

/**
 * @brief Get the projection matrix of the given camera.
 *
 * See also @ref evas_canvas3d_camera_projection_matrix_set.
 *
 * @param[out] matrix Projection Matrix
 *
 * @ingroup Evas_Canvas3D_Camera
 */
EOAPI void evas_canvas3d_camera_projection_matrix_get(const Eo *obj, Evas_Real *matrix);

/**
 * @brief Set the projection matrix of the given camera with perspective
 * projection.
 *
 * See also @ref evas_canvas3d_camera_projection_matrix_set.
 *
 * @param[in] fovy Field of view angle in Y direction.
 * @param[in] aspect Aspect ratio.
 * @param[in] dnear Distance to near clipping plane.
 * @param[in] dfar Distance to far clipping plane.
 *
 * @ingroup Evas_Canvas3D_Camera
 */
EOAPI void evas_canvas3d_camera_projection_perspective_set(Eo *obj, Evas_Real fovy, Evas_Real aspect, Evas_Real dnear, Evas_Real dfar);

/**
 * @brief Set the projection matrix of the given camera with frustum
 * projection.
 *
 * See also @ref evas_canvas3d_camera_projection_matrix_set.
 *
 * @param[in] left Left X coordinate of the near clipping plane.
 * @param[in] right Right X coordinate of the near clipping plane..
 * @param[in] bottom Bottom Y coordinate of the near clipping plane.
 * @param[in] top Top Y coordinate of the near clipping plane
 * @param[in] dnear Distance to near clipping plane.
 * @param[in] dfar Distance to far clipping plane.
 *
 * @ingroup Evas_Canvas3D_Camera
 */
EOAPI void evas_canvas3d_camera_projection_frustum_set(Eo *obj, Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);

/**
 * @brief Set the projection matrix of the given camera with orthogonal
 * projection.
 *
 * See also @ref evas_canvas3d_camera_projection_matrix_set.
 *
 * @param[in] left Left X coordinate of the near clipping plane.
 * @param[in] right Right X coordinate of the near clipping plane..
 * @param[in] bottom Bottom Y coordinate of the near clipping plane.
 * @param[in] top Top Y coordinate of the near clipping plane
 * @param[in] dnear Distance to near clipping plane.
 * @param[in] dfar Distance to far clipping plane.
 *
 * @ingroup Evas_Canvas3D_Camera
 */
EOAPI void evas_canvas3d_camera_projection_ortho_set(Eo *obj, Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);

/**
 * @brief Check is bounding sphere of given node inside frustum of camera node.
 *
 * If the nodes are @c null or nodes type mismatch error wrong type of nodes
 * will be generated and returned @c false.
 *
 * @param[in] camera_node The given camera node.
 * @param[in] node The given node.
 * @param[in] key The given key
 *
 * @return @c true in frustum, @c false otherwise
 *
 * @ingroup Evas_Canvas3D_Camera
 */
EOAPI Eina_Bool evas_canvas3d_camera_node_visible_get(Eo *obj, Evas_Canvas3D_Node *camera_node, Evas_Canvas3D_Node *node, Evas_Canvas3D_Frustum_Mode key);

#endif
