#ifndef _EFL_UI_CLOCK_EO_LEGACY_H_
#define _EFL_UI_CLOCK_EO_LEGACY_H_

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

















#endif
