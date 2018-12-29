#ifndef _EFL_UI_CLOCK_EO_H_
#define _EFL_UI_CLOCK_EO_H_

#ifndef _EFL_UI_CLOCK_EO_CLASS_TYPE
#define _EFL_UI_CLOCK_EO_CLASS_TYPE

typedef Eo Efl_Ui_Clock;

#endif

#ifndef _EFL_UI_CLOCK_EO_TYPES
#define _EFL_UI_CLOCK_EO_TYPES

/** Identifies a clock field, The widget supports 6 fields : Year, month, Date,
 * Hour, Minute, AM/PM
 *
 * @ingroup Efl_Ui_Clock
 */
typedef enum
{
  EFL_UI_CLOCK_TYPE_YEAR = 0, /**< Indicates Year field. */
  EFL_UI_CLOCK_TYPE_MONTH = 1, /**< Indicates Month field. */
  EFL_UI_CLOCK_TYPE_DATE = 2, /**< Indicates Date field. */
  EFL_UI_CLOCK_TYPE_HOUR = 3, /**< Indicates Hour field. */
  EFL_UI_CLOCK_TYPE_MINUTE = 4, /**< Indicates Minute field. */
  EFL_UI_CLOCK_TYPE_SECOND = 5, /**< Indicates Second field. */
  EFL_UI_CLOCK_TYPE_DAY = 6, /**< Indicated Day field. */
  EFL_UI_CLOCK_TYPE_AMPM = 7 /**< Indicates AM/PM field . */
} Efl_Ui_Clock_Type;


#endif
/** Efl UI clock class
 *
 * @ingroup Efl_Ui_Clock
 */
#define EFL_UI_CLOCK_CLASS efl_ui_clock_class_get()

EWAPI const Efl_Class *efl_ui_clock_class_get(void);

/**
 * @brief The current clock format. Format is a combination of allowed Libc
 * date format specifiers like: "%b %d, %Y %I : %M %p".
 *
 * Maximum allowed format length is 64 chars.
 *
 * Format can include separators for each individual clock field except for
 * AM/PM field.
 *
 * Each separator can be a maximum of 6 UTF-8 bytes. Space is also taken as a
 * separator.
 *
 * These specifiers can be arranged in any order and the widget will display
 * the fields accordingly.
 *
 * Default format is taken as per the system locale settings.
 *
 * @param[in] fmt The clock format.
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI void efl_ui_clock_format_set(Eo *obj, const char *fmt);

/**
 * @brief The current clock format. Format is a combination of allowed Libc
 * date format specifiers like: "%b %d, %Y %I : %M %p".
 *
 * Maximum allowed format length is 64 chars.
 *
 * Format can include separators for each individual clock field except for
 * AM/PM field.
 *
 * Each separator can be a maximum of 6 UTF-8 bytes. Space is also taken as a
 * separator.
 *
 * These specifiers can be arranged in any order and the widget will display
 * the fields accordingly.
 *
 * Default format is taken as per the system locale settings.
 *
 * @return The clock format.
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI const char *efl_ui_clock_format_get(const Eo *obj);

/**
 * @brief Whether the given clock widget should be paused or not.
 *
 * This function pauses or starts the clock widget.
 *
 * @param[in] paused @c true to pause clock, @c false otherwise
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI void efl_ui_clock_pause_set(Eo *obj, Eina_Bool paused);

/**
 * @brief Whether the given clock widget should be paused or not.
 *
 * This function pauses or starts the clock widget.
 *
 * @return @c true to pause clock, @c false otherwise
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI Eina_Bool efl_ui_clock_pause_get(const Eo *obj);

/**
 * @brief Digits of the given clock widget should be editable when in editing
 * mode.
 *
 * @param[in] value @c true to set edit mode, @c false otherwise
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI void efl_ui_clock_edit_mode_set(Eo *obj, Eina_Bool value);

/**
 * @brief Digits of the given clock widget should be editable when in editing
 * mode.
 *
 * @return @c true to set edit mode, @c false otherwise
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI Eina_Bool efl_ui_clock_edit_mode_get(const Eo *obj);

/**
 * @brief The lower boundary of a field.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @param[in] mintime Time structure containing the minimum time value.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI Eina_Bool efl_ui_clock_value_min_set(Eo *obj, Efl_Time * mintime);

/**
 * @brief The lower boundary of a field.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @param[in] mintime Time structure containing the minimum time value.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI Eina_Bool efl_ui_clock_value_min_get(const Eo *obj, Efl_Time * mintime);

/**
 * @brief The upper boundary of a field.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @param[in] maxtime Time structure containing the minimum time value.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI Eina_Bool efl_ui_clock_value_max_set(Eo *obj, Efl_Time * maxtime);

/**
 * @brief The upper boundary of a field.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @param[in] maxtime Time structure containing the minimum time value.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI Eina_Bool efl_ui_clock_value_max_get(const Eo *obj, Efl_Time * maxtime);

/**
 * @brief The current value of a clock object.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @param[in] curtime Time structure containing the minimum time value.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI Eina_Bool efl_ui_clock_value_set(Eo *obj, Efl_Time * curtime);

/**
 * @brief The current value of a clock object.
 *
 * Year: years since 1900. Negative value represents year below 1900 (year
 * value -30 represents 1870). Year default range is from 70 to 137.
 *
 * Month: default value range is from 0 to 11.
 *
 * Date: default value range is from 1 to 31 according to the month value.
 *
 * Hour: default value will be in terms of 24 hr format (0~23)
 *
 * Minute: default value range is from 0 to 59.
 *
 * @param[in] curtime Time structure containing the minimum time value.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI Eina_Bool efl_ui_clock_value_get(const Eo *obj, Efl_Time * curtime);

/**
 * @brief The field to be visible/not.
 *
 * @param[in] fieldtype Type of the field. #EFL_UI_CLOCK_TYPE_YEAR etc.
 * @param[in] visible @c true field can be visible, @c false otherwise.
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI void efl_ui_clock_field_visible_set(Eo *obj, Efl_Ui_Clock_Type fieldtype, Eina_Bool visible);

/**
 * @brief The field to be visible/not.
 *
 * @param[in] fieldtype Type of the field. #EFL_UI_CLOCK_TYPE_YEAR etc.
 *
 * @return @c true field can be visible, @c false otherwise.
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI Eina_Bool efl_ui_clock_field_visible_get(const Eo *obj, Efl_Ui_Clock_Type fieldtype);

/**
 * @brief Set a field to be visible or not.
 *
 * Setting this API to @c true does not ensure that the field is visible, apart
 * from this, the field's format must be present in clock overall format.  If a
 * field's visibility is set to @c false then it won't appear even though its
 * format is present in overall format. So if and only if this API is set true
 * and the corresponding field's format is present in clock format, the field
 * is visible.
 *
 * By default the field visibility is set to @c true.
 *
 * @param[in] fieldtype Type of the field. #EFL_UI_CLOCK_TYPE_YEAR etc.
 * @param[in] min Reference to field's minimum value.
 * @param[in] max Reference to field's maximum value.
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI void efl_ui_clock_field_limit_set(Eo *obj, Efl_Ui_Clock_Type fieldtype, int min, int max);

/**
 * @brief Get the field limits of a field.
 *
 * Limits can be set to individual fields, independently, except for AM/PM
 * field. Any field can display the values only in between these minimum and
 * maximum limits unless the corresponding time value is restricted from
 * MinTime to MaxTime. That is, min/max field limits always works under the
 * limitations of mintime/maxtime.
 *
 * There is no provision to set the limits of AM/PM field.
 *
 * @param[in] fieldtype Type of the field. #EFL_UI_CLOCK_TYPE_YEAR etc.
 * @param[out] min Reference to field's minimum value.
 * @param[out] max Reference to field's maximum value.
 *
 * @ingroup Efl_Ui_Clock
 */
EOAPI void efl_ui_clock_field_limit_get(const Eo *obj, Efl_Ui_Clock_Type fieldtype, int *min, int *max);

EWAPI extern const Efl_Event_Description _EFL_UI_CLOCK_EVENT_CHANGED;

/** Called when clock changed
 *
 * @ingroup Efl_Ui_Clock
 */
#define EFL_UI_CLOCK_EVENT_CHANGED (&(_EFL_UI_CLOCK_EVENT_CHANGED))

#endif
