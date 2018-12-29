#ifndef _EFL_IO_STDERR_EO_H_
#define _EFL_IO_STDERR_EO_H_

#ifndef _EFL_IO_STDERR_EO_CLASS_TYPE
#define _EFL_IO_STDERR_EO_CLASS_TYPE

typedef Eo Efl_Io_Stderr;

#endif

#ifndef _EFL_IO_STDERR_EO_TYPES
#define _EFL_IO_STDERR_EO_TYPES


#endif
/** Application's standard error (stderr).
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Stderr
 */
#define EFL_IO_STDERR_CLASS efl_io_stderr_class_get()

EWAPI const Efl_Class *efl_io_stderr_class_get(void);

#endif
