#ifndef _EFL_UI_INTERNAL_TEXT_INTERACTIVE_EO_H_
#define _EFL_UI_INTERNAL_TEXT_INTERACTIVE_EO_H_

#ifndef _EFL_UI_INTERNAL_TEXT_INTERACTIVE_EO_CLASS_TYPE
#define _EFL_UI_INTERNAL_TEXT_INTERACTIVE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Internal_Text_Interactive;

#endif

#ifndef _EFL_UI_INTERNAL_TEXT_INTERACTIVE_EO_TYPES
#define _EFL_UI_INTERNAL_TEXT_INTERACTIVE_EO_TYPES


#endif
/**
 * @brief An internal object that is in charge of the interactive aspect of the
 * text widget
 *
 * This object is in charge of processing input, moving the text caret and etc.
 *
 * @ingroup Efl_Ui_Internal_Text_Interactive
 */
#define EFL_UI_INTERNAL_TEXT_INTERACTIVE_CLASS efl_ui_internal_text_interactive_class_get()

EWAPI const Efl_Class *efl_ui_internal_text_interactive_class_get(void);

#endif
