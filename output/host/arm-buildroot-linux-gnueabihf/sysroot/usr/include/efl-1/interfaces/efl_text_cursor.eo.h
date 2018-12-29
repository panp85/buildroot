#ifndef _EFL_TEXT_CURSOR_EO_H_
#define _EFL_TEXT_CURSOR_EO_H_

#ifndef _EFL_TEXT_CURSOR_EO_CLASS_TYPE
#define _EFL_TEXT_CURSOR_EO_CLASS_TYPE

typedef Eo Efl_Text_Cursor;

#endif

#ifndef _EFL_TEXT_CURSOR_EO_TYPES
#define _EFL_TEXT_CURSOR_EO_TYPES

/** All available cursor states
 *
 * @ingroup Efl_Text_Cursor
 */
typedef enum
{
  EFL_TEXT_CURSOR_GET_DEFAULT = 0, /**< Main cursor state (alias to "main") */
  EFL_TEXT_CURSOR_GET_MAIN, /**< Main cursor state */
  EFL_TEXT_CURSOR_GET_SELECTION_BEGIN, /**< Selection begin cursor state */
  EFL_TEXT_CURSOR_GET_SELECTION_END, /**< Selection end cursor state */
  EFL_TEXT_CURSOR_GET_PREEDIT_START, /**< Pre-edit start cursor state */
  EFL_TEXT_CURSOR_GET_PREEDIT_END, /**< Pre-edit end cursor starge */
  EFL_TEXT_CURSOR_GET_USER, /**< User cursor state */
  EFL_TEXT_CURSOR_GET_USER_EXTRA /**< User extra cursor state */
} Efl_Text_Cursor_Cursor_Get_Type;

/** Text cursor types
 *
 * @ingroup Efl_Text_Cursor
 */
typedef enum
{
  EFL_TEXT_CURSOR_TYPE_BEFORE = 0, /**< Cursor type before */
  EFL_TEXT_CURSOR_TYPE_UNDER /**< Cursor type under */
} Efl_Text_Cursor_Cursor_Type;


#endif
/** Cursor API
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Cursor
 */
#define EFL_TEXT_CURSOR_INTERFACE efl_text_cursor_interface_get()

EWAPI const Efl_Class *efl_text_cursor_interface_get(void);

/**
 * @brief The object's main cursor.
 *
 * @param[in] get_type
 *
 * @return Text cursor object
 *
 * @since 1.18
 *
 * @ingroup Efl_Text_Cursor
 */
EOAPI Efl_Text_Cursor_Cursor *efl_text_cursor_get(const Eo *obj, Efl_Text_Cursor_Cursor_Get_Type get_type);

EOAPI void efl_text_cursor_position_set(Eo *obj, Efl_Text_Cursor_Cursor * cur, int position);

EOAPI int efl_text_cursor_position_get(const Eo *obj, Efl_Text_Cursor_Cursor * cur);

/**
 * @brief The content of the cursor (the character under the cursor)
 *
 * @param[in] cur
 *
 * @return The unicode codepoint of the character
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Cursor
 */
EOAPI Eina_Unicode efl_text_cursor_content_get(const Eo *obj, const Efl_Text_Cursor_Cursor * cur);

/**
 * @brief Returns the geometry of two cursors ("split cursor"), if logical
 * cursor is between LTR/RTL text, also considering paragraph direction. Upper
 * cursor is shown for the text of the same direction as paragraph, lower
 * cursor - for opposite.
 *
 * Split cursor geometry is valid only  in '|' cursor mode. In this case
 * @c true is returned and @c cx2, @c cy2, @c cw2, @c ch2 are set.
 *
 * @param[in] cur
 * @param[in] ctype The type of the cursor.
 * @param[out] cx The x of the cursor (or upper cursor)
 * @param[out] cy The y of the cursor (or upper cursor)
 * @param[out] cw The width of the cursor (or upper cursor)
 * @param[out] ch The height of the cursor (or upper cursor)
 * @param[out] cx2 The x of the lower cursor
 * @param[out] cy2 The y of the lower cursor
 * @param[out] cw2 The width of the lower cursor
 * @param[out] ch2 The height of the lower cursor
 *
 * @return @c true if split cursor, @c false otherwise.
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Cursor
 */
EOAPI Eina_Bool efl_text_cursor_geometry_get(const Eo *obj, const Efl_Text_Cursor_Cursor * cur, Efl_Text_Cursor_Cursor_Type ctype, int *cx, int *cy, int *cw, int *ch, int *cx2, int *cy2, int *cw2, int *ch2);

EOAPI Efl_Text_Cursor_Cursor *efl_text_cursor_new(Eo *obj);

EOAPI void efl_text_cursor_free(Eo *obj, Efl_Text_Cursor_Cursor *cur);

EOAPI Eina_Bool efl_text_cursor_equal(Eo *obj, const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);

EOAPI int efl_text_cursor_compare(Eo *obj, const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);

EOAPI void efl_text_cursor_copy(Eo *obj, Efl_Text_Cursor_Cursor *dst, const Efl_Text_Cursor_Cursor *src);

EOAPI void efl_text_cursor_char_next(Eo *obj, Efl_Text_Cursor_Cursor *cur);

EOAPI void efl_text_cursor_char_prev(Eo *obj, Efl_Text_Cursor_Cursor *cur);

EOAPI void efl_text_cursor_paragraph_char_first(Eo *obj, Efl_Text_Cursor_Cursor *cur);

EOAPI void efl_text_cursor_paragraph_char_last(Eo *obj, Efl_Text_Cursor_Cursor *cur);

EOAPI void efl_text_cursor_word_start(Eo *obj, Efl_Text_Cursor_Cursor *cur);

EOAPI void efl_text_cursor_word_end(Eo *obj, Efl_Text_Cursor_Cursor *cur);

EOAPI void efl_text_cursor_line_char_first(Eo *obj, Efl_Text_Cursor_Cursor *cur);

EOAPI void efl_text_cursor_line_char_last(Eo *obj, Efl_Text_Cursor_Cursor *cur);

EOAPI void efl_text_cursor_paragraph_first(Eo *obj, Efl_Text_Cursor_Cursor *cur);

EOAPI void efl_text_cursor_paragraph_last(Eo *obj, Efl_Text_Cursor_Cursor *cur);

/**
 * @brief Advances to the start of the next text node
 *
 * @param[in] cur
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Cursor
 */
EOAPI void efl_text_cursor_paragraph_next(Eo *obj, Efl_Text_Cursor_Cursor *cur);

/**
 * @brief Advances to the end of the previous text node
 *
 * @param[in] cur
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Cursor
 */
EOAPI void efl_text_cursor_paragraph_prev(Eo *obj, Efl_Text_Cursor_Cursor *cur);

EOAPI void efl_text_cursor_line_jump_by(Eo *obj, Efl_Text_Cursor_Cursor *cur, int by);

EOAPI void efl_text_cursor_coord_set(Eo *obj, Efl_Text_Cursor_Cursor *cur, int x, int y);

/**
 * @brief Adds text to the current cursor position and set the cursor to
 * *after* the start of the text just added.
 *
 * @param[in] cur
 * @param[in] text Text to append (UTF-8 format).
 *
 * @return Length of the appended text.
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Cursor
 */
EOAPI int efl_text_cursor_text_insert(Eo *obj, Efl_Text_Cursor_Cursor *cur, const char *text);

/**
 * @brief Deletes a single character from position pointed by given cursor.
 *
 * @param[in] cur
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Cursor
 */
EOAPI void efl_text_cursor_char_delete(Eo *obj, Efl_Text_Cursor_Cursor *cur);

#endif
