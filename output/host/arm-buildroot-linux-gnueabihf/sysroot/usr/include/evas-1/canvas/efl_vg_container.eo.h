#ifndef _EFL_VG_CONTAINER_EO_H_
#define _EFL_VG_CONTAINER_EO_H_

#ifndef _EFL_VG_CONTAINER_EO_CLASS_TYPE
#define _EFL_VG_CONTAINER_EO_CLASS_TYPE

typedef Eo Efl_VG_Container;

#endif

#ifndef _EFL_VG_CONTAINER_EO_TYPES
#define _EFL_VG_CONTAINER_EO_TYPES


#endif
/** Efl vector graphics container class
 *
 * @ingroup Efl_VG_Container
 */
#define EFL_VG_CONTAINER_CLASS efl_vg_container_class_get()

EWAPI const Efl_Class *efl_vg_container_class_get(void);

/**
 * @brief Get child of container
 *
 * @param[in] name Child node name
 *
 * @return Child object
 *
 * @ingroup Efl_VG_Container
 */
EOAPI Efl_VG *efl_vg_container_child_get(Eo *obj, const char *name);

/**
 * @brief Get all children of container
 *
 * @return Iterator to children
 *
 * @ingroup Efl_VG_Container
 */
EOAPI Eina_Iterator *efl_vg_container_children_get(Eo *obj) EINA_WARN_UNUSED_RESULT;

#endif
