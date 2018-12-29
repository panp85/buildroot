-- EFL LuaJIT bindings: efl_gfx_view.eo (class Efl.Gfx.View)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_gfx_view_interface_get()
    eo.class_register("Efl_Gfx_View", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_gfx_view_interface_get(void);
    void efl_gfx_view_size_set(int w, int h);
    void efl_gfx_view_size_get(int *w, int *h);
]]

local __M = util.get_namespace(M, { "gfx" })
__body = {
    view_size_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.efl_gfx_view_size_set(w, h)
        eo.__do_end()
    end,

    view_size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_gfx_view_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    __properties = {
        ["view_size"] = { 0, 0, 2, 2, true, true }
    }
}
__body["__iface_Efl_Gfx_View"] = true

return M
