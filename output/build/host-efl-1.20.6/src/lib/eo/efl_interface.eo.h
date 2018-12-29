#ifndef _EFL_INTERFACE_EO_H_
#define _EFL_INTERFACE_EO_H_

#ifndef _EFL_INTERFACE_EO_CLASS_TYPE
#define _EFL_INTERFACE_EO_CLASS_TYPE

typedef Eo Efl_Interface;

#endif

#ifndef _EFL_INTERFACE_EO_TYPES
#define _EFL_INTERFACE_EO_TYPES


#endif
/** An interface for other interfaces to inherit from. This is useful when you
 * want to create interfaces and mixins that expose functions from a normal
 * class, like for example @ref efl_constructor.
 *
 * @ingroup Efl_Interface
 */
#define EFL_INTERFACE_INTERFACE efl_interface_interface_get()

EWAPI const Efl_Class *efl_interface_interface_get(void);

#endif
