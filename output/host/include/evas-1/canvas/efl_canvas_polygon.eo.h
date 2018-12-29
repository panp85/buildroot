#ifndef _EFL_CANVAS_POLYGON_EO_H_
#define _EFL_CANVAS_POLYGON_EO_H_

#ifndef _EFL_CANVAS_POLYGON_EO_CLASS_TYPE
#define _EFL_CANVAS_POLYGON_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Polygon;

#endif

#ifndef _EFL_CANVAS_POLYGON_EO_TYPES
#define _EFL_CANVAS_POLYGON_EO_TYPES


#endif
/** Low-level polygon object
 *
 * @ingroup Efl_Canvas_Polygon
 */
#define EFL_CANVAS_POLYGON_CLASS efl_canvas_polygon_class_get()

EWAPI const Efl_Class *efl_canvas_polygon_class_get(void);

/**
 * @brief Adds the given point to the given evas polygon object.
 *
 * @param[in] x The X coordinate of the given point.
 * @param[in] y The Y coordinate of the given point.
 *
 * @ingroup Efl_Canvas_Polygon
 */
EOAPI void efl_canvas_polygon_point_add(Eo *obj, int x, int y);

/** Removes all of the points from the given evas polygon object.
 *
 * @ingroup Efl_Canvas_Polygon
 */
EOAPI void efl_canvas_polygon_points_clear(Eo *obj);

#endif
