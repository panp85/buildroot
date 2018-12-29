-- EFL LuaJIT bindings: efl_model_composite_boolean.eo (class Efl.Model.Composite.Boolean)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_model_composite_boolean_class_get()
    eo.class_register("Efl_Model_Composite_Boolean", {"Efl_Object"}, {"Efl_Model"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_model_composite_boolean_class_get(void);
    void efl_model_composite_boolean_composite_model_set(Efl_Model * model);
    Efl_Model *efl_model_composite_boolean_composite_model_get(void);
    void efl_model_composite_boolean_property_add(const char * name, Eina_Bool initial_value);
]]

local __M = util.get_namespace(M, { "model", "composite" })
__body = {
    __eo_ctor = function(self, composite_model_model, property_add_name, property_add_initial_value, __func)
        self:composite_model_set(composite_model_model)
        self:property_add(property_add_name, property_add_initial_value)
        if __func then __func() end
    end,

    composite_model_set = function(self, model)
        eo.__do_start(self, __class)
        __lib.efl_model_composite_boolean_composite_model_set(model)
        eo.__do_end()
    end,

    composite_model_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_model_composite_boolean_composite_model_get()
        eo.__do_end()
        return v
    end,

    property_add = function(self, name, initial_value)
        eo.__do_start(self, __class)
        __lib.efl_model_composite_boolean_property_add(name, initial_value)
        eo.__do_end()
    end,

    __properties = {
        ["composite_model"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Boolean = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Model_Composite_Boolean").__eo_ctor,
                            1, ...)
end

return M
