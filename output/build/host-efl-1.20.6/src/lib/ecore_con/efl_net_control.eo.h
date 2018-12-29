#ifndef _EFL_NET_CONTROL_EO_H_
#define _EFL_NET_CONTROL_EO_H_

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
/**
 * @brief Controls network connectivity.
 *
 * This class and its children objects are only useful to implement control of
 * the network connectivity. If your application is only interested in
 * requesting access to the network, use the @Efl.Net.Session instead.
 *
 * The network connectivity is defined on top of technologies that provide
 * access points. A technology can be "ethernet", "wifi", "bluetooth" or
 * something else. Ethernet will provide a single access point, while "wifi"
 * will expose zero or more access points that can come and go.
 *
 * Users willing to use access points are expected to monitor
 * "access_point,add" event to know when access points were added. To know when
 * they were deleted, "access_point,del" or an
 * @ref Efl_Net_Control_Access_Point "del" event. Finally
 * "access_points,changed" is relative to additions, deletions and reordering
 * of access point due changes in their priorities.
 *
 * The backend system is responsible to remember connection details such as
 * passphrase, last connected access point and priority. The user is NOT
 * supposed to do that.
 *
 * For ease of use, @ref efl_net_control_state_get tells if at least one access
 * point is online (verified connectivity), local (connected but unverified) or
 * offline.
 *
 * Due safety reasons all radio transmissions may be disabled with
 * @ref efl_net_control_radios_offline_get property. This is usually called
 * "airplane mode" in some platforms.
 *
 * Some platforms may not implement the backend for this class, in such cases
 * the system will report always @ref efl_net_control_state_get "online"
 * (@Efl.Net.Control.State.online) and iterators for
 * @ref efl_net_control_access_points_get and
 * @ref efl_net_control_technologies_get will be empty (they will be returned
 * but won't contain any item).
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
#define EFL_NET_CONTROL_CLASS efl_net_control_class_get()

EWAPI const Efl_Class *efl_net_control_class_get(void);

/**
 * @brief If @c true disable all network technologies that use radio
 * transmission, such as bluetooth and wifi. If @c false, allows radios to be
 * used.
 *
 * @param[in] radios_offline @c true if all radios are offline, @c false
 * otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
EOAPI void efl_net_control_radios_offline_set(Eo *obj, Eina_Bool radios_offline);

/**
 * @brief If @c true disable all network technologies that use radio
 * transmission, such as bluetooth and wifi. If @c false, allows radios to be
 * used.
 *
 * @return @c true if all radios are offline, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
EOAPI Eina_Bool efl_net_control_radios_offline_get(const Eo *obj);

/**
 * @brief Summary of network connectivity.
 *
 * - offline means no connectivity;
 *
 * - local means local connectivity, that is, the access point is connected but
 * couldn't reach the internet;
 *
 * - online means verified connectivity.
 *
 * @note if there is no backend for this class, then state will be always
 * online, however @ref efl_net_control_access_points_get and
 * @ref efl_net_control_technologies_get will be empty iterators (valid
 * pointers but no items in them).
 *
 * @return Network state
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
EOAPI Efl_Net_Control_State efl_net_control_state_get(const Eo *obj);

/**
 * @brief The iterator of current access points.
 *
 * The iterator is valid only before the function returns to the main loop, by
 * then, if the events "access_point,add" or "access_point,del" are emitted,
 * the iterator will become invalid.
 *
 * @return Iterator of current access points
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
EOAPI Eina_Iterator *efl_net_control_access_points_get(const Eo *obj);

/**
 * @brief The iterator of current technologies.
 *
 * The iterator is valid only before the function returns to the main loop, by
 * then, if the events "technology,add" or "technology,del" are emitted, the
 * iterator will become invalid.
 *
 * @return Iterator of current technologies
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
EOAPI Eina_Iterator *efl_net_control_technologies_get(const Eo *obj);

/**
 * @brief The agent is responsible for user interaction.
 *
 * When enabled, the local process will become the agent for user interaction,
 * such as requesting passphrases, asking the user to open a browser to do
 * web-authentication and report connection errors.
 *
 * There can be a single agent in the system at a given time, registering one
 * will unregister the other and special permissions may be required to become
 * an agent.
 *
 * An useful agent should monitor "agent_error", "agent_browser_url" and
 * "agent_request_input" events. When input is requested, reply using
 * @ref efl_net_control_agent_reply.
 *
 * @param[in] agent_enabled @c true if to become the agent, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
EOAPI void efl_net_control_agent_enabled_set(Eo *obj, Eina_Bool agent_enabled);

/**
 * @brief The agent is responsible for user interaction.
 *
 * When enabled, the local process will become the agent for user interaction,
 * such as requesting passphrases, asking the user to open a browser to do
 * web-authentication and report connection errors.
 *
 * There can be a single agent in the system at a given time, registering one
 * will unregister the other and special permissions may be required to become
 * an agent.
 *
 * An useful agent should monitor "agent_error", "agent_browser_url" and
 * "agent_request_input" events. When input is requested, reply using
 * @ref efl_net_control_agent_reply.
 *
 * @return @c true if to become the agent, @c false otherwise
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
EOAPI Eina_Bool efl_net_control_agent_enabled_get(const Eo *obj);

/**
 * @brief If event "agent_request_input" was emitted, this will reply with the
 * requested data
 *
 * @param[in] name If @ref EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_NAME was
 * present, this should contain the network name or the 'ssid' parameter should
 * be used.
 * @param[in] ssid If @ref EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_SSID was
 * present, this should contain the network SSID or the 'name' parameter should
 * be used.
 * @param[in] username If
 * @ref EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_USERNAME was present, this
 * should contain the identity or username
 * @param[in] passphrase If
 * @ref EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_PASSPHRASE was present, this
 * should contain the password or passphrase, more details on how it should be
 * interpreted was given in
 * Efl.Net.Control.Agent_Request_Input.passphrase_type.
 * @param[in] wps If @ref EFL_NET_CONTROL_AGENT_REQUEST_INPUT_FIELD_WPS was
 * present, this should contain the WPS PIN or an empty string "" to use the
 * WPS push button instead.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
EOAPI void efl_net_control_agent_reply(Eo *obj, const char *name, const Eina_Slice *ssid, const char *username, const char *passphrase, const char *wps);

EWAPI extern const Efl_Event_Description _EFL_NET_CONTROL_EVENT_ACCESS_POINT_ADD;

/** The given access point was added
 * @return Efl_Net_Control_Access_Point *
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
#define EFL_NET_CONTROL_EVENT_ACCESS_POINT_ADD (&(_EFL_NET_CONTROL_EVENT_ACCESS_POINT_ADD))

EWAPI extern const Efl_Event_Description _EFL_NET_CONTROL_EVENT_ACCESS_POINT_DEL;

/** The given access point will be deleted
 * @return Efl_Net_Control_Access_Point *
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
#define EFL_NET_CONTROL_EVENT_ACCESS_POINT_DEL (&(_EFL_NET_CONTROL_EVENT_ACCESS_POINT_DEL))

EWAPI extern const Efl_Event_Description _EFL_NET_CONTROL_EVENT_ACCESS_POINTS_CHANGED;

/** Access points were added, deleted or reordered.
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
#define EFL_NET_CONTROL_EVENT_ACCESS_POINTS_CHANGED (&(_EFL_NET_CONTROL_EVENT_ACCESS_POINTS_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_NET_CONTROL_EVENT_TECHNOLOGY_ADD;

/** The given technology was added
 * @return Efl_Net_Control_Technology *
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
#define EFL_NET_CONTROL_EVENT_TECHNOLOGY_ADD (&(_EFL_NET_CONTROL_EVENT_TECHNOLOGY_ADD))

EWAPI extern const Efl_Event_Description _EFL_NET_CONTROL_EVENT_TECHNOLOGY_DEL;

/** The given technology will be deleted
 * @return Efl_Net_Control_Technology *
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
#define EFL_NET_CONTROL_EVENT_TECHNOLOGY_DEL (&(_EFL_NET_CONTROL_EVENT_TECHNOLOGY_DEL))

EWAPI extern const Efl_Event_Description _EFL_NET_CONTROL_EVENT_RADIOS_OFFLINE_CHANGED;

/** Property @ref efl_net_control_radios_offline_get changed
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
#define EFL_NET_CONTROL_EVENT_RADIOS_OFFLINE_CHANGED (&(_EFL_NET_CONTROL_EVENT_RADIOS_OFFLINE_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_NET_CONTROL_EVENT_STATE_CHANGED;

/** Property @ref efl_net_control_state_get changed
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
#define EFL_NET_CONTROL_EVENT_STATE_CHANGED (&(_EFL_NET_CONTROL_EVENT_STATE_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_NET_CONTROL_EVENT_AGENT_RELEASED;

/** Notifies we're not the agent anymore
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
#define EFL_NET_CONTROL_EVENT_AGENT_RELEASED (&(_EFL_NET_CONTROL_EVENT_AGENT_RELEASED))

EWAPI extern const Efl_Event_Description _EFL_NET_CONTROL_EVENT_AGENT_ERROR;

/** Requires the error to be reported to the user
 * @return Efl_Net_Control_Agent_Error
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
#define EFL_NET_CONTROL_EVENT_AGENT_ERROR (&(_EFL_NET_CONTROL_EVENT_AGENT_ERROR))

EWAPI extern const Efl_Event_Description _EFL_NET_CONTROL_EVENT_AGENT_BROWSER_URL;

/** Requires the user to visit a web page
 * @return Efl_Net_Control_Agent_Browser_Url
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
#define EFL_NET_CONTROL_EVENT_AGENT_BROWSER_URL (&(_EFL_NET_CONTROL_EVENT_AGENT_BROWSER_URL))

EWAPI extern const Efl_Event_Description _EFL_NET_CONTROL_EVENT_AGENT_REQUEST_INPUT;

/** Requires the user to enter information in order to proceed, such as hidden
 * SSID, passphrase, etc. After the user entered information, reply by calling
 * @ref efl_net_control_agent_reply
 * @return Efl_Net_Control_Agent_Request_Input
 *
 * @since 1.19
 *
 * @ingroup Efl_Net_Control
 */
#define EFL_NET_CONTROL_EVENT_AGENT_REQUEST_INPUT (&(_EFL_NET_CONTROL_EVENT_AGENT_REQUEST_INPUT))

#endif
