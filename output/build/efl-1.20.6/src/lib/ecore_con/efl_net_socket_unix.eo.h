#ifndef _EFL_NET_SOCKET_UNIX_EO_H_
#define _EFL_NET_SOCKET_UNIX_EO_H_

#ifndef _EFL_NET_SOCKET_UNIX_EO_CLASS_TYPE
#define _EFL_NET_SOCKET_UNIX_EO_CLASS_TYPE

typedef Eo Efl_Net_Socket_Unix;

#endif

#ifndef _EFL_NET_SOCKET_UNIX_EO_TYPES
#define _EFL_NET_SOCKET_UNIX_EO_TYPES


#endif
/**
 * @brief A base UNIX socket.
 *
 * This is the common class and takes an existing FD, usually created by an
 * dialer or server.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Socket_Unix
 */
#define EFL_NET_SOCKET_UNIX_CLASS efl_net_socket_unix_class_get()

EWAPI const Efl_Class *efl_net_socket_unix_class_get(void);

#endif
