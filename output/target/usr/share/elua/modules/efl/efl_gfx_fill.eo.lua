-- EFL LuaJIT bindings: efl_gfx_fill.eo (class Efl.Gfx.Fill)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_gfx_fill_interface_get()
    eo.class_register("Efl_Gfx_Fill", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_gfx_fill_interface_get(void);
    void efl_gfx_fill_auto_set(Eina_Bool filled);
    Eina_Bool efl_gfx_fill_auto_get(void);
    void efl_gfx_fill_set(int x, int y, int w, int h);
    void efl_gfx_fill_get(int *x, int *y, int *w, int *h);
]]

local __M = util.get_namespace(M, { "gfx" })
__body = {
    fill_auto_set = function(self, filled)
        eo.__do_start(self, __class)
        __lib.efl_gfx_fill_auto_set(filled)
        eo.__do_end()
    end,

    fill_auto_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_fill_auto_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    fill_set = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.efl_gfx_fill_set(x, y, w, h)
        eo.__do_end()
    end,

    fill_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_gfx_fill_get(x, y, w, h)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    __properties = {
        ["fill_auto"] = { 0, 0, 1, 1, true, true },
        ["fill"] = { 0, 0, 4, 4, true, true }
    }
}
__body["__iface_Efl_Gfx_Fill"] = true

return M
