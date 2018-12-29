EWAPI const Efl_Event_Description _ELM_MAP_EVENT_PRESS =
   EFL_EVENT_DESCRIPTION("press");
EWAPI const Efl_Event_Description _ELM_MAP_EVENT_ZOOM_CHANGE =
   EFL_EVENT_DESCRIPTION("zoom,change");
EWAPI const Efl_Event_Description _ELM_MAP_EVENT_LOADED =
   EFL_EVENT_DESCRIPTION("loaded");
EWAPI const Efl_Event_Description _ELM_MAP_EVENT_TILE_LOAD =
   EFL_EVENT_DESCRIPTION("tile,load");
EWAPI const Efl_Event_Description _ELM_MAP_EVENT_TILE_LOADED =
   EFL_EVENT_DESCRIPTION("tile,loaded");
EWAPI const Efl_Event_Description _ELM_MAP_EVENT_TILE_LOADED_FAIL =
   EFL_EVENT_DESCRIPTION("tile,loaded,fail");
EWAPI const Efl_Event_Description _ELM_MAP_EVENT_ROUTE_LOAD =
   EFL_EVENT_DESCRIPTION("route,load");
EWAPI const Efl_Event_Description _ELM_MAP_EVENT_ROUTE_LOADED =
   EFL_EVENT_DESCRIPTION("route,loaded");
EWAPI const Efl_Event_Description _ELM_MAP_EVENT_ROUTE_LOADED_FAIL =
   EFL_EVENT_DESCRIPTION("route,loaded,fail");
EWAPI const Efl_Event_Description _ELM_MAP_EVENT_NAME_LOAD =
   EFL_EVENT_DESCRIPTION("name,load");
EWAPI const Efl_Event_Description _ELM_MAP_EVENT_NAME_LOADED =
   EFL_EVENT_DESCRIPTION("name,loaded");
EWAPI const Efl_Event_Description _ELM_MAP_EVENT_NAME_LOADED_FAIL =
   EFL_EVENT_DESCRIPTION("name,loaded,fail");
EWAPI const Efl_Event_Description _ELM_MAP_EVENT_OVERLAY_CLICKED =
   EFL_EVENT_DESCRIPTION("overlay,clicked");
EWAPI const Efl_Event_Description _ELM_MAP_EVENT_OVERLAY_DEL =
   EFL_EVENT_DESCRIPTION("overlay,del");

void _elm_map_zoom_set(Eo *obj, Elm_Map_Data *pd, int zoom);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_map_zoom_set, EFL_FUNC_CALL(zoom), int zoom);

int _elm_map_zoom_get(Eo *obj, Elm_Map_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_map_zoom_get, int, 0);

void _elm_map_paused_set(Eo *obj, Elm_Map_Data *pd, Eina_Bool paused);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_map_paused_set, EFL_FUNC_CALL(paused), Eina_Bool paused);

Eina_Bool _elm_map_paused_get(Eo *obj, Elm_Map_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_map_paused_get, Eina_Bool, 0);

void _elm_map_wheel_disabled_set(Eo *obj, Elm_Map_Data *pd, Eina_Bool disabled);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_map_wheel_disabled_set, EFL_FUNC_CALL(disabled), Eina_Bool disabled);

Eina_Bool _elm_map_wheel_disabled_get(Eo *obj, Elm_Map_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_map_wheel_disabled_get, Eina_Bool, 0);

void _elm_map_zoom_min_set(Eo *obj, Elm_Map_Data *pd, int zoom);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_map_zoom_min_set, EFL_FUNC_CALL(zoom), int zoom);

int _elm_map_zoom_min_get(Eo *obj, Elm_Map_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_map_zoom_min_get, int, -1 /* +1 */);

void _elm_map_rotate_set(Eo *obj, Elm_Map_Data *pd, double degree, int cx, int cy);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_map_rotate_set, EFL_FUNC_CALL(degree, cx, cy), double degree, int cx, int cy);

void _elm_map_rotate_get(Eo *obj, Elm_Map_Data *pd, double *degree, int *cx, int *cy);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_map_rotate_get, EFL_FUNC_CALL(degree, cx, cy), double *degree, int *cx, int *cy);

void _elm_map_user_agent_set(Eo *obj, Elm_Map_Data *pd, const char *user_agent);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_map_user_agent_set, EFL_FUNC_CALL(user_agent), const char *user_agent);

const char *_elm_map_user_agent_get(Eo *obj, Elm_Map_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_map_user_agent_get, const char *, NULL);

void _elm_map_zoom_max_set(Eo *obj, Elm_Map_Data *pd, int zoom);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_map_zoom_max_set, EFL_FUNC_CALL(zoom), int zoom);

int _elm_map_zoom_max_get(Eo *obj, Elm_Map_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_map_zoom_max_get, int, -1 /* +1 */);

void _elm_map_zoom_mode_set(Eo *obj, Elm_Map_Data *pd, Elm_Map_Zoom_Mode mode);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_map_zoom_mode_set, EFL_FUNC_CALL(mode), Elm_Map_Zoom_Mode mode);

Elm_Map_Zoom_Mode _elm_map_zoom_mode_get(Eo *obj, Elm_Map_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_map_zoom_mode_get, Elm_Map_Zoom_Mode, 0);

void _elm_map_region_get(Eo *obj, Elm_Map_Data *pd, double *lon, double *lat);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_map_region_get, EFL_FUNC_CALL(lon, lat), double *lon, double *lat);

Eina_List *_elm_map_overlays_get(Eo *obj, Elm_Map_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_obj_map_overlays_get, Eina_List *, NULL);

void _elm_map_tile_load_status_get(Eo *obj, Elm_Map_Data *pd, int *try_num, int *finish_num);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_map_tile_load_status_get, EFL_FUNC_CALL(try_num, finish_num), int *try_num, int *finish_num);

void _elm_map_source_set(Eo *obj, Elm_Map_Data *pd, Elm_Map_Source_Type type, const char *source_name);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_map_source_set, EFL_FUNC_CALL(type, source_name), Elm_Map_Source_Type type, const char *source_name);

const char *_elm_map_source_get(const Eo *obj, Elm_Map_Data *pd, Elm_Map_Source_Type type);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_map_source_get, const char *, NULL, EFL_FUNC_CALL(type), Elm_Map_Source_Type type);

Elm_Map_Route *_elm_map_route_add(Eo *obj, Elm_Map_Data *pd, Elm_Map_Route_Type type, Elm_Map_Route_Method method, double flon, double flat, double tlon, double tlat, Elm_Map_Route_Cb route_cb, void *data);

EOAPI EFL_FUNC_BODYV(elm_obj_map_route_add, Elm_Map_Route *, NULL, EFL_FUNC_CALL(type, method, flon, flat, tlon, tlat, route_cb, data), Elm_Map_Route_Type type, Elm_Map_Route_Method method, double flon, double flat, double tlon, double tlat, Elm_Map_Route_Cb route_cb, void *data);

Efl_Canvas_Object *_elm_map_track_add(Eo *obj, Elm_Map_Data *pd, void *emap);

EOAPI EFL_FUNC_BODYV(elm_obj_map_track_add, Efl_Canvas_Object *, NULL, EFL_FUNC_CALL(emap), void *emap);

void _elm_map_region_to_canvas_convert(const Eo *obj, Elm_Map_Data *pd, double lon, double lat, int *x, int *y);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_map_region_to_canvas_convert, EFL_FUNC_CALL(lon, lat, x, y), double lon, double lat, int *x, int *y);

Elm_Map_Overlay *_elm_map_overlay_circle_add(Eo *obj, Elm_Map_Data *pd, double lon, double lat, double radius);

EOAPI EFL_FUNC_BODYV(elm_obj_map_overlay_circle_add, Elm_Map_Overlay *, NULL, EFL_FUNC_CALL(lon, lat, radius), double lon, double lat, double radius);

Elm_Map_Overlay *_elm_map_overlay_class_add(Eo *obj, Elm_Map_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_map_overlay_class_add, Elm_Map_Overlay *, NULL);

Elm_Map_Overlay *_elm_map_overlay_bubble_add(Eo *obj, Elm_Map_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_map_overlay_bubble_add, Elm_Map_Overlay *, NULL);

const char **_elm_map_sources_get(const Eo *obj, Elm_Map_Data *pd, Elm_Map_Source_Type type);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_map_sources_get, const char **, NULL, EFL_FUNC_CALL(type), Elm_Map_Source_Type type);

Elm_Map_Overlay *_elm_map_overlay_polygon_add(Eo *obj, Elm_Map_Data *pd);

EOAPI EFL_FUNC_BODY(elm_obj_map_overlay_polygon_add, Elm_Map_Overlay *, NULL);

Elm_Map_Overlay *_elm_map_overlay_line_add(Eo *obj, Elm_Map_Data *pd, double flon, double flat, double tlon, double tlat);

EOAPI EFL_FUNC_BODYV(elm_obj_map_overlay_line_add, Elm_Map_Overlay *, NULL, EFL_FUNC_CALL(flon, flat, tlon, tlat), double flon, double flat, double tlon, double tlat);

void _elm_map_region_show(Eo *obj, Elm_Map_Data *pd, double lon, double lat);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_map_region_show, EFL_FUNC_CALL(lon, lat), double lon, double lat);

Elm_Map_Name *_elm_map_name_add(const Eo *obj, Elm_Map_Data *pd, const char *address, double lon, double lat, Elm_Map_Name_Cb name_cb, void *data);

EOAPI EFL_FUNC_BODYV_CONST(elm_obj_map_name_add, Elm_Map_Name *, NULL, EFL_FUNC_CALL(address, lon, lat, name_cb, data), const char *address, double lon, double lat, Elm_Map_Name_Cb name_cb, void *data);

void _elm_map_name_search(const Eo *obj, Elm_Map_Data *pd, const char *address, Elm_Map_Name_List_Cb name_cb, void *data);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_map_name_search, EFL_FUNC_CALL(address, name_cb, data), const char *address, Elm_Map_Name_List_Cb name_cb, void *data);

void _elm_map_region_bring_in(Eo *obj, Elm_Map_Data *pd, double lon, double lat);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_map_region_bring_in, EFL_FUNC_CALL(lon, lat), double lon, double lat);

void _elm_map_region_zoom_bring_in(Eo *obj, Elm_Map_Data *pd, int zoom, double lon, double lat);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_map_region_zoom_bring_in, EFL_FUNC_CALL(zoom, lon, lat), int zoom, double lon, double lat);

void _elm_map_track_remove(Eo *obj, Elm_Map_Data *pd, Efl_Canvas_Object *route);

EOAPI EFL_VOID_FUNC_BODYV(elm_obj_map_track_remove, EFL_FUNC_CALL(route), Efl_Canvas_Object *route);

Elm_Map_Overlay *_elm_map_overlay_route_add(Eo *obj, Elm_Map_Data *pd, const Elm_Map_Route *route);

EOAPI EFL_FUNC_BODYV(elm_obj_map_overlay_route_add, Elm_Map_Overlay *, NULL, EFL_FUNC_CALL(route), const Elm_Map_Route *route);

Elm_Map_Overlay *_elm_map_overlay_scale_add(Eo *obj, Elm_Map_Data *pd, int x, int y);

EOAPI EFL_FUNC_BODYV(elm_obj_map_overlay_scale_add, Elm_Map_Overlay *, NULL, EFL_FUNC_CALL(x, y), int x, int y);

Elm_Map_Overlay *_elm_map_overlay_add(Eo *obj, Elm_Map_Data *pd, double lon, double lat);

EOAPI EFL_FUNC_BODYV(elm_obj_map_overlay_add, Elm_Map_Overlay *, NULL, EFL_FUNC_CALL(lon, lat), double lon, double lat);

void _elm_map_canvas_to_region_convert(const Eo *obj, Elm_Map_Data *pd, int x, int y, double *lon, double *lat);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_obj_map_canvas_to_region_convert, EFL_FUNC_CALL(x, y, lon, lat), int x, int y, double *lon, double *lat);

Efl_Object *_elm_map_efl_object_constructor(Eo *obj, Elm_Map_Data *pd);


void _elm_map_efl_gfx_position_set(Eo *obj, Elm_Map_Data *pd, int x, int y);


void _elm_map_efl_gfx_size_set(Eo *obj, Elm_Map_Data *pd, int w, int h);


void _elm_map_efl_canvas_group_group_member_add(Eo *obj, Elm_Map_Data *pd, Efl_Canvas_Object *sub_obj);


Elm_Theme_Apply _elm_map_elm_widget_theme_apply(Eo *obj, Elm_Map_Data *pd);


Eina_Bool _elm_map_elm_widget_on_focus(Eo *obj, Elm_Map_Data *pd, Elm_Widget_Item *item);


Eina_Bool _elm_map_elm_widget_widget_event(Eo *obj, Elm_Map_Data *pd, Efl_Canvas_Object *source, Evas_Callback_Type type, void *event_info);


const Elm_Atspi_Action *_elm_map_elm_interface_atspi_widget_action_elm_actions_get(Eo *obj, Elm_Map_Data *pd);


static Eina_Bool
_elm_map_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_MAP_EXTRA_OPS
#define ELM_MAP_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_obj_map_zoom_set, _elm_map_zoom_set),
      EFL_OBJECT_OP_FUNC(elm_obj_map_zoom_get, _elm_map_zoom_get),
      EFL_OBJECT_OP_FUNC(elm_obj_map_paused_set, _elm_map_paused_set),
      EFL_OBJECT_OP_FUNC(elm_obj_map_paused_get, _elm_map_paused_get),
      EFL_OBJECT_OP_FUNC(elm_obj_map_wheel_disabled_set, _elm_map_wheel_disabled_set),
      EFL_OBJECT_OP_FUNC(elm_obj_map_wheel_disabled_get, _elm_map_wheel_disabled_get),
      EFL_OBJECT_OP_FUNC(elm_obj_map_zoom_min_set, _elm_map_zoom_min_set),
      EFL_OBJECT_OP_FUNC(elm_obj_map_zoom_min_get, _elm_map_zoom_min_get),
      EFL_OBJECT_OP_FUNC(elm_obj_map_rotate_set, _elm_map_rotate_set),
      EFL_OBJECT_OP_FUNC(elm_obj_map_rotate_get, _elm_map_rotate_get),
      EFL_OBJECT_OP_FUNC(elm_obj_map_user_agent_set, _elm_map_user_agent_set),
      EFL_OBJECT_OP_FUNC(elm_obj_map_user_agent_get, _elm_map_user_agent_get),
      EFL_OBJECT_OP_FUNC(elm_obj_map_zoom_max_set, _elm_map_zoom_max_set),
      EFL_OBJECT_OP_FUNC(elm_obj_map_zoom_max_get, _elm_map_zoom_max_get),
      EFL_OBJECT_OP_FUNC(elm_obj_map_zoom_mode_set, _elm_map_zoom_mode_set),
      EFL_OBJECT_OP_FUNC(elm_obj_map_zoom_mode_get, _elm_map_zoom_mode_get),
      EFL_OBJECT_OP_FUNC(elm_obj_map_region_get, _elm_map_region_get),
      EFL_OBJECT_OP_FUNC(elm_obj_map_overlays_get, _elm_map_overlays_get),
      EFL_OBJECT_OP_FUNC(elm_obj_map_tile_load_status_get, _elm_map_tile_load_status_get),
      EFL_OBJECT_OP_FUNC(elm_obj_map_source_set, _elm_map_source_set),
      EFL_OBJECT_OP_FUNC(elm_obj_map_source_get, _elm_map_source_get),
      EFL_OBJECT_OP_FUNC(elm_obj_map_route_add, _elm_map_route_add),
      EFL_OBJECT_OP_FUNC(elm_obj_map_track_add, _elm_map_track_add),
      EFL_OBJECT_OP_FUNC(elm_obj_map_region_to_canvas_convert, _elm_map_region_to_canvas_convert),
      EFL_OBJECT_OP_FUNC(elm_obj_map_overlay_circle_add, _elm_map_overlay_circle_add),
      EFL_OBJECT_OP_FUNC(elm_obj_map_overlay_class_add, _elm_map_overlay_class_add),
      EFL_OBJECT_OP_FUNC(elm_obj_map_overlay_bubble_add, _elm_map_overlay_bubble_add),
      EFL_OBJECT_OP_FUNC(elm_obj_map_sources_get, _elm_map_sources_get),
      EFL_OBJECT_OP_FUNC(elm_obj_map_overlay_polygon_add, _elm_map_overlay_polygon_add),
      EFL_OBJECT_OP_FUNC(elm_obj_map_overlay_line_add, _elm_map_overlay_line_add),
      EFL_OBJECT_OP_FUNC(elm_obj_map_region_show, _elm_map_region_show),
      EFL_OBJECT_OP_FUNC(elm_obj_map_name_add, _elm_map_name_add),
      EFL_OBJECT_OP_FUNC(elm_obj_map_name_search, _elm_map_name_search),
      EFL_OBJECT_OP_FUNC(elm_obj_map_region_bring_in, _elm_map_region_bring_in),
      EFL_OBJECT_OP_FUNC(elm_obj_map_region_zoom_bring_in, _elm_map_region_zoom_bring_in),
      EFL_OBJECT_OP_FUNC(elm_obj_map_track_remove, _elm_map_track_remove),
      EFL_OBJECT_OP_FUNC(elm_obj_map_overlay_route_add, _elm_map_overlay_route_add),
      EFL_OBJECT_OP_FUNC(elm_obj_map_overlay_scale_add, _elm_map_overlay_scale_add),
      EFL_OBJECT_OP_FUNC(elm_obj_map_overlay_add, _elm_map_overlay_add),
      EFL_OBJECT_OP_FUNC(elm_obj_map_canvas_to_region_convert, _elm_map_canvas_to_region_convert),
      EFL_OBJECT_OP_FUNC(efl_constructor, _elm_map_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_gfx_position_set, _elm_map_efl_gfx_position_set),
      EFL_OBJECT_OP_FUNC(efl_gfx_size_set, _elm_map_efl_gfx_size_set),
      EFL_OBJECT_OP_FUNC(efl_canvas_group_member_add, _elm_map_efl_canvas_group_group_member_add),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_theme_apply, _elm_map_elm_widget_theme_apply),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_on_focus, _elm_map_elm_widget_on_focus),
      EFL_OBJECT_OP_FUNC(elm_obj_widget_event, _elm_map_elm_widget_widget_event),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_widget_action_elm_actions_get, _elm_map_elm_interface_atspi_widget_action_elm_actions_get),
      ELM_MAP_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_MAP_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_MAP_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_map_class_desc = {
   EO_VERSION,
   "Elm.Map",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Elm_Map_Data),
   _elm_map_class_initializer,
   _elm_map_class_constructor,
   NULL
};

EFL_DEFINE_CLASS(elm_map_class_get, &_elm_map_class_desc, ELM_WIDGET_CLASS, ELM_INTERFACE_SCROLLABLE_MIXIN, ELM_INTERFACE_ATSPI_WIDGET_ACTION_MIXIN, EFL_UI_CLICKABLE_INTERFACE, NULL);

EAPI void
elm_map_zoom_set(Elm_Map *obj, int zoom)
{
   elm_obj_map_zoom_set(obj, zoom);
}

EAPI int
elm_map_zoom_get(const Elm_Map *obj)
{
   return elm_obj_map_zoom_get(obj);
}

EAPI void
elm_map_paused_set(Elm_Map *obj, Eina_Bool paused)
{
   elm_obj_map_paused_set(obj, paused);
}

EAPI Eina_Bool
elm_map_paused_get(const Elm_Map *obj)
{
   return elm_obj_map_paused_get(obj);
}

EAPI void
elm_map_wheel_disabled_set(Elm_Map *obj, Eina_Bool disabled)
{
   elm_obj_map_wheel_disabled_set(obj, disabled);
}

EAPI Eina_Bool
elm_map_wheel_disabled_get(const Elm_Map *obj)
{
   return elm_obj_map_wheel_disabled_get(obj);
}

EAPI void
elm_map_zoom_min_set(Elm_Map *obj, int zoom)
{
   elm_obj_map_zoom_min_set(obj, zoom);
}

EAPI int
elm_map_zoom_min_get(const Elm_Map *obj)
{
   return elm_obj_map_zoom_min_get(obj);
}

EAPI void
elm_map_rotate_set(Elm_Map *obj, double degree, int cx, int cy)
{
   elm_obj_map_rotate_set(obj, degree, cx, cy);
}

EAPI void
elm_map_rotate_get(const Elm_Map *obj, double *degree, int *cx, int *cy)
{
   elm_obj_map_rotate_get(obj, degree, cx, cy);
}

EAPI void
elm_map_user_agent_set(Elm_Map *obj, const char *user_agent)
{
   elm_obj_map_user_agent_set(obj, user_agent);
}

EAPI const char *
elm_map_user_agent_get(const Elm_Map *obj)
{
   return elm_obj_map_user_agent_get(obj);
}

EAPI void
elm_map_zoom_max_set(Elm_Map *obj, int zoom)
{
   elm_obj_map_zoom_max_set(obj, zoom);
}

EAPI int
elm_map_zoom_max_get(const Elm_Map *obj)
{
   return elm_obj_map_zoom_max_get(obj);
}

EAPI void
elm_map_zoom_mode_set(Elm_Map *obj, Elm_Map_Zoom_Mode mode)
{
   elm_obj_map_zoom_mode_set(obj, mode);
}

EAPI Elm_Map_Zoom_Mode
elm_map_zoom_mode_get(const Elm_Map *obj)
{
   return elm_obj_map_zoom_mode_get(obj);
}

EAPI void
elm_map_region_get(const Elm_Map *obj, double *lon, double *lat)
{
   elm_obj_map_region_get(obj, lon, lat);
}

EAPI Eina_List *
elm_map_overlays_get(const Elm_Map *obj)
{
   return elm_obj_map_overlays_get(obj);
}

EAPI void
elm_map_tile_load_status_get(const Elm_Map *obj, int *try_num, int *finish_num)
{
   elm_obj_map_tile_load_status_get(obj, try_num, finish_num);
}

EAPI void
elm_map_source_set(Elm_Map *obj, Elm_Map_Source_Type type, const char *source_name)
{
   elm_obj_map_source_set(obj, type, source_name);
}

EAPI const char *
elm_map_source_get(const Elm_Map *obj, Elm_Map_Source_Type type)
{
   return elm_obj_map_source_get(obj, type);
}

EAPI Elm_Map_Route *
elm_map_route_add(Elm_Map *obj, Elm_Map_Route_Type type, Elm_Map_Route_Method method, double flon, double flat, double tlon, double tlat, Elm_Map_Route_Cb route_cb, void *data)
{
   return elm_obj_map_route_add(obj, type, method, flon, flat, tlon, tlat, route_cb, data);
}

EAPI Efl_Canvas_Object *
elm_map_track_add(Elm_Map *obj, void *emap)
{
   return elm_obj_map_track_add(obj, emap);
}

EAPI void
elm_map_region_to_canvas_convert(const Elm_Map *obj, double lon, double lat, int *x, int *y)
{
   elm_obj_map_region_to_canvas_convert(obj, lon, lat, x, y);
}

EAPI Elm_Map_Overlay *
elm_map_overlay_circle_add(Elm_Map *obj, double lon, double lat, double radius)
{
   return elm_obj_map_overlay_circle_add(obj, lon, lat, radius);
}

EAPI Elm_Map_Overlay *
elm_map_overlay_class_add(Elm_Map *obj)
{
   return elm_obj_map_overlay_class_add(obj);
}

EAPI Elm_Map_Overlay *
elm_map_overlay_bubble_add(Elm_Map *obj)
{
   return elm_obj_map_overlay_bubble_add(obj);
}

EAPI const char **
elm_map_sources_get(const Elm_Map *obj, Elm_Map_Source_Type type)
{
   return elm_obj_map_sources_get(obj, type);
}

EAPI Elm_Map_Overlay *
elm_map_overlay_polygon_add(Elm_Map *obj)
{
   return elm_obj_map_overlay_polygon_add(obj);
}

EAPI Elm_Map_Overlay *
elm_map_overlay_line_add(Elm_Map *obj, double flon, double flat, double tlon, double tlat)
{
   return elm_obj_map_overlay_line_add(obj, flon, flat, tlon, tlat);
}

EAPI void
elm_map_region_show(Elm_Map *obj, double lon, double lat)
{
   elm_obj_map_region_show(obj, lon, lat);
}

EAPI Elm_Map_Name *
elm_map_name_add(const Elm_Map *obj, const char *address, double lon, double lat, Elm_Map_Name_Cb name_cb, void *data)
{
   return elm_obj_map_name_add(obj, address, lon, lat, name_cb, data);
}

EAPI void
elm_map_name_search(const Elm_Map *obj, const char *address, Elm_Map_Name_List_Cb name_cb, void *data)
{
   elm_obj_map_name_search(obj, address, name_cb, data);
}

EAPI void
elm_map_region_bring_in(Elm_Map *obj, double lon, double lat)
{
   elm_obj_map_region_bring_in(obj, lon, lat);
}

EAPI void
elm_map_region_zoom_bring_in(Elm_Map *obj, int zoom, double lon, double lat)
{
   elm_obj_map_region_zoom_bring_in(obj, zoom, lon, lat);
}

EAPI void
elm_map_track_remove(Elm_Map *obj, Efl_Canvas_Object *route)
{
   elm_obj_map_track_remove(obj, route);
}

EAPI Elm_Map_Overlay *
elm_map_overlay_route_add(Elm_Map *obj, const Elm_Map_Route *route)
{
   return elm_obj_map_overlay_route_add(obj, route);
}

EAPI Elm_Map_Overlay *
elm_map_overlay_scale_add(Elm_Map *obj, int x, int y)
{
   return elm_obj_map_overlay_scale_add(obj, x, y);
}

EAPI Elm_Map_Overlay *
elm_map_overlay_add(Elm_Map *obj, double lon, double lat)
{
   return elm_obj_map_overlay_add(obj, lon, lat);
}

EAPI void
elm_map_canvas_to_region_convert(const Elm_Map *obj, int x, int y, double *lon, double *lat)
{
   elm_obj_map_canvas_to_region_convert(obj, x, y, lon, lat);
}
