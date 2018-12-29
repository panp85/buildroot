-- EFL LuaJIT bindings: elm_map_pan.eo (class Elm.Map.Pan)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_map_pan_class_get()
    eo.class_register("Elm_Map_Pan", {"Elm_Pan"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_map_pan_class_get(void);
    extern const Eo_Event_Description _ELM_MAP_PAN_EVENT_LOADED;
    extern const Eo_Event_Description _ELM_MAP_PAN_EVENT_TILE_LOAD;
    extern const Eo_Event_Description _ELM_MAP_PAN_EVENT_TILE_LOADED;
    extern const Eo_Event_Description _ELM_MAP_PAN_EVENT_TILE_LOADED_FAIL;
    extern const Eo_Event_Description _ELM_MAP_PAN_EVENT_ROUTE_LOAD;
    extern const Eo_Event_Description _ELM_MAP_PAN_EVENT_ROUTE_LOADED;
    extern const Eo_Event_Description _ELM_MAP_PAN_EVENT_ROUTE_LOADED_FAIL;
    extern const Eo_Event_Description _ELM_MAP_PAN_EVENT_NAME_LOAD;
    extern const Eo_Event_Description _ELM_MAP_PAN_EVENT_NAME_LOADED;
    extern const Eo_Event_Description _ELM_MAP_PAN_EVENT_NAME_LOADED_FAIL;
    extern const Eo_Event_Description _ELM_MAP_PAN_EVENT_OVERLAY_CLICKED;
    extern const Eo_Event_Description _ELM_MAP_PAN_EVENT_OVERLAY_DEL;
]]

local __M = util.get_namespace(M, { "map" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
    __events = {
        ["loaded"] = __lib._ELM_MAP_PAN_EVENT_LOADED,
        ["tile,load"] = __lib._ELM_MAP_PAN_EVENT_TILE_LOAD,
        ["tile,loaded"] = __lib._ELM_MAP_PAN_EVENT_TILE_LOADED,
        ["tile,loaded,fail"] = __lib._ELM_MAP_PAN_EVENT_TILE_LOADED_FAIL,
        ["route,load"] = __lib._ELM_MAP_PAN_EVENT_ROUTE_LOAD,
        ["route,loaded"] = __lib._ELM_MAP_PAN_EVENT_ROUTE_LOADED,
        ["route,loaded,fail"] = __lib._ELM_MAP_PAN_EVENT_ROUTE_LOADED_FAIL,
        ["name,load"] = __lib._ELM_MAP_PAN_EVENT_NAME_LOAD,
        ["name,loaded"] = __lib._ELM_MAP_PAN_EVENT_NAME_LOADED,
        ["name,loaded,fail"] = __lib._ELM_MAP_PAN_EVENT_NAME_LOADED_FAIL,
        ["overlay,clicked"] = __lib._ELM_MAP_PAN_EVENT_OVERLAY_CLICKED,
        ["overlay,del"] = __lib._ELM_MAP_PAN_EVENT_OVERLAY_DEL
    }
}

__M.Pan = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Map_Pan").__eo_ctor,
                            1, ...)
end

return M
