#ifndef _ELM_INTERFACE_ATSPI_TEXT_EO_H_
#define _ELM_INTERFACE_ATSPI_TEXT_EO_H_

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
/** Elementary AT-SPI text interface
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
#define ELM_INTERFACE_ATSPI_TEXT_INTERFACE elm_interface_atspi_text_interface_get()

EWAPI const Efl_Class *elm_interface_atspi_text_interface_get(void);

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Gets single character present in accessible widget's text at given
 * offset.
 *
 * @param[in] offset Position in text.
 *
 * @return Character at offset. 0 when out-of bounds offset has been given.
 * Codepoints between DC80 and DCFF indicates that string includes invalid UTF8
 * chars.
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI Eina_Unicode elm_interface_atspi_text_character_get(const Eo *obj, int offset);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Gets string, start and end offset in text according to given initial
 * offset and granularity.
 *
 * @param[in] granularity Text granularity
 * @param[in] start_offset Offset indicating start of string according to given
 * granularity.  -1 in case of error.
 * @param[in] end_offset Offset indicating end of string according to given
 * granularity. -1 in case of error.
 *
 * @return Newly allocated UTF-8 encoded string. Must be free by a user.
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI char *elm_interface_atspi_text_string_get(const Eo *obj, Elm_Atspi_Text_Granularity granularity, int * start_offset, int * end_offset) EINA_ARG_NONNULL(3);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Gets text of accessible widget.
 *
 * @param[in] start_offset Position in text.
 * @param[in] end_offset End offset of text.
 *
 * @return UTF-8 encoded text.
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI char *elm_interface_atspi_text_get(const Eo *obj, int start_offset, int end_offset);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Caret offset property
 *
 * @param[in] offset Offset
 *
 * @return @c true if caret was successfully moved, @c false otherwise.
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI Eina_Bool elm_interface_atspi_text_caret_offset_set(Eo *obj, int offset);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Caret offset property
 *
 * Gets offset position of caret (cursor)
 *
 * @return Offset
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI int elm_interface_atspi_text_caret_offset_get(const Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Indicate if a text attribute with a given name is set
 *
 * @param[in] name Text attribute name
 * @param[in] start_offset Position in text from which given attribute is set.
 * @param[in] end_offset Position in text to which given attribute is set.
 * @param[out] value Value of text attribute. Should be free()
 *
 * @return @c true if attribute name is set, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI Eina_Bool elm_interface_atspi_text_attribute_get(const Eo *obj, const char * name, int * start_offset, int * end_offset, char **value) EINA_ARG_NONNULL(2, 3);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Gets list of all text attributes.
 *
 * @param[in] start_offset Start offset
 * @param[in] end_offset End offset
 *
 * @return List of text attributes
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI Eina_List *elm_interface_atspi_text_attributes_get(const Eo *obj, int * start_offset, int * end_offset) EINA_ARG_NONNULL(2);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Default attributes
 *
 * @return List of default attributes
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI Eina_List *elm_interface_atspi_text_default_attributes_get(const Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Character extents
 *
 * @param[in] offset Offset
 * @param[in] screen_coords If @c true, x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[out] rect Extents rectangle
 *
 * @return @c true if character extents, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI Eina_Bool elm_interface_atspi_text_character_extents_get(const Eo *obj, int offset, Eina_Bool screen_coords, Eina_Rectangle *rect);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Character count
 *
 * @return Character count
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI int elm_interface_atspi_text_character_count_get(const Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Offset at given point
 *
 * @param[in] screen_coords If @c true, x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[in] x X coordinate
 * @param[in] y Y coordinate
 *
 * @return Offset
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI int elm_interface_atspi_text_offset_at_point_get(const Eo *obj, Eina_Bool screen_coords, int x, int y);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Bounded ranges
 *
 * @param[in] screen_coords If @c true, x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[in] rect Bounding box
 * @param[in] xclip AT-SPI xclip
 * @param[in] yclip AT-SPI yclip
 *
 * @return List of ranges
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI Eina_List *elm_interface_atspi_text_bounded_ranges_get(const Eo *obj, Eina_Bool screen_coords, Eina_Rectangle rect, Elm_Atspi_Text_Clip_Type xclip, Elm_Atspi_Text_Clip_Type yclip);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Range extents
 *
 * @param[in] screen_coords If @c true, x and y values will be relative to
 * screen origin, otherwise relative to canvas
 * @param[in] start_offset Start offset
 * @param[in] end_offset End offset
 * @param[out] rect Range rectangle
 *
 * @return @c true if range extents, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI Eina_Bool elm_interface_atspi_text_range_extents_get(const Eo *obj, Eina_Bool screen_coords, int start_offset, int end_offset, Eina_Rectangle *rect);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Selection count property
 *
 * @return Selection counter
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI int elm_interface_atspi_text_selections_count_get(const Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Selection property
 *
 * @param[in] selection_number Selection number for identification
 * @param[in] start_offset Selection start offset
 * @param[in] end_offset Selection end offset
 *
 * @return @c true if selection was set, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI Eina_Bool elm_interface_atspi_text_selection_set(Eo *obj, int selection_number, int start_offset, int end_offset);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Selection property
 *
 * @param[in] selection_number Selection number for identification
 * @param[out] start_offset Selection start offset
 * @param[out] end_offset Selection end offset
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI void elm_interface_atspi_text_selection_get(const Eo *obj, int selection_number, int *start_offset, int *end_offset);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Add selection
 *
 * @param[in] start_offset Start selection from this offset
 * @param[in] end_offset End selection at this offset
 *
 * @return @c true if selection was added, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI Eina_Bool elm_interface_atspi_text_selection_add(Eo *obj, int start_offset, int end_offset);
#endif

#ifdef ELM_INTERFACE_ATSPI_TEXT_PROTECTED
/**
 * @brief Remove selection
 *
 * @param[in] selection_number Selection number to be removed
 *
 * @return @c true if selection was removed, @c false otherwise
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
EOAPI Eina_Bool elm_interface_atspi_text_selection_remove(Eo *obj, int selection_number);
#endif

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_BOUNDS_CHANGED;

/** Text bounds have changed
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
#define ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_BOUNDS_CHANGED (&(_ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_BOUNDS_CHANGED))

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_ATTRIBUTES_CHANGED;

/** Text attributes have changed
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
#define ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_ATTRIBUTES_CHANGED (&(_ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_ATTRIBUTES_CHANGED))

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_CARET_MOVED;

/** Caret moved
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
#define ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_CARET_MOVED (&(_ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_CARET_MOVED))

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_INSERTED;

/** Text was inserted
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
#define ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_INSERTED (&(_ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_INSERTED))

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_REMOVED;

/** Text was removed
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
#define ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_REMOVED (&(_ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_REMOVED))

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_SELECTION_CHANGED;

/** Text selection has changed
 *
 * @ingroup Elm_Interface_Atspi_Text
 */
#define ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_SELECTION_CHANGED (&(_ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_SELECTION_CHANGED))

#endif
