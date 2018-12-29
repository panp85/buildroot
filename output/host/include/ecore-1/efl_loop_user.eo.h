#ifndef _EFL_LOOP_USER_EO_H_
#define _EFL_LOOP_USER_EO_H_

#ifndef _EFL_LOOP_USER_EO_CLASS_TYPE
#define _EFL_LOOP_USER_EO_CLASS_TYPE

typedef Eo Efl_Loop_User;

#endif

#ifndef _EFL_LOOP_USER_EO_TYPES
#define _EFL_LOOP_USER_EO_TYPES


#endif
/** An Efl.Loop_User is a class that require one of the parent to provide an
 * Efl.Loop interface when doing provider_find. It will enforce this by only
 * allowing parent that provide such interface or NULL.
 *
 * @ingroup Efl_Loop_User
 */
#define EFL_LOOP_USER_CLASS efl_loop_user_class_get()

EWAPI const Efl_Class *efl_loop_user_class_get(void);

/**
 * @brief The loop to which this object belongs to.
 *
 * Gets a handle to the loop.
 *
 * @return Efl loop
 *
 * @ingroup Efl_Loop_User
 */
EOAPI Efl_Loop *efl_loop_get(const Eo *obj);

#endif
