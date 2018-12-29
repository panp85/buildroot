#ifndef _ELM_LAYOUT_EO_LEGACY_H_
#define _ELM_LAYOUT_EO_LEGACY_H_

#ifndef _ELM_LAYOUT_EO_CLASS_TYPE
#define _ELM_LAYOUT_EO_CLASS_TYPE

typedef Eo Elm_Layout;

#endif

#ifndef _ELM_LAYOUT_EO_TYPES
#define _ELM_LAYOUT_EO_TYPES

/** Elementary Layout-based widgets may declare part proxies, i.e., aliases for
 * real theme part names to expose to the API calls: - elm_layout_text_set() -
 * elm_layout_text_get() - elm_layout_content_set() - elm_layout_content_get()
 * - elm_layout_content_unset() and their equivalents. This list must be set on
 * the "_smart_set_user()" function of inheriting widgets, so that part
 * aliasing is handled automatically for them.
 *
 * @ingroup Elm
 */
typedef struct _Elm_Layout_Part_Alias_Description
{
  const char *alias; /**< Alternate name for a given (real) part. Calls
                      * receiving this string as a part name will be translated
                      * to the string at
                      * Elm.Layout_Part_Proxies_Description::real_part */
  const char *real_part; /**< Target part name for the alias set on
                          * Elm.Layout_Part_Proxies_Description::real_part. An
                          * example of usage would be "default" on that field,
                          * with "elm.content.swallow" on this one */
} Elm_Layout_Part_Alias_Description;


#endif

/**
 * @brief Set accessibility to all texblock(text) parts in the layout object.
 *
 * @param[in] can_access Makes all textblock(text) parts in the layout @c obj
 * possible to have accessibility. @c true means textblock(text) parts can be
 * accessible.
 *
 * @return @c true on success or @c false on failure. If @c obj is not a proper
 * layout object, @c false is returned.
 *
 * @since 1.7
 *
 * @ingroup Elm_Layout
 */
EAPI Eina_Bool elm_layout_edje_object_can_access_set(Elm_Layout *obj, Eina_Bool can_access);

/**
 * @brief Get accessibility state of texblock(text) parts in the layout object
 *
 * @return Makes all textblock(text) parts in the layout @c obj possible to
 * have accessibility. @c true means textblock(text) parts can be accessible.
 *
 * @since 1.7
 *
 * @ingroup Elm_Layout
 */
EAPI Eina_Bool elm_layout_edje_object_can_access_get(const Elm_Layout *obj);

/**
 * @brief Set the edje group from the elementary theme that will be used as
 * layout.
 *
 * Note that @c style will be the new style of @c obj too, as in an @ref
 * elm_object_style_set call.
 *
 * @param[in] klass The class of the group.
 * @param[in] group The group.
 * @param[in] style The style to used.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Layout
 */
EAPI Eina_Bool elm_layout_theme_set(Elm_Layout *obj, const char *klass, const char *group, const char *style);



/**
 * @brief Get the edje layout
 *
 * This returns the edje object. It is not expected to be used to then swallow
 * objects via @ref edje_object_part_swallow for example. Use @ref
 * elm_layout_content_set instead so child object handling and sizing is done
 * properly.
 *
 * @note This function should only be used if you really need to call some low
 * level Edje function on this edje object. All the common stuff (setting text,
 * emitting signals, hooking callbacks to signals, etc.) can be done with
 * proper elementary functions.
 *
 * @return An Evas_Object with the edje layout settings loaded @ref
 * elm_layout_file_set.
 *
 * @ingroup Elm_Layout
 */
EAPI Efl_Canvas_Object *elm_layout_edje_get(const Elm_Layout *obj);

/**
 * @brief Sets if the cursor set should be searched on the theme or should use
 * the provided by the engine, only.
 *
 * @note Before you set if should look on theme you should define a cursor with
 * @ref elm_layout_part_cursor_set. By default it will only look for cursors
 * provided by the engine.
 *
 * @param[in] part_name A part from loaded edje group.
 * @param[in] engine_only If cursors should be just provided by the engine
 * ($true) or should also search on widget's theme as well ($false)
 *
 * @return @c true on success or @c false on failure, that may be part not
 * exists or it did not had a cursor set.
 *
 * @ingroup Elm_Layout
 */
EAPI Eina_Bool elm_layout_part_cursor_engine_only_set(Elm_Layout *obj, const char *part_name, Eina_Bool engine_only);

/**
 * @brief Get a specific cursor engine_only for an edje part.
 *
 * @param[in] part_name A part from loaded edje group.
 *
 * @return Whenever the cursor is just provided by engine or also from theme.
 *
 * @ingroup Elm_Layout
 */
EAPI Eina_Bool elm_layout_part_cursor_engine_only_get(const Elm_Layout *obj, const char *part_name);

/**
 * @brief Freezes the Elementary layout object.
 *
 * This function puts all changes on hold. Successive freezes will nest,
 * requiring an equal number of thaws.
 *
 * See also @ref elm_layout_thaw.
 *
 * @return The frozen state or 0 on error.
 *
 * @ingroup Elm_Layout
 */
EAPI int elm_layout_freeze(Elm_Layout *obj);


/**
 * @brief Eval sizing.
 *
 * Manually forces a sizing re-evaluation. This is useful when the minimum size
 * required by the edje theme of this layout has changed. The change on the
 * minimum size required by the edje theme is not immediately reported to the
 * elementary layout, so one needs to call this function in order to tell the
 * widget (layout) that it needs to reevaluate its own size.
 *
 * The minimum size of the theme is calculated based on minimum size of parts,
 * the size of elements inside containers like box and table, etc. All of this
 * can change due to state changes, and that's when this function should be
 * called.
 *
 * Also note that a standard signal of "size,eval" "elm" emitted from the edje
 * object will cause this to happen too.
 *
 * @ingroup Elm_Layout
 */
EAPI void elm_layout_sizing_eval(Elm_Layout *obj);

/**
 * @brief Request sizing reevaluation, restricted to current width and/or
 * height.
 *
 * Useful mostly when there are TEXTBLOCK parts defining the height of the
 * object and nothing else restricting it to a minimum width. Calling this
 * function will restrict the minimum size in the Edje calculation to whatever
 * size it the layout has at the moment.
 *
 * @param[in] width Restrict minimum size to the current width.
 * @param[in] height Restrict minimum size ot the current height.
 *
 * @since 1.8
 *
 * @ingroup Elm_Layout
 */
EAPI void elm_layout_sizing_restricted_eval(Elm_Layout *obj, Eina_Bool width, Eina_Bool height);

/**
 * @brief Sets a specific cursor style for an edje part.
 *
 * @param[in] part_name A part from loaded edje group.
 * @param[in] style The theme style to use (default, transparent, ...).
 *
 * @return @c true on success or @c false on failure, that may be part not
 * exists or it did not had a cursor set.
 *
 * @ingroup Elm_Layout
 */
EAPI Eina_Bool elm_layout_part_cursor_style_set(Elm_Layout *obj, const char *part_name, const char *style);

/**
 * @brief Get a specific cursor style for an edje part.
 *
 * @param[in] part_name A part from loaded edje group.
 *
 * @return The theme style in use, defaults to "default". If the object does
 * not have a cursor set, then @c null is returned.
 *
 * @ingroup Elm_Layout
 */
EAPI const char *elm_layout_part_cursor_style_get(const Elm_Layout *obj, const char *part_name);

/**
 * @brief Add a callback for a (Edje) signal emitted by a layout widget's
 * underlying Edje object.
 *
 * This function connects a callback function to a signal emitted by the
 * underlying Edje object of @c obj. Globs are accepted in either the emission
 * or source strings.
 *
 * @param[in] emission The signal's name string.
 * @param[in] source The signal's source string.
 * @param[in] func The callback function to be executed when the signal is
 * emitted.
 * @param[in] data A pointer to data to pass in to the callback function.
 *
 * @ingroup Elm_Layout
 */
EAPI void elm_layout_signal_callback_add(Elm_Layout *obj, const char *emission, const char *source, Edje_Signal_Cb func, void *data);

/**
 * @brief Sets a specific cursor for an edje part.
 *
 * @param[in] part_name A part from loaded edje group.
 * @param[in] cursor Cursor name to use, see Elementary_Cursor.h.
 *
 * @return @c true on success or @c false on failure, that may be part not
 * exists or it has "mouse_events: 0".
 *
 * @ingroup Elm_Layout
 */
EAPI Eina_Bool elm_layout_part_cursor_set(Elm_Layout *obj, const char *part_name, const char *cursor);

/**
 * @brief Get the cursor to be shown when mouse is over an edje part.
 *
 * @param[in] part_name A part from loaded edje group.
 *
 * @return Cursor name
 *
 * @ingroup Elm_Layout
 */
EAPI const char *elm_layout_part_cursor_get(const Elm_Layout *obj, const char *part_name);


/**
 * @brief Get the edje data from the given layout.
 *
 * This function fetches data specified inside the edje theme of this layout.
 * This function return NULL if data is not found.
 *
 * In EDC this comes from a data block within the group block that @c obj was
 * loaded from.
 *
 * @param[in] key The data key.
 *
 * @return The edje data string.
 *
 * @ingroup Elm_Layout
 */
EAPI const char *elm_layout_data_get(const Elm_Layout *obj, const char *key);

/**
 * @brief Remove a signal-triggered callback from a given layout widget.
 *
 * This function removes the last callback attached to a signal emitted by the
 * undelying Edje object of @c obj, with parameters @c emission, @c source and
 * @c func matching exactly those passed to a previous call to
 * @ref elm_layout_signal_callback_add. The data pointer that was passed to
 * this call will be returned.
 *
 * @param[in] emission The signal's name string.
 * @param[in] source The signal's source string.
 * @param[in] func The callback function being executed when the signal was
 * emitted.
 *
 * @return The data pointer of the signal callback (passed on
 * @ref elm_layout_signal_callback_add) or @c null on errors.
 *
 * @ingroup Elm_Layout
 */
EAPI void *elm_layout_signal_callback_del(Elm_Layout *obj, const char *emission, const char *source, Edje_Signal_Cb func);

/**
 * @brief Thaws the Elementary object.
 *
 * This function thaws the given Edje object and the Elementary sizing calc.
 *
 * @note If sucessives freezes were done, an equal number of thaws will be
 * required.
 *
 * See also @ref elm_layout_freeze.
 *
 * @return The frozen state or 0 if the object is not frozen or on error.
 *
 * @ingroup Elm_Layout
 */
EAPI int elm_layout_thaw(Elm_Layout *obj);

/**
 * @brief Send a (Edje) signal to a given layout widget's underlying Edje
 * object.
 *
 * This function sends a signal to the underlying Edje object of @c obj. An
 * Edje program on that Edje object's definition can respond to a signal by
 * specifying matching 'signal' and 'source' fields.
 *
 * @param[in] emission The signal's name string.
 * @param[in] source The signal's source string.
 *
 * @ingroup Elm_Layout
 */
EAPI void elm_layout_signal_emit(Elm_Layout *obj, const char *emission, const char *source);

/**
 * @brief Unsets a cursor previously set with @ref elm_layout_part_cursor_set.
 *
 * @param[in] part_name A part from loaded edje group, that had a cursor set
 * wit @ref elm_layout_part_cursor_set.
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Elm_Layout
 */
EAPI Eina_Bool elm_layout_part_cursor_unset(Elm_Layout *obj, const char *part_name);

#endif
