-- EFL LuaJIT bindings: efl_model_container_item.eo (class Efl.Model.Container.Item)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_model_container_item_class_get()
    eo.class_register("Efl_Model_Container_Item", {"Efl_Object"}, {"Efl_Model"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_model_container_item_class_get(void);
    void efl_model_container_item_define(void * parent_data, unsigned int index);
    void efl_model_container_item_invalidate(void);
]]

local __M = util.get_namespace(M, { "model", "container" })
__body = {
    __eo_ctor = function(self, define_parent_data, define_index, __func)
        self:define(define_parent_data, define_index)
        if __func then __func() end
    end,

    define = function(self, parent_data, index)
        eo.__do_start(self, __class)
        __lib.efl_model_container_item_define(parent_data, index)
        eo.__do_end()
    end,

    invalidate = function(self)
        eo.__do_start(self, __class)
        __lib.efl_model_container_item_invalidate()
        eo.__do_end()
    end
}

__M.Item = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Model_Container_Item").__eo_ctor,
                            1, ...)
end

return M
