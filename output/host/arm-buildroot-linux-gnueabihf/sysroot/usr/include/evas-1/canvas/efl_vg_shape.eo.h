#ifndef _EFL_VG_SHAPE_EO_H_
#define _EFL_VG_SHAPE_EO_H_

#ifndef _EFL_VG_SHAPE_EO_CLASS_TYPE
#define _EFL_VG_SHAPE_EO_CLASS_TYPE

typedef Eo Efl_VG_Shape;

#endif

#ifndef _EFL_VG_SHAPE_EO_TYPES
#define _EFL_VG_SHAPE_EO_TYPES


#endif
/** Efl vector graphics shape class
 *
 * @ingroup Efl_VG_Shape
 */
#define EFL_VG_SHAPE_CLASS efl_vg_shape_class_get()

EWAPI const Efl_Class *efl_vg_shape_class_get(void);

/**
 * @brief Fill of the shape object
 *
 * @param[in] f Fill object
 *
 * @ingroup Efl_VG_Shape
 */
EOAPI void efl_vg_shape_fill_set(Eo *obj, Efl_VG *f);

/**
 * @brief Fill of the shape object
 *
 * @return Fill object
 *
 * @ingroup Efl_VG_Shape
 */
EOAPI Efl_VG *efl_vg_shape_fill_get(const Eo *obj);

/**
 * @brief Stroke fill of the shape object
 *
 * @param[in] f Stroke fill object
 *
 * @ingroup Efl_VG_Shape
 */
EOAPI void efl_vg_shape_stroke_fill_set(Eo *obj, Efl_VG *f);

/**
 * @brief Stroke fill of the shape object
 *
 * @return Stroke fill object
 *
 * @ingroup Efl_VG_Shape
 */
EOAPI Efl_VG *efl_vg_shape_stroke_fill_get(const Eo *obj);

/**
 * @brief Stroke marker of the shape object
 *
 * @param[in] m Stroke marker object
 *
 * @ingroup Efl_VG_Shape
 */
EOAPI void efl_vg_shape_stroke_marker_set(Eo *obj, Efl_VG *m);

/**
 * @brief Stroke marker of the shape object
 *
 * @return Stroke marker object
 *
 * @ingroup Efl_VG_Shape
 */
EOAPI Efl_VG *efl_vg_shape_stroke_marker_get(const Eo *obj);

#endif
