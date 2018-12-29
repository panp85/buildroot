#ifndef _ELM_INTERFACE_ATSPI_WIDGET_ACTION_EO_H_
#define _ELM_INTERFACE_ATSPI_WIDGET_ACTION_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_WIDGET_ACTION_EO_CLASS_TYPE
#define _ELM_INTERFACE_ATSPI_WIDGET_ACTION_EO_CLASS_TYPE

typedef Eo Elm_Interface_Atspi_Widget_Action;

#endif

#ifndef _ELM_INTERFACE_ATSPI_WIDGET_ACTION_EO_TYPES
#define _ELM_INTERFACE_ATSPI_WIDGET_ACTION_EO_TYPES


#endif
/** AT-SPI widget action mixin
 *
 * @ingroup Elm_Interface_Atspi_Widget_Action
 */
#define ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN elm_interface_atspi_widget_action_mixin_get()

EWAPI const Efl_Class *elm_interface_atspi_widget_action_mixin_get(void);

#ifdef ELM_INTERFACE_ATSPI_WIDGET_ACTION_PROTECTED
/**
 * @brief Elementary actions
 *
 * @return NULL-terminated array of Elm_Atspi_Action
 *
 * @ingroup Elm_Interface_Atspi_Widget_Action
 */
EOAPI const Elm_Atspi_Action *elm_interface_atspi_widget_action_elm_actions_get(const Eo *obj);
#endif

#endif
