#ifndef _EFL_UI_MENU_EO_H_
#define _EFL_UI_MENU_EO_H_

#ifndef _EFL_UI_MENU_EO_CLASS_TYPE
#define _EFL_UI_MENU_EO_CLASS_TYPE

typedef Eo Efl_Ui_Menu;

#endif

#ifndef _EFL_UI_MENU_EO_TYPES
#define _EFL_UI_MENU_EO_TYPES


#endif
/** Efl UI menu interface
 *
 * @ingroup Efl_Ui_Menu
 */
#define EFL_UI_MENU_INTERFACE efl_ui_menu_interface_get()

EWAPI const Efl_Class *efl_ui_menu_interface_get(void);

/**
 * @brief Get the selected item in the widget.
 *
 * @return The selected item or @c null.
 *
 * @ingroup Efl_Ui_Menu
 */
EOAPI Efl_Ui_Item *efl_ui_menu_selected_item_get(const Eo *obj);

/**
 * @brief Get the first item in the widget.
 *
 * @return The first item or @c null.
 *
 * @ingroup Efl_Ui_Menu
 */
EOAPI Efl_Ui_Item *efl_ui_menu_first_item_get(const Eo *obj);

/**
 * @brief Get the last item in the widget.
 *
 * @return The last item or @c null.
 *
 * @ingroup Efl_Ui_Menu
 */
EOAPI Efl_Ui_Item *efl_ui_menu_last_item_get(const Eo *obj);

/**
 * @brief Returns a list of the widget item.
 *
 * @return Iterator to widget items
 *
 * @ingroup Efl_Ui_Menu
 */
EOAPI Eina_Iterator *efl_ui_menu_items_get(const Eo *obj) EINA_WARN_UNUSED_RESULT;

#endif
