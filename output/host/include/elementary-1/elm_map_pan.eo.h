#ifndef _ELM_MAP_PAN_EO_H_
#define _ELM_MAP_PAN_EO_H_

#ifndef _ELM_MAP_PAN_EO_CLASS_TYPE
#define _ELM_MAP_PAN_EO_CLASS_TYPE

typedef Eo Elm_Map_Pan;

#endif

#ifndef _ELM_MAP_PAN_EO_TYPES
#define _ELM_MAP_PAN_EO_TYPES


#endif
/** Elementary map pan class
 *
 * @ingroup Elm_Map_Pan
 */
#define ELM_MAP_PAN_CLASS elm_map_pan_class_get()

EWAPI const Efl_Class *elm_map_pan_class_get(void);

EWAPI extern const Efl_Event_Description _ELM_MAP_PAN_EVENT_LOADED;

/** Called when map loaded
 *
 * @ingroup Elm_Map_Pan
 */
#define ELM_MAP_PAN_EVENT_LOADED (&(_ELM_MAP_PAN_EVENT_LOADED))

EWAPI extern const Efl_Event_Description _ELM_MAP_PAN_EVENT_TILE_LOAD;

/** Called when map tile loading started
 *
 * @ingroup Elm_Map_Pan
 */
#define ELM_MAP_PAN_EVENT_TILE_LOAD (&(_ELM_MAP_PAN_EVENT_TILE_LOAD))

EWAPI extern const Efl_Event_Description _ELM_MAP_PAN_EVENT_TILE_LOADED;

/** Called when map tile loading finished
 *
 * @ingroup Elm_Map_Pan
 */
#define ELM_MAP_PAN_EVENT_TILE_LOADED (&(_ELM_MAP_PAN_EVENT_TILE_LOADED))

EWAPI extern const Efl_Event_Description _ELM_MAP_PAN_EVENT_TILE_LOADED_FAIL;

/** Called when map tile loading failed
 *
 * @ingroup Elm_Map_Pan
 */
#define ELM_MAP_PAN_EVENT_TILE_LOADED_FAIL (&(_ELM_MAP_PAN_EVENT_TILE_LOADED_FAIL))

EWAPI extern const Efl_Event_Description _ELM_MAP_PAN_EVENT_ROUTE_LOAD;

/** Called when route loiding started
 *
 * @ingroup Elm_Map_Pan
 */
#define ELM_MAP_PAN_EVENT_ROUTE_LOAD (&(_ELM_MAP_PAN_EVENT_ROUTE_LOAD))

EWAPI extern const Efl_Event_Description _ELM_MAP_PAN_EVENT_ROUTE_LOADED;

/** Called when route loading finsihed
 *
 * @ingroup Elm_Map_Pan
 */
#define ELM_MAP_PAN_EVENT_ROUTE_LOADED (&(_ELM_MAP_PAN_EVENT_ROUTE_LOADED))

EWAPI extern const Efl_Event_Description _ELM_MAP_PAN_EVENT_ROUTE_LOADED_FAIL;

/** Called when route loading failed
 *
 * @ingroup Elm_Map_Pan
 */
#define ELM_MAP_PAN_EVENT_ROUTE_LOADED_FAIL (&(_ELM_MAP_PAN_EVENT_ROUTE_LOADED_FAIL))

EWAPI extern const Efl_Event_Description _ELM_MAP_PAN_EVENT_NAME_LOAD;

/** Called when name loading started
 *
 * @ingroup Elm_Map_Pan
 */
#define ELM_MAP_PAN_EVENT_NAME_LOAD (&(_ELM_MAP_PAN_EVENT_NAME_LOAD))

EWAPI extern const Efl_Event_Description _ELM_MAP_PAN_EVENT_NAME_LOADED;

/** Called when name loading finished
 *
 * @ingroup Elm_Map_Pan
 */
#define ELM_MAP_PAN_EVENT_NAME_LOADED (&(_ELM_MAP_PAN_EVENT_NAME_LOADED))

EWAPI extern const Efl_Event_Description _ELM_MAP_PAN_EVENT_NAME_LOADED_FAIL;

/** Called when name loading failed
 *
 * @ingroup Elm_Map_Pan
 */
#define ELM_MAP_PAN_EVENT_NAME_LOADED_FAIL (&(_ELM_MAP_PAN_EVENT_NAME_LOADED_FAIL))

EWAPI extern const Efl_Event_Description _ELM_MAP_PAN_EVENT_OVERLAY_CLICKED;

/** Called when overlay was clicked
 *
 * @ingroup Elm_Map_Pan
 */
#define ELM_MAP_PAN_EVENT_OVERLAY_CLICKED (&(_ELM_MAP_PAN_EVENT_OVERLAY_CLICKED))

EWAPI extern const Efl_Event_Description _ELM_MAP_PAN_EVENT_OVERLAY_DEL;

/** Called when overlay was deleted
 *
 * @ingroup Elm_Map_Pan
 */
#define ELM_MAP_PAN_EVENT_OVERLAY_DEL (&(_ELM_MAP_PAN_EVENT_OVERLAY_DEL))

#endif
