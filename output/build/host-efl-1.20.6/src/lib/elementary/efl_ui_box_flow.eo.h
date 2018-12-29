#ifndef _EFL_UI_BOX_FLOW_EO_H_
#define _EFL_UI_BOX_FLOW_EO_H_

#ifndef _EFL_UI_BOX_FLOW_EO_CLASS_TYPE
#define _EFL_UI_BOX_FLOW_EO_CLASS_TYPE

typedef Eo Efl_Ui_Box_Flow;

#endif

#ifndef _EFL_UI_BOX_FLOW_EO_TYPES
#define _EFL_UI_BOX_FLOW_EO_TYPES


#endif
/** A custom layout engine for @ref Efl_Ui_Box.
 *
 * @ingroup Efl_Ui_Box_Flow
 */
#define EFL_UI_BOX_FLOW_CLASS efl_ui_box_flow_class_get()

EWAPI const Efl_Class *efl_ui_box_flow_class_get(void);

/**
 * @brief Box flow homogenous property
 *
 * @param[in] val @c true if the box flow layout is homogenous, @c false
 * otherwise
 *
 * @ingroup Efl_Ui_Box_Flow
 */
EOAPI void efl_ui_box_flow_homogenous_set(Eo *obj, Eina_Bool val);

/**
 * @brief Box flow homogenous property
 *
 * @return @c true if the box flow layout is homogenous, @c false otherwise
 *
 * @ingroup Efl_Ui_Box_Flow
 */
EOAPI Eina_Bool efl_ui_box_flow_homogenous_get(const Eo *obj);

/**
 * @brief Box flow maximum size property
 *
 * @param[in] val @c true if the box flow layout has the maximal size, @c false
 * otherwise
 *
 * @ingroup Efl_Ui_Box_Flow
 */
EOAPI void efl_ui_box_flow_max_size_set(Eo *obj, Eina_Bool val);

/**
 * @brief Box flow maximum size property
 *
 * @return @c true if the box flow layout has the maximal size, @c false
 * otherwise
 *
 * @ingroup Efl_Ui_Box_Flow
 */
EOAPI Eina_Bool efl_ui_box_flow_max_size_get(const Eo *obj);

#endif
