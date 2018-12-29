#ifndef _EFL_UI_VIEW_EO_H_
#define _EFL_UI_VIEW_EO_H_

#ifndef _EFL_UI_VIEW_EO_CLASS_TYPE
#define _EFL_UI_VIEW_EO_CLASS_TYPE

typedef Eo Efl_Ui_View;

#endif

#ifndef _EFL_UI_VIEW_EO_TYPES
#define _EFL_UI_VIEW_EO_TYPES


#endif
/** Efl UI view interface
 *
 * @ingroup Efl_Ui_View
 */
#define EFL_UI_VIEW_INTERFACE efl_ui_view_interface_get()

EWAPI const Efl_Class *efl_ui_view_interface_get(void);

/**
 * @brief Model that is/will be
 *
 * @param[in] model Efl model
 *
 * @ingroup Efl_Ui_View
 */
EOAPI void efl_ui_view_model_set(Eo *obj, Efl_Model *model);

/**
 * @brief Model that is/will be
 *
 * @return Efl model
 *
 * @ingroup Efl_Ui_View
 */
EOAPI Efl_Model *efl_ui_view_model_get(const Eo *obj);

#endif
