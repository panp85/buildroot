#ifndef _EFL_UI_FOCUS_USER_EO_H_
#define _EFL_UI_FOCUS_USER_EO_H_

#ifndef _EFL_UI_FOCUS_USER_EO_CLASS_TYPE
#define _EFL_UI_FOCUS_USER_EO_CLASS_TYPE

typedef Eo Efl_Ui_Focus_User;

#endif

#ifndef _EFL_UI_FOCUS_USER_EO_TYPES
#define _EFL_UI_FOCUS_USER_EO_TYPES


#endif
/** Interface which is used to handle the manager of a user.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_User
 */
#define EFL_UI_FOCUS_USER_INTERFACE efl_ui_focus_user_interface_get()

EWAPI const Efl_Class *efl_ui_focus_user_interface_get(void);

/**
 * @brief Describes which manager is used to register or should be used to
 * register this user.
 *
 * @return The manager object
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_User
 */
EOAPI Efl_Ui_Focus_Manager *efl_ui_focus_user_manager_get(const Eo *obj);

/**
 * @brief Describes which logical parent is used by this object.
 *
 * @return The focus parent.
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_User
 */
EOAPI Efl_Ui_Focus_Object *efl_ui_focus_user_parent_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_UI_FOCUS_USER_EVENT_MANAGER_CHANGED;

/** Emitted when a new manager is the parent for this object.
 * @return Efl_Ui_Focus_Manager *
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_User
 */
#define EFL_UI_FOCUS_USER_EVENT_MANAGER_CHANGED (&(_EFL_UI_FOCUS_USER_EVENT_MANAGER_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_UI_FOCUS_USER_EVENT_LOGICAL_CHANGED;

/** Emitted when a new logical parent should be used.
 * @return Efl_Ui_Focus_Object *
 *
 * @since 1.20
 *
 * @ingroup Efl_Ui_Focus_User
 */
#define EFL_UI_FOCUS_USER_EVENT_LOGICAL_CHANGED (&(_EFL_UI_FOCUS_USER_EVENT_LOGICAL_CHANGED))

#endif
