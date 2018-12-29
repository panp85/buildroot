#ifndef _EFL_NET_SSL_TYPES_EOT_H_
#define _EFL_NET_SSL_TYPES_EOT_H_

#ifndef _EFL_NET_SSL_TYPES_EOT_TYPES
#define _EFL_NET_SSL_TYPES_EOT_TYPES

/** Defines how remote peers should be verified.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Ssl
 */
typedef enum
{
  EFL_NET_SSL_VERIFY_MODE_NONE = 0, /**< Do not verify peer */
  EFL_NET_SSL_VERIFY_MODE_OPTIONAL, /**< If provided, verify. Otherwise proceed
                                     */
  EFL_NET_SSL_VERIFY_MODE_REQUIRED /**< Always verify and fail if certificate
                                    * wasn't provided */
} Efl_Net_Ssl_Verify_Mode;

/**
 * @brief Defines the SSL/TLS version to use.
 *
 * Prefer 'auto' or one of the TLS variants.
 *
 * @note since it's very insecure, SSLv2 is not present. SSLv3 support depends
 * on being available on the platform.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Ssl
 */
typedef enum
{
  EFL_NET_SSL_CIPHER_AUTO = 0, /**< The default. Use the best your system
                                * supports, disables dangerous ciphers */
  EFL_NET_SSL_CIPHER_SSLV3, /**< SSLv3, insecure and unsupported - DANGEROUS */
  EFL_NET_SSL_CIPHER_TLSV1, /**< TLSv1, secure and widely available */
  EFL_NET_SSL_CIPHER_TLSV1_1, /**< TLSv1.1, secure */
  EFL_NET_SSL_CIPHER_TLSV1_2 /**< TLSv1.2, secure */
} Efl_Net_Ssl_Cipher;


#endif

#endif
