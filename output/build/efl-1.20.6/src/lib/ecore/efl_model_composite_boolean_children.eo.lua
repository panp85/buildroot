-- EFL LuaJIT bindings: efl_model_composite_boolean_children.eo (class Efl.Model.Composite.Boolean.Children)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_model_composite_boolean_children_class_get()
    eo.class_register("Efl_Model_Composite_Boolean_Children", {"Efl_Object"}, {"Efl_Model"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_model_composite_boolean_children_class_get(void);
]]

local __M = util.get_namespace(M, { "model", "composite", "boolean" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Children = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Model_Composite_Boolean_Children").__eo_ctor,
                            1, ...)
end

return M
