#ifndef _ELM_INTERFACE_ATSPI_SELECTION_EO_H_
#define _ELM_INTERFACE_ATSPI_SELECTION_EO_H_

#ifndef _ELM_INTERFACE_ATSPI_SELECTION_EO_CLASS_TYPE
#define _ELM_INTERFACE_ATSPI_SELECTION_EO_CLASS_TYPE

typedef Eo Elm_Interface_Atspi_Selection;

#endif

#ifndef _ELM_INTERFACE_ATSPI_SELECTION_EO_TYPES
#define _ELM_INTERFACE_ATSPI_SELECTION_EO_TYPES


#endif
/** Elementary AT-SPI selection interface
 *
 * @ingroup Elm_Interface_Atspi_Selection
 */
#define ELM_INTERFACE_ATSPI_SELECTION_INTERFACE elm_interface_atspi_selection_interface_get()

EWAPI const Efl_Class *elm_interface_atspi_selection_interface_get(void);

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 * @brief Gets the number of currently selected children
 *
 * @return Number of currently selected children
 *
 * @ingroup Elm_Interface_Atspi_Selection
 */
EOAPI int elm_interface_atspi_selection_selected_children_count_get(const Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 * @brief Gets child for given child index
 *
 * @param[in] selected_child_index Index of child
 *
 * @return Child object
 *
 * @ingroup Elm_Interface_Atspi_Selection
 */
EOAPI Efl_Object *elm_interface_atspi_selection_selected_child_get(const Eo *obj, int selected_child_index);
#endif

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 * @brief Adds selection for given child index
 *
 * @param[in] child_index Index of child
 *
 * @return @c true if selection was added, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Selection
 */
EOAPI Eina_Bool elm_interface_atspi_selection_child_select(Eo *obj, int child_index);
#endif

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 * @brief Removes selection for given child index
 *
 * @param[in] child_index Index of child
 *
 * @return @c true if selection was removed, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Selection
 */
EOAPI Eina_Bool elm_interface_atspi_selection_selected_child_deselect(Eo *obj, int child_index);
#endif

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 * @brief Determines if child specified by index is selected
 *
 * @param[in] child_index Index of child
 *
 * @return @c true if child is selected, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Selection
 */
EOAPI Eina_Bool elm_interface_atspi_selection_is_child_selected(Eo *obj, int child_index);
#endif

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 * @brief Adds selection for all children
 *
 * @return @c true if selection was added to all children, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Selection
 */
EOAPI Eina_Bool elm_interface_atspi_selection_all_children_select(Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 * @brief Clears the current selection
 *
 * @return @c true if selection was cleared, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Selection
 */
EOAPI Eina_Bool elm_interface_atspi_selection_clear(Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_SELECTION_PROTECTED
/**
 * @brief Removes selection for given child index
 *
 * @param[in] child_index Index of child
 *
 * @return @c true if selection was removed, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Selection
 */
EOAPI Eina_Bool elm_interface_atspi_selection_child_deselect(Eo *obj, int child_index);
#endif

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_SELECTION_EVENT_SELECTION_CHANGED;

/** Called when selection has been changed.
 *
 * @ingroup Elm_Interface_Atspi_Selection
 */
#define ELM_INTERFACE_ATSPI_SELECTION_EVENT_SELECTION_CHANGED (&(_ELM_INTERFACE_ATSPI_SELECTION_EVENT_SELECTION_CHANGED))

#endif
