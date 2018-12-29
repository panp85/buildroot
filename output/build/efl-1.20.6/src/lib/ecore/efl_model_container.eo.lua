-- EFL LuaJIT bindings: efl_model_container.eo (class Efl.Model.Container)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_model_container_class_get()
    eo.class_register("Efl_Model_Container", {"Efl_Object"}, {"Efl_Model"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_model_container_class_get(void);
    const Eina_Value_Type *efl_model_container_child_property_value_type_get(const char * name);
    Eina_Iterator *efl_model_container_child_property_values_get(const char * name);
    Eina_Bool efl_model_container_child_property_add(const char * name, const Eina_Value_Type * type, Eina_Iterator * values);
]]

local __M = util.get_namespace(M, { "model" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    child_property_value_type_get = function(self, name)
        eo.__do_start(self, __class)
        local v = __lib.efl_model_container_child_property_value_type_get(name)
        eo.__do_end()
        return v
    end,

    child_property_values_get = function(self, name)
        eo.__do_start(self, __class)
        local v = __lib.efl_model_container_child_property_values_get(name)
        eo.__do_end()
        return v
    end,

    child_property_add = function(self, name, type, values)
        eo.__do_start(self, __class)
        local v = __lib.efl_model_container_child_property_add(name, type, values)
        eo.__do_end()
        return ((v) ~= 0)
    end
}

__M.Container = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Model_Container").__eo_ctor,
                            1, ...)
end

return M
