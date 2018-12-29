#ifndef _EFL_UI_BOX_STACK_EO_H_
#define _EFL_UI_BOX_STACK_EO_H_

#ifndef _EFL_UI_BOX_STACK_EO_CLASS_TYPE
#define _EFL_UI_BOX_STACK_EO_CLASS_TYPE

typedef Eo Efl_Ui_Box_Stack;

#endif

#ifndef _EFL_UI_BOX_STACK_EO_TYPES
#define _EFL_UI_BOX_STACK_EO_TYPES


#endif
/**
 * @brief A custom layout engine for @ref Efl_Ui_Box that stacks items.
 *
 * Items will be stacked on top of each other (in the Z direction).
 *
 * @ingroup Efl_Ui_Box_Stack
 */
#define EFL_UI_BOX_STACK_CLASS efl_ui_box_stack_class_get()

EWAPI const Efl_Class *efl_ui_box_stack_class_get(void);

#endif
