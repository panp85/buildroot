#ifndef _EFL_CANVAS_LAYOUT_INTERNAL_EO_H_
#define _EFL_CANVAS_LAYOUT_INTERNAL_EO_H_

#ifndef _EFL_CANVAS_LAYOUT_INTERNAL_EO_CLASS_TYPE
#define _EFL_CANVAS_LAYOUT_INTERNAL_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Layout_Internal;

#endif

#ifndef _EFL_CANVAS_LAYOUT_INTERNAL_EO_TYPES
#define _EFL_CANVAS_LAYOUT_INTERNAL_EO_TYPES


#endif
/**
 * @brief Common class for part proxy objects for @c Efl.Canvas.Layout.
 *
 * As an @ref Efl_Part implementation class, all objects of this class are
 * meant to be used for one and only one function call. In pseudo-code, the use
 * of object of this type looks like the following:
 * layout.part("somepart").geometry_get(&x, &y, &w, &h);
 *
 * @since 1.20
 *
 * @ingroup Efl_Canvas_Layout_Internal
 */
#define EFL_CANVAS_LAYOUT_INTERNAL_CLASS efl_canvas_layout_internal_class_get()

EWAPI const Efl_Class *efl_canvas_layout_internal_class_get(void);

/**
 * @brief The name and value of the current state of this part (read-only).
 *
 * This is the state name as it appears in EDC description blocks. A state has
 * both a name and a value (double). The default state is "default" 0.0.
 *
 * @param[out] state The name of the state.
 * @param[out] val The value of the state.
 *
 * @since 1.20
 *
 * @ingroup Efl_Canvas_Layout_Internal
 */
EOAPI void efl_canvas_layout_internal_state_get(const Eo *obj, const char **state, double *val);

#endif
