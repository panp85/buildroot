#ifndef _EFL_NET_SESSION_EO_LEGACY_H_
#define _EFL_NET_SESSION_EO_LEGACY_H_

#ifndef _EFL_NET_SESSION_EO_CLASS_TYPE
#define _EFL_NET_SESSION_EO_CLASS_TYPE

typedef Eo Efl_Net_Session;

#endif

#ifndef _EFL_NET_SESSION_EO_TYPES
#define _EFL_NET_SESSION_EO_TYPES

/** Provides the session connectivity state.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Session
 */
typedef enum
{
  EFL_NET_SESSION_STATE_OFFLINE = 0, /**< No access point is connected */
  EFL_NET_SESSION_STATE_LOCAL, /**< At least one access point was connected and
                                * the internet connectio wasn't verified */
  EFL_NET_SESSION_STATE_ONLINE /**< At least one access point was connected and
                                * the internet was verified */
} Efl_Net_Session_State;

/** Bitwise-able technologies to allow for a network session.
 *
 * @since 1.9
 *
 * @ingroup Efl_Net_Session
 */
typedef enum
{
  EFL_NET_SESSION_TECHNOLOGY_UNKNOWN = 0, /**< Type: unknown */
  EFL_NET_SESSION_TECHNOLOGY_ETHERNET = 2 /* 1 >> 1 */, /**< Type: ethernet */
  EFL_NET_SESSION_TECHNOLOGY_WIFI = 4 /* 1 >> 2 */, /**< Type: WiFi */
  EFL_NET_SESSION_TECHNOLOGY_BLUETOOTH = 8 /* 1 >> 3 */, /**< Type: Bluetooth */
  EFL_NET_SESSION_TECHNOLOGY_CELLULAR = 16 /* 1 >> 4 */, /**< Type:
                                                          * cellular/mobile */
  EFL_NET_SESSION_TECHNOLOGY_VPN = 64 /* 1 >> 6 */, /**< Type: Virtual Private
                                                     * Network */
  EFL_NET_SESSION_TECHNOLOGY_GADGET = 128 /* 1 >> 7 */, /**< Type: USB gadget */
  EFL_NET_SESSION_TECHNOLOGY_ALL = 222 /* ((((Efl.Net.Session.Technology.ethernet ^ Efl.Net.Session.Technology.wifi) ^ Efl.Net.Session.Technology.bluetooth) ^ Efl.Net.Session.Technology.cellular) ^ Efl.Net.Session.Technology.vpn) ^ Efl.Net.Session.Technology.gadget */ /**< All technology types */
} Efl_Net_Session_Technology;


#endif









#endif
