#ifndef _EFL_VPATH_FILE_EO_H_
#define _EFL_VPATH_FILE_EO_H_

#ifndef _EFL_VPATH_FILE_EO_CLASS_TYPE
#define _EFL_VPATH_FILE_EO_CLASS_TYPE

typedef Eo Efl_Vpath_File;

#endif

#ifndef _EFL_VPATH_FILE_EO_TYPES
#define _EFL_VPATH_FILE_EO_TYPES


#endif
/**
 * @brief VPath File is an actual representation of a downloaded/mapped vpath
 * file
 *
 * Keep this object around for as long as you need to use the file as it may
 * have been downloaded and kept as a local temporary file and deletion may
 * remove it.
 *
 * When you have a Vpath File object for the first time, call the do() method
 * on it to actually begin/do the mapping. From here the fetched or failed
 * event callbacks will be called, inside of which or afterwards you can fetch
 * the resulting local file path by getting the result property.
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_File
 */
#define EFL_VPATH_FILE_CLASS efl_vpath_file_class_get()

EWAPI const Efl_Class *efl_vpath_file_class_get(void);

/**
 * @brief The original source path provided to lookup/fetch from
 *
 * @param[in] path The input virtual path to a file
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_File
 */
EOAPI void efl_vpath_file_path_set(Eo *obj, const char *path);

/**
 * @brief The original source path provided to lookup/fetch from
 *
 * @return The input virtual path to a file
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_File
 */
EOAPI const char *efl_vpath_file_path_get(const Eo *obj);

/**
 * @brief The resulting real local file path to open/read
 *
 * @param[in] path The resulting destination file
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_File
 */
EOAPI void efl_vpath_file_result_set(Eo *obj, const char *path);

/**
 * @brief The resulting real local file path to open/read
 *
 * @return The resulting destination file
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_File
 */
EOAPI const char *efl_vpath_file_result_get(const Eo *obj);

/**
 * @brief If this object has to be kept for the usage of the result
 *
 * @param[in] keep If the object neerds tobe kept around
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_File
 */
EOAPI void efl_vpath_file_keep_set(Eo *obj, Eina_Bool keep);

/**
 * @brief If this object has to be kept for the usage of the result
 *
 * @return If the object neerds tobe kept around
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_File
 */
EOAPI Eina_Bool efl_vpath_file_keep_get(const Eo *obj);

/**
 * @brief Actually begin the resolving here - emit event now or do later
 *
 * @return Result callback already called
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_File
 */
EOAPI Eina_Bool efl_vpath_file_do(Eo *obj);

/** If not fetched yet, wait until it is and call result cb
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_File
 */
EOAPI void efl_vpath_file_wait(Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_VPATH_FILE_EVENT_FETCHED;

/** File successfully mapped/fetched
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_File
 */
#define EFL_VPATH_FILE_EVENT_FETCHED (&(_EFL_VPATH_FILE_EVENT_FETCHED))

EWAPI extern const Efl_Event_Description _EFL_VPATH_FILE_EVENT_FAILED;

/** File fetch or mapping failed
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_File
 */
#define EFL_VPATH_FILE_EVENT_FAILED (&(_EFL_VPATH_FILE_EVENT_FAILED))

#endif
