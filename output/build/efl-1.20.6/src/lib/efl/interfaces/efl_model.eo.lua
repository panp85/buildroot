-- EFL LuaJIT bindings: efl_model.eo (class Efl.Model)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_model_interface_get()
    eo.class_register("Efl_Model", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_model_interface_get(void);
    const Eina_Array *efl_model_properties_get(void);
    Efl_Future *efl_model_property_set(const char * property, const Eina_Value * value);
    Efl_Future *efl_model_property_get(const char * property);
    Efl_Future *efl_model_children_slice_get(unsigned int start, unsigned int count);
    Efl_Future *efl_model_children_count_get(void);
    Efl_Object *efl_model_child_add(void);
    void efl_model_child_del(Efl_Object * child);
    extern const Eo_Event_Description _EFL_MODEL_EVENT_PROPERTIES_CHANGED;
    extern const Eo_Event_Description _EFL_MODEL_EVENT_CHILD_ADDED;
    extern const Eo_Event_Description _EFL_MODEL_EVENT_CHILD_REMOVED;
    extern const Eo_Event_Description _EFL_MODEL_EVENT_CHILDREN_COUNT_CHANGED;
]]

__body = {
    properties_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_model_properties_get()
        eo.__do_end()
        return v
    end,

    property_set = function(self, property, value)
        eo.__do_start(self, __class)
        local v = __lib.efl_model_property_set(property, value)
        eo.__do_end()
        return v
    end,

    property_get = function(self, property)
        eo.__do_start(self, __class)
        local v = __lib.efl_model_property_get(property)
        eo.__do_end()
        return v
    end,

    children_slice_get = function(self, start, count)
        eo.__do_start(self, __class)
        local v = __lib.efl_model_children_slice_get(start, count)
        eo.__do_end()
        return v
    end,

    children_count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_model_children_count_get()
        eo.__do_end()
        return v
    end,

    child_add = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_model_child_add()
        eo.__do_end()
        return v
    end,

    child_del = function(self, child)
        eo.__do_start(self, __class)
        __lib.efl_model_child_del(child)
        eo.__do_end()
    end,

    __events = {
        ["properties,changed"] = __lib._EFL_MODEL_EVENT_PROPERTIES_CHANGED,
        ["child,added"] = __lib._EFL_MODEL_EVENT_CHILD_ADDED,
        ["child,removed"] = __lib._EFL_MODEL_EVENT_CHILD_REMOVED,
        ["children,count,changed"] = __lib._EFL_MODEL_EVENT_CHILDREN_COUNT_CHANGED
    },

    __properties = {
        ["properties"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Model"] = true

return M
