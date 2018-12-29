#ifndef _EFL_VPATH_MANAGER_EO_H_
#define _EFL_VPATH_MANAGER_EO_H_

#ifndef _EFL_VPATH_MANAGER_EO_CLASS_TYPE
#define _EFL_VPATH_MANAGER_EO_CLASS_TYPE

typedef Eo Efl_Vpath_Manager;

#endif

#ifndef _EFL_VPATH_MANAGER_EO_TYPES
#define _EFL_VPATH_MANAGER_EO_TYPES


#endif
/** Vpath Manager manages multiple VPath objects that remap/download
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_Manager
 */
#define EFL_VPATH_MANAGER_CLASS efl_vpath_manager_class_get()

EWAPI const Efl_Class *efl_vpath_manager_class_get(void);

/**
 * @brief This class function fetches a Vpath File given an input path
 *
 * @param[in] path The input virtual file path to fetch
 *
 * @return An object representing the file
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_Manager
 */
EOAPI Efl_Vpath_File *efl_vpath_manager_fetch(const Eo *obj, const char *path);

/**
 * @brief Register a vpath with the manager
 *
 * @param[in] priority Search order - higher values tried first
 * @param[in] vpath A Vpath implementation object
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_Manager
 */
EOAPI void efl_vpath_manager_register(const Eo *obj, int priority, Efl_Vpath *vpath) EINA_ARG_NONNULL(3);

/**
 * @brief Unregister a vpath from the manager
 *
 * @param[in] vpath A Vpath implementation object
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_Manager
 */
EOAPI void efl_vpath_manager_unregister(const Eo *obj, Efl_Vpath *vpath) EINA_ARG_NONNULL(2);

#endif
