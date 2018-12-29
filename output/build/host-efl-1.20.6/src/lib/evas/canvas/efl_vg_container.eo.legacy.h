#ifndef _EFL_VG_CONTAINER_EO_LEGACY_H_
#define _EFL_VG_CONTAINER_EO_LEGACY_H_

#ifndef _EFL_VG_CONTAINER_EO_CLASS_TYPE
#define _EFL_VG_CONTAINER_EO_CLASS_TYPE

typedef Eo Efl_VG_Container;

#endif

#ifndef _EFL_VG_CONTAINER_EO_TYPES
#define _EFL_VG_CONTAINER_EO_TYPES


#endif

/**
 * @brief Get child of container
 *
 * @param[in] name Child node name
 *
 * @return Child object
 *
 * @ingroup Efl_VG_Container
 */
EAPI Efl_VG *evas_vg_container_child_get(Efl_VG_Container *obj, const char *name);

/**
 * @brief Get all children of container
 *
 * @return Iterator to children
 *
 * @ingroup Efl_VG_Container
 */
EAPI Eina_Iterator *evas_vg_container_children_get(Efl_VG_Container *obj) EINA_WARN_UNUSED_RESULT;

#endif
