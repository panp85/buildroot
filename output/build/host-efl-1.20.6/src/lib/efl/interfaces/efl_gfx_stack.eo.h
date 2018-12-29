#ifndef _EFL_GFX_STACK_EO_H_
#define _EFL_GFX_STACK_EO_H_

#ifndef _EFL_GFX_STACK_EO_CLASS_TYPE
#define _EFL_GFX_STACK_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Stack;

#endif

#ifndef _EFL_GFX_STACK_EO_TYPES
#define _EFL_GFX_STACK_EO_TYPES

#ifndef EFL_GFX_STACK_LAYER_MIN
/** bottom-most layer number
 *
 * @ingroup Efl_Gfx_Stack_Layer
 */
#define EFL_GFX_STACK_LAYER_MIN -32768 /* +32768 */
#endif

#ifndef EFL_GFX_STACK_LAYER_MAX
/** top-most layer number
 *
 * @ingroup Efl_Gfx_Stack_Layer
 */
#define EFL_GFX_STACK_LAYER_MAX 32767
#endif


#endif
/** Efl graphics stack interface
 *
 * @ingroup Efl_Gfx_Stack
 */
#define EFL_GFX_STACK_INTERFACE efl_gfx_stack_interface_get()

EWAPI const Efl_Class *efl_gfx_stack_interface_get(void);

/**
 * @brief Sets the layer of its canvas that the given object will be part of.
 *
 * If you don't use this function, you'll be dealing with an unique layer of
 * objects, the default one. Additional layers are handy when you don't want a
 * set of objects to interfere with another set with regard to stacking. Two
 * layers are completely disjoint in that matter.
 *
 * This is a low-level function, which you'd be using when something should be
 * always on top, for example.
 *
 * @warning Be careful, it doesn't make sense to change the layer of smart
 * objects' children. Smart objects have a layer of their own, which should
 * contain all their children objects.
 *
 * See also @ref efl_gfx_stack_layer_get()
 *
 * @param[in] l The number of the layer to place the object on. Must be between
 * #EFL_GFX_STACK_LAYER_MIN and #EFL_GFX_STACK_LAYER_MAX.
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI void efl_gfx_stack_layer_set(Eo *obj, short l);

/**
 * @brief Retrieves the layer of its canvas that the given object is part of.
 *
 * See also @ref efl_gfx_stack_layer_set()
 *
 * @return The number of the layer to place the object on. Must be between
 * #EFL_GFX_STACK_LAYER_MIN and #EFL_GFX_STACK_LAYER_MAX.
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI short efl_gfx_stack_layer_get(const Eo *obj);

/**
 * @brief Get the Evas object stacked right below @c obj
 *
 * This function will traverse layers in its search, if there are objects on
 * layers below the one @c obj is placed at.
 *
 * See also @ref efl_gfx_stack_layer_get(), @ref efl_gfx_stack_layer_set() and
 * @ref efl_gfx_stack_below_get()
 *
 * @return The #Efl_Gfx_Stack directly below @c obj, if any, or @c null, if
 * none
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI Efl_Gfx_Stack *efl_gfx_stack_below_get(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Get the Evas object stacked right above @c obj
 *
 * This function will traverse layers in its search, if there are objects on
 * layers above the one @c obj is placed at.
 *
 * See also @ref efl_gfx_stack_layer_get(), @ref efl_gfx_stack_layer_set() and
 * @ref efl_gfx_stack_below_get()
 *
 * @return The #Efl_Gfx_Stack directly below @c obj, if any, or @c null, if
 * none
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI Efl_Gfx_Stack *efl_gfx_stack_above_get(const Eo *obj) EINA_WARN_UNUSED_RESULT;

/**
 * @brief Stack @c obj immediately @c below
 *
 * Objects, in a given canvas, are stacked in the order they get added to it.
 *  This means that, if they overlap, the highest ones will cover the lowest
 * ones, in that order. This function is a way to change the stacking order for
 * the objects.
 *
 * This function is intended to be used with objects belonging to the same
 * layer in a given canvas, otherwise it will fail (and accomplish nothing).
 *
 * If you have smart objects on your canvas and @c obj is a member of one of
 * them, then @c below must also be a member of the same smart object.
 *
 * Similarly, if @c obj is not a member of a smart object, @c below must not be
 * either.
 *
 * See also @ref efl_gfx_stack_layer_get(), @ref efl_gfx_stack_layer_set() and
 * @ref efl_gfx_stack_below()
 *
 * @param[in] below The object below which to stack
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI void efl_gfx_stack_below(Eo *obj, Efl_Gfx_Stack *below) EINA_ARG_NONNULL(2);

/**
 * @brief Raise @c obj to the top of its layer.
 *
 * @c obj will, then, be the highest one in the layer it belongs to. Object on
 * other layers won't get touched.
 *
 * See also @ref efl_gfx_stack_above(), @ref efl_gfx_stack_below() and
 * @ref efl_gfx_stack_lower()
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI void efl_gfx_stack_raise(Eo *obj);

/**
 * @brief Stack @c obj immediately @c above
 *
 * Objects, in a given canvas, are stacked in the order they get added to it.
 *  This means that, if they overlap, the highest ones will cover the lowest
 * ones, in that order. This function is a way to change the stacking order for
 * the objects.
 *
 * This function is intended to be used with objects belonging to the same
 * layer in a given canvas, otherwise it will fail (and accomplish nothing).
 *
 * If you have smart objects on your canvas and @c obj is a member of one of
 * them, then @c above must also be a member of the same smart object.
 *
 * Similarly, if @c obj is not a member of a smart object, @c above must not be
 * either.
 *
 * See also @ref efl_gfx_stack_layer_get(), @ref efl_gfx_stack_layer_set() and
 * @ref efl_gfx_stack_below()
 *
 * @param[in] above The object above which to stack
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI void efl_gfx_stack_above(Eo *obj, Efl_Gfx_Stack *above) EINA_ARG_NONNULL(2);

/**
 * @brief Lower @c obj to the bottom of its layer.
 *
 * @c obj will, then, be the lowest one in the layer it belongs to. Objects on
 * other layers won't get touched.
 *
 * See also @ref efl_gfx_stack_above(), @ref efl_gfx_stack_below() and
 * @ref efl_gfx_stack_raise()
 *
 * @ingroup Efl_Gfx_Stack
 */
EOAPI void efl_gfx_stack_lower(Eo *obj);

EWAPI extern const Efl_Event_Description _EFL_GFX_EVENT_RESTACK;

/** Object stacking was changed.
 *
 * @ingroup Efl_Gfx_Stack
 */
#define EFL_GFX_EVENT_RESTACK (&(_EFL_GFX_EVENT_RESTACK))

#endif
