-- EFL LuaJIT bindings: efl_input_focus.eo (class Efl.Input.Focus)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_input_focus_class_get()
    eo.class_register("Efl_Input_Focus", {"Efl_Object"}, {"Efl_Input_Event"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_input_focus_class_get(void);
    void efl_input_focus_object_set(Efl_Object * object);
    Efl_Object *efl_input_focus_object_get(void);
]]

local __M = util.get_namespace(M, { "input" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    object_set = function(self, object)
        eo.__do_start(self, __class)
        __lib.efl_input_focus_object_set(object)
        eo.__do_end()
    end,

    object_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_focus_object_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["object"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Focus = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Input_Focus").__eo_ctor,
                            1, ...)
end

return M
