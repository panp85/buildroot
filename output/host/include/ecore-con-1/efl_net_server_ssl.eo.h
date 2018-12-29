#ifndef _EFL_NET_SERVER_SSL_EO_H_
#define _EFL_NET_SERVER_SSL_EO_H_

#ifndef _EFL_NET_SERVER_SSL_EO_CLASS_TYPE
#define _EFL_NET_SERVER_SSL_EO_CLASS_TYPE

typedef Eo Efl_Net_Server_Ssl;

#endif

#ifndef _EFL_NET_SERVER_SSL_EO_TYPES
#define _EFL_NET_SERVER_SSL_EO_TYPES


#endif
/** A SSL server over TCP.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Ssl
 */
#define EFL_NET_SERVER_SSL_CLASS efl_net_server_ssl_class_get()

EWAPI const Efl_Class *efl_net_server_ssl_class_get(void);

/**
 * @brief Defines the SSL context to use for this server.
 *
 * This specifies a shared context for all clients, with certificate, private
 * keys, CRL, CAs...
 *
 * If changed in runtime, it will only affect new clients.
 *
 * @param[in] ssl_context SSL context
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Ssl
 */
EOAPI void efl_net_server_ssl_context_set(Eo *obj, Efl_Net_Ssl_Context *ssl_context);

/**
 * @brief Defines the SSL context to use for this server.
 *
 * This specifies a shared context for all clients, with certificate, private
 * keys, CRL, CAs...
 *
 * If changed in runtime, it will only affect new clients.
 *
 * @return SSL context
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Ssl
 */
EOAPI Efl_Net_Ssl_Context *efl_net_server_ssl_context_get(const Eo *obj);

/**
 * @brief If this method is called use an already activated socket.
 *
 * This method allows a server to use an existing socket received from systemd
 * or similar system.
 *
 * It will replace @ref efl_net_server_serve, thus if this is used, that method
 * will return EALREADY.
 *
 * @note The parameter 'address' given to this function is only used to
 * validate the next socket available, it doesn't search for a socket with the
 * given address. Thus the socket to be used is the next unused and orders
 * matter is using multiple servers!
 *
 * Errors:
 *
 * - EALREADY: already have a socket, either from previous
 * @ref efl_net_server_ssl_socket_activate or @ref efl_net_server_serve.
 * Usually represents a programming error.
 *
 * - ENOENT: no sockets received from process manager (ie: systemd). Usually
 * this is not a fatal error, just proceed by calling @ref efl_net_server_serve
 *
 * - EINVAL: the socket received is not of the correct family, type or
 * protocol. Usually this means a configuration mismatch with the order of
 * server creation and calls to socket_activate. The systemd.socket entries
 * must match the order in your application.
 *
 * @param[in] address The address to validate the next available socket. It
 * doesn't serve as search, only as validation!
 *
 * @return 0 on success, ENOENT if no socket is available or EALREADY if
 * already have a socket
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Ssl
 */
EOAPI Eina_Error efl_net_server_ssl_socket_activate(Eo *obj, const char *address);

/**
 * @brief The address family (AF_*) family of this socket.
 *
 * It will be one of AF_INET (IPv4) or AF_INET6 (IPv6).
 *
 * @return Socket address family
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Ssl
 */
EOAPI int efl_net_server_ssl_family_get(const Eo *obj);

/**
 * @brief Controls Close-on-Exec() using FD_CLOEXEC.
 *
 * Children socket will inherit the server's setting by default. One can change
 * the behavior using each instance @ref efl_io_closer_close_on_exec_set.
 * Defaults to @c true.
 *
 * @param[in] close_on_exec If @c true close on exec will be used, @c false
 * otherwise
 *
 * @return @c true on success
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Ssl
 */
EOAPI Eina_Bool efl_net_server_ssl_close_on_exec_set(Eo *obj, Eina_Bool close_on_exec);

/**
 * @brief Controls Close-on-Exec() using FD_CLOEXEC.
 *
 * Children socket will inherit the server's setting by default. One can change
 * the behavior using each instance @ref efl_io_closer_close_on_exec_set.
 * Defaults to @c true.
 *
 * @return If @c true close on exec will be used, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Ssl
 */
EOAPI Eina_Bool efl_net_server_ssl_close_on_exec_get(const Eo *obj);

/**
 * @brief Controls address reuse() using SO_REUSEADDR
 *
 * @param[in] reuse_address If @c true the server will reuse the address,
 * @c false otherwise
 *
 * @return @c true on success
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Ssl
 */
EOAPI Eina_Bool efl_net_server_ssl_reuse_address_set(Eo *obj, Eina_Bool reuse_address);

/**
 * @brief Controls address reuse() using SO_REUSEADDR
 *
 * @return If @c true the server will reuse the address, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Ssl
 */
EOAPI Eina_Bool efl_net_server_ssl_reuse_address_get(const Eo *obj);

/**
 * @brief Controls port reuse() using SO_REUSEPORT (since linux 3.9)
 *
 * @param[in] reuse_port If @c true the server will reuse the port, @c false
 * otherwise
 *
 * @return @c true on success
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Ssl
 */
EOAPI Eina_Bool efl_net_server_ssl_reuse_port_set(Eo *obj, Eina_Bool reuse_port);

/**
 * @brief Controls port reuse() using SO_REUSEPORT (since linux 3.9)
 *
 * @return If @c true the server will reuse the port, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Ssl
 */
EOAPI Eina_Bool efl_net_server_ssl_reuse_port_get(const Eo *obj);

/**
 * @brief Whenever IPv6 listen address will accept only same-family clients or
 * will allow IPv4 to connect as well.
 *
 * Since Linux 2.4.21, Windows Vista and MacOS X these control whenever a
 * server that did bind to an IPv6 address will accept only IPv6 clients or
 * will also accept IPv4 by automatically converting them in an IPv6 address,
 * allowing a single socket to handle both protocols.
 *
 * If an IPv6 address was used in @ref efl_net_server_address_get, this
 * property is @c false and an IPv4 connects, then an address such as
 * [::ffff:IPv4]:PORT will be used, such as [::ffff:192.168.0.2]:1234, where
 * the IPv4 address can be extracted.
 *
 * If an IPv4 address was used in @ref efl_net_server_address_get, this has no
 * effect.
 *
 * Systems can configure their default value, usually true (allows only IPv6
 * clients).
 *
 * @param[in] ipv6_only If @c true the server will only accept IPv6 clients,
 * @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Ssl
 */
EOAPI void efl_net_server_ssl_ipv6_only_set(Eo *obj, Eina_Bool ipv6_only);

/**
 * @brief Whenever IPv6 listen address will accept only same-family clients or
 * will allow IPv4 to connect as well.
 *
 * Since Linux 2.4.21, Windows Vista and MacOS X these control whenever a
 * server that did bind to an IPv6 address will accept only IPv6 clients or
 * will also accept IPv4 by automatically converting them in an IPv6 address,
 * allowing a single socket to handle both protocols.
 *
 * If an IPv6 address was used in @ref efl_net_server_address_get, this
 * property is @c false and an IPv4 connects, then an address such as
 * [::ffff:IPv4]:PORT will be used, such as [::ffff:192.168.0.2]:1234, where
 * the IPv4 address can be extracted.
 *
 * If an IPv4 address was used in @ref efl_net_server_address_get, this has no
 * effect.
 *
 * Systems can configure their default value, usually true (allows only IPv6
 * clients).
 *
 * @return If @c true the server will only accept IPv6 clients, @c false
 * otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Ssl
 */
EOAPI Eina_Bool efl_net_server_ssl_ipv6_only_get(const Eo *obj);

#endif
