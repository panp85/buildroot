#ifndef _EFL_NET_CONTROL_TECHNOLOGY_EO_LEGACY_H_
#define _EFL_NET_CONTROL_TECHNOLOGY_EO_LEGACY_H_

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









#endif
