#ifndef _EFL_VPATH_CORE_EO_H_
#define _EFL_VPATH_CORE_EO_H_

#ifndef _EFL_VPATH_CORE_EO_CLASS_TYPE
#define _EFL_VPATH_CORE_EO_CLASS_TYPE

typedef Eo Efl_Vpath_Core;

#endif

#ifndef _EFL_VPATH_CORE_EO_TYPES
#define _EFL_VPATH_CORE_EO_TYPES


#endif
/** Core EFL implementation of a Vpath system
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_Core
 */
#define EFL_VPATH_CORE_CLASS efl_vpath_core_class_get()

EWAPI const Efl_Class *efl_vpath_core_class_get(void);

/**
 * @brief This gets the global EFL Core Vpath class - only 1 - singleton
 *
 * @return Get the singleton core vpath
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_Core
 */
EOAPI Efl_Vpath_Core *efl_vpath_core_get(const Eo *obj);

/**
 * @brief A Meta key is a mapping from a virtual path to a real one
 *
 * @param[in] key The magic path key being looked up
 * @param[in] path The real path the key maps to
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_Core
 */
EOAPI void efl_vpath_core_meta_set(Eo *obj, const char *key, const char *path);

/**
 * @brief This returns the real path set for a Meta key, or NULL if not
 *
 * @param[in] key The magic path key being looked up
 *
 * @return Real file path
 *
 * @since 1.18
 *
 * @ingroup Efl_Vpath_Core
 */
EOAPI const char *efl_vpath_core_meta_get(Eo *obj, const char *key);

#endif
