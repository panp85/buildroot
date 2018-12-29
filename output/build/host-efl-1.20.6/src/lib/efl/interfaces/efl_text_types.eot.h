#ifndef _EFL_TEXT_TYPES_EOT_H_
#define _EFL_TEXT_TYPES_EOT_H_

#ifndef _EFL_TEXT_TYPES_EOT_TYPES
#define _EFL_TEXT_TYPES_EOT_TYPES

/** Bidirectionaltext type
 *
 * @ingroup Efl_Text
 */
typedef enum
{
  EFL_TEXT_BIDIRECTIONAL_TYPE_NATURAL = 0, /**< Natural text type, same as
                                            * neutral */
  EFL_TEXT_BIDIRECTIONAL_TYPE_NEUTRAL = 0, /**< Neutral text type, same as
                                            * natural */
  EFL_TEXT_BIDIRECTIONAL_TYPE_LTR, /**< Left to right text type */
  EFL_TEXT_BIDIRECTIONAL_TYPE_RTL, /**< Right to left text type */
  EFL_TEXT_BIDIRECTIONAL_TYPE_INHERIT /**< Inherit text type */
} Efl_Text_Bidirectional_Type;


#endif

#endif
