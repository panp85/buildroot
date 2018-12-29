-- EFL LuaJIT bindings: efl_canvas_filter_internal.eo (class Efl.Canvas.Filter.Internal)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_filter_internal_mixin_get()
    eo.class_register("Efl_Canvas_Filter_Internal", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_filter_internal_mixin_get(void);
]]

local __M = util.get_namespace(M, { "canvas", "filter" })
__body = {
}
__body["__mixin_Efl_Canvas_Filter_Internal"] = true

return M
