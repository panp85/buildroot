#ifndef _EFL_TEXT_ANNOTATE_EO_H_
#define _EFL_TEXT_ANNOTATE_EO_H_

#ifndef _EFL_TEXT_ANNOTATE_EO_CLASS_TYPE
#define _EFL_TEXT_ANNOTATE_EO_CLASS_TYPE

typedef Eo Efl_Text_Annotate;

#endif

#ifndef _EFL_TEXT_ANNOTATE_EO_TYPES
#define _EFL_TEXT_ANNOTATE_EO_TYPES


#endif
/** Cursor API
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Annotate
 */
#define EFL_TEXT_ANNOTATE_INTERFACE efl_text_annotate_interface_get()

EWAPI const Efl_Class *efl_text_annotate_interface_get(void);

/**
 * @brief A new format for @c annotation.
 *
 * This will replace the format applied by @c annotation with @c format.
 * Assumes that @c annotation is a handle for an existing annotation, i.e. one
 * that was added using @ref efl_text_annotation_insert to this object.
 * Otherwise, this will fail and return @c false.
 *
 * @param[in] annotation Given annotation
 * @param[in] format The new format for the given annotation
 *
 * @return @c true on success, @c false otherwise.
 *
 * @since 1.18
 *
 * @ingroup Efl_Text_Annotate
 */
EOAPI Eina_Bool efl_text_annotation_set(Eo *obj, Efl_Text_Annotate_Annotation * annotation, const char *format);

/**
 * @brief A new format for @c annotation.
 *
 * This will replace the format applied by @c annotation with @c format.
 * Assumes that @c annotation is a handle for an existing annotation, i.e. one
 * that was added using @ref efl_text_annotation_insert to this object.
 * Otherwise, this will fail and return @c false.
 *
 * @param[in] annotation Given annotation
 *
 * @return The new format for the given annotation
 *
 * @since 1.18
 *
 * @ingroup Efl_Text_Annotate
 */
EOAPI const char *efl_text_annotation_get(const Eo *obj, Efl_Text_Annotate_Annotation * annotation);

/**
 * @brief Returns an iterator of all the handles in a range.
 *
 * @param[in] start Start of range
 * @param[in] end End of range
 *
 * @return Handle of the Annotation
 *
 * @since 1.18
 *
 * @ingroup Efl_Text_Annotate
 */
EOAPI Eina_Iterator *efl_text_range_annotations_get(Eo *obj, const Efl_Text_Cursor_Cursor *start, const Efl_Text_Cursor_Cursor *end);

/**
 * @brief Inserts an annotation format in a specified range [$start, @c end -
 * 1].
 *
 * The @c format will be applied to the given range, and the @c annotation
 * handle will be returned for further handling.
 *
 * @param[in] start Start of range
 * @param[in] end End of range
 * @param[in] format Annotation format
 *
 * @return Handle of inserted annotation
 *
 * @since 1.18
 *
 * @ingroup Efl_Text_Annotate
 */
EOAPI Efl_Text_Annotate_Annotation *efl_text_annotation_insert(Eo *obj, Efl_Text_Cursor_Cursor *start, Efl_Text_Cursor_Cursor *end, const char *format);

/**
 * @brief Deletes given annotation.
 *
 * All formats applied by @c annotation will be removed and it will be deleted.
 *
 * @param[in] annotation Annotation to be removed
 *
 * @return @c true on success, @c false otherwise.
 *
 * @since 1.18
 *
 * @ingroup Efl_Text_Annotate
 */
EOAPI Eina_Bool efl_text_annotation_del(Eo *obj, Efl_Text_Annotate_Annotation *annotation);

/**
 * @brief Queries a given object item for its geometry.
 *
 * Note that the provided annotation should be an object item type.
 *
 * @param[in] an Given annotation to query
 * @param[out] x X coordinate of the annotation
 * @param[out] y Y coordinate of the annotation
 * @param[out] w Width of the annotation
 * @param[out] h Height of the annotation
 *
 * @return @c true if given annotation is an object item, @c false otherwise
 *
 * @since 1.18
 *
 * @ingroup Efl_Text_Annotate
 */
EOAPI Eina_Bool efl_text_object_item_geometry_get(Eo *obj, const Efl_Text_Annotate_Annotation *an, int *x, int *y, int *w, int *h);

/**
 * @brief Sets given cursors to the start and end positions of the annotation.
 *
 * The cursors @c start and @c end will be set to the start and end positions
 * of the given annotation @c annotation.
 *
 * @param[in] annotation Annotation handle to query
 * @param[in] start Cursor to be set to the start position of the annotation in
 * the text
 * @param[in] end Cursor to be set to the end position of the annotation in the
 * text
 *
 * @since 1.18
 *
 * @ingroup Efl_Text_Annotate
 */
EOAPI void efl_text_annotation_positions_get(Eo *obj, const Efl_Text_Annotate_Annotation *annotation, Efl_Text_Cursor_Cursor *start, Efl_Text_Cursor_Cursor *end);

/**
 * @brief The object-item annotation at the cursor's position.
 *
 * @param[in] cur
 *
 * @return Annotation
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Annotate
 */
EOAPI Efl_Text_Annotate_Annotation *efl_text_cursor_object_item_annotation_get(const Eo *obj, Efl_Text_Cursor_Cursor * cur);

/**
 * @brief Inserts a object item at specified position.
 *
 * This adds a placeholder to be queried by higher-level code, which in turn
 * place graphics on top of it. It essentially places an OBJECT REPLACEMENT
 * CHARACTER and set a special annotation to it.
 *
 * @param[in] cur
 * @param[in] format Format of the inserted item. See Format styles.
 *
 * @return The annotation handle of the inserted item.
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Annotate
 */
EOAPI Efl_Text_Annotate_Annotation *efl_text_cursor_object_item_insert(Eo *obj, Efl_Text_Cursor_Cursor *cur, const char *format);

#endif
