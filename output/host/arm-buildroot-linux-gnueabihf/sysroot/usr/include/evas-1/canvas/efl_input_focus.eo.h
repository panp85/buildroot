#ifndef _EFL_INPUT_FOCUS_EO_H_
#define _EFL_INPUT_FOCUS_EO_H_

#ifndef _EFL_INPUT_FOCUS_EO_CLASS_TYPE
#define _EFL_INPUT_FOCUS_EO_CLASS_TYPE

typedef Eo Efl_Input_Focus;

#endif

#ifndef _EFL_INPUT_FOCUS_EO_TYPES
#define _EFL_INPUT_FOCUS_EO_TYPES


#endif
/** Represents a focus event.
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Focus
 */
#define EFL_INPUT_FOCUS_CLASS efl_input_focus_class_get()

EWAPI const Efl_Class *efl_input_focus_class_get(void);

/**
 * @brief The focused object
 *
 * @param[in] object The focused object. In case this represents a canvas focus
 * the object will be @c null
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Focus
 */
EOAPI void efl_input_focus_object_set(Eo *obj, Efl_Object *object);

/**
 * @brief The focused object
 *
 * @return The focused object. In case this represents a canvas focus the
 * object will be @c null
 *
 * @since 1.19
 *
 * @ingroup Efl_Input_Focus
 */
EOAPI Efl_Object *efl_input_focus_object_get(const Eo *obj);

#endif
