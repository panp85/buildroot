#ifndef _EFL_UI_FACTORY_EO_H_
#define _EFL_UI_FACTORY_EO_H_

#ifndef _EFL_UI_FACTORY_EO_CLASS_TYPE
#define _EFL_UI_FACTORY_EO_CLASS_TYPE

typedef Eo Efl_Ui_Factory;

#endif

#ifndef _EFL_UI_FACTORY_EO_TYPES
#define _EFL_UI_FACTORY_EO_TYPES


#endif
/** Efl UI factory interface
 *
 * @ingroup Efl_Ui_Factory
 */
#define EFL_UI_FACTORY_INTERFACE efl_ui_factory_interface_get()

EWAPI const Efl_Class *efl_ui_factory_interface_get(void);

/**
 * @brief Create a UI object from the necessary properties in the specified
 * model.
 *
 * @param[in] model Efl model
 * @param[in] parent Efl canvas
 *
 * @return Created UI object
 *
 * @ingroup Efl_Ui_Factory
 */
EOAPI Efl_Gfx *efl_ui_factory_create(Eo *obj, Efl_Model *model, Efl_Gfx *parent);

/**
 * @brief Release a UI object and disconnect from models.
 *
 * @param[in] ui_view Efl canvas
 *
 * @ingroup Efl_Ui_Factory
 */
EOAPI void efl_ui_factory_release(Eo *obj, Efl_Gfx *ui_view);

#endif
