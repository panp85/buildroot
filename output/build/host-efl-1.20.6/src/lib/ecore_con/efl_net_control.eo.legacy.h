#ifndef _EFL_NET_CONTROL_EO_LEGACY_H_
#define _EFL_NET_CONTROL_EO_LEGACY_H_

#ifndef _EFL_NET_CONTROL_EO_CLASS_TYPE
#define _EFL_NET_CONTROL_EO_CLASS_TYPE

typedef Eo Efl_Net_Control;

#endif

#ifndef _EFL_NET_CONTROL_EO_TYPES
#define _EFL_NET_CONTROL_EO_TYPES

/**
 * @brief Provides the global network connectivity state.
 *
 * For fine grained details, use @ref Efl_Net_Control access points and their
 * state property.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
typedef enum
{
  EFL_NET_CONTROL_STATE_OFFLINE = 0, /**< No access point is connected */
  EFL_NET_CONTROL_STATE_LOCAL, /**< At least one access point was connected and
                                * the internet connectio wasn't verified */
  EFL_NET_CONTROL_STATE_ONLINE /**< At least one access point was connected and
                                * the internet was verified */
} Efl_Net_Control_State;

/** Bitwise-able fields requested to the agent.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Agent_Request_Input
 */
typedef enum
{
  EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_NAME = 1 /* 1 >> 0 */, /**< Used for hidden WiFi access points.
                                                                    * If ssid is present, this is an
                                                                    * alternative to that. */
  EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_SSID = 2 /* 1 >> 1 */, /**< Used for hidden WiFi access points.
                                                                    * If name is present, this is an
                                                                    * alternative to that. */
  EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_USERNAME = 4 /* 1 >> 2 */, /**< Identity or username requested */
  EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_PASSPHRASE = 8 /* 1 >> 3 */, /**< Password or passphrase requested */
  EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_WPS = 16 /* 1 >> 4 */ /**< Use WPS authentication. If
                                                                   * passphrase is present, this is an
                                                                   * alternative to that. */
} Efl_Net_Control_Agent_Request_Input_Field;

/** Name-value information pair provided to the agent.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control_Agent_Request_Input
 */
typedef struct _Efl_Net_Control_Agent_Request_Input_Information
{
  const char *name; /**< The information name, such as PreviousPassphrase, Host,
                     * Name... */
  const char *value; /**< The contents of the information */
} Efl_Net_Control_Agent_Request_Input_Information;

/** Requests input to the agent.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
typedef struct _Efl_Net_Control_Agent_Request_Input
{
  Efl_Net_Control_Access_Point *access_point; /**< The access point that
                                               * triggered this request. */
  Efl_Net_Control_Agent_Request_Input_Field fields; /**< Bitwise OR of fields
                                                     * present in this request.
                                                     */
  const char *passphrase_type; /**< Extra detail on the meaning for the
                                * passphrase field, such as wep, psk, response
                                * (IEEE802.X GTC/OTP), string... */
  Eina_List *informational; /**< Such as the previous passphrase, VPN host */
} Efl_Net_Control_Agent_Request_Input;

/** Reports error to the agent.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
typedef struct _Efl_Net_Control_Agent_Error
{
  Efl_Net_Control_Access_Point *access_point; /**< The access point that
                                               * triggered this error. */
  const char *message; /**< The error message. */
} Efl_Net_Control_Agent_Error;

/** Reports to agent that it should open a browser at given URL.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
typedef struct _Efl_Net_Control_Agent_Browser_Url
{
  Efl_Net_Control_Access_Point *access_point; /**< The access point that
                                               * triggered this request. */
  const char *url; /**< The URL to point the browser at. */
} Efl_Net_Control_Agent_Browser_Url;


#endif









#endif
