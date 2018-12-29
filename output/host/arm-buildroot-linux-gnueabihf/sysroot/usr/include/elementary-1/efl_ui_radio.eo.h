#ifndef _EFL_UI_RADIO_EO_H_
#define _EFL_UI_RADIO_EO_H_

#ifndef _EFL_UI_RADIO_EO_CLASS_TYPE
#define _EFL_UI_RADIO_EO_CLASS_TYPE

typedef Eo Efl_Ui_Radio;

#endif

#ifndef _EFL_UI_RADIO_EO_TYPES
#define _EFL_UI_RADIO_EO_TYPES


#endif
/** Elementary radio class
 *
 * @ingroup Efl_Ui_Radio
 */
#define EFL_UI_RADIO_CLASS efl_ui_radio_class_get()

EWAPI const Efl_Class *efl_ui_radio_class_get(void);

/**
 * @brief Set the integer value that this radio object represents
 *
 * This sets the value of the radio.
 *
 * @param[in] value The value to use if this radio object is selected
 *
 * @ingroup Efl_Ui_Radio
 */
EOAPI void efl_ui_radio_state_value_set(Eo *obj, int value);

/**
 * @brief Get the integer value that this radio object represents
 *
 * This gets the value of the radio.
 *
 * @return The value to use if this radio object is selected
 *
 * @ingroup Efl_Ui_Radio
 */
EOAPI int efl_ui_radio_state_value_get(const Eo *obj);

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
EOAPI void efl_ui_radio_value_set(Eo *obj, int value);

/**
 * @brief Get the value of the radio group
 *
 * @return The value to use for the group
 *
 * @ingroup Efl_Ui_Radio
 */
EOAPI int efl_ui_radio_value_get(const Eo *obj);

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
EOAPI void efl_ui_radio_value_pointer_set(Eo *obj, int *valuep);

/**
 * @brief Get the selected radio object.
 *
 * @return The selected radio object
 *
 * @ingroup Efl_Ui_Radio
 */
EOAPI Efl_Canvas_Object *efl_ui_radio_selected_object_get(const Eo *obj);

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
EOAPI void efl_ui_radio_group_add(Eo *obj, Efl_Ui_Radio *group);

EWAPI extern const Efl_Event_Description _EFL_UI_RADIO_EVENT_CHANGED;

/** Called when radio changed
 *
 * @ingroup Efl_Ui_Radio
 */
#define EFL_UI_RADIO_EVENT_CHANGED (&(_EFL_UI_RADIO_EVENT_CHANGED))

#endif
