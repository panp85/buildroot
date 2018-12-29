#ifndef _EFL_VG_EO_H_
#define _EFL_VG_EO_H_

#ifndef _EFL_VG_EO_CLASS_TYPE
#define _EFL_VG_EO_CLASS_TYPE

typedef Eo Efl_VG;

#endif

#ifndef _EFL_VG_EO_TYPES
#define _EFL_VG_EO_TYPES


#endif
/** Efl vector graphics abstract class
 *
 * @ingroup Efl_VG
 */
#define EFL_VG_CLASS efl_vg_class_get()

EWAPI const Efl_Class *efl_vg_class_get(void);

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
EOAPI void efl_vg_name_set(Eo *obj, const char *name);

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
EOAPI const char *efl_vg_name_get(const Eo *obj);

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
EOAPI void efl_vg_transformation_set(Eo *obj, const Eina_Matrix3 *m);

/**
 * @brief Gets the transformation matrix used for this node object.
 *
 * @return Transformation matrix.
 *
 * @since 1.14
 *
 * @ingroup Efl_VG
 */
EOAPI const Eina_Matrix3 *efl_vg_transformation_get(const Eo *obj);

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
EOAPI void efl_vg_origin_set(Eo *obj, double x, double y);

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
EOAPI void efl_vg_origin_get(const Eo *obj, double *x, double *y);

/**
 * @brief Vector graphics object mask
 *
 * @param[in] m Object mask
 *
 * @ingroup Efl_VG
 */
EOAPI void efl_vg_mask_set(Eo *obj, Efl_VG *m);

/**
 * @brief Vector graphics object mask
 *
 * @return Object mask
 *
 * @ingroup Efl_VG
 */
EOAPI Efl_VG *efl_vg_mask_get(const Eo *obj);

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
EOAPI void efl_vg_bounds_get(Eo *obj, Eina_Rectangle *r);

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
EOAPI Eina_Bool efl_vg_interpolate(Eo *obj, const Efl_VG *from, const Efl_VG *to, double pos_map);

/**
 * @brief Duplicate vector graphics object
 *
 * @param[in] from Source object
 *
 * @ingroup Efl_VG
 */
EOAPI void efl_vg_dup(Eo *obj, const Efl_VG *from);

#endif
