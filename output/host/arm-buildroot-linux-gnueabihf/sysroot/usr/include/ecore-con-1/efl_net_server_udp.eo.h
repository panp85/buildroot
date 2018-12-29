#ifndef _EFL_NET_SERVER_UDP_EO_H_
#define _EFL_NET_SERVER_UDP_EO_H_

#ifndef _EFL_NET_SERVER_UDP_EO_CLASS_TYPE
#define _EFL_NET_SERVER_UDP_EO_CLASS_TYPE

typedef Eo Efl_Net_Server_Udp;

#endif

#ifndef _EFL_NET_SERVER_UDP_EO_TYPES
#define _EFL_NET_SERVER_UDP_EO_TYPES


#endif
/** A UDP server.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Udp
 */
#define EFL_NET_SERVER_UDP_CLASS efl_net_server_udp_class_get()

EWAPI const Efl_Class *efl_net_server_udp_class_get(void);

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
 * @ingroup Efl_Net_Server_Udp
 */
EOAPI void efl_net_server_udp_ipv6_only_set(Eo *obj, Eina_Bool ipv6_only);

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
 * @ingroup Efl_Net_Server_Udp
 */
EOAPI Eina_Bool efl_net_server_udp_ipv6_only_get(const Eo *obj);

/**
 * @brief Avoids sent UDP packets being routed by a gateway, limiting them to
 * the local network.
 *
 * This will use SO_DONTROUTE option to avoid gateways routing sent packets to
 * outside of local network. It's useful for some protocols that only want
 * local area to be affected.
 *
 * @param[in] dont_route If @c true limit packets to the local network,
 * @c false otherwise
 *
 * @return @c true on success
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Udp
 */
EOAPI Eina_Bool efl_net_server_udp_dont_route_set(Eo *obj, Eina_Bool dont_route);

/**
 * @brief Avoids sent UDP packets being routed by a gateway, limiting them to
 * the local network.
 *
 * This will use SO_DONTROUTE option to avoid gateways routing sent packets to
 * outside of local network. It's useful for some protocols that only want
 * local area to be affected.
 *
 * @return If @c true limit packets to the local network, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Udp
 */
EOAPI Eina_Bool efl_net_server_udp_dont_route_get(const Eo *obj);

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
 * @param[in] address Multicast group address
 *
 * @return 0 on success, error code otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Udp
 */
EOAPI Eina_Error efl_net_server_udp_multicast_join(Eo *obj, const char *address) EINA_ARG_NONNULL(2);

/**
 * @brief Leaves a multicast group.
 *
 * This reverses the effect of @ref efl_net_server_udp_multicast_join.
 *
 * @param[in] address Multicast group address
 *
 * @return 0 on success, error code otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Udp
 */
EOAPI Eina_Error efl_net_server_udp_multicast_leave(Eo *obj, const char *address) EINA_ARG_NONNULL(2);

/**
 * @brief Returns the multicast groups this server has joined.
 *
 * The iterator is only valid until a new group is joined or left using
 * @ref efl_net_server_udp_multicast_join or
 * @ref efl_net_server_udp_multicast_leave.
 *
 * @return List of multicast groups
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Udp
 */
EOAPI Eina_Iterator *efl_net_server_udp_multicast_groups_get(Eo *obj);

/**
 * @brief Controls time to live in number of hops.
 *
 * If 1 (default), packets are only delivered to the local network.
 *
 * @param[in] ttl Time to live
 *
 * @return 0 on success, error code otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Udp
 */
EOAPI Eina_Error efl_net_server_udp_multicast_time_to_live_set(Eo *obj, uint8_t ttl);

/**
 * @brief Controls time to live in number of hops.
 *
 * If 1 (default), packets are only delivered to the local network.
 *
 * @return Time to live
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Udp
 */
EOAPI uint8_t efl_net_server_udp_multicast_time_to_live_get(const Eo *obj);

/**
 * @brief Controls whenever multicast will loopback packets locally.
 *
 * If @c false, then packets won't be looped back locally, just delivered for
 * remote peers.
 *
 * @param[in] loopback @c true when multicast packets are looped back, @c false
 * otherwise
 *
 * @return 0 on success, error code otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Udp
 */
EOAPI Eina_Error efl_net_server_udp_multicast_loopback_set(Eo *obj, Eina_Bool loopback);

/**
 * @brief Controls whenever multicast will loopback packets locally.
 *
 * If @c false, then packets won't be looped back locally, just delivered for
 * remote peers.
 *
 * @return @c true when multicast packets are looped back, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Udp
 */
EOAPI Eina_Bool efl_net_server_udp_multicast_loopback_get(const Eo *obj);

#endif
