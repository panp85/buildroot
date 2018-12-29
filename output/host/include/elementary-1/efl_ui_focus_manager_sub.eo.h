#ifndef _EFL_UI_FOCUS_MANAGER_SUB_EO_H_
#define _EFL_UI_FOCUS_MANAGER_SUB_EO_H_

#ifndef _EFL_UI_FOCUS_MANAGER_SUB_EO_CLASS_TYPE
#define _EFL_UI_FOCUS_MANAGER_SUB_EO_CLASS_TYPE

typedef Eo Efl_Ui_Focus_Manager_Sub;

#endif

#ifndef _EFL_UI_FOCUS_MANAGER_SUB_EO_TYPES
#define _EFL_UI_FOCUS_MANAGER_SUB_EO_TYPES


#endif
/**
 * @brief A class that automatically registeres its border elements in the
 * parent manager
 *
 * This sub manager will register its border elements on the parent manager.
 * The parent manager is found with the @ref Efl_Ui_Focus_User interface of the
 * @ref efl_parent_get.
 *
 * Each sub manager also has to be a focus object, the object itself will be
 * registered into the parent manager. It will be used as logical parent while
 * registering the border elements.
 *
 * You can filter the border elements by overriding the property
 * @ref efl_ui_focus_manager_border_elements_get.
 *
 * This class is only working as composite object to a @ref Efl_Ui_Focus_User
 * and @ref Efl_Ui_Focus_Object.
 *
 * The object itself redirects the manager's events to the object where this
 * object is attached.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_Manager_Sub
 */
#define EFL_UI_FOCUS_MANAGER_SUB_CLASS efl_ui_focus_manager_sub_class_get()

EWAPI const Efl_Class *efl_ui_focus_manager_sub_class_get(void);

#endif
