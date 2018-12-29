#ifndef _EFL_NET_CONTROL_ACCESS_POINT_EO_LEGACY_H_
#define _EFL_NET_CONTROL_ACCESS_POINT_EO_LEGACY_H_

#ifndef _EFL_NET_CONTROL_ACCESS_POINT_EO_CLASS_TYPE
#define _EFL_NET_CONTROL_ACCESS_POINT_EO_CLASS_TYPE

typedef Eo Efl_Net_Control_Access_Point;

#endif

#ifndef _EFL_NET_CONTROL_ACCESS_POINT_EO_TYPES
#define _EFL_NET_CONTROL_ACCESS_POINT_EO_TYPES

/** Provides the access point state.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
typedef enum
{
  EFL_NET_CONTROL_ACCESS_POINT_STATE_IDLE = 0, /**< Nothing is happening with
                                                * this access point */
  EFL_NET_CONTROL_ACCESS_POINT_STATE_ASSOCIATION, /**< The access point is
                                                   * trying to associate
                                                   * itself, this is the first
                                                   * state after a connection
                                                   * attempt */
  EFL_NET_CONTROL_ACCESS_POINT_STATE_CONFIGURATION, /**< The access point is
                                                     * configuring itself, such
                                                     * as DHCP */
  EFL_NET_CONTROL_ACCESS_POINT_STATE_LOCAL, /**< The access point is connected,
                                             * but the internet connection
                                             * wasn't validated */
  EFL_NET_CONTROL_ACCESS_POINT_STATE_ONLINE, /**< The access point is connected
                                              * and the internet connected was
                                              * validated */
  EFL_NET_CONTROL_ACCESS_POINT_STATE_DISCONNECT, /**< The access point is
                                                  * disconnecting */
  EFL_NET_CONTROL_ACCESS_POINT_STATE_FAILURE /**< A connection attempt failed,
                                              * @ref Efl.Net.Control.Access_Point.error
                                              * will provide more details */
} Efl_Net_Control_Access_Point_State;

/** The connection error reason.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
typedef enum
{
  EFL_NET_CONTROL_ACCESS_POINT_ERROR_NONE = 0, /**< All right, no errors */
  EFL_NET_CONTROL_ACCESS_POINT_ERROR_OUT_OF_RANGE, /**< Wireless device is out
                                                    * of range */
  EFL_NET_CONTROL_ACCESS_POINT_ERROR_PIN_MISSING, /**< PIN was required and is
                                                   * missing */
  EFL_NET_CONTROL_ACCESS_POINT_ERROR_DHCP_FAILED, /**< DHCP failed to provide
                                                   * configuration */
  EFL_NET_CONTROL_ACCESS_POINT_ERROR_CONNECT_FAILED, /**< Could not connect to
                                                      * access point */
  EFL_NET_CONTROL_ACCESS_POINT_ERROR_LOGIN_FAILED /**< Login or authentication
                                                   * information was incorrect,
                                                   * agent_request_input event
                                                   * may be emitted */
} Efl_Net_Control_Access_Point_Error;

/** Bitwise-able securities supported by an access point.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
typedef enum
{
  EFL_NET_CONTROL_ACCESS_POINT_SECURITY_UNKNOW = 0, /**< Unknown */
  EFL_NET_CONTROL_ACCESS_POINT_SECURITY_NONE = 1 /* 1 >> 0 */, /**< Open access, no security */
  EFL_NET_CONTROL_ACCESS_POINT_SECURITY_WEP = 2 /* 1 >> 1 */, /**< WEP */
  EFL_NET_CONTROL_ACCESS_POINT_SECURITY_PSK = 4 /* 1 >> 2 */, /**< PSK (Pre Shared Key), such as WPA
                                                               * or RSN */
  EFL_NET_CONTROL_ACCESS_POINT_SECURITY_IEEE802_1X = 8 /* 1 >> 3 */ /**< IEEE 802.1X */
} Efl_Net_Control_Access_Point_Security;

/** The method used to configure IPv4
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
typedef enum
{
  EFL_NET_CONTROL_ACCESS_POINT_IPV4_METHOD_OFF = 0, /**< IPv4 is disabled */
  EFL_NET_CONTROL_ACCESS_POINT_IPV4_METHOD_DHCP, /**< IPv4 is configured using
                                                  * DHCP */
  EFL_NET_CONTROL_ACCESS_POINT_IPV4_METHOD_MANUAL, /**< IPv4 is manually set
                                                    * using address, netmask
                                                    * and gateway */
  EFL_NET_CONTROL_ACCESS_POINT_IPV4_METHOD_UNSET /**< Only to be used with
                                                  * @ref Efl.Net.Control.Access_Point.configuration_ipv4
                                                  */
} Efl_Net_Control_Access_Point_Ipv4_Method;

/** The method used to configure IPv6
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
typedef enum
{
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_OFF = 0, /**< IPv6 is disabled */
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_FIXED, /**< IPv6 is fixed by operator
                                                   * and cannot be changed */
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_MANUAL, /**< IPv6 is manually set
                                                    * using address, netmask
                                                    * and gateway */
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_AUTO_PRIVACY_NONE, /**< IPv6 is set using dhcp or using a
                                                               * tunnel6to4, no privacy extensions
                                                               * should be used */
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_AUTO_PRIVACY_PUBLIC, /**< IPv6 is set using dhcp or using a
                                                                 * tunnel6to4, privacy extensions are
                                                                 * used and the system prefers a public
                                                                 * IP address over temporary addresses
                                                                 */
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_AUTO_PRIVACY_TEMPORARY, /**< IPv6 is set using dhcp or using a
                                                                    * tunnel6to4, privacy extensions are
                                                                    * used and the system prefers a
                                                                    * temporary IP address over public
                                                                    * addresses */
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_TUNNEL6TO4, /**< IPv6 was configured
                                                        * using a 6-to-4
                                                        * tunnel. This cannot
                                                        * be set by the user,
                                                        * which is expected to
                                                        * set "auto" instead */
  EFL_NET_CONTROL_ACCESS_POINT_IPV6_METHOD_UNSET /**< Only to be used with
                                                  * @ref Efl.Net.Control.Access_Point.configuration_ipv6
                                                  */
} Efl_Net_Control_Access_Point_Ipv6_Method;

/** The method used to configure Proxy.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Access_Point
 */
typedef enum
{
  EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_OFF = 0, /**< Direct connection to
                                                      * the internet, no proxy
                                                      * to be used */
  EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_AUTO, /**< Proxy is autoconfigured
                                                   * using
                                                   * Proxy-Auto-Configuration
                                                   * (PAC) using given URL */
  EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_MANUAL, /**< Proxy is configured
                                                     * manually using servers
                                                     * and excludes */
  EFL_NET_CONTROL_ACCESS_POINT_PROXY_METHOD_UNSET /**< Only to be used with
                                                   * @ref Efl.Net.Control.Access_Point.configuration_proxy
                                                   */
} Efl_Net_Control_Access_Point_Proxy_Method;


#endif



































#endif
