#ifndef _EFL_UI_MODEL_FACTORY_CONNECT_EO_H_
#define _EFL_UI_MODEL_FACTORY_CONNECT_EO_H_

#ifndef _EFL_UI_MODEL_FACTORY_CONNECT_EO_CLASS_TYPE
#define _EFL_UI_MODEL_FACTORY_CONNECT_EO_CLASS_TYPE

typedef Eo Efl_Ui_Model_Factory_Connect;

#endif

#ifndef _EFL_UI_MODEL_FACTORY_CONNECT_EO_TYPES
#define _EFL_UI_MODEL_FACTORY_CONNECT_EO_TYPES


#endif
/** Efl UI model factory interface
 *
 * @ingroup Efl_Ui_Model_Factory_Connect
 */
#define EFL_UI_MODEL_FACTORY_CONNECT_INTERFACE efl_ui_model_factory_connect_interface_get()

EWAPI const Efl_Class *efl_ui_model_factory_connect_interface_get(void);

/**
 * @brief Connect factory
 *
 * @param[in] name Model name
 * @param[in] factory Efl factory
 *
 * @ingroup Efl_Ui_Model_Factory_Connect
 */
EOAPI void efl_ui_model_factory_connect(Eo *obj, const char *name, Efl_Ui_Factory *factory);

#endif
