#ifndef _EVAS_VG_EO_H_
#define _EVAS_VG_EO_H_

#ifndef _EVAS_VG_EO_CLASS_TYPE
#define _EVAS_VG_EO_CLASS_TYPE

typedef Eo Evas_VG;

#endif

#ifndef _EVAS_VG_EO_TYPES
#define _EVAS_VG_EO_TYPES


#endif
/** Efl vector graphics class
 *
 * @ingroup Evas_VG
 */
#define EVAS_VG_CLASS evas_vg_class_get()

EWAPI const Efl_Class *evas_vg_class_get(void);

/**
 * @brief Get the root node of the evas_object_vg.
 *
 * @note To manually create the shape object and show in the Vg object canvas
 * you must create the hierarchy and set the parent as root node.
 *
 * @return Root node of the VG canvas.
 *
 * @since 1.14
 *
 * @ingroup Evas_VG
 */
EOAPI Efl_Object *evas_obj_vg_root_node_get(const Eo *obj);

#endif
