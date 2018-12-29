#ifndef _EFL_PLAYER_EO_H_
#define _EFL_PLAYER_EO_H_

#ifndef _EFL_PLAYER_EO_CLASS_TYPE
#define _EFL_PLAYER_EO_CLASS_TYPE

typedef Eo Efl_Player;

#endif

#ifndef _EFL_PLAYER_EO_TYPES
#define _EFL_PLAYER_EO_TYPES


#endif
/** Efl media player interface
 *
 * @ingroup Efl_Player
 */
#define EFL_PLAYER_INTERFACE efl_player_interface_get()

EWAPI const Efl_Class *efl_player_interface_get(void);

/**
 * @brief Whether or not the object data can be played.
 *
 * @return @c true if the object have playable data, @c false otherwise
 *
 * @ingroup Efl_Player
 */
EOAPI Eina_Bool efl_player_playable_get(const Eo *obj);

/**
 * @brief Set play/pause state of the media file.
 *
 * This functions sets the currently playing status of the video. Using this
 * function to play or pause the video doesn't alter it's current position.
 *
 * @param[in] play @c true if playing, @c false otherwise.
 *
 * @ingroup Efl_Player
 */
EOAPI void efl_player_play_set(Eo *obj, Eina_Bool play);

/**
 * @brief Get play/pause state of the media file.
 *
 * @return @c true if playing, @c false otherwise.
 *
 * @ingroup Efl_Player
 */
EOAPI Eina_Bool efl_player_play_get(const Eo *obj);

/**
 * @brief Set the position in the media file.
 *
 * This functions sets the current position of the media file to "sec", this
 * only works on seekable streams. Setting the position doesn't change the
 * playing state of the media file.
 *
 * @param[in] sec The position (in seconds).
 *
 * @ingroup Efl_Player
 */
EOAPI void efl_player_position_set(Eo *obj, double sec);

/**
 * @brief Get the position in the media file.
 *
 * The position is returned as the number of seconds since the beginning of the
 * media file.
 *
 * @return The position (in seconds).
 *
 * @ingroup Efl_Player
 */
EOAPI double efl_player_position_get(const Eo *obj);

/**
 * @brief Get how much of the file has been played.
 *
 * This function gets the progress in playing the file, the return value is in
 * the [0, 1] range.
 *
 * @return The progress within the [0, 1] range.
 *
 * @ingroup Efl_Player
 */
EOAPI double efl_player_progress_get(const Eo *obj);

/**
 * @brief Control the play speed of the media file.
 *
 * This function control the speed with which the media file will be played.
 * 1.0 represents the normal speed, 2 double speed, 0.5 half speed and so on.
 *
 * @param[in] speed The play speed in the [0, infinity) range.
 *
 * @ingroup Efl_Player
 */
EOAPI void efl_player_play_speed_set(Eo *obj, double speed);

/**
 * @brief Control the play speed of the media file.
 *
 * This function control the speed with which the media file will be played.
 * 1.0 represents the normal speed, 2 double speed, 0.5 half speed and so on.
 *
 * @return The play speed in the [0, infinity) range.
 *
 * @ingroup Efl_Player
 */
EOAPI double efl_player_play_speed_get(const Eo *obj);

/**
 * @brief Control the audio volume.
 *
 * Controls the audio volume of the stream being played. This has nothing to do
 * with the system volume. This volume will be multiplied by the system volume.
 * e.g.: if the current volume level is 0.5, and the system volume is 50%, it
 * will be 0.5 * 0.5 = 0.25.
 *
 * @param[in] volume The volume level
 *
 * @ingroup Efl_Player
 */
EOAPI void efl_player_volume_set(Eo *obj, double volume);

/**
 * @brief Control the audio volume.
 *
 * Controls the audio volume of the stream being played. This has nothing to do
 * with the system volume. This volume will be multiplied by the system volume.
 * e.g.: if the current volume level is 0.5, and the system volume is 50%, it
 * will be 0.5 * 0.5 = 0.25.
 *
 * @return The volume level
 *
 * @ingroup Efl_Player
 */
EOAPI double efl_player_volume_get(const Eo *obj);

/**
 * @brief This property controls the audio mute state.
 *
 * @param[in] mute The mute state. @c true or @c false.
 *
 * @ingroup Efl_Player
 */
EOAPI void efl_player_mute_set(Eo *obj, Eina_Bool mute);

/**
 * @brief This property controls the audio mute state.
 *
 * @return The mute state. @c true or @c false.
 *
 * @ingroup Efl_Player
 */
EOAPI Eina_Bool efl_player_mute_get(const Eo *obj);

/**
 * @brief Get the length of play for the media file.
 *
 * @return The length of the stream in seconds.
 *
 * @ingroup Efl_Player
 */
EOAPI double efl_player_length_get(const Eo *obj);

/**
 * @brief Get whether the media file is seekable.
 *
 * @return @c true if seekable.
 *
 * @ingroup Efl_Player
 */
EOAPI Eina_Bool efl_player_seekable_get(const Eo *obj);

#endif
