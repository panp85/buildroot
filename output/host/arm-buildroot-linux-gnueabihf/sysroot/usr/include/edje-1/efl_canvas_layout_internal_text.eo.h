#ifndef _EFL_CANVAS_LAYOUT_INTERNAL_TEXT_EO_H_
#define _EFL_CANVAS_LAYOUT_INTERNAL_TEXT_EO_H_

#ifndef _EFL_CANVAS_LAYOUT_INTERNAL_TEXT_EO_CLASS_TYPE
#define _EFL_CANVAS_LAYOUT_INTERNAL_TEXT_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Layout_Internal_Text;

#endif

#ifndef _EFL_CANVAS_LAYOUT_INTERNAL_TEXT_EO_TYPES
#define _EFL_CANVAS_LAYOUT_INTERNAL_TEXT_EO_TYPES


#endif
/**
 * @brief Represents a TEXT part of a layout
 *
 * Its lifetime is limited to one function call only, unless an extra reference
 * is explicitely held.
 *
 * @ingroup Efl_Canvas_Layout_Internal_Text
 */
#define EFL_CANVAS_LAYOUT_INTERNAL_TEXT_CLASS efl_canvas_layout_internal_text_class_get()

EWAPI const Efl_Class *efl_canvas_layout_internal_text_class_get(void);

#endif
