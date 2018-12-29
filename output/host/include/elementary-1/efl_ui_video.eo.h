#ifndef _EFL_UI_VIDEO_EO_H_
#define _EFL_UI_VIDEO_EO_H_

#ifndef _EFL_UI_VIDEO_EO_CLASS_TYPE
#define _EFL_UI_VIDEO_EO_CLASS_TYPE

typedef Eo Efl_Ui_Video;

#endif

#ifndef _EFL_UI_VIDEO_EO_TYPES
#define _EFL_UI_VIDEO_EO_TYPES


#endif
/** Efl UI video class
 *
 * @ingroup Efl_Ui_Video
 */
#define EFL_UI_VIDEO_CLASS efl_ui_video_class_get()

EWAPI const Efl_Class *efl_ui_video_class_get(void);

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
EOAPI void efl_ui_video_remember_position_set(Eo *obj, Eina_Bool remember);

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
EOAPI Eina_Bool efl_ui_video_remember_position_get(const Eo *obj);

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
EOAPI Eina_Bool efl_ui_video_is_playing_get(const Eo *obj);

/**
 * @brief Get the underlying Emotion object.
 *
 * @return The underlying Emotion object.
 *
 * @ingroup Efl_Ui_Video
 */
EOAPI Efl_Canvas_Object *efl_ui_video_emotion_get(const Eo *obj);

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
EOAPI const char *efl_ui_video_title_get(const Eo *obj);

/** Start playing a video.
 *
 * @ingroup Efl_Ui_Video
 */
EOAPI void efl_ui_video_play(Eo *obj);

/** Pause a video.
 *
 * @ingroup Efl_Ui_Video
 */
EOAPI void efl_ui_video_pause(Eo *obj);

/** Stop a video.
 *
 * @ingroup Efl_Ui_Video
 */
EOAPI void efl_ui_video_stop(Eo *obj);

#endif
