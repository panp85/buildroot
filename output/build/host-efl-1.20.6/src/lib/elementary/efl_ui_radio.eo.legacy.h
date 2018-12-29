#ifndef _EFL_UI_RADIO_EO_LEGACY_H_
#define _EFL_UI_RADIO_EO_LEGACY_H_

#ifndef _EFL_UI_RADIO_EO_CLASS_TYPE
#define _EFL_UI_RADIO_EO_CLASS_TYPE

typedef Eo Efl_Ui_Radio;

#endif

#ifndef _EFL_UI_RADIO_EO_TYPES
#define _EFL_UI_RADIO_EO_TYPES


#endif

/**
 * @brief Set the integer value that this radio object represents
 *
 * This sets the value of the radio.
 *
 * @param[in] value The value to use if this radio object is selected
 *
 * @ingroup Efl_Ui_Radio
 */
EAPI void elm_radio_state_value_set(Efl_Ui_Radio *obj, int value);

/**
 * @brief Get the integer value that this radio object represents
 *
 * This gets the value of the radio.
 *
 * @return The value to use if this radio object is selected
 *
 * @ingroup Efl_Ui_Radio
 */
EAPI int elm_radio_state_value_get(const Efl_Ui_Radio *obj);

/**
 * @brief Set the value of the radio group.
 *
 * This sets the value of the radio group and will also set the value if
 * pointed to, to the value supplied, but will not call any callbacks.
 *
 * @param[in] value The value to use for the group
 *
 * @ingroup Efl_Ui_Radio
 */
EAPI void elm_radio_value_set(Efl_Ui_Radio *obj, int value);

/**
 * @brief Get the value of the radio group
 *
 * @return The value to use for the group
 *
 * @ingroup Efl_Ui_Radio
 */
EAPI int elm_radio_value_get(const Efl_Ui_Radio *obj);

/**
 * @brief Set a convenience pointer to a integer to change when radio group
 * value changes.
 *
 * This sets a pointer to a integer, that, in addition to the radio objects
 * state will also be modified directly. To stop setting the object pointed to
 * simply use NULL as the valuep argument. If valuep is not NULL, then when
 * this is called, the radio objects state will also be modified to reflect the
 * value of the integer valuep points to, just like calling
 * elm_radio_value_set().
 *
 * @param[in] valuep Pointer to the integer to modify
 *
 * @ingroup Efl_Ui_Radio
 */
EAPI void elm_radio_value_pointer_set(Efl_Ui_Radio *obj, int *valuep);

/**
 * @brief Get the selected radio object.
 *
 * @return The selected radio object
 *
 * @ingroup Efl_Ui_Radio
 */
EAPI Efl_Canvas_Object *elm_radio_selected_object_get(const Efl_Ui_Radio *obj);

/**
 * @brief Add this radio to a group of other radio objects
 *
 * Radio objects work in groups. Each member should have a different integer
 * value assigned. In order to have them work as a group, they need to know
 * about each other. This adds the given radio object to the group of which the
 * group object indicated is a member.
 *
 * @param[in] group Any radio object whose group the obj is to join.
 *
 * @ingroup Efl_Ui_Radio
 */
EAPI void elm_radio_group_add(Efl_Ui_Radio *obj, Efl_Ui_Radio *group);

#endif
