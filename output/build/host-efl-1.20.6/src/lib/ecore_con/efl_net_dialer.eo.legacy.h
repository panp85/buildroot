#ifndef _EFL_NET_DIALER_EO_LEGACY_H_
#define _EFL_NET_DIALER_EO_LEGACY_H_

#ifndef _EFL_NET_DIALER_EO_CLASS_TYPE
#define _EFL_NET_DIALER_EO_CLASS_TYPE

typedef Eo Efl_Net_Dialer;

#endif

#ifndef _EFL_NET_DIALER_EO_TYPES
#define _EFL_NET_DIALER_EO_TYPES

/** The dialer could not connect to the remote
 *
 * @ingroup Efl_Net_Dialer_Error
 */
EWAPI extern Eina_Error EFL_NET_DIALER_ERROR_COULDNT_CONNECT;

/** The dialer could not resolve the given proxy server
 *
 * @ingroup Efl_Net_Dialer_Error
 */
EWAPI extern Eina_Error EFL_NET_DIALER_ERROR_COULDNT_RESOLVE_PROXY;

/** The dialer failed to authenticate against the proxy server
 *
 * @ingroup Efl_Net_Dialer_Error
 */
EWAPI extern Eina_Error EFL_NET_DIALER_ERROR_PROXY_AUTHENTICATION_FAILED;


#endif










#endif
