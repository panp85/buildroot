#ifndef _EFL_VG_SHAPE_EO_LEGACY_H_
#define _EFL_VG_SHAPE_EO_LEGACY_H_

#ifndef _EFL_VG_SHAPE_EO_CLASS_TYPE
#define _EFL_VG_SHAPE_EO_CLASS_TYPE

typedef Eo Efl_VG_Shape;

#endif

#ifndef _EFL_VG_SHAPE_EO_TYPES
#define _EFL_VG_SHAPE_EO_TYPES


#endif

/**
 * @brief Fill of the shape object
 *
 * @param[in] f Fill object
 *
 * @ingroup Efl_VG_Shape
 */
EAPI void evas_vg_shape_fill_set(Efl_VG_Shape *obj, Efl_VG *f);

/**
 * @brief Fill of the shape object
 *
 * @return Fill object
 *
 * @ingroup Efl_VG_Shape
 */
EAPI Efl_VG *evas_vg_shape_fill_get(const Efl_VG_Shape *obj);

/**
 * @brief Stroke fill of the shape object
 *
 * @param[in] f Stroke fill object
 *
 * @ingroup Efl_VG_Shape
 */
EAPI void evas_vg_shape_stroke_fill_set(Efl_VG_Shape *obj, Efl_VG *f);

/**
 * @brief Stroke fill of the shape object
 *
 * @return Stroke fill object
 *
 * @ingroup Efl_VG_Shape
 */
EAPI Efl_VG *evas_vg_shape_stroke_fill_get(const Efl_VG_Shape *obj);

/**
 * @brief Stroke marker of the shape object
 *
 * @param[in] m Stroke marker object
 *
 * @ingroup Efl_VG_Shape
 */
EAPI void evas_vg_shape_stroke_marker_set(Efl_VG_Shape *obj, Efl_VG *m);

/**
 * @brief Stroke marker of the shape object
 *
 * @return Stroke marker object
 *
 * @ingroup Efl_VG_Shape
 */
EAPI Efl_VG *evas_vg_shape_stroke_marker_get(const Efl_VG_Shape *obj);

#endif
