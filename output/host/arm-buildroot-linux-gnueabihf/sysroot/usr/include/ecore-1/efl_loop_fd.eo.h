#ifndef _EFL_LOOP_FD_EO_H_
#define _EFL_LOOP_FD_EO_H_

#ifndef _EFL_LOOP_FD_EO_CLASS_TYPE
#define _EFL_LOOP_FD_EO_CLASS_TYPE

typedef Eo Efl_Loop_Fd;

#endif

#ifndef _EFL_LOOP_FD_EO_TYPES
#define _EFL_LOOP_FD_EO_TYPES


#endif
/**
 * @brief Fds are objects that what the activity on a given file descriptor.
 * This file descriptor can be a network, a file, provided by a library.
 *
 * The object will trigger relevant event depending on what is happening.
 *
 * @ingroup Efl_Loop_Fd
 */
#define EFL_LOOP_FD_CLASS efl_loop_fd_class_get()

EWAPI const Efl_Class *efl_loop_fd_class_get(void);

/**
 * @brief Defines which file descriptor to watch. If it is a file, use file_fd
 * variant.
 *
 * Defines the fd to watch on.
 *
 * @param[in] fd The file descriptor.
 *
 * @ingroup Efl_Loop_Fd
 */
EOAPI void efl_loop_fd_set(Eo *obj, int fd);

/**
 * @brief Defines which file descriptor to watch. If it is a file, use file_fd
 * variant.
 *
 * @return The file descriptor.
 *
 * @ingroup Efl_Loop_Fd
 */
EOAPI int efl_loop_fd_get(const Eo *obj);

/**
 * @brief Defines which file descriptor to watch when watching a file.
 *
 * Defines the fd to watch on.
 *
 * @param[in] fd The file descriptor.
 *
 * @ingroup Efl_Loop_Fd
 */
EOAPI void efl_loop_fd_file_set(Eo *obj, int fd);

/**
 * @brief Defines which file descriptor to watch when watching a file.
 *
 * @return The file descriptor.
 *
 * @ingroup Efl_Loop_Fd
 */
EOAPI int efl_loop_fd_file_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_LOOP_FD_EVENT_READ;

/** Called when a read happened on the file descriptor
 *
 * @ingroup Efl_Loop_Fd
 */
#define EFL_LOOP_FD_EVENT_READ (&(_EFL_LOOP_FD_EVENT_READ))

EWAPI extern const Efl_Event_Description _EFL_LOOP_FD_EVENT_WRITE;

/** Called when a write happened on the file descriptor
 *
 * @ingroup Efl_Loop_Fd
 */
#define EFL_LOOP_FD_EVENT_WRITE (&(_EFL_LOOP_FD_EVENT_WRITE))

EWAPI extern const Efl_Event_Description _EFL_LOOP_FD_EVENT_ERROR;

/** Called when a error occurred on the file descriptor
 *
 * @ingroup Efl_Loop_Fd
 */
#define EFL_LOOP_FD_EVENT_ERROR (&(_EFL_LOOP_FD_EVENT_ERROR))

#endif
