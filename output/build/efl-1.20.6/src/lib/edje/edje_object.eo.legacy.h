#ifndef _EDJE_OBJECT_EO_LEGACY_H_
#define _EDJE_OBJECT_EO_LEGACY_H_

#ifndef _EDJE_OBJECT_EO_CLASS_TYPE
#define _EDJE_OBJECT_EO_CLASS_TYPE

typedef Eo Edje_Object;

#endif

#ifndef _EDJE_OBJECT_EO_TYPES
#define _EDJE_OBJECT_EO_TYPES


#endif

/**
 * @brief Whether this object is animating or not.
 *
 * This property indicates whether animations are stopped or not. Animations
 * here refer to transitions between states.
 *
 * If animations are disabled, transitions between states (as defined in EDC)
 * are then instantaneous. This is conceptually similar to setting the
 * @ref edje_object_transition_duration_factor_get to an infinitely high value.
 *
 * Start or stop animating this object.
 *
 * @param[in] on The animation state, @c true by default.
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_animation_set(Edje_Object *obj, Eina_Bool on);

/**
 * @brief Whether this object is animating or not.
 *
 * This property indicates whether animations are stopped or not. Animations
 * here refer to transitions between states.
 *
 * If animations are disabled, transitions between states (as defined in EDC)
 * are then instantaneous. This is conceptually similar to setting the
 * @ref edje_object_transition_duration_factor_get to an infinitely high value.
 *
 * Get the current state of animation, @c true by default.
 *
 * @return The animation state, @c true by default.
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_animation_get(const Edje_Object *obj);

/**
 * @brief Whether this object is playing or not.
 *
 * This property indicates whether the object is running or not. If stopped (or
 * paused), all transitions are disabled and programs stop running, until
 * resumed.
 *
 * If play is disabled, the object will remain the same, and its parts will not
 * change state. Note that play can be disabled during a transition between
 * states, effectively freezing the object in flight. When paused, no events
 * will be processed or sent.
 *
 * Setting to @c true resumes playing from the current state.
 *
 * Start or stop playing programs in this object.
 *
 * @param[in] play The play state, @c true by default.
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_play_set(Edje_Object *obj, Eina_Bool play);

/**
 * @brief Whether this object is playing or not.
 *
 * This property indicates whether the object is running or not. If stopped (or
 * paused), all transitions are disabled and programs stop running, until
 * resumed.
 *
 * If play is disabled, the object will remain the same, and its parts will not
 * change state. Note that play can be disabled during a transition between
 * states, effectively freezing the object in flight. When paused, no events
 * will be processed or sent.
 *
 * Setting to @c true resumes playing from the current state.
 *
 * Get the current state of play, @c true by default.
 *
 * @return The play state, @c true by default.
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_play_get(const Edje_Object *obj);

/**
 * @brief Sets the given perspective object on this Edje object.
 *
 * Make the given perspective object be the default perspective for this Edje
 * object.
 *
 * There can be only one perspective object per Edje object, and if a previous
 * one was set, it will be removed and the new perspective object will be used.
 *
 * An Edje perspective will only affect a part if it doesn't point to another
 * part to be used as perspective.
 *
 * @ref edje_object_perspective_new() See also
 * @ref edje_object_perspective_get() @ref edje_perspective_set()
 *
 * @param[in] ps The perspective object that will be used.
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_perspective_set(Edje_Object *obj, Edje_Perspective *ps);

/**
 * @brief Gets the current perspective used on this Edje object.
 *
 * See also @ref edje_object_perspective_set()
 *
 * @return The perspective object that will be used.
 *
 * @ingroup Edje_Object
 */
EAPI const Edje_Perspective *edje_object_perspective_get(const Edje_Object *obj);

/**
 * @brief Transition duration factor.
 *
 * This defines a multiplier for the duration of transitions as they are
 * defined in EDC. By default this factor is 1.0, which means animations play
 * at the same speed as described in EDC.
 *
 * Sets transition duration factor.
 *
 * @param[in] scale The transition duration factor.
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_transition_duration_factor_set(Edje_Object *obj, double scale);

/**
 * @brief Transition duration factor.
 *
 * This defines a multiplier for the duration of transitions as they are
 * defined in EDC. By default this factor is 1.0, which means animations play
 * at the same speed as described in EDC.
 *
 * Gets transition duration factor.
 *
 * @return The transition duration factor.
 *
 * @ingroup Edje_Object
 */
EAPI double edje_object_transition_duration_factor_get(const Edje_Object *obj);

/**
 * @brief Preloads the images on the Edje Object in the background.
 *
 * This function requests the preload of all data images (on the given object)
 * in the background. The work is queued before being processed (because there
 * might be other pending requests of this type). It emits a signal
 * "preload,done" when finished.
 *
 * @note Use @c true on scenarios where you don't need the image data preloaded
 * anymore.
 *
 * @param[in] cancel @c false will add it the preloading work queue, @c true
 * will remove it (if it was issued before).
 *
 * @return @c false if obj was not a valid Edje object otherwise @c true
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_preload(Edje_Object *obj, Eina_Bool cancel);


/**
 * @brief Whether this object updates its size hints automatically.
 *
 * By default edje doesn't set size hints on itself. If this property is set to
 * @c true, size hints will be updated after recalculation. Be careful, as
 * recalculation may happen often, enabling this property may have a
 * considerable performance impact as other widgets will be notified of the
 * size hints changes.
 *
 * A layout recalculation can be triggered by @ref edje_object_size_min_calc(),
 * @ref edje_object_size_min_restricted_calc(),
 * @ref edje_object_parts_extends_calc() or even any other internal event.
 *
 * Enable or disable auto-update of size hints.
 *
 * @param[in] update Whether or not update the size hints.
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_update_hints_set(Edje_Object *obj, Eina_Bool update);

/**
 * @brief Whether this object updates its size hints automatically.
 *
 * By default edje doesn't set size hints on itself. If this property is set to
 * @c true, size hints will be updated after recalculation. Be careful, as
 * recalculation may happen often, enabling this property may have a
 * considerable performance impact as other widgets will be notified of the
 * size hints changes.
 *
 * A layout recalculation can be triggered by @ref edje_object_size_min_calc(),
 * @ref edje_object_size_min_restricted_calc(),
 * @ref edje_object_parts_extends_calc() or even any other internal event.
 *
 * Whether this object updates its size hints automatically.
 *
 * @return Whether or not update the size hints.
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_update_hints_get(const Edje_Object *obj);

/**
 * @brief Calculates the minimum required size for a given Edje object.
 *
 * This call works exactly as edje_object_size_min_restricted_calc(), with the
 * last two arguments set to 0. Please refer to its documentation, then.
 *
 * @param[out] minw The minimum required width (return value)
 * @param[out] minh The minimum required height (return value)
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_size_min_calc(Edje_Object *obj, int *minw, int *minh);

/**
 * @brief Calculates the minimum required size for a given Edje object.
 *
 * This call will trigger an internal recalculation of all parts of the object,
 * in order to return its minimum required dimensions for width and height. The
 * user might choose to impose those minimum sizes, making the resulting
 * calculation to get to values equal or larger than @c restrictedw and
 * @c restrictedh, for width and height, respectively.
 *
 * @note At the end of this call, the object  won't be automatically resized to
 * the new dimensions, but just return the calculated sizes. The caller is the
 * one up to change its geometry or not.
 *
 * @warning Be advised that invisible parts in the object will be taken into
 * account in this calculation.
 *
 * @param[out] minw The minimum required width (return value)
 * @param[out] minh The minimum required height (return value)
 * @param[in] restrictedw The minimum width constraint as input, @c minw can
 * not be lower than this
 * @param[in] restrictedh The minimum height constraint as input, @c minh can
 * not be lower than this
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_size_min_restricted_calc(Edje_Object *obj, int *minw, int *minh, int restrictedw, int restrictedh);

/**
 * @brief Calculates the geometry of the region, relative to a given Edje
 * object's area, occupied by all parts in the object.
 *
 * This function gets the geometry of the rectangle equal to the area required
 * to group all parts in obj's group/collection. The x and y coordinates are
 * relative to the top left corner of the whole obj object's area. Parts placed
 * out of the group's boundaries will also be taken in account, so that x and y
 * may be negative.
 *
 * @note On failure, this function will make all non-$null geometry pointers'
 * pointed variables be set to zero.
 *
 * @param[out] x The parts region's X coordinate
 * @param[out] y The parts region's Y coordinate
 * @param[out] w The parts region's width
 * @param[out] h The parts region's height
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_parts_extends_calc(Edje_Object *obj, int *x, int *y, int *w, int *h);

/**
 * @brief Forces a Size/Geometry calculation.
 *
 * Forces the object to recalculate its layout regardless of freeze/thaw.
 *
 * See also @ref edje_object_freeze and @ref edje_object_thaw.
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_calc_force(Edje_Object *obj);

/**
 * @brief Freezes the Edje object.
 *
 * This function puts all changes on hold. Successive freezes will nest,
 * requiring an equal number of thaws.
 *
 * See also @ref edje_object_thaw()
 *
 * @return The frozen state or 0 on error
 *
 * @ingroup Edje_Object
 */
EAPI int edje_object_freeze(Edje_Object *obj);

/**
 * @brief Thaws the Edje object.
 *
 * This function thaws the given Edje object.
 *
 * @note If sucessive freezes were done, an equal number of thaws will be
 * required.
 *
 * See also @ref edje_object_freeze()
 *
 * @return The frozen state or 0 if the object is not frozen or on error.
 *
 * @ingroup Edje_Object
 */
EAPI int edje_object_thaw(Edje_Object *obj);

/**
 * @brief Gets the minimum size specified -- as an EDC property -- for a given
 * Edje object
 *
 * This function retrieves the obj object's minimum size values, as declared in
 * its EDC group definition. For instance, for an Edje object of minimum size
 * 100x100 pixels: collections { group { name: "a_group"; min: 100 100; } }
 *
 * @note If the @c min EDC property was not declared for this object, this call
 * will return 0x0.
 *
 * @note On failure, this function also return 0x0.
 *
 * See also @ref edje_object_size_max_get.
 *
 * @param[out] minw Pointer to a variable where to store the minimum width
 * @param[out] minh Pointer to a variable where to store the minimum height
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_size_min_get(const Edje_Object *obj, int *minw, int *minh);

/**
 * @brief Gets the maximum size specified -- as an EDC property -- for a given
 * Edje object
 *
 * This function retrieves the object's maximum size values, as declared in its
 * EDC group definition. For instance, for an Edje object of maximum size
 * 100x100 pixels: collections { group { name: "a_group"; max: 100 100; } }
 *
 * @note If the @c max EDC property was not declared for the object, this call
 * will return the maximum size a given Edje object may have, for each axis.
 *
 * @note On failure, this function will return 0x0.
 *
 * See also @ref edje_object_size_min_get.
 *
 * @param[out] maxw The maximum width
 * @param[out] maxh The maximum height
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_size_max_get(const Edje_Object *obj, int *maxw, int *maxh);

/**
 * @brief Retrives an EDC data field's value from a given Edje object's group.
 *
 * This function fetches an EDC data field's value, which is declared on the
 * objects building EDC file, under its group. EDC data blocks are most
 * commonly used to pass arbitrary parameters from an application's theme to
 * its code.
 *
 * EDC data fields always hold  strings as values, hence the return type of
 * this function. Check the complete "syntax reference" for EDC files.
 *
 * This is how a data item is defined in EDC: collections { group { name:
 * "a_group"; data { item: "key1" "value1"; item: "key2" "value2"; } } }
 *
 * @warning Do not confuse this call with edje_file_data_get(), which queries
 * for a global EDC data field on an EDC declaration file.
 *
 * @param[in] key The data field's key string
 *
 * @return The data's value string.
 *
 * @ingroup Edje_Object
 */
EAPI const char *edje_object_data_get(const Edje_Object *obj, const char * key);


/**
 * @brief Adds a callback for an arriving Edje signal, emitted by a given Edje
 * object.
 *
 * Edje signals are one of the communication interfaces between code and a
 * given Edje object's theme. With signals, one can communicate two string
 * values at a time, which are: - "emission" value: the name of the signal, in
 * general - "source" value: a name for the signal's context, in general
 *
 * Though there are those common uses for the two strings, one is free to use
 * them however they like.
 *
 * Signal callback registration is powerful, in the way that  blobs may be used
 * to match multiple signals at once. All the "*?[\" set of @c fnmatch()
 * operators can be used, both for emission and source.
 *
 * Edje has  internal signals it will emit, automatically, on various actions
 * taking place on group parts. For example, the mouse cursor being moved,
 * pressed, released, etc., over a given part's area, all generate individual
 * signals.
 *
 * By using something like edje_object_signal_callback_add(obj, "mouse,down,*",
 * "button.*", signal_cb, NULL); being @ref "button.*" the pattern for the
 * names of parts implementing buttons on an interface, you'd be registering
 * for notifications on events of mouse buttons being pressed down on either of
 * those parts (those events all have the @"mouse,down," common prefix on their
 * names, with a suffix giving the button number). The actual emission and
 * source strings of an event will be passed in as the  emission and  source
 * parameters of the callback function (e.g. "mouse,down,2" and
 * @"button.close"), for each of those events.
 *
 * @note See @ref edcref "the syntax" for EDC files See also
 * @ref edje_object_signal_emit() on how to emits Edje signals from code to a
 * an object @ref edje_object_signal_callback_del_full()
 *
 * @param[in] emission The signal's "emission" string
 * @param[in] source The signal's "source" string
 * @param[in] func The callback function to be executed when the signal is
 * emitted.
 * @param[in] data A pointer to data to pass in to func.
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_signal_callback_add(Edje_Object *obj, const char *emission, const char *source, Edje_Signal_Cb func, void *data);


/**
 * @brief Sends/emits an Edje signal to a given Edje object
 *
 * This function sends a signal to the object  obj. An Edje program, at obj's
 * EDC specification level, can respond to a signal by having declared matching
 * @'signal' and @'source' fields on its block (see @ref edcref "the syntax"
 * for EDC files).
 *
 * See also @ref edje_object_signal_callback_add() for more on Edje signals.
 *
 * @param[in] emission The signal's "emission" string
 * @param[in] source The signal's "source" string
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_signal_emit(Edje_Object *obj, const char *emission, const char *source);






/**
 * @brief Gets the description of an object color class.
 *
 * This function gets the description of a color class in use by an object.
 *
 * @param[in] color_class Color class description
 *
 * @return The description of the target color class or @c null if not found
 *
 * @ingroup Edje_Object
 */
EAPI const char *edje_object_color_class_description_get(const Edje_Object *obj, const char * color_class);

/**
 * @brief Clears object color classes.
 *
 * @return @c true on success, or @c false on error
 *
 * @since 1.17.0
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_color_class_clear(const Edje_Object *obj);

/**
 * @brief Deletes the object color class.
 *
 * This function deletes any values at the object level for the specified
 * object and color class.
 *
 * Deleting the color class will revert it to the values defined by
 * edje_color_class_set() or the color class defined in the theme file.
 *
 * Deleting the color class will emit the signal "color_class,del" for the
 * given Edje object.
 *
 * @param[in] color_class The color class to be deleted.
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_color_class_del(Edje_Object *obj, const char *color_class);

/**
 * @brief Sets Edje text class.
 *
 * This function sets the text class for the Edje.
 *
 * @param[in] text_class The text class name
 * @param[in] font Font name
 * @param[in] size Font Size
 *
 * @return @c true on success, or @c false on error
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_text_class_set(Edje_Object *obj, const char * text_class, const char *font, int size);

/**
 * @brief Gets font and font size from edje text class.
 *
 * This function gets the font and the font size from the object text class.
 * The font string will only be valid until the text class is changed or the
 * edje object is deleted.
 *
 * @param[in] text_class The text class name
 * @param[out] font Font name
 * @param[out] size Font Size
 *
 * @return @c true on success, or @c false on error
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_text_class_get(const Edje_Object *obj, const char * text_class, const char **font, int *size);

/**
 * @brief Deletes the object text class.
 *
 * This function deletes any values at the object level for the specified
 * object and text class.
 *
 * Deleting the text class will revert it to the values defined by
 * edje_text_class_set() or the text class defined in the theme file.
 *
 * @param[in] text_class The color class to be deleted.
 *
 * @since 1.17
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_text_class_del(Edje_Object *obj, const char *text_class);

/**
 * @brief Sets the object size class.
 *
 * This function sets the min and max values for an object level size class.
 * This will make all edje parts in the specified object that have the
 * specified size class update their min and max size with given values.
 *
 * @param[in] size_class The size class name
 * @param[in] minw The min width
 * @param[in] minh The min height
 * @param[in] maxw The max width
 * @param[in] maxh The max height
 *
 * @return @c true on success, or @c false on error
 *
 * @since 1.17
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_size_class_set(Edje_Object *obj, const char * size_class, int minw, int minh, int maxw, int maxh);

/**
 * @brief Gets the object size class.
 *
 * This function gets the min and max values for an object level size class.
 * These values will only be valid until the size class is changed or the edje
 * object is deleted.
 *
 * @param[in] size_class The size class name
 * @param[out] minw The min width
 * @param[out] minh The min height
 * @param[out] maxw The max width
 * @param[out] maxh The max height
 *
 * @return @c true on success, or @c false on error
 *
 * @since 1.17
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_size_class_get(const Edje_Object *obj, const char * size_class, int *minw, int *minh, int *maxw, int *maxh);

/**
 * @brief Deletes the object size class.
 *
 * This function deletes any values at the object level for the specified
 * object and size class.
 *
 * Deleting the size class will revert it to the values defined by
 * edje_size_class_set() or the color class defined in the theme file.
 *
 * @param[in] size_class Size class name
 *
 * @since 1.17
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_size_class_del(Edje_Object *obj, const char *size_class);


/**
 * @brief Checks if a part exists in a given Edje object's group definition.
 *
 * This function returns if a given part exists in the Edje group bound to this
 * object (with @ref Efl.File.file.set()).
 *
 * This call is useful, for example, when one could expect or not a given GUI
 * element, depending on the theme applied to the object.
 *
 * @note @ref Efl.Part.part() called on an Edje object will return @c null if
 * it doesn't contain the given part.
 *
 * @param[in] part The part's name to check for existence in obj's group
 *
 * @return @c true if the Edje part exists in obj's group, or @c false
 * otherwise (and on errors)
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_part_exists(const Edje_Object *obj, const char *part);

/**
 * @brief Sets the object text callback.
 *
 * This function sets the callback to be called when the text changes.
 *
 * @param[in] func The callback function to handle the text change
 * @param[in] data The data associated to the callback function.
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_text_change_cb_set(Edje_Object *obj, Edje_Text_Change_Cb func, void *data);

/**
 * @brief Sets the autocapitalization type on the immodule.
 *
 * @param[in] part The part name
 * @param[in] autocapital_type The type of autocapitalization
 *
 * @since 1.1.0
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_autocapital_type_set(Edje_Object *obj, const char * part, Edje_Text_Autocapital_Type autocapital_type);

/**
 * @brief Retrieves the autocapitalization type
 *
 * @param[in] part The part name
 *
 * @return The type of autocapitalization
 *
 * @since 1.1.0
 *
 * @ingroup Edje_Object
 */
EAPI Edje_Text_Autocapital_Type edje_object_part_text_autocapital_type_get(const Edje_Object *obj, const char * part);

/**
 * @brief Sets whether the prediction is allowed or not.
 *
 * @param[in] part The part name
 * @param[in] prediction If @c true, the prediction feature is allowed.
 *
 * @since 1.2.0
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_prediction_allow_set(Edje_Object *obj, const char * part, Eina_Bool prediction);

/**
 * @brief Gets whether the prediction is allowed or not.
 *
 * @param[in] part The part name
 *
 * @return If @c true, the prediction feature is allowed.
 *
 * @since 1.2.0
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_part_text_prediction_allow_get(const Edje_Object *obj, const char * part);

/**
 * @brief Sets the function that provides item objects for named items in an
 * edje entry text
 *
 * Item objects may be deleted any time by Edje, and will be deleted when the
 * Edje object is deleted (or file is set to a new file).
 *
 * @param[in] func The function to call (or @c null to disable) to get item
 * objects
 * @param[in] data The data pointer to pass to the func callback
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_item_provider_set(Edje_Object *obj, Edje_Item_Provider_Cb func, void *data);


/**
 * @brief Starts selecting at current cursor position
 *
 * @param[in] part The part name
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_select_begin(const Edje_Object *obj, const char *part);

/**
 * @brief Aborts any selection action on a part.
 *
 * @param[in] part The part name
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_select_abort(const Edje_Object *obj, const char *part);

/**
 * @brief Extends the current selection to the current cursor position
 *
 * @param[in] part The part name
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_select_extend(const Edje_Object *obj, const char *part);

/**
 * @brief Sets the selection to be everything.
 *
 * This function selects all text of the object of the part.
 *
 * @param[in] part The part name
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_select_all(const Edje_Object *obj, const char *part);

/**
 * @brief Sets the selection to be none.
 *
 * This function sets the selection text to be none.
 *
 * @param[in] part The part name
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_select_none(const Edje_Object *obj, const char *part);

/**
 * @brief Returns the selection text of the object part.
 *
 * This function returns selection text of the object part.
 *
 * See also @ref edje_object_part_text_select_all() and
 * @ref edje_object_part_text_select_none()
 *
 * @param[in] part The part name
 *
 * @return The text string
 *
 * @ingroup Edje_Object
 */
EAPI const char *edje_object_part_text_selection_get(const Edje_Object *obj, const char * part);

/**
 * @brief Gets the input method context in entry.
 *
 * If ecore_imf was not available when edje was compiled, this function returns
 * @c null otherwise, the returned pointer is an Ecore_IMF
 *
 * @param[in] part The part name
 *
 * @return The input method context (Ecore_IMF_Context *) in entry
 *
 * @since 1.2.0
 *
 * @ingroup Edje_Object
 */
EAPI void *edje_object_part_text_imf_context_get(const Edje_Object *obj, const char * part);

/**
 * @brief Resets the input method context if needed.
 *
 * This can be necessary in the case where modifying the buffer would confuse
 * on-going input method behavior
 *
 * @param[in] part The part name
 *
 * @since 1.2.0
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_imf_context_reset(const Edje_Object *obj, const char *part);

/**
 * @brief Sets the input hint which allows input methods to fine-tune their
 * behavior.
 *
 * @param[in] part The part name
 * @param[in] input_hints Input hints
 *
 * @since 1.12.0
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_input_hint_set(Edje_Object *obj, const char * part, Edje_Input_Hints input_hints);

/**
 * @brief Gets the value of input hint
 *
 * @param[in] part The part name
 *
 * @return Input hints
 *
 * @since 1.12.0
 *
 * @ingroup Edje_Object
 */
EAPI Edje_Input_Hints edje_object_part_text_input_hint_get(const Edje_Object *obj, const char * part);

/**
 * @brief Shows the input panel (virtual keyboard) based on the input panel
 * property such as layout, autocapital types, and so on.
 *
 * Note that input panel is shown or hidden automatically according to the
 * focus state. This API can be used in the case of manually controlling by
 * using edje_object_part_text_input_panel_enabled_set.
 *
 * @param[in] part The part name
 *
 * @since 1.2.0
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_input_panel_show(const Edje_Object *obj, const char *part);

/**
 * @brief Hides the input panel (virtual keyboard). See also
 * @ref edje_object_part_text_input_panel_show
 *
 * Note that input panel is shown or hidden automatically according to the
 * focus state. This API can be used in the case of manually controlling by
 * using edje_object_part_text_input_panel_enabled_set.
 *
 * @param[in] part The part name
 *
 * @since 1.2.0
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_input_panel_hide(const Edje_Object *obj, const char *part);

/**
 * @brief Sets the input panel-specific data to deliver to the input panel.
 *
 * This API is used by applications to deliver specific data to the input
 * panel. The data format MUST be negotiated by both application and the input
 * panel. The size and format of data are defined by the input panel.
 *
 * @param[in] part The part name
 * @param[in] data The specific data to be set to the input panel.
 * @param[in] len The length of data, in bytes, to send to the input panel
 *
 * @since 1.2.0
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_input_panel_imdata_set(Edje_Object *obj, const char * part, const void * data, int len);

/**
 * @brief Gets the specific data of the current active input panel.
 *
 * @param[in] part The part name
 * @param[in] data The specific data to be set to the input panel.
 * @param[out] len The length of data, in bytes, to send to the input panel
 *
 * @return FIXME: void needed here?
 *
 * @since 1.2.0
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_input_panel_imdata_get(const Edje_Object *obj, const char * part, void * data, int *len);

/**
 * @brief Sets the layout of the input panel.
 *
 * The layout of the input panel or virtual keyboard can make it easier or
 * harder to enter content. This allows you to hint what kind of input you are
 * expecting to enter and thus have the input panel automatically come up with
 * the right mode.
 *
 * @param[in] part The part name
 * @param[in] layout Layout type of the input panel
 *
 * @since 1.1
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_input_panel_layout_set(Edje_Object *obj, const char * part, Edje_Input_Panel_Layout layout);

/**
 * @brief Gets the layout of the input panel.
 *
 * See also @ref edje_object_part_text_input_panel_layout_set
 *
 * @param[in] part The part name
 *
 * @return Layout type of the input panel
 *
 * @since 1.1
 *
 * @ingroup Edje_Object
 */
EAPI Edje_Input_Panel_Layout edje_object_part_text_input_panel_layout_get(const Edje_Object *obj, const char * part);

/**
 * @brief Sets the language mode of the input panel.
 *
 * This API can be used if you want to show the Alphabet keyboard.
 *
 * @param[in] part The part name
 * @param[in] lang The language to be set to the input panel.
 *
 * @since 1.2.0
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_input_panel_language_set(Edje_Object *obj, const char * part, Edje_Input_Panel_Lang lang);

/**
 * @brief Gets the language mode of the input panel.
 *
 * See also @ref edje_object_part_text_input_panel_language_set for more
 * details.
 *
 * @param[in] part The part name
 *
 * @return The language to be set to the input panel.
 *
 * @since 1.2.0
 *
 * @ingroup Edje_Object
 */
EAPI Edje_Input_Panel_Lang edje_object_part_text_input_panel_language_get(const Edje_Object *obj, const char * part);

/**
 * @brief Sets the layout variation of the input panel.
 *
 * The layout variation of the input panel or virtual keyboard can make it
 * easier or harder to enter content. This allows you to hint what kind of
 * input you are expecting to enter and thus have the input panel automatically
 * come up with the right mode.
 *
 * @param[in] part The part name
 * @param[in] variation Layout variation type
 *
 * @since 1.8
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_input_panel_layout_variation_set(Edje_Object *obj, const char * part, int variation);

/**
 * @brief Gets the layout variation of the input panel.
 *
 * See also @ref edje_object_part_text_input_panel_layout_variation_set
 *
 * @param[in] part The part name
 *
 * @return Layout variation type
 *
 * @since 1.8
 *
 * @ingroup Edje_Object
 */
EAPI int edje_object_part_text_input_panel_layout_variation_get(const Edje_Object *obj, const char * part);

/**
 * @brief Sets the attribute to show the input panel automatically.
 *
 * @param[in] part The part name
 * @param[in] enabled If @c true, the input panel is appeared when entry is
 * clicked or has a focus
 *
 * @since 1.1.0
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_input_panel_enabled_set(Edje_Object *obj, const char * part, Eina_Bool enabled);

/**
 * @brief Retrieves the attribute to show the input panel automatically. See
 * also @ref edje_object_part_text_input_panel_enabled_set
 *
 * @param[in] part The part name
 *
 * @return If @c true, the input panel is appeared when entry is clicked or has
 * a focus
 *
 * @since 1.1.0
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_part_text_input_panel_enabled_get(const Edje_Object *obj, const char * part);

/**
 * @brief Sets the return key on the input panel to be disabled.
 *
 * @param[in] part The part name
 * @param[in] disabled The state
 *
 * @since 1.2.0
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_input_panel_return_key_disabled_set(Edje_Object *obj, const char * part, Eina_Bool disabled);

/**
 * @brief Gets whether the return key on the input panel should be disabled or
 * not.
 *
 * @param[in] part The part name
 *
 * @return The state
 *
 * @since 1.2.0
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_part_text_input_panel_return_key_disabled_get(const Edje_Object *obj, const char * part);

/**
 * @brief Sets the "return" key type. This type is used to set string or icon
 * on the "return" key of the input panel.
 *
 * An input panel displays the string or icon associated with this type
 *
 * @param[in] part The part name
 * @param[in] return_key_type The type of "return" key on the input panel
 *
 * @since 1.2.0
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_input_panel_return_key_type_set(Edje_Object *obj, const char * part, Edje_Input_Panel_Return_Key_Type return_key_type);

/**
 * @brief Gets the "return" key type.
 *
 * See also @ref edje_object_part_text_input_panel_return_key_type_set() for
 * more details
 *
 * @param[in] part The part name
 *
 * @return The type of "return" key on the input panel
 *
 * @since 1.2.0
 *
 * @ingroup Edje_Object
 */
EAPI Edje_Input_Panel_Return_Key_Type edje_object_part_text_input_panel_return_key_type_get(const Edje_Object *obj, const char * part);

/**
 * @brief Sets the attribute to show the input panel in case of only an user's
 * explicit Mouse Up event. It doesn't request to show the input panel even
 * though it has focus.
 *
 * @param[in] part The part name
 * @param[in] ondemand If @c true, the input panel will be shown in case of
 * only Mouse up event. (Focus event will be ignored.)
 *
 * @since 1.9.0
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_input_panel_show_on_demand_set(Edje_Object *obj, const char * part, Eina_Bool ondemand);

/**
 * @brief Gets the attribute to show the input panel in case of only an user's
 * explicit Mouse Up event.
 *
 * @param[in] part The part name
 *
 * @return If @c true, the input panel will be shown in case of only Mouse up
 * event. (Focus event will be ignored.)
 *
 * @since 1.9.0
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Bool edje_object_part_text_input_panel_show_on_demand_get(const Edje_Object *obj, const char * part);

/**
 * @brief Sets the prediction hint to use an intelligent reply suggestion
 * service.
 *
 * @param[in] part The part name
 * @param[in] prediction_hint Prediction hint
 *
 * @since 1.20.0
 *
 * @ingroup Edje_Object
 */
EAPI void edje_object_part_text_prediction_hint_set(Edje_Object *obj, const char * part, const char *prediction_hint);

/**
 * @brief Returns the seat device given its Edje's name.
 *
 * Edje references seats by a name that differs from Evas. Edje naming follows
 * a incrementional convention: first registered name is "seat1", second is
 * "seat2", differently from Evas.
 *
 * @param[in] name The name's character string.
 *
 * @return The seat device or @c null if not found.
 *
 * @since 1.19
 *
 * @ingroup Edje_Object
 */
EAPI Efl_Input_Device *edje_object_seat_get(const Edje_Object *obj, Eina_Stringshare * name);

/**
 * @brief Gets the name given to a set by Edje.
 *
 * Edje references seats by a name that differs from Evas. Edje naming follows
 * a incrementional convention: first registered name is "seat1", second is
 * "seat2", differently from Evas.
 *
 * @param[in] device The seat device
 *
 * @return The name's character string or @c null if not found.
 *
 * @since 1.19
 *
 * @ingroup Edje_Object
 */
EAPI Eina_Stringshare *edje_object_seat_name_get(const Edje_Object *obj, Efl_Input_Device * device);

#endif
