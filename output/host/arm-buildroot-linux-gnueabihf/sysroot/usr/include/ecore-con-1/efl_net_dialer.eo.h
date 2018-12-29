#ifndef _EFL_NET_DIALER_EO_H_
#define _EFL_NET_DIALER_EO_H_

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
/**
 * @brief Creates a client socket to reach a remote peer.
 *
 * The connection process starts when @ref efl_net_dialer_dial is executed,
 * this allows implementations to request more complex setup that would require
 * a live object handle that is not possible during construction.
 *
 * The socket should be considered connected and ready to use only when
 * "connected" event is dispatched, by then @ref efl_io_reader_can_read_get and
 * @ref efl_io_writer_can_write_get should change accordingly.
 *
 * Once the socket is closed, @ref efl_io_closer_closed_get will be called and
 * the "closed" event is dispatched.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer
 */
#define EFL_NET_DIALER_INTERFACE efl_net_dialer_interface_get()

EWAPI const Efl_Class *efl_net_dialer_interface_get(void);

/**
 * @brief Dials to the remote peer.
 *
 * This method starts the connection process, resolving address and then
 * proceeding to the actual connection.
 *
 * Once the connection is fully setup, "connected" event is dispatched.
 *
 * @param[in] address Remote address
 *
 * @return 0 on success, error code otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer
 */
EOAPI Eina_Error efl_net_dialer_dial(Eo *obj, const char *address) EINA_ARG_NONNULL(2);

#ifdef EFL_NET_DIALER_PROTECTED
/**
 * @brief Returns the address given to @ref efl_net_dialer_dial.
 *
 * If the resolved address is desired, then listen to "resolved" event and use
 * the @ref efl_net_socket_address_remote_get property.
 *
 * @param[in] address Remote address
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer
 */
EOAPI void efl_net_dialer_address_dial_set(Eo *obj, const char *address);
#endif

/**
 * @brief Returns the address given to @ref efl_net_dialer_dial.
 *
 * If the resolved address is desired, then listen to "resolved" event and use
 * the @ref efl_net_socket_address_remote_get property.
 *
 * @return Remote address
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer
 */
EOAPI const char *efl_net_dialer_address_dial_get(const Eo *obj);

#ifdef EFL_NET_DIALER_PROTECTED
/**
 * @brief Returns whenever the socket is connected or not.
 *
 * Whenever this property becomes true, "connected" event should be dispatched.
 *
 * @param[in] connected @c true if the socket is connected, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer
 */
EOAPI void efl_net_dialer_connected_set(Eo *obj, Eina_Bool connected);
#endif

/**
 * @brief Returns whenever the socket is connected or not.
 *
 * Whenever this property becomes true, "connected" event should be dispatched.
 *
 * @return @c true if the socket is connected, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer
 */
EOAPI Eina_Bool efl_net_dialer_connected_get(const Eo *obj);

/**
 * @brief Controls/retrieves if the dialer should use a proxy.
 *
 * The proxy is an URL in the form:
 *
 * - protocol://username:password\@proxyserver:port
 *
 * Where protocol is defined per class, such as a TCP or UDP dialer will use
 * 'socks4', 'socks4a', 'socks5' or 'socks5h'; while http and websocket will
 * want those or 'http'.
 *
 * Whenever appropriate dialers may use system proxy if the proxy is NULL (the
 * default). To forcefully disable proxy, use an empty string ("").
 *
 * - http://username:password\@proxyserver:port -
 * http://username\@proxyserver:port - http://proxyserver:port -
 * http://proxyserver  (default port) -
 * socks5://username:password\@proxyserver:port (SOCKSv5) -
 * socks5h://username\@proxyserver:port (let socks server to resolve domain) -
 * socks5://proxyserver:port - socks5://proxyserver (default port 1080) -
 * socks4a://proxyserver:port (SOCKSv4 and let socks server to resolve domain)
 * - socks4://proxyserver:port (SOCKSv4)
 *
 * @param[in] proxy_url May be empty or NULL to unset
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer
 */
EOAPI void efl_net_dialer_proxy_set(Eo *obj, const char *proxy_url);

/**
 * @brief Controls/retrieves if the dialer should use a proxy.
 *
 * The proxy is an URL in the form:
 *
 * - protocol://username:password\@proxyserver:port
 *
 * Where protocol is defined per class, such as a TCP or UDP dialer will use
 * 'socks4', 'socks4a', 'socks5' or 'socks5h'; while http and websocket will
 * want those or 'http'.
 *
 * Whenever appropriate dialers may use system proxy if the proxy is NULL (the
 * default). To forcefully disable proxy, use an empty string ("").
 *
 * - http://username:password\@proxyserver:port -
 * http://username\@proxyserver:port - http://proxyserver:port -
 * http://proxyserver  (default port) -
 * socks5://username:password\@proxyserver:port (SOCKSv5) -
 * socks5h://username\@proxyserver:port (let socks server to resolve domain) -
 * socks5://proxyserver:port - socks5://proxyserver (default port 1080) -
 * socks4a://proxyserver:port (SOCKSv4 and let socks server to resolve domain)
 * - socks4://proxyserver:port (SOCKSv4)
 *
 * @return May be empty or NULL to unset
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer
 */
EOAPI const char *efl_net_dialer_proxy_get(const Eo *obj);

/**
 * @brief The timeout in seconds to use for dialing/connecting.
 *
 * This should be set before dialing.
 *
 * @param[in] seconds Timeout value is seconds
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer
 */
EOAPI void efl_net_dialer_timeout_dial_set(Eo *obj, double seconds);

/**
 * @brief The timeout in seconds to use for dialing/connecting.
 *
 * This should be set before dialing.
 *
 * @return Timeout value is seconds
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer
 */
EOAPI double efl_net_dialer_timeout_dial_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_NET_DIALER_EVENT_RESOLVED;

/**
 * @brief Notifies @ref efl_net_dialer_address_dial_get was resolved to
 * @ref efl_net_socket_address_remote_get.
 *
 * This is emitted before "connected" and may be emitted from
 * @ref efl_finalize, thus be sure to connect the callbacks during the object
 * construction.
 *
 * Some protocols allows redirects and this may be emitted multiple times, such
 * as HTTP.
 *
 * @return const char *
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer
 */
#define EFL_NET_DIALER_EVENT_RESOLVED (&(_EFL_NET_DIALER_EVENT_RESOLVED))

EWAPI extern const Efl_Event_Description _EFL_NET_DIALER_EVENT_ERROR;

/** Some error happened and the socket stopped working.
 * @return Eina_Error
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer
 */
#define EFL_NET_DIALER_EVENT_ERROR (&(_EFL_NET_DIALER_EVENT_ERROR))

EWAPI extern const Efl_Event_Description _EFL_NET_DIALER_EVENT_CONNECTED;

/** Notifies the socket is connected to the remote peer.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer
 */
#define EFL_NET_DIALER_EVENT_CONNECTED (&(_EFL_NET_DIALER_EVENT_CONNECTED))

#endif
