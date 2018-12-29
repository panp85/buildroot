-- EFL LuaJIT bindings: efl_screen.eo (class Efl.Screen)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_screen_interface_get()
    eo.class_register("Efl_Screen", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_screen_interface_get(void);
    void efl_screen_size_get(int *w, int *h);
    int efl_screen_rotation_get(void);
    void efl_screen_dpi_get(int *xdpi, int *ydpi);
]]

__body = {
    screen_size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_screen_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    screen_rotation_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_screen_rotation_get()
        eo.__do_end()
        return tonumber(v)
    end,

    screen_dpi_get = function(self)
        eo.__do_start(self, __class)
        local xdpi = ffi.new("int[1]")
        local ydpi = ffi.new("int[1]")
        __lib.efl_screen_dpi_get(xdpi, ydpi)
        eo.__do_end()
        return tonumber(xdpi[0]), tonumber(ydpi[0])
    end,

    __properties = {
        ["screen_dpi"] = { 0, 0, 2, 0, true, false },
        ["screen_size"] = { 0, 0, 2, 0, true, false },
        ["screen_rotation"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Screen"] = true

return M
