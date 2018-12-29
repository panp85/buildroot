#ifndef _EFL_NET_SERVER_SIMPLE_EO_H_
#define _EFL_NET_SERVER_SIMPLE_EO_H_

#ifndef _EFL_NET_SERVER_SIMPLE_EO_CLASS_TYPE
#define _EFL_NET_SERVER_SIMPLE_EO_CLASS_TYPE

typedef Eo Efl_Net_Server_Simple;

#endif

#ifndef _EFL_NET_SERVER_SIMPLE_EO_TYPES
#define _EFL_NET_SERVER_SIMPLE_EO_TYPES


#endif
/**
 * @brief A network server wrapper that creates clients based on
 * @ref Efl_Net_Socket_Simple.
 *
 * This is just a wrapper server, it will take an actual server using
 * @ref efl_net_server_simple_inner_server_get or create one using
 * @ref efl_net_server_simple_inner_class_get.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Simple
 */
#define EFL_NET_SERVER_SIMPLE_CLASS efl_net_server_simple_class_get()

EWAPI const Efl_Class *efl_net_server_simple_class_get(void);

/**
 * @brief The class used to create @ref efl_net_server_simple_inner_server_get
 * if none was provided.
 *
 * This class must be set at construction time and will be used to create the
 * inner socket during @ref efl_finalize.
 *
 * It is a helper for users, removing the burden to manually create and specify
 * a dialer object.
 *
 * Constructor-only property to define the class used to create the inner
 * dialer.
 *
 * @param[in] klass The class
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Simple
 */
EOAPI void efl_net_server_simple_inner_class_set(Eo *obj, const Efl_Class *klass);

/**
 * @brief The class used to create @ref efl_net_server_simple_inner_server_get
 * if none was provided.
 *
 * This class must be set at construction time and will be used to create the
 * inner socket during @ref efl_finalize.
 *
 * It is a helper for users, removing the burden to manually create and specify
 * a dialer object.
 *
 * The internal class used to create the inner dialer.
 *
 * @return The class
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Simple
 */
EOAPI const Efl_Class *efl_net_server_simple_inner_class_get(const Eo *obj);

/**
 * @brief The inner @ref Efl_Net_Server this wrapper operates on.
 *
 * Constructor-only property to set the inner_server.
 *
 * @param[in] server The server instance
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Simple
 */
EOAPI void efl_net_server_simple_inner_server_set(Eo *obj, Efl_Object *server);

/**
 * @brief The inner @ref Efl_Net_Server this wrapper operates on.
 *
 * The internal server used for actual operations, use with care!
 *
 * @return The server instance
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Server_Simple
 */
EOAPI Efl_Object *efl_net_server_simple_inner_server_get(const Eo *obj);

#endif
