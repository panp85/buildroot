#ifndef _EFL_NET_IP_ADDRESS_EO_LEGACY_H_
#define _EFL_NET_IP_ADDRESS_EO_LEGACY_H_

#ifndef _EFL_NET_IP_ADDRESS_EO_CLASS_TYPE
#define _EFL_NET_IP_ADDRESS_EO_CLASS_TYPE

typedef Eo Efl_Net_Ip_Address;

#endif

#ifndef _EFL_NET_IP_ADDRESS_EO_TYPES
#define _EFL_NET_IP_ADDRESS_EO_TYPES

/**
 * @brief The results of @ref Efl.Net.Ip_Address.resolve call.
 *
 * This structure is created by @ref Efl.Net.Ip_Address.resolve.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Ip_Address
 */
typedef struct _Efl_Net_Ip_Address_Resolve_Results
{
  const char *request_address; /**< The 'address' argument given to
                                * Efl.Net.Ip_Address.resolve */
  const char *canonical_name; /**< The canonical name, if it was requested in
                               * flags */
  Eina_Array *results; /**< The resolved objects. Do not modify this array, but
                        * you can keep reference to elements using efl_ref()
                        * and efl_unref() */
} Efl_Net_Ip_Address_Resolve_Results;


#endif

























#endif
