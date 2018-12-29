-- EFL LuaJIT bindings: efl_gfx_stack.eo (class Efl.Gfx.Stack)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_gfx_stack_interface_get()
    eo.class_register("Efl_Gfx_Stack", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_gfx_stack_interface_get(void);
    void efl_gfx_stack_layer_set(short l);
    short efl_gfx_stack_layer_get(void);
    Efl_Gfx_Stack *efl_gfx_stack_below_get(void);
    Efl_Gfx_Stack *efl_gfx_stack_above_get(void);
    void efl_gfx_stack_below(Efl_Gfx_Stack * below);
    void efl_gfx_stack_raise(void);
    void efl_gfx_stack_above(Efl_Gfx_Stack * above);
    void efl_gfx_stack_lower(void);
    extern const Eo_Event_Description _EFL_GFX_EVENT_RESTACK;
]]

local __M = util.get_namespace(M, { "gfx" })
__body = {
    layer_set = function(self, l)
        eo.__do_start(self, __class)
        __lib.efl_gfx_stack_layer_set(l)
        eo.__do_end()
    end,

    layer_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_stack_layer_get()
        eo.__do_end()
        return tonumber(v)
    end,

    below_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_stack_below_get()
        eo.__do_end()
    end,

    above_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_stack_above_get()
        eo.__do_end()
    end,

    stack_below = function(self, below)
        eo.__do_start(self, __class)
        __lib.efl_gfx_stack_below(below)
        eo.__do_end()
    end,

    raise = function(self)
        eo.__do_start(self, __class)
        __lib.efl_gfx_stack_raise()
        eo.__do_end()
    end,

    stack_above = function(self, above)
        eo.__do_start(self, __class)
        __lib.efl_gfx_stack_above(above)
        eo.__do_end()
    end,

    lower = function(self)
        eo.__do_start(self, __class)
        __lib.efl_gfx_stack_lower()
        eo.__do_end()
    end,

    __events = {
        ["restack"] = __lib._EFL_GFX_EVENT_RESTACK
    },

    __properties = {
        ["layer"] = { 0, 0, 1, 1, true, true },
        ["above"] = { 0, 0, 1, 0, true, false },
        ["below"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Gfx_Stack"] = true

return M
