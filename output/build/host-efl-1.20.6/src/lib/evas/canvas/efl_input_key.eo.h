#ifndef _EFL_INPUT_KEY_EO_H_
#define _EFL_INPUT_KEY_EO_H_

#ifndef _EFL_INPUT_KEY_EO_CLASS_TYPE
#define _EFL_INPUT_KEY_EO_CLASS_TYPE

typedef Eo Efl_Input_Key;

#endif

#ifndef _EFL_INPUT_KEY_EO_TYPES
#define _EFL_INPUT_KEY_EO_TYPES


#endif
/** Represents a single key event from a keyboard or similar device.
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Key
 */
#define EFL_INPUT_KEY_CLASS efl_input_key_class_get()

EWAPI const Efl_Class *efl_input_key_class_get(void);

/**
 * @brief @c true if the key is down, @c false if it is released.
 *
 * @param[in] val @c true if the key is pressed, @c false otherwise
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Key
 */
EOAPI void efl_input_key_pressed_set(Eo *obj, Eina_Bool val);

/**
 * @brief @c true if the key is down, @c false if it is released.
 *
 * @return @c true if the key is pressed, @c false otherwise
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Key
 */
EOAPI Eina_Bool efl_input_key_pressed_get(const Eo *obj);

/**
 * @brief Name string of the key.
 *
 * @param[in] val Key name
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Key
 */
EOAPI void efl_input_key_name_set(Eo *obj, const char *val);

/**
 * @brief Name string of the key.
 *
 * @return Key name
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Key
 */
EOAPI const char *efl_input_key_name_get(const Eo *obj);

/**
 * @brief Logical key.
 *
 * Eg. Shift + 1 = exclamation
 *
 * @param[in] val Logical key name
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Key
 */
EOAPI void efl_input_key_set(Eo *obj, const char *val);

/**
 * @brief Logical key.
 *
 * Eg. Shift + 1 = exclamation
 *
 * @return Logical key name
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Key
 */
EOAPI const char *efl_input_key_get(const Eo *obj);

/**
 * @brief A UTF8 string if this keystroke has produced a visible string to be
 * added.
 *
 * @param[in] val Visible string from key press in UTF8
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Key
 */
EOAPI void efl_input_key_string_set(Eo *obj, const char *val);

/**
 * @brief A UTF8 string if this keystroke has produced a visible string to be
 * added.
 *
 * @return Visible string from key press in UTF8
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Key
 */
EOAPI const char *efl_input_key_string_get(const Eo *obj);

/**
 * @brief A UTF8 string if this keystroke has modified a string in the middle
 * of being composed.
 *
 * @note This string replaces the previous one
 *
 * @param[in] val Composed key string in UTF8
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Key
 */
EOAPI void efl_input_key_compose_set(Eo *obj, const char *val);

/**
 * @brief A UTF8 string if this keystroke has modified a string in the middle
 * of being composed.
 *
 * @note This string replaces the previous one
 *
 * @return Composed key string in UTF8
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Key
 */
EOAPI const char *efl_input_key_compose_get(const Eo *obj);

/**
 * @brief Key scan code numeric value.
 *
 * @param[in] val Key scan code
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Key
 */
EOAPI void efl_input_key_code_set(Eo *obj, int val);

/**
 * @brief Key scan code numeric value.
 *
 * @return Key scan code
 *
 * @since 1.18
 *
 * @ingroup Efl_Input_Key
 */
EOAPI int efl_input_key_code_get(const Eo *obj);

#endif
