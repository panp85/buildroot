#ifndef _EFL_VG_EO_LEGACY_H_
#define _EFL_VG_EO_LEGACY_H_

#ifndef _EFL_VG_EO_CLASS_TYPE
#define _EFL_VG_EO_CLASS_TYPE

typedef Eo Efl_VG;

#endif

#ifndef _EFL_VG_EO_TYPES
#define _EFL_VG_EO_TYPES


#endif

/**
 * @brief Set an unique name from the parent point of view. @c null means no
 * name.
 *
 * @param[in] name Node name
 *
 * @since 1.16
 *
 * @ingroup Efl_VG
 */
EAPI void evas_vg_node_name_set(Efl_VG *obj, const char *name);

/**
 * @brief Get an unique name from the parent point of view.
 *
 * @c null means no name. When set a parent after the name what defined, it
 * might be forced back to @c null if the parent already has a node of that
 * name.
 *
 * @return Node name
 *
 * @since 1.16
 *
 * @ingroup Efl_VG
 */
EAPI const char *evas_vg_node_name_get(const Efl_VG *obj);

/**
 * @brief Sets the transformation matrix to be used for this node object.
 *
 * @note Pass @c null to cancel the applied transformation.
 *
 * @param[in] m Transformation matrix.
 *
 * @since 1.14
 *
 * @ingroup Efl_VG
 */
EAPI void evas_vg_node_transformation_set(Efl_VG *obj, const Eina_Matrix3 *m);

/**
 * @brief Gets the transformation matrix used for this node object.
 *
 * @return Transformation matrix.
 *
 * @since 1.14
 *
 * @ingroup Efl_VG
 */
EAPI const Eina_Matrix3 *evas_vg_node_transformation_get(const Efl_VG *obj);

/**
 * @brief Sets the origin position of this node object.
 *
 * This origin position affects to node transformation.
 *
 * @param[in] x @c origin x position.
 * @param[in] y @c origin y position.
 *
 * @since 1.14
 *
 * @ingroup Efl_VG
 */
EAPI void evas_vg_node_origin_set(Efl_VG *obj, double x, double y);

/**
 * @brief Gets the origin position of this node object.
 *
 * @param[out] x @c origin x position.
 * @param[out] y @c origin y position.
 *
 * @since 1.14
 *
 * @ingroup Efl_VG
 */
EAPI void evas_vg_node_origin_get(const Efl_VG *obj, double *x, double *y);

/**
 * @brief Vector graphics object mask
 *
 * @param[in] m Object mask
 *
 * @ingroup Efl_VG
 */
EAPI void evas_vg_node_mask_set(Efl_VG *obj, Efl_VG *m);

/**
 * @brief Vector graphics object mask
 *
 * @return Object mask
 *
 * @ingroup Efl_VG
 */
EAPI Efl_VG *evas_vg_node_mask_get(const Efl_VG *obj);

/**
 * @brief Give the bounding box in screen coordinate as being drawn.
 *
 * It will start as the control box until it is refined once the shape is
 * computed.
 *
 * @param[out] r Bounding box to be returned.
 *
 * @since 1.14
 *
 * @ingroup Efl_VG
 */
EAPI void evas_vg_node_bounds_get(Efl_VG *obj, Eina_Rectangle *r);

/**
 * @brief Interpolate a given vector graphics object
 *
 * @param[in] from Source object
 * @param[in] to Destination object
 * @param[in] pos_map Interpolate mapping
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_VG
 */
EAPI Eina_Bool evas_vg_node_interpolate(Efl_VG *obj, const Efl_VG *from, const Efl_VG *to, double pos_map);

/**
 * @brief Duplicate vector graphics object
 *
 * @param[in] from Source object
 *
 * @ingroup Efl_VG
 */
EAPI void evas_vg_node_dup(Efl_VG *obj, const Efl_VG *from);

#endif
