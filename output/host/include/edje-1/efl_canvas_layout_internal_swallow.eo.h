#ifndef _EFL_CANVAS_LAYOUT_INTERNAL_SWALLOW_EO_H_
#define _EFL_CANVAS_LAYOUT_INTERNAL_SWALLOW_EO_H_

#ifndef _EFL_CANVAS_LAYOUT_INTERNAL_SWALLOW_EO_CLASS_TYPE
#define _EFL_CANVAS_LAYOUT_INTERNAL_SWALLOW_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Layout_Internal_Swallow;

#endif

#ifndef _EFL_CANVAS_LAYOUT_INTERNAL_SWALLOW_EO_TYPES
#define _EFL_CANVAS_LAYOUT_INTERNAL_SWALLOW_EO_TYPES


#endif
/**
 * @brief Represents a SWALLOW part of an Edje object.
 *
 * Its lifetime is limited to one function call only, unless an extra reference
 * is explicitely held.
 *
 * @ingroup Efl_Canvas_Layout_Internal_Swallow
 */
#define EFL_CANVAS_LAYOUT_INTERNAL_SWALLOW_CLASS efl_canvas_layout_internal_swallow_class_get()

EWAPI const Efl_Class *efl_canvas_layout_internal_swallow_class_get(void);

#endif
