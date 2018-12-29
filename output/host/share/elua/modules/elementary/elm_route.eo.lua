-- EFL LuaJIT bindings: elm_route.eo (class Elm.Route)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_route_class_get()
    eo.class_register("Elm_Route", {"Elm_Widget"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_route_class_get(void);
    void elm_obj_route_emap_set(void * emap);
    void elm_obj_route_longitude_min_max_get(double *min, double *max);
    void elm_obj_route_latitude_min_max_get(double *min, double *max);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    emap_set = function(self, emap)
        eo.__do_start(self, __class)
        __lib.elm_obj_route_emap_set(emap)
        eo.__do_end()
    end,

    longitude_min_max_get = function(self)
        eo.__do_start(self, __class)
        local min = ffi.new("double[1]")
        local max = ffi.new("double[1]")
        __lib.elm_obj_route_longitude_min_max_get(min, max)
        eo.__do_end()
        return tonumber(min[0]), tonumber(max[0])
    end,

    latitude_min_max_get = function(self)
        eo.__do_start(self, __class)
        local min = ffi.new("double[1]")
        local max = ffi.new("double[1]")
        __lib.elm_obj_route_latitude_min_max_get(min, max)
        eo.__do_end()
        return tonumber(min[0]), tonumber(max[0])
    end,

    __properties = {
        ["longitude_min_max"] = { 0, 0, 2, 0, true, false },
        ["emap"] = { 0, 0, 0, 1, false, true },
        ["latitude_min_max"] = { 0, 0, 2, 0, true, false }
    }
}

M.Route = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Route").__eo_ctor,
                            1, ...)
end

return M
