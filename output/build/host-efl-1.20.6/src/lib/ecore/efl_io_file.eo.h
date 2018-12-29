#ifndef _EFL_IO_FILE_EO_H_
#define _EFL_IO_FILE_EO_H_

#ifndef _EFL_IO_FILE_EO_CLASS_TYPE
#define _EFL_IO_FILE_EO_CLASS_TYPE

typedef Eo Efl_Io_File;

#endif

#ifndef _EFL_IO_FILE_EO_TYPES
#define _EFL_IO_FILE_EO_TYPES


#endif
/**
 * @brief File access (open, close, read, write, lseek, ftruncate)
 *
 * @ref efl_io_closer_close_on_exec_get and
 * @ref efl_io_closer_close_on_destructor_get are respected and default to
 * @c true. @ref efl_io_closer_close_on_exec_set sets flag O_CLOEXEC.
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_File
 */
#define EFL_IO_FILE_CLASS efl_io_file_class_get()

EWAPI const Efl_Class *efl_io_file_class_get(void);

/**
 * @brief Bitwise OR'ed flags to open the file, like O_CREAT, O_APPEND...
 *
 * Defaults to O_RDONLY | O_CLOEXEC.
 *
 * The flag O_CLOEXEC will be also managed by
 * @ref efl_io_closer_close_on_exec_set. Setting the property after the file is
 * opened will change its blocking behavior.
 *
 * Constructor property to define flags to open the file
 *
 * @param[in] flags Flags to open file, see man:open(2).
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_File
 */
EOAPI void efl_io_file_flags_set(Eo *obj, uint32_t flags);

/**
 * @brief Bitwise OR'ed flags to open the file, like O_CREAT, O_APPEND...
 *
 * Defaults to O_RDONLY | O_CLOEXEC.
 *
 * The flag O_CLOEXEC will be also managed by
 * @ref efl_io_closer_close_on_exec_set. Setting the property after the file is
 * opened will change its blocking behavior.
 *
 * @return Flags to open file, see man:open(2).
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_File
 */
EOAPI uint32_t efl_io_file_flags_get(const Eo *obj);

/**
 * @brief Mode property
 *
 * Constructor property to define mode to open the file
 *
 * @param[in] mode Mode to open file, see man:open(2).
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_File
 */
EOAPI void efl_io_file_mode_set(Eo *obj, uint32_t mode);

/**
 * @brief Mode property
 *
 * @return Mode to open file, see man:open(2).
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_File
 */
EOAPI uint32_t efl_io_file_mode_get(const Eo *obj);

#endif
