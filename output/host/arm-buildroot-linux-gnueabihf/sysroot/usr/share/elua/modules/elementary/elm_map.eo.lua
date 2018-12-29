-- EFL LuaJIT bindings: elm_map.eo (class Elm.Map)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_map_class_get()
    eo.class_register("Elm_Map", {"Elm_Widget"}, {"Elm_Interface_Scrollable", "Elm_Interface_Atspi_Widget_Action", "Efl_Ui_Clickable"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_map_class_get(void);
    void elm_obj_map_zoom_set(int zoom);
    int elm_obj_map_zoom_get(void);
    void elm_obj_map_paused_set(Eina_Bool paused);
    Eina_Bool elm_obj_map_paused_get(void);
    void elm_obj_map_wheel_disabled_set(Eina_Bool disabled);
    Eina_Bool elm_obj_map_wheel_disabled_get(void);
    void elm_obj_map_zoom_min_set(int zoom);
    int elm_obj_map_zoom_min_get(void);
    void elm_obj_map_rotate_set(double degree, int cx, int cy);
    void elm_obj_map_rotate_get(double *degree, int *cx, int *cy);
    void elm_obj_map_user_agent_set(const char * user_agent);
    const char *elm_obj_map_user_agent_get(void);
    void elm_obj_map_zoom_max_set(int zoom);
    int elm_obj_map_zoom_max_get(void);
    void elm_obj_map_zoom_mode_set(Elm_Map_Zoom_Mode mode);
    Elm_Map_Zoom_Mode elm_obj_map_zoom_mode_get(void);
    void elm_obj_map_region_get(double *lon, double *lat);
    Eina_List *elm_obj_map_overlays_get(void);
    void elm_obj_map_tile_load_status_get(int *try_num, int *finish_num);
    void elm_obj_map_source_set(Elm_Map_Source_Type type, const char * source_name);
    const char *elm_obj_map_source_get(Elm_Map_Source_Type type);
    Elm_Map_Route *elm_obj_map_route_add(Elm_Map_Route_Type type, Elm_Map_Route_Method method, double flon, double flat, double tlon, double tlat, Elm_Map_Route_Cb route_cb, void * data);
    Efl_Canvas_Object *elm_obj_map_track_add(void * emap);
    void elm_obj_map_region_to_canvas_convert(double lon, double lat, int *x, int *y);
    Elm_Map_Overlay *elm_obj_map_overlay_circle_add(double lon, double lat, double radius);
    Elm_Map_Overlay *elm_obj_map_overlay_class_add(void);
    Elm_Map_Overlay *elm_obj_map_overlay_bubble_add(void);
    const char **elm_obj_map_sources_get(Elm_Map_Source_Type type);
    Elm_Map_Overlay *elm_obj_map_overlay_polygon_add(void);
    Elm_Map_Overlay *elm_obj_map_overlay_line_add(double flon, double flat, double tlon, double tlat);
    void elm_obj_map_region_show(double lon, double lat);
    Elm_Map_Name *elm_obj_map_name_add(const char * address, double lon, double lat, Elm_Map_Name_Cb name_cb, void * data);
    void elm_obj_map_name_search(const char * address, Elm_Map_Name_List_Cb name_cb, void * data);
    void elm_obj_map_region_bring_in(double lon, double lat);
    void elm_obj_map_region_zoom_bring_in(int zoom, double lon, double lat);
    void elm_obj_map_track_remove(Efl_Canvas_Object * route);
    Elm_Map_Overlay *elm_obj_map_overlay_route_add(const Elm_Map_Route * route);
    Elm_Map_Overlay *elm_obj_map_overlay_scale_add(int x, int y);
    Elm_Map_Overlay *elm_obj_map_overlay_add(double lon, double lat);
    void elm_obj_map_canvas_to_region_convert(int x, int y, double *lon, double *lat);
    extern const Eo_Event_Description _ELM_MAP_EVENT_PRESS;
    extern const Eo_Event_Description _ELM_MAP_EVENT_ZOOM_CHANGE;
    extern const Eo_Event_Description _ELM_MAP_EVENT_LOADED;
    extern const Eo_Event_Description _ELM_MAP_EVENT_TILE_LOAD;
    extern const Eo_Event_Description _ELM_MAP_EVENT_TILE_LOADED;
    extern const Eo_Event_Description _ELM_MAP_EVENT_TILE_LOADED_FAIL;
    extern const Eo_Event_Description _ELM_MAP_EVENT_ROUTE_LOAD;
    extern const Eo_Event_Description _ELM_MAP_EVENT_ROUTE_LOADED;
    extern const Eo_Event_Description _ELM_MAP_EVENT_ROUTE_LOADED_FAIL;
    extern const Eo_Event_Description _ELM_MAP_EVENT_NAME_LOAD;
    extern const Eo_Event_Description _ELM_MAP_EVENT_NAME_LOADED;
    extern const Eo_Event_Description _ELM_MAP_EVENT_NAME_LOADED_FAIL;
    extern const Eo_Event_Description _ELM_MAP_EVENT_OVERLAY_CLICKED;
    extern const Eo_Event_Description _ELM_MAP_EVENT_OVERLAY_DEL;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    zoom_set = function(self, zoom)
        eo.__do_start(self, __class)
        __lib.elm_obj_map_zoom_set(zoom)
        eo.__do_end()
    end,

    zoom_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_zoom_get()
        eo.__do_end()
        return tonumber(v)
    end,

    paused_set = function(self, paused)
        eo.__do_start(self, __class)
        __lib.elm_obj_map_paused_set(paused)
        eo.__do_end()
    end,

    paused_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_paused_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    wheel_disabled_set = function(self, disabled)
        eo.__do_start(self, __class)
        __lib.elm_obj_map_wheel_disabled_set(disabled)
        eo.__do_end()
    end,

    wheel_disabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_wheel_disabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    zoom_min_set = function(self, zoom)
        eo.__do_start(self, __class)
        __lib.elm_obj_map_zoom_min_set(zoom)
        eo.__do_end()
    end,

    zoom_min_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_zoom_min_get()
        eo.__do_end()
        return tonumber(v)
    end,

    rotate_set = function(self, degree, cx, cy)
        eo.__do_start(self, __class)
        __lib.elm_obj_map_rotate_set(degree, cx, cy)
        eo.__do_end()
    end,

    rotate_get = function(self)
        eo.__do_start(self, __class)
        local degree = ffi.new("double[1]")
        local cx = ffi.new("int[1]")
        local cy = ffi.new("int[1]")
        __lib.elm_obj_map_rotate_get(degree, cx, cy)
        eo.__do_end()
        return tonumber(degree[0]), tonumber(cx[0]), tonumber(cy[0])
    end,

    user_agent_set = function(self, user_agent)
        eo.__do_start(self, __class)
        __lib.elm_obj_map_user_agent_set(user_agent)
        eo.__do_end()
    end,

    user_agent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_user_agent_get()
        eo.__do_end()
        return v
    end,

    zoom_max_set = function(self, zoom)
        eo.__do_start(self, __class)
        __lib.elm_obj_map_zoom_max_set(zoom)
        eo.__do_end()
    end,

    zoom_max_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_zoom_max_get()
        eo.__do_end()
        return tonumber(v)
    end,

    zoom_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_obj_map_zoom_mode_set(mode)
        eo.__do_end()
    end,

    zoom_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_zoom_mode_get()
        eo.__do_end()
        return v
    end,

    region_get = function(self)
        eo.__do_start(self, __class)
        local lon = ffi.new("double[1]")
        local lat = ffi.new("double[1]")
        __lib.elm_obj_map_region_get(lon, lat)
        eo.__do_end()
        return tonumber(lon[0]), tonumber(lat[0])
    end,

    overlays_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_overlays_get()
        eo.__do_end()
    end,

    tile_load_status_get = function(self)
        eo.__do_start(self, __class)
        local try_num = ffi.new("int[1]")
        local finish_num = ffi.new("int[1]")
        __lib.elm_obj_map_tile_load_status_get(try_num, finish_num)
        eo.__do_end()
        return tonumber(try_num[0]), tonumber(finish_num[0])
    end,

    source_set = function(self, type, source_name)
        eo.__do_start(self, __class)
        __lib.elm_obj_map_source_set(type, source_name)
        eo.__do_end()
    end,

    source_get = function(self, type)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_source_get(type)
        eo.__do_end()
        return v
    end,

    route_add = function(self, type, method, flon, flat, tlon, tlat, route_cb, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_route_add(type, method, flon, flat, tlon, tlat, route_cb, data)
        eo.__do_end()
        return v
    end,

    track_add = function(self, emap)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_track_add(emap)
        eo.__do_end()
        return v
    end,

    region_to_canvas_convert = function(self, lon, lat)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.elm_obj_map_region_to_canvas_convert(lon, lat, x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    overlay_circle_add = function(self, lon, lat, radius)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_overlay_circle_add(lon, lat, radius)
        eo.__do_end()
        return v
    end,

    overlay_class_add = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_overlay_class_add()
        eo.__do_end()
        return v
    end,

    overlay_bubble_add = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_overlay_bubble_add()
        eo.__do_end()
        return v
    end,

    sources_get = function(self, type)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_sources_get(type)
        eo.__do_end()
        return v
    end,

    overlay_polygon_add = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_overlay_polygon_add()
        eo.__do_end()
        return v
    end,

    overlay_line_add = function(self, flon, flat, tlon, tlat)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_overlay_line_add(flon, flat, tlon, tlat)
        eo.__do_end()
        return v
    end,

    region_show = function(self, lon, lat)
        eo.__do_start(self, __class)
        __lib.elm_obj_map_region_show(lon, lat)
        eo.__do_end()
    end,

    name_add = function(self, address, lon, lat, name_cb, data)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_name_add(address, lon, lat, name_cb, data)
        eo.__do_end()
        return v
    end,

    name_search = function(self, address, name_cb, data)
        eo.__do_start(self, __class)
        __lib.elm_obj_map_name_search(address, name_cb, data)
        eo.__do_end()
    end,

    region_bring_in = function(self, lon, lat)
        eo.__do_start(self, __class)
        __lib.elm_obj_map_region_bring_in(lon, lat)
        eo.__do_end()
    end,

    region_zoom_bring_in = function(self, zoom, lon, lat)
        eo.__do_start(self, __class)
        __lib.elm_obj_map_region_zoom_bring_in(zoom, lon, lat)
        eo.__do_end()
    end,

    track_remove = function(self, route)
        eo.__do_start(self, __class)
        __lib.elm_obj_map_track_remove(route)
        eo.__do_end()
    end,

    overlay_route_add = function(self, route)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_overlay_route_add(route)
        eo.__do_end()
        return v
    end,

    overlay_scale_add = function(self, x, y)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_overlay_scale_add(x, y)
        eo.__do_end()
        return v
    end,

    overlay_add = function(self, lon, lat)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_map_overlay_add(lon, lat)
        eo.__do_end()
        return v
    end,

    canvas_to_region_convert = function(self, x, y)
        eo.__do_start(self, __class)
        local lon = ffi.new("double[1]")
        local lat = ffi.new("double[1]")
        __lib.elm_obj_map_canvas_to_region_convert(x, y, lon, lat)
        eo.__do_end()
        return tonumber(lon[0]), tonumber(lat[0])
    end,

    __events = {
        ["press"] = __lib._ELM_MAP_EVENT_PRESS,
        ["zoom,change"] = __lib._ELM_MAP_EVENT_ZOOM_CHANGE,
        ["loaded"] = __lib._ELM_MAP_EVENT_LOADED,
        ["tile,load"] = __lib._ELM_MAP_EVENT_TILE_LOAD,
        ["tile,loaded"] = __lib._ELM_MAP_EVENT_TILE_LOADED,
        ["tile,loaded,fail"] = __lib._ELM_MAP_EVENT_TILE_LOADED_FAIL,
        ["route,load"] = __lib._ELM_MAP_EVENT_ROUTE_LOAD,
        ["route,loaded"] = __lib._ELM_MAP_EVENT_ROUTE_LOADED,
        ["route,loaded,fail"] = __lib._ELM_MAP_EVENT_ROUTE_LOADED_FAIL,
        ["name,load"] = __lib._ELM_MAP_EVENT_NAME_LOAD,
        ["name,loaded"] = __lib._ELM_MAP_EVENT_NAME_LOADED,
        ["name,loaded,fail"] = __lib._ELM_MAP_EVENT_NAME_LOADED_FAIL,
        ["overlay,clicked"] = __lib._ELM_MAP_EVENT_OVERLAY_CLICKED,
        ["overlay,del"] = __lib._ELM_MAP_EVENT_OVERLAY_DEL
    },

    __properties = {
        ["wheel_disabled"] = { 0, 0, 1, 1, true, true },
        ["paused"] = { 0, 0, 1, 1, true, true },
        ["region"] = { 0, 0, 2, 0, true, false },
        ["user_agent"] = { 0, 0, 1, 1, true, true },
        ["overlays"] = { 0, 0, 1, 0, true, false },
        ["tile_load_status"] = { 0, 0, 2, 0, true, false },
        ["zoom_max"] = { 0, 0, 1, 1, true, true },
        ["rotate"] = { 0, 0, 3, 3, true, true },
        ["zoom_mode"] = { 0, 0, 1, 1, true, true },
        ["zoom_min"] = { 0, 0, 1, 1, true, true },
        ["zoom"] = { 0, 0, 1, 1, true, true }
    }
}

M.Map = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Map").__eo_ctor,
                            1, ...)
end

return M
