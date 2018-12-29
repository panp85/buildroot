#ifndef _EFL_UI_LAYOUT_INTERNAL_TABLE_EO_H_
#define _EFL_UI_LAYOUT_INTERNAL_TABLE_EO_H_

#ifndef _EFL_UI_LAYOUT_INTERNAL_TABLE_EO_CLASS_TYPE
#define _EFL_UI_LAYOUT_INTERNAL_TABLE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Layout_Internal_Table;

#endif

#ifndef _EFL_UI_LAYOUT_INTERNAL_TABLE_EO_TYPES
#define _EFL_UI_LAYOUT_INTERNAL_TABLE_EO_TYPES


#endif
/**
 * @brief Represents a Table created as part of a layout.
 *
 * Can not be deleted, this is only a representation of an internal object of
 * an EFL layout.
 *
 * @ingroup Efl_Ui_Layout_Internal_Table
 */
#define EFL_UI_LAYOUT_INTERNAL_TABLE_CLASS efl_ui_layout_internal_table_class_get()

EWAPI const Efl_Class *efl_ui_layout_internal_table_class_get(void);

#ifdef EFL_UI_LAYOUT_INTERNAL_TABLE_PROTECTED
/**
 * @brief Real part property
 *
 * @param[in] layout Real part object
 * @param[in] part Real part name
 *
 * @ingroup Efl_Ui_Layout_Internal_Table
 */
EOAPI void efl_ui_layout_internal_table_real_part_set(Eo *obj, Efl_Object *layout, const char *part);
#endif

#endif
