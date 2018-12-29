#ifndef _EFL_IO_MANAGER_EO_H_
#define _EFL_IO_MANAGER_EO_H_

#ifndef _EFL_IO_MANAGER_EO_CLASS_TYPE
#define _EFL_IO_MANAGER_EO_CLASS_TYPE

typedef Eo Efl_Io_Manager;

#endif

#ifndef _EFL_IO_MANAGER_EO_TYPES
#define _EFL_IO_MANAGER_EO_TYPES

/** A structure to handle arbitrary data to be sent over Promises.
 *
 * @ingroup Eio
 */
typedef struct _Eio_Data
{
  void *data; /**< Private data pointer */
  unsigned int size; /**< Size of private data */
} Eio_Data;


#endif
/** Class representing an asynchronous file operation.
 *
 * @ingroup Efl_Io_Manager
 */
#define EFL_IO_MANAGER_CLASS efl_io_manager_class_get()

EWAPI const Efl_Class *efl_io_manager_class_get(void);

/**
 * @brief Lists entries in a given path.
 *
 * @param[in] path Path we want to list entries for
 *
 * @return List of entries in path
 *
 * @ingroup Efl_Io_Manager
 */
EOAPI Efl_Future *efl_io_manager_ls(Eo *obj, const char *path);

/**
 * @brief Lists entries in a given path with more information.
 *
 * @param[in] path Path we want to list entries for
 * @param[in] recursive If @c true, list entries recursively, @c false
 * otherwise
 *
 * @return List of entries in path
 *
 * @ingroup Efl_Io_Manager
 */
EOAPI Efl_Future *efl_io_manager_direct_ls(Eo *obj, const char *path, Eina_Bool recursive);

/**
 * @brief Lists entries in a given path with stat information.
 *
 * @param[in] path Path we want to list entries for
 * @param[in] recursive If @c true, list entries recursively, @c false
 * otherwise
 *
 * @return List of entries in path
 *
 * @ingroup Efl_Io_Manager
 */
EOAPI Efl_Future *efl_io_manager_stat_ls(Eo *obj, const char *path, Eina_Bool recursive);

/**
 * @brief Lists all extended attributes asynchronously.
 *
 * @param[in] path Path we want to list entries for
 *
 * @return Extended attributes
 *
 * @ingroup Efl_Io_Manager
 */
EOAPI Efl_Future *efl_io_manager_xattr_ls(Eo *obj, const char *path);

/**
 * @brief Get stat info on a given file/directory.
 *
 * @param[in] path Path we want to get stat information for
 *
 * @return Stat information
 *
 * @ingroup Efl_Io_Manager
 */
EOAPI Efl_Future *efl_io_manager_stat(Eo *obj, const char *path);

/**
 * @brief Retrieves or sets information of a given extended attribute.
 *
 * @param[in] path File path
 * @param[in] attribute Attribute name
 * @param[in] data Data to set as information
 * @param[in] flags Extended attributes flags
 *
 * @return Future for asynchronous set operation
 *
 * @ingroup Efl_Io_Manager
 */
EOAPI Efl_Future *efl_io_manager_xattr_set(Eo *obj, const char * path, const char * attribute, Eina_Binbuf *data, Eina_Xattr_Flags flags);

/**
 * @brief Retrieves or sets information of a given extended attribute.
 *
 * @param[in] path File path
 * @param[in] attribute Attribute name
 *
 * @return Information
 *
 * @ingroup Efl_Io_Manager
 */
EOAPI Efl_Future *efl_io_manager_xattr_get(const Eo *obj, const char * path, const char * attribute);

/**
 * @brief Opens a file.
 *
 * The fulfilled value in the promise will be the Eina.File*.
 *
 * @param[in] path Path to file
 * @param[in] shared @c true if the file can be accessed by others, @c false
 * otherwise
 *
 * @return Eina file handle
 *
 * @ingroup Efl_Io_Manager
 */
EOAPI Efl_Future *efl_io_manager_open(Eo *obj, const char *path, Eina_Bool shared);

/**
 * @brief Closes an open Eina.File.
 *
 * @param[in] file Eina file handle
 *
 * @return Close return code
 *
 * @ingroup Efl_Io_Manager
 */
EOAPI Efl_Future *efl_io_manager_close(Eo *obj, Eina_File *file);

#endif
