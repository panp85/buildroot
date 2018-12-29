#ifndef _EFL_UI_MODEL_CONNECT_EO_H_
#define _EFL_UI_MODEL_CONNECT_EO_H_

#ifndef _EFL_UI_MODEL_CONNECT_EO_CLASS_TYPE
#define _EFL_UI_MODEL_CONNECT_EO_CLASS_TYPE

typedef Eo Efl_Ui_Model_Connect;

#endif

#ifndef _EFL_UI_MODEL_CONNECT_EO_TYPES
#define _EFL_UI_MODEL_CONNECT_EO_TYPES


#endif
/** Efl UI model connect interface
 *
 * @ingroup Efl_Ui_Model_Connect
 */
#define EFL_UI_MODEL_CONNECT_INTERFACE efl_ui_model_connect_interface_get()

EWAPI const Efl_Class *efl_ui_model_connect_interface_get(void);

/**
 * @brief Connect property
 *
 * @param[in] name Model name
 * @param[in] property Property name
 *
 * @ingroup Efl_Ui_Model_Connect
 */
EOAPI void efl_ui_model_connect(Eo *obj, const char *name, const char *property);

#endif
