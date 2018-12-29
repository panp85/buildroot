#ifndef _EFL_IO_WRITER_FD_EO_H_
#define _EFL_IO_WRITER_FD_EO_H_

#ifndef _EFL_IO_WRITER_FD_EO_CLASS_TYPE
#define _EFL_IO_WRITER_FD_EO_CLASS_TYPE

typedef Eo Efl_Io_Writer_Fd;

#endif

#ifndef _EFL_IO_WRITER_FD_EO_TYPES
#define _EFL_IO_WRITER_FD_EO_TYPES


#endif
/** Writes fd using write(2).
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Writer_Fd
 */
#define EFL_IO_WRITER_FD_MIXIN efl_io_writer_fd_mixin_get()

EWAPI const Efl_Class *efl_io_writer_fd_mixin_get(void);

#ifdef EFL_IO_WRITER_FD_PROTECTED
/**
 * @brief Writer file descriptor
 *
 * @param[in] fd File descriptor
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Writer_Fd
 */
EOAPI void efl_io_writer_fd_set(Eo *obj, int fd);
#endif

/**
 * @brief Writer file descriptor
 *
 * @return File descriptor
 *
 * @since 1.19
 *
 * @ingroup Efl_Io_Writer_Fd
 */
EOAPI int efl_io_writer_fd_get(const Eo *obj);

#endif
