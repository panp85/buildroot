-- EFL LuaJIT bindings: efl_canvas_snapshot.eo (class Efl.Canvas.Snapshot)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_snapshot_class_get()
    eo.class_register("Efl_Canvas_Snapshot", {"Efl_Canvas_Image_Internal"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_snapshot_class_get(void);
]]

local __M = util.get_namespace(M, { "canvas" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end
}

__M.Snapshot = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Canvas_Snapshot").__eo_ctor,
                            1, ...)
end

return M
