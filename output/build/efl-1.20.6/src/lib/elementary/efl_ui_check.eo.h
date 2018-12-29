#ifndef _EFL_UI_CHECK_EO_H_
#define _EFL_UI_CHECK_EO_H_

#ifndef _EFL_UI_CHECK_EO_CLASS_TYPE
#define _EFL_UI_CHECK_EO_CLASS_TYPE

typedef Eo Efl_Ui_Check;

#endif

#ifndef _EFL_UI_CHECK_EO_TYPES
#define _EFL_UI_CHECK_EO_TYPES


#endif
/**
 * @brief Check widget
 *
 * The check widget allows for toggling a value between true and false. Check
 * objects are a lot like radio objects in layout and functionality, except
 * they do not work as a group, but independently, and only toggle the value of
 * a boolean between false and true.
 *
 * @ingroup Efl_Ui_Check
 */
#define EFL_UI_CHECK_CLASS efl_ui_check_class_get()

EWAPI const Efl_Class *efl_ui_check_class_get(void);

/**
 * @brief The on/off state of the check object.
 *
 * @param[in] value @c true if the check object is selected, @c false otherwise
 *
 * @ingroup Efl_Ui_Check
 */
EOAPI void efl_ui_check_selected_set(Eo *obj, Eina_Bool value);

/**
 * @brief The on/off state of the check object.
 *
 * @return @c true if the check object is selected, @c false otherwise
 *
 * @ingroup Efl_Ui_Check
 */
EOAPI Eina_Bool efl_ui_check_selected_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_UI_CHECK_EVENT_CHANGED;

/** This is called whenever the user changes the state of the check objects
 * (event_info is always NULL).
 *
 * @ingroup Efl_Ui_Check
 */
#define EFL_UI_CHECK_EVENT_CHANGED (&(_EFL_UI_CHECK_EVENT_CHANGED))

#endif
