-- EFL LuaJIT bindings: efl_canvas_surface.eo (class Efl.Canvas.Surface)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_surface_mixin_get()
    eo.class_register("Efl_Canvas_Surface", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_surface_mixin_get(void);
    Eina_Bool efl_canvas_surface_native_buffer_set(void * buffer);
    void *efl_canvas_surface_native_buffer_get(void);
]]

local __M = util.get_namespace(M, { "canvas" })
__body = {
    native_buffer_set = function(self, buffer)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_surface_native_buffer_set(buffer)
        eo.__do_end()
    end,

    native_buffer_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_surface_native_buffer_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["native_buffer"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__mixin_Efl_Canvas_Surface"] = true

return M
