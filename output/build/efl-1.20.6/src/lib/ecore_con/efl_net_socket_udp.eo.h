#ifndef _EFL_NET_SOCKET_UDP_EO_H_
#define _EFL_NET_SOCKET_UDP_EO_H_

#ifndef _EFL_NET_SOCKET_UDP_EO_CLASS_TYPE
#define _EFL_NET_SOCKET_UDP_EO_CLASS_TYPE

typedef Eo Efl_Net_Socket_Udp;

#endif

#ifndef _EFL_NET_SOCKET_UDP_EO_TYPES
#define _EFL_NET_SOCKET_UDP_EO_TYPES


#endif
/**
 * @brief A base UDP socket.
 *
 * This is the common class and takes an existing FD, usually created by an
 * dialer.
 *
 * Since for the server 'clients' there is no accepted connection it will reuse
 * the same file decriptor and to avoid it being closed, another class
 * Efl.Net.Server.Udp.Client is used instead.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
#define EFL_NET_SOCKET_UDP_CLASS efl_net_socket_udp_class_get()

EWAPI const Efl_Class *efl_net_socket_udp_class_get(void);

/**
 * @brief Queries the next datagram size.
 *
 * This will use system calls to determine the next datagram size, in bytes.
 *
 * @return Size in bytes
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI size_t efl_net_socket_udp_next_datagram_size_query(Eo *obj);

/**
 * @brief Controls UDP's cork using UDP_CORK
 *
 * @param[in] cork @c true if cork is enabled for this socket, @c false
 * otherwise
 *
 * @return @c true on success, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Bool efl_net_socket_udp_cork_set(Eo *obj, Eina_Bool cork);

/**
 * @brief Controls UDP's cork using UDP_CORK
 *
 * @return @c true if cork is enabled for this socket, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Bool efl_net_socket_udp_cork_get(const Eo *obj);

/**
 * @brief Avoids sent UDP packets being routed by a gateway, limiting them to
 * the local network.
 *
 * This will use SO_DONTROUTE option to avoid gateways routing sent packets to
 * outside of local network. It's useful for some protocols that only want
 * local area to be affected.
 *
 * @param[in] dont_route @c true if do not route is enabled, @c false otherwise
 *
 * @return @c true on success
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Bool efl_net_socket_udp_dont_route_set(Eo *obj, Eina_Bool dont_route);

/**
 * @brief Avoids sent UDP packets being routed by a gateway, limiting them to
 * the local network.
 *
 * This will use SO_DONTROUTE option to avoid gateways routing sent packets to
 * outside of local network. It's useful for some protocols that only want
 * local area to be affected.
 *
 * @return @c true if do not route is enabled, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Bool efl_net_socket_udp_dont_route_get(const Eo *obj);

/**
 * @brief Controls address reuse() using SO_REUSEADDR
 *
 * @param[in] reuse_address @c true if address reuse is enabled, @c false
 * otherwise
 *
 * @return @c true on success
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Bool efl_net_socket_udp_reuse_address_set(Eo *obj, Eina_Bool reuse_address);

/**
 * @brief Controls address reuse() using SO_REUSEADDR
 *
 * @return @c true if address reuse is enabled, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Bool efl_net_socket_udp_reuse_address_get(const Eo *obj);

/**
 * @brief Controls port reuse() using SO_REUSEPORT (since Linux 3.9)
 *
 * @param[in] reuse_port @c true if port reuse is enabled, @c false otherwise
 *
 * @return @c true on success
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Bool efl_net_socket_udp_reuse_port_set(Eo *obj, Eina_Bool reuse_port);

/**
 * @brief Controls port reuse() using SO_REUSEPORT (since Linux 3.9)
 *
 * @return @c true if port reuse is enabled, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Bool efl_net_socket_udp_reuse_port_get(const Eo *obj);

/**
 * @brief Joins a multicast group.
 *
 * The multicast address should be in the format:
 *
 * IP\@INTERFACE
 *
 * With '\@INTERFACE' being optional, such as:
 *
 * 224.0.0.1 - use any interface (ie: 0.0.0.0) 224.0.0.1@0.0.0.0
 * 224.0.0.1@192.168.0.1 - use the interface assigned to 192.168.0.1 ff02::1@0
 * - use any interface ff02::1@1 - use loopback interface (idx=1)
 *
 * @param[in] address Multicast address to join
 *
 * @return $0 on success, error code otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Error efl_net_socket_udp_multicast_join(Eo *obj, const char *address) EINA_ARG_NONNULL(2);

/**
 * @brief Leaves a multicast group.
 *
 * This reverses the effect of @ref efl_net_socket_udp_multicast_join.
 *
 * @param[in] address Multicast address to leave
 *
 * @return $0 on success, error code otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Error efl_net_socket_udp_multicast_leave(Eo *obj, const char *address) EINA_ARG_NONNULL(2);

/**
 * @brief Returns the multicast groups this server has joined.
 *
 * The iterator is only valid until a new group is joined or left using
 * @ref efl_net_socket_udp_multicast_join or
 * @ref efl_net_socket_udp_multicast_leave.
 *
 * @return Iterator to multicast groups
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Iterator *efl_net_socket_udp_multicast_groups_get(Eo *obj);

/**
 * @brief Controls time to live in number of hops.
 *
 * If 1 (default), packets are only delivered to the local network.
 *
 * @param[in] ttl Time to live
 *
 * @return $0 on success, error code otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Error efl_net_socket_udp_multicast_time_to_live_set(Eo *obj, uint8_t ttl);

/**
 * @brief Controls time to live in number of hops.
 *
 * If 1 (default), packets are only delivered to the local network.
 *
 * @return Time to live
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI uint8_t efl_net_socket_udp_multicast_time_to_live_get(const Eo *obj);

/**
 * @brief Controls whenever multicast will loopback packets locally.
 *
 * If @c false, then packets won't be looped back locally, just delivered for
 * remote peers.
 *
 * @param[in] loopback @c true multicast packets are loopbacked, @c false
 * otherwise
 *
 * @return $0 on success, error code otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Error efl_net_socket_udp_multicast_loopback_set(Eo *obj, Eina_Bool loopback);

/**
 * @brief Controls whenever multicast will loopback packets locally.
 *
 * If @c false, then packets won't be looped back locally, just delivered for
 * remote peers.
 *
 * @return @c true multicast packets are loopbacked, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Bool efl_net_socket_udp_multicast_loopback_get(const Eo *obj);

/**
 * @brief Forces binding to a specific address.
 *
 * Some servers may request packets being sent from a specific address, then
 * one should bind to that address before proceeding to dial.
 *
 * If no address is provided or bind is not called, a random port is bound
 * automatically to any address.
 *
 * @note IP and PORT must be all numeric, no name resolution is applied.
 *
 * @param[in] address Address to bind to
 *
 * @return $0 on success, error code otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI Eina_Error efl_net_socket_udp_bind_set(Eo *obj, const char *address) EINA_ARG_NONNULL(2);

/**
 * @brief Forces binding to a specific address.
 *
 * Some servers may request packets being sent from a specific address, then
 * one should bind to that address before proceeding to dial.
 *
 * If no address is provided or bind is not called, a random port is bound
 * automatically to any address.
 *
 * @note IP and PORT must be all numeric, no name resolution is applied.
 *
 * @return Address to bind to
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI const char *efl_net_socket_udp_bind_get(const Eo *obj);

#ifdef EFL_NET_SOCKET_UDP_PROTECTED
/**
 * @brief Initializes the socket to communicate with given IP address
 *
 * @param[in] remote_address The remote address this socket will communicate
 * with
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Udp
 */
EOAPI void efl_net_socket_udp_init(Eo *obj, Efl_Net_Ip_Address *remote_address);
#endif

#endif
