#ifndef _EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EO_H_
#define _EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EO_H_

#ifndef _EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EO_CLASS_TYPE
#define _EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EO_CLASS_TYPE

typedef Eo Efl_Ui_Focus_Manager_Root_Focus;

#endif

#ifndef _EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EO_TYPES
#define _EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_EO_TYPES


#endif
/** This class ensures that the root is at least focusable, if nothing else is
 * focusable
 *
 * @ingroup Efl_Ui_Focus_Manager_Root_Focus
 */
#define EFL_UI_FOCUS_MANAGER_ROOT_FOCUS_CLASS efl_ui_focus_manager_root_focus_class_get()

EWAPI const Efl_Class *efl_ui_focus_manager_root_focus_class_get(void);

#endif
