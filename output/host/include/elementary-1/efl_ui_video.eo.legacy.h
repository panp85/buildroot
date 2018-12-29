#ifndef _EFL_UI_VIDEO_EO_LEGACY_H_
#define _EFL_UI_VIDEO_EO_LEGACY_H_

#ifndef _EFL_UI_VIDEO_EO_CLASS_TYPE
#define _EFL_UI_VIDEO_EO_CLASS_TYPE

typedef Eo Efl_Ui_Video;

#endif

#ifndef _EFL_UI_VIDEO_EO_TYPES
#define _EFL_UI_VIDEO_EO_TYPES


#endif

/**
 * @brief Set whether the object can remember the last played position.
 *
 * @note This API only serves as indication. System support is required.
 *
 * @param[in] remember @c true when the object can remember the last position,
 * @c false otherwise
 *
 * @ingroup Efl_Ui_Video
 */
EAPI void elm_video_remember_position_set(Efl_Ui_Video *obj, Eina_Bool remember);

/**
 * @brief Set whether the object can remember the last played position.
 *
 * @note This API only serves as indication. System support is required.
 *
 * @return @c true when the object can remember the last position, @c false
 * otherwise
 *
 * @ingroup Efl_Ui_Video
 */
EAPI Eina_Bool elm_video_remember_position_get(const Efl_Ui_Video *obj);

/**
 * @brief Is the video actually playing.
 *
 * You should consider watching event on the object instead of polling the
 * object state.
 *
 * @return @c true if the video is playing, @c false otherwise
 *
 * @ingroup Efl_Ui_Video
 */
EAPI Eina_Bool elm_video_is_playing_get(const Efl_Ui_Video *obj);

/**
 * @brief Get the underlying Emotion object.
 *
 * @return The underlying Emotion object.
 *
 * @ingroup Efl_Ui_Video
 */
EAPI Efl_Canvas_Object *elm_video_emotion_get(const Efl_Ui_Video *obj);

/**
 * @brief Get the title (for instance DVD title) from this emotion object.
 *
 * This function is only useful when playing a DVD.
 *
 * @note Don't change or free the string returned by this function.
 *
 * @return A string containing the title.
 *
 * @ingroup Efl_Ui_Video
 */
EAPI const char *elm_video_title_get(const Efl_Ui_Video *obj);

/** Start playing a video.
 *
 * @ingroup Efl_Ui_Video
 */
EAPI void elm_video_play(Efl_Ui_Video *obj);

/** Pause a video.
 *
 * @ingroup Efl_Ui_Video
 */
EAPI void elm_video_pause(Efl_Ui_Video *obj);

/** Stop a video.
 *
 * @ingroup Efl_Ui_Video
 */
EAPI void elm_video_stop(Efl_Ui_Video *obj);

#endif
