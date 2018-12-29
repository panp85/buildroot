#ifndef _ELM_INTERFACE_ATSPI_ACTION_EO_H_
#define _ELM_INTERFACE_ATSPI_ACTION_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_ACTION_EO_CLASS_TYPE
#define _ELM_INTERFACE_ATSPI_ACTION_EO_CLASS_TYPE

typedef Eo Elm_Interface_Atspi_Action;

#endif

#ifndef _ELM_INTERFACE_ATSPI_ACTION_EO_TYPES
#define _ELM_INTERFACE_ATSPI_ACTION_EO_TYPES


#endif
/** AT-SPI action mixin
 *
 * @ingroup Elm_Interface_Atspi_Action
 */
#define ELM_INTERFACE_ATSPI_ACTION_MIXIN elm_interface_atspi_action_mixin_get()

EWAPI const Efl_Class *elm_interface_atspi_action_mixin_get(void);

#ifdef ELM_INTERFACE_ATSPI_ACTION_PROTECTED
/**
 * @brief Gets action name for given id
 *
 * @param[in] id ID to get action name for
 *
 * @return Action name
 *
 * @ingroup Elm_Interface_Atspi_Action
 */
EOAPI const char *elm_interface_atspi_action_name_get(const Eo *obj, int id);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACTION_PROTECTED
/**
 * @brief Gets localized action name for given id
 *
 * @param[in] id ID to get localized name for
 *
 * @return Localized name
 *
 * @ingroup Elm_Interface_Atspi_Action
 */
EOAPI const char *elm_interface_atspi_action_localized_name_get(const Eo *obj, int id);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACTION_PROTECTED
/**
 * @brief Action description for given id
 *
 * @param[in] id ID to set or get description for
 * @param[in] description Action description
 *
 * @return @c true if description was set, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Action
 */
EOAPI Eina_Bool elm_interface_atspi_action_description_set(Eo *obj, int id, const char *description);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACTION_PROTECTED
/**
 * @brief Action description for given id
 *
 * @param[in] id ID to set or get description for
 *
 * @return Action description
 *
 * @ingroup Elm_Interface_Atspi_Action
 */
EOAPI const char *elm_interface_atspi_action_description_get(const Eo *obj, int id);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACTION_PROTECTED
/**
 * @brief Get list of available widget actions
 *
 * @return Contains statically allocated strings
 *
 * @ingroup Elm_Interface_Atspi_Action
 */
EOAPI Eina_List *elm_interface_atspi_action_actions_get(const Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACTION_PROTECTED
/**
 * @brief Performs action on given widget.
 *
 * @param[in] id ID for widget
 *
 * @return @c true if action was performed, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Action
 */
EOAPI Eina_Bool elm_interface_atspi_action_do(Eo *obj, int id);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACTION_PROTECTED
/**
 * @brief Gets configured keybinding for specific action and widget.
 *
 * @param[in] id ID for widget
 *
 * @return Should be freed by the user.
 *
 * @ingroup Elm_Interface_Atspi_Action
 */
EOAPI char *elm_interface_atspi_action_keybinding_get(Eo *obj, int id) EINA_WARN_UNUSED_RESULT;
#endif

#endif
