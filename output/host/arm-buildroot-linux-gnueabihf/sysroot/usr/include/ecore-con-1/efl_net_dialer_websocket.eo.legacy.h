#ifndef _EFL_NET_DIALER_WEBSOCKET_EO_LEGACY_H_
#define _EFL_NET_DIALER_WEBSOCKET_EO_LEGACY_H_

#ifndef _EFL_NET_DIALER_WEBSOCKET_EO_CLASS_TYPE
#define _EFL_NET_DIALER_WEBSOCKET_EO_CLASS_TYPE

typedef Eo Efl_Net_Dialer_Websocket;

#endif

#ifndef _EFL_NET_DIALER_WEBSOCKET_EO_TYPES
#define _EFL_NET_DIALER_WEBSOCKET_EO_TYPES

/** How to map WebSocket to EFL I/O Interfaces.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
typedef enum
{
  EFL_NET_DIALER_WEBSOCKET_STREAMING_MODE_DISABLED = 0, /**< 
                                                         * @ref Efl.Io.Writer.write
                                                         * and
                                                         * @ref Efl.Io.Reader.read
                                                         * will fail by
                                                         * returning ENOSTR */
  EFL_NET_DIALER_WEBSOCKET_STREAMING_MODE_BINARY, /**< @ref Efl.Io.Writer.write
                                                   * will result in
                                                   * @ref Efl.Net.Dialer.Websocket.binary_send
                                                   */
  EFL_NET_DIALER_WEBSOCKET_STREAMING_MODE_TEXT /**< @ref Efl.Io.Writer.write
                                                * will result in
                                                * @ref Efl.Net.Dialer.Websocket.text_send
                                                */
} Efl_Net_Dialer_Websocket_Streaming_Mode;

/**
 * @brief Registered reasons for the CLOSE (opcode=0x8).
 *
 * These are the well known reasons, with some ranges being defined using
 * "_start" and "end" suffixes.
 *
 * See https://tools.ietf.org/html/rfc6455#section-7.4.1
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
typedef enum
{
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_NORMAL = 1000, /**< Indicates a normal
                                                        * closure, meaning that
                                                        * the purpose for which
                                                        * the connection was
                                                        * established has been
                                                        * fulfilled. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_GOING_AWAY = 1001, /**< Indicates that
                                                            * an endpoint is
                                                            * "going away",
                                                            * such as a server
                                                            * going down or a
                                                            * browser having
                                                            * navigated away
                                                            * from a page. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_PROTOCOL_ERROR = 1002, /**< Indicates that an endpoint is
                                                                * terminating the connection due to a
                                                                * protocol error. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_NO_REASON = 1005, /**< Reserved value
                                                           * and MUST NOT be
                                                           * set as a status
                                                           * code in a Close
                                                           * control frame by
                                                           * an endpoint. It is
                                                           * designated for use
                                                           * in applications
                                                           * expecting a status
                                                           * code to indicate
                                                           * that no status
                                                           * code was actually
                                                           * present. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_ABRUPTLY = 1006, /**< Reserved value and
                                                          * MUST NOT be set as
                                                          * a status code in a
                                                          * Close control frame
                                                          * by an endpoint.  It
                                                          * is designated for
                                                          * use in applications
                                                          * expecting a status
                                                          * code to indicate
                                                          * that the connection
                                                          * was closed
                                                          * abnormally, e.g.,
                                                          * without sending or
                                                          * receiving a Close
                                                          * control frame. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_UNEXPECTED_DATA = 1003, /**< Indicates that an endpoint is
                                                                 * terminating the connection because
                                                                 * it has received a type of data it
                                                                 * cannot accept (e.g., an endpoint
                                                                 * that understands only text data MAY
                                                                 * send this if it receives a binary
                                                                 * message). */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_INCONSISTENT_DATA = 1007, /**< Indicates that an endpoint is
                                                                   * terminating the connection because
                                                                   * it has received data within a
                                                                   * message that was not consistent with
                                                                   * the type of the message (e.g.,
                                                                   * non-UTF-8 data within a text
                                                                   * message). */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_POLICY_VIOLATION = 1008, /**< Indicates that an endpoint is
                                                                  * terminating the connection because
                                                                  * it has received a message that
                                                                  * violates its policy.  This is a
                                                                  * generic status code that can be
                                                                  * returned when there is no other more
                                                                  * suitable status code (e.g., 1003 or
                                                                  * 1009) or if there is a need to hide
                                                                  * specific details about the policy.
                                                                  */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_TOO_BIG = 1009, /**< Indicates that an
                                                         * endpoint is
                                                         * terminating the
                                                         * connection because
                                                         * it has received a
                                                         * message that is too
                                                         * big for it to
                                                         * process. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_MISSING_EXTENSION = 1010, /**< Indicates that an endpoint (client)
                                                                   * is terminating the connection
                                                                   * because it has expected the server
                                                                   * to negotiate one or more extension,
                                                                   * but the server didn't return them in
                                                                   * the response message of the
                                                                   * WebSocket handshake.  The list of
                                                                   * extensions that are needed SHOULD
                                                                   * appear in the reason part of the
                                                                   * Close frame.  Note that this status
                                                                   * code is not used by the server,
                                                                   * because it can fail the WebSocket
                                                                   * handshake instead. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_SERVER_ERROR = 1011, /**< Indicates that a server is
                                                              * terminating the connection because
                                                              * it encountered an unexpected
                                                              * condition that prevented it from
                                                              * fulfilling the request. */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_IANA_REGISTRY_START = 3000, /**< IANA registry starts at 3000 */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_IANA_REGISTRY_END = 3999, /**< IANA registry ends at 3999 */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_PRIVATE_START = 4000, /**< Applications can use range
                                                               * 4000-4999 */
  EFL_NET_DIALER_WEBSOCKET_CLOSE_REASON_PRIVATE_END = 4999 /**< Applications can
                                                            * use range
                                                            * 4000-4999 */
} Efl_Net_Dialer_Websocket_Close_Reason;

/** Close reason event payload.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Dialer_Websocket
 */
typedef struct _Efl_Net_Dialer_Websocket_Closed_Reason
{
  Efl_Net_Dialer_Websocket_Close_Reason reason; /**< Closing reason */
  const char *message; /**< Textual closing reason message */
} Efl_Net_Dialer_Websocket_Closed_Reason;


#endif






















#endif
