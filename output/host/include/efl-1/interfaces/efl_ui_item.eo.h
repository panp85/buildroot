#ifndef _EFL_UI_ITEM_EO_H_
#define _EFL_UI_ITEM_EO_H_

#ifndef _EFL_UI_ITEM_EO_CLASS_TYPE
#define _EFL_UI_ITEM_EO_CLASS_TYPE

typedef Eo Efl_Ui_Item;

#endif

#ifndef _EFL_UI_ITEM_EO_TYPES
#define _EFL_UI_ITEM_EO_TYPES


#endif
/** Efl UI item interface
 *
 * @ingroup Efl_Ui_Item
 */
#define EFL_UI_ITEM_INTERFACE efl_ui_item_interface_get()

EWAPI const Efl_Class *efl_ui_item_interface_get(void);

/**
 * @brief Get the item before this one in the widget's list of items.
 *
 * See also @ref efl_ui_item_next_get.
 *
 * @return The item before the object in its parent's list. If there is no
 * previous item or in case of error, @c null is returned.
 *
 * @ingroup Efl_Ui_Item
 */
EOAPI Efl_Ui_Item *efl_ui_item_prev_get(const Eo *obj);

/**
 * @brief Get the item after this one in the widget's list of items.
 *
 * See also @ref efl_ui_item_prev_get.
 *
 * @return The item after the object in its parent's list. If there is no next
 * item or in case of error, @c null is returned.
 *
 * @ingroup Efl_Ui_Item
 */
EOAPI Efl_Ui_Item *efl_ui_item_next_get(const Eo *obj);

/**
 * @brief Indicates whether this item is currently selected.
 *
 * Set the selected state of @c item.
 *
 * This sets the selected state of the given item @c it. @c true for selected,
 * @c false for not selected.
 *
 * If a new item is selected the previously selected will be unselected.
 * Previously selected item can be retrieved with
 * @ref efl_ui_menu_selected_item_get.
 *
 * Selected items will be highlighted.
 *
 * @param[in] selected The selection state.
 *
 * @ingroup Efl_Ui_Item
 */
EOAPI void efl_ui_item_selected_set(Eo *obj, Eina_Bool selected);

/**
 * @brief Indicates whether this item is currently selected.
 *
 * Get the selected state of this item.
 *
 * @return The selection state.
 *
 * @ingroup Efl_Ui_Item
 */
EOAPI Eina_Bool efl_ui_item_selected_get(const Eo *obj);

#endif
