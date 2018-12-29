#ifndef _ELM_INTERFACE_ATSPI_TEXT_EO_LEGACY_H_
#define _ELM_INTERFACE_ATSPI_TEXT_EO_LEGACY_H_

#ifndef _ELM_INTERFACE_ATSPI_TEXT_EO_CLASS_TYPE
#define _ELM_INTERFACE_ATSPI_TEXT_EO_CLASS_TYPE

typedef Eo Elm_Interface_Atspi_Text;

#endif

#ifndef _ELM_INTERFACE_ATSPI_TEXT_EO_TYPES
#define _ELM_INTERFACE_ATSPI_TEXT_EO_TYPES

/** Text accessibility granularity
 *
 * @ingroup Elm_Atspi_Text
 */
typedef enum
{
  ELM_ATSPI_TEXT_GRANULARITY_CHAR = 0, /**< Character granularity */
  ELM_ATSPI_TEXT_GRANULARITY_WORD, /**< Word granularity */
  ELM_ATSPI_TEXT_GRANULARITY_SENTENCE, /**< Sentence granularity */
  ELM_ATSPI_TEXT_GRANULARITY_LINE, /**< Line granularity */
  ELM_ATSPI_TEXT_GRANULARITY_PARAGRAPH /**< Paragraph granularity */
} Elm_Atspi_Text_Granularity;

/** Text clip type
 *
 * @ingroup Elm_Atspi_Text
 */
typedef enum
{
  ELM_ATSPI_TEXT_CLIP_NONE = 0, /**< No clip type */
  ELM_ATSPI_TEXT_CLIP_MIN, /**< Minimum clip type */
  ELM_ATSPI_TEXT_CLIP_MAX, /**< Maximum clip type */
  ELM_ATSPI_TEXT_CLIP_BOTH /**< Both clip types */
} Elm_Atspi_Text_Clip_Type;

/** Text attribute
 *
 * @ingroup Elm_Atspi_Text
 */
typedef struct _Elm_Atspi_Text_Attribute
{
  const char *name; /**< Text attribute name */
  const char *value; /**< Text attribute value */
} Elm_Atspi_Text_Attribute;

/** Text range
 *
 * @ingroup Elm_Atspi_Text
 */
typedef struct _Elm_Atspi_Text_Range
{
  int start_offset; /**< Range start offset */
  int end_offset; /**< Range end offset */
  char *content; /**< Range content */
} Elm_Atspi_Text_Range;

/** Text change information
 *
 * @ingroup Elm_Atspi_Text
 */
typedef struct _Elm_Atspi_Text_Change_Info
{
  const char *content; /**< Change content */
  Eina_Bool inserted; /**< @c true if text got inserted */
  size_t pos; /**< Change position */
  size_t len; /**< Change length */
} Elm_Atspi_Text_Change_Info;


#endif



















#endif
