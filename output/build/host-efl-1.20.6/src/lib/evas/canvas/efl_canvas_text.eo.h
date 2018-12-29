#ifndef _EFL_CANVAS_TEXT_EO_H_
#define _EFL_CANVAS_TEXT_EO_H_

#ifndef _EFL_CANVAS_TEXT_EO_CLASS_TYPE
#define _EFL_CANVAS_TEXT_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Text;

#endif

#ifndef _EFL_CANVAS_TEXT_EO_TYPES
#define _EFL_CANVAS_TEXT_EO_TYPES

/** EFL text style data structure
 *
 * @ingroup Efl_Canvas_Text
 */
typedef struct _Efl_Canvas_Text_Style Efl_Canvas_Text_Style;


#endif
/** Efl canvas text class
 *
 * @ingroup Efl_Canvas_Text
 */
#define EFL_CANVAS_TEXT_CLASS efl_canvas_text_class_get()

EWAPI const Efl_Class *efl_canvas_text_class_get(void);

/**
 * @brief Whether the object is empty (no text) or not
 *
 * @return @c true if empty, @c false otherwise
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI Eina_Bool efl_canvas_text_is_empty_get(const Eo *obj);

/**
 * @brief Returns the currently visible range.
 *
 * The given @c start and @c end cursor act like an out-variables here, as
 * these are set to the positions of the start and the end of the visible range
 * in the text, respectively.
 *
 * @param[in] start Range start position
 * @param[in] end Range end position
 *
 * @return @c true on success, @c false otherwise
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI Eina_Bool efl_canvas_text_visible_range_get(Eo *obj, Efl_Text_Cursor_Cursor *start, Efl_Text_Cursor_Cursor *end);

/**
 * @brief Gets the left, right, top and bottom insets of the text.
 *
 * The inset is any applied padding on the text.
 *
 * @param[out] l Left padding
 * @param[out] r Right padding
 * @param[out] t Top padding
 * @param[out] b Bottom padding
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI void efl_canvas_text_style_insets_get(const Eo *obj, int *l, int *r, int *t, int *b);

/**
 * @brief BiDi delimiters are used for in-paragraph separation of bidi
 * segments. This is useful for example in recipients fields of e-mail clients
 * where bidi oddities can occur when mixing RTL and LTR.
 *
 * @param[in] delim A null terminated string of delimiters, e.g ",|" or @c null
 * if empty
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI void efl_canvas_text_bidi_delimiters_set(Eo *obj, const char *delim);

/**
 * @brief BiDi delimiters are used for in-paragraph separation of bidi
 * segments. This is useful for example in recipients fields of e-mail clients
 * where bidi oddities can occur when mixing RTL and LTR.
 *
 * @return A null terminated string of delimiters, e.g ",|" or @c null if empty
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI const char *efl_canvas_text_bidi_delimiters_get(const Eo *obj);

/**
 * @brief When @c true, newline character will behave as a paragraph separator.
 *
 * @param[in] mode @c true for legacy mode, @c false otherwise
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI void efl_canvas_text_legacy_newline_set(Eo *obj, Eina_Bool mode);

/**
 * @brief When @c true, newline character will behave as a paragraph separator.
 *
 * @return @c true for legacy mode, @c false otherwise
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI Eina_Bool efl_canvas_text_legacy_newline_get(const Eo *obj);

/**
 * @brief The text style of the object.
 *
 * @c key is how you reference the style (for deletion or fetching). @c NULL as
 * key indicates the style has the highest priority (default style). The style
 * priority is the order of creation, styles created first are applied first
 * with the exception of @c NULL which is implicitly first.
 *
 * Set @c style to @c NULL to delete it.
 *
 * @param[in] key The name to the style. @c NULL is the default style
 * @param[in] style The style
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI void efl_canvas_text_style_set(Eo *obj, const char * key, const char *style);

/**
 * @brief The text style of the object.
 *
 * @c key is how you reference the style (for deletion or fetching). @c NULL as
 * key indicates the style has the highest priority (default style). The style
 * priority is the order of creation, styles created first are applied first
 * with the exception of @c NULL which is implicitly first.
 *
 * Set @c style to @c NULL to delete it.
 *
 * @param[in] key The name to the style. @c NULL is the default style
 *
 * @return The style
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI const char *efl_canvas_text_style_get(const Eo *obj, const char * key);

/**
 * @brief The formatted width and height.
 *
 * This calculates the actual size after restricting the textblock to the
 * current size of the object.
 *
 * The main difference between this and @ref efl_canvas_text_size_native_get is
 * that the "native" function does not wrapping into account it just calculates
 * the real width of the object if it was placed on an infinite canvas, while
 * this function gives the size after wrapping according to the size
 * restrictions of the object.
 *
 * For example for a textblock containing the text: "You shall not pass!" with
 * no margins or padding and assuming a monospace font and a size of 7x10 char
 * widths (for simplicity) has a native size of 19x1 and a formatted size of
 * 5x4.
 *
 * @param[out] w The width of the object.
 * @param[out] h The height of the object.
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI void efl_canvas_text_size_formatted_get(const Eo *obj, int *w, int *h);

/**
 * @brief The native width and height.
 *
 * This calculates the actual size without taking account the current size of
 * the object.
 *
 * The main difference between this and @ref efl_canvas_text_size_formatted_get
 * is that the "native" function does not take wrapping into account it just
 * calculates the real width of the object if it was placed on an infinite
 * canvas, while the "formatted" function gives the size after  wrapping text
 * according to the size restrictions of the object.
 *
 * For example for a textblock containing the text: "You shall not pass!" with
 * no margins or padding and assuming a monospace font and a size of 7x10 char
 * widths (for simplicity) has a native size of 19x1 and a formatted size of
 * 5x4.
 *
 * @param[out] w The width returned.
 * @param[out] h The height returned.
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI void efl_canvas_text_size_native_get(const Eo *obj, int *w, int *h);

/**
 * @brief Returns the text in the range between @c cur1 and @c cur2.
 *
 * @param[in] cur1 Start of range
 * @param[in] cur2 End of range
 *
 * @return The text in the given range
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI char *efl_canvas_text_range_text_get(Eo *obj, const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);

/**
 * @brief Get the geometry of a range in the text.
 *
 * The geometry is represented as rectangles for each of the line segments in
 * the given range [$cur1, @c cur2].
 *
 * @param[in] cur1 Start of range
 * @param[in] cur2 End of range
 *
 * @return Iterator on all geoemtries of the given range
 *
 * @since 1.19
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI Eina_Iterator *efl_canvas_text_range_geometry_get(Eo *obj, const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);

/**
 * @brief Get the "simple" geometry of a range.
 *
 * The geometry is the geometry in which rectangles in middle lines of range
 * are merged into one big rectangle. This is an optimized version of
 * @ref efl_canvas_text_range_geometry_get.
 *
 * @param[in] cur1 Start of range
 * @param[in] cur2 End of range
 *
 * @return Iterator on all simple geometries of the given range
 *
 * @since 1.19
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI Eina_Iterator *efl_canvas_text_range_simple_geometry_get(Eo *obj, const Efl_Text_Cursor_Cursor *cur1, const Efl_Text_Cursor_Cursor *cur2);

/**
 * @brief Deletes the range between given cursors.
 *
 * This removes all the text in given range [$start,$end].
 *
 * @param[in] cur1 Range start position
 * @param[in] cur2 Range end position
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI void efl_canvas_text_range_delete(Eo *obj, Efl_Text_Cursor_Cursor *cur1, Efl_Text_Cursor_Cursor *cur2);

/**
 * @brief Add obstacle evas object @c eo_obs to be observed during layout of
 * text.
 *
 * The textblock does the layout of the text according to the position of the
 * obstacle.
 *
 * @param[in] eo_obs Obstacle object
 *
 * @return @c true on success, @c false otherwise.
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI Eina_Bool efl_canvas_text_obstacle_add(Eo *obj, Efl_Canvas_Object *eo_obs);

/**
 * @brief Removes @c eo_obs from observation during text layout.
 *
 * @param[in] eo_obs Obstacle object
 *
 * @return @c true on success, @c false otherwise.
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI Eina_Bool efl_canvas_text_obstacle_del(Eo *obj, Efl_Canvas_Object *eo_obs);

/**
 * @brief Triggers for relayout due to obstacles' state change.
 *
 * The obstacles alone don't affect the layout, until this is called. Use this
 * after doing changes (moving, positioning etc.) in the obstacles that you
 *  would like to be considered in the layout.
 *
 * For example: if you have just repositioned the obstacles to differrent
 * coordinates relative to the textblock, you need to call this so it will
 * consider this new state and will relayout the text.
 *
 * @since 1.18
 *
 * @ingroup Efl_Canvas_Text
 */
EOAPI void efl_canvas_text_obstacles_update(Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_CANVAS_TEXT_EVENT_CURSOR_CHANGED;

/**
 * No description
 */
#define EFL_CANVAS_TEXT_EVENT_CURSOR_CHANGED (&(_EFL_CANVAS_TEXT_EVENT_CURSOR_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_CANVAS_TEXT_EVENT_CHANGED;

/**
 * No description
 */
#define EFL_CANVAS_TEXT_EVENT_CHANGED (&(_EFL_CANVAS_TEXT_EVENT_CHANGED))

EWAPI extern const Efl_Event_Description _EFL_CANVAS_TEXT_EVENT_STYLE_INSETS_CHANGED;

/** Called when the property @ref efl_canvas_text_style_insets_get changed.
 *
 * @ingroup Efl_Canvas_Text
 */
#define EFL_CANVAS_TEXT_EVENT_STYLE_INSETS_CHANGED (&(_EFL_CANVAS_TEXT_EVENT_STYLE_INSETS_CHANGED))

#endif
