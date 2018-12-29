#ifndef _EFL_CANVAS_LAYOUT_INTERNAL_TABLE_EO_H_
#define _EFL_CANVAS_LAYOUT_INTERNAL_TABLE_EO_H_

#ifndef _EFL_CANVAS_LAYOUT_INTERNAL_TABLE_EO_CLASS_TYPE
#define _EFL_CANVAS_LAYOUT_INTERNAL_TABLE_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Layout_Internal_Table;

#endif

#ifndef _EFL_CANVAS_LAYOUT_INTERNAL_TABLE_EO_TYPES
#define _EFL_CANVAS_LAYOUT_INTERNAL_TABLE_EO_TYPES


#endif
/**
 * @brief Represents a Table created as part of a layout.
 *
 * Can not be deleted, this is only a representation of an internal object of
 * an EFL layout.
 *
 * @ingroup Efl_Canvas_Layout_Internal_Table
 */
#define EFL_CANVAS_LAYOUT_INTERNAL_TABLE_CLASS efl_canvas_layout_internal_table_class_get()

EWAPI const Efl_Class *efl_canvas_layout_internal_table_class_get(void);

#endif
