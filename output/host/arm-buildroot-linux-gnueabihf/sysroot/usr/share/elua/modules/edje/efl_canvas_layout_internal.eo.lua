-- EFL LuaJIT bindings: efl_canvas_layout_internal.eo (class Efl.Canvas.Layout_Internal)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_layout_internal_class_get()
    eo.class_register("Efl_Canvas_Layout_Internal", {"Efl_Object"}, {"Efl_Gfx", "Efl_Ui_Drag"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_layout_internal_class_get(void);
    void efl_canvas_layout_internal_state_get(const char * *state, double *val);
]]

local __M = util.get_namespace(M, { "canvas" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    state_get = function(self)
        eo.__do_start(self, __class)
        local state = ffi.new("const char *[1]")
        local val = ffi.new("double[1]")
        __lib.efl_canvas_layout_internal_state_get(state, val)
        eo.__do_end()
        return state[0], tonumber(val[0])
    end,

    __properties = {
        ["state"] = { 0, 0, 2, 0, true, false }
    }
}

__M.Layout_Internal = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Canvas_Layout_Internal").__eo_ctor,
                            1, ...)
end

return M
