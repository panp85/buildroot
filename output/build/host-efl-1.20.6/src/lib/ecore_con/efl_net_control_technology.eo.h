#ifndef _EFL_NET_CONTROL_TECHNOLOGY_EO_H_
#define _EFL_NET_CONTROL_TECHNOLOGY_EO_H_

#ifndef _EFL_NET_CONTROL_TECHNOLOGY_EO_CLASS_TYPE
#define _EFL_NET_CONTROL_TECHNOLOGY_EO_CLASS_TYPE

typedef Eo Efl_Net_Control_Technology;

#endif

#ifndef _EFL_NET_CONTROL_TECHNOLOGY_EO_TYPES
#define _EFL_NET_CONTROL_TECHNOLOGY_EO_TYPES

/** Technology types
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Technology
 */
typedef enum
{
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_UNKNOWN = 0, /**< Type: unknown */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_SYSTEM, /**< Type: system */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_ETHERNET, /**< Type: ethernet */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_WIFI, /**< Type: WiFi */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_BLUETOOTH, /**< Type: Bluetooth */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_CELLULAR, /**< Type: cellular/mobile */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_GPS, /**< Type: GPS */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_VPN, /**< Type: Virtual Private Network */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_GADGET, /**< Type: USB gadget */
  EFL_NET_CONTROL_TECHNOLOGY_TYPE_P2P /**< Type: Peer-2-Peer */
} Efl_Net_Control_Technology_Type;


#endif
/**
 * @brief A technology that enables network access points to be controlled.
 *
 * The @ref Efl_Net_Control is composed of multiple technologies, each can be
 * disabled/enabled with @ref efl_net_control_technology_powered_get property.
 *
 * When powered, the technology will dynamically add and delete access points
 * to be available in @ref efl_net_control_access_points_get.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Technology
 */
#define EFL_NET_CONTROL_TECHNOLOGY_CLASS efl_net_control_technology_class_get()

EWAPI const Efl_Class *efl_net_control_technology_class_get(void);

/**
 * @brief If @c true the technology is available. If @c false technology is
 * disabled and if possible rfkill is used.
 *
 * @param[in] powered @c true if technology is powered, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Technology
 */
EOAPI void efl_net_control_technology_powered_set(Eo *obj, Eina_Bool powered);

/**
 * @brief If @c true the technology is available. If @c false technology is
 * disabled and if possible rfkill is used.
 *
 * @return @c true if technology is powered, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Technology
 */
EOAPI Eina_Bool efl_net_control_technology_powered_get(const Eo *obj);

/**
 * @brief Tethering allows the default access point to be bridged to all
 * clients connected through the technology.
 *
 * A common case is to use the device as a router, such as a phone doing
 * tethering allows a laptop to connect to 4G network.
 *
 * @param[in] enabled Whenever to enable or disable tethering for this
 * technology
 * @param[in] identifier The name to identify this tethering, in WiFi it will
 * translate to SSID.
 * @param[in] passphrase The passphrase for this tethering access, in WiFi it
 * will translate to WPA passphrase.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Technology
 */
EOAPI void efl_net_control_technology_tethering_set(Eo *obj, Eina_Bool enabled, const char *identifier, const char *passphrase);

/**
 * @brief Tethering allows the default access point to be bridged to all
 * clients connected through the technology.
 *
 * A common case is to use the device as a router, such as a phone doing
 * tethering allows a laptop to connect to 4G network.
 *
 * @param[out] enabled Whenever to enable or disable tethering for this
 * technology
 * @param[out] identifier The name to identify this tethering, in WiFi it will
 * translate to SSID.
 * @param[out] passphrase The passphrase for this tethering access, in WiFi it
 * will translate to WPA passphrase.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Technology
 */
EOAPI void efl_net_control_technology_tethering_get(const Eo *obj, Eina_Bool *enabled, const char **identifier, const char **passphrase);

/**
 * @brief If @c true the technology has at least one access point connected.
 *
 * @return @c true if technology is connected, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Technology
 */
EOAPI Eina_Bool efl_net_control_technology_connected_get(const Eo *obj);

/**
 * @brief The user-friendly technology name
 *
 * @return Technology name
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Technology
 */
EOAPI const char *efl_net_control_technology_name_get(const Eo *obj);

/**
 * @brief The technology type, such as "ethernet" or "wifi"
 *
 * @return Technology type
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Technology
 */
EOAPI Efl_Net_Control_Technology_Type efl_net_control_technology_type_get(const Eo *obj);

/**
 * @brief Explicitly trigger a scan.
 *
 * The scan will happen asynchronously in the background, with the results
 * being delivered by events in the technology, @ref Efl_Net_Control or
 * @ref Efl_Net_Control_Access_Point associated with the technology. For
 * example, scan on WiFi will add and delete access points.
 *
 * It is worth to mention that explicit scans should be avoided. Rare cases are
 * when user requested them, like entering a configuration dialog which demands
 * fresh state. Otherwise prefer to let the system passively do scans in a
 * timely manner.
 *
 * @return Future return for finished background scan
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Technology
 */
EOAPI Efl_Future *efl_net_control_technology_scan(Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_NET_CONTROL_TECHNOLOGY_EVENT_CHANGED;

/** Called when some properties were changed.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Technology
 */
#define EFL_NET_CONTROL_TECHNOLOGY_EVENT_CHANGED (&(_EFL_NET_CONTROL_TECHNOLOGY_EVENT_CHANGED))

#endif
