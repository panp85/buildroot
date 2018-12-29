#ifndef _EFL_CONFIG_EO_H_
#define _EFL_CONFIG_EO_H_

#ifndef _EFL_CONFIG_EO_CLASS_TYPE
#define _EFL_CONFIG_EO_CLASS_TYPE

typedef Eo Efl_Config;

#endif

#ifndef _EFL_CONFIG_EO_TYPES
#define _EFL_CONFIG_EO_TYPES


#endif
/** A generic configuration interface, that holds key-value pairs.
 *
 * @ingroup Efl_Config
 */
#define EFL_CONFIG_INTERFACE efl_config_interface_get()

EWAPI const Efl_Class *efl_config_interface_get(void);

/**
 * @brief Set configuration
 *
 * @param[in] name Configuration option name
 * @param[in] val Configuration option value
 *
 * @return @c false in case of error: value type was invalid, the config can't
 * be changed, config does not exist...
 *
 * @ingroup Efl_Config
 */
EOAPI Eina_Bool efl_config_set(Eo *obj, const char *name, const Eina_Value *val);

/**
 * @brief Get configuration
 *
 * @param[in] name Configuration option name
 *
 * @return Configuration option value
 *
 * @ingroup Efl_Config
 */
EOAPI Eina_Value *efl_config_get(const Eo *obj, const char *name);

/**
 * @brief Returns a list of generic values under a given key.
 *
 * @param[in] name Configuration option name
 *
 * @return List of configuration option values
 *
 * @ingroup Efl_Config
 */
EOAPI Eina_Iterator *efl_config_list_get(const Eo *obj, const char *name);

#endif
