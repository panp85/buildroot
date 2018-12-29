-- EFL LuaJIT bindings: efl_vpath.eo (class Efl.Vpath)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_vpath_interface_get()
    eo.class_register("Efl_Vpath", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_vpath_interface_get(void);
    Efl_Vpath_File *efl_vpath_fetch(const char * path);
]]

__body = {
    fetch = function(self, path)
        eo.__do_start(self, __class)
        local v = __lib.efl_vpath_fetch(path)
        eo.__do_end()
        return v
    end
}
__body["__iface_Efl_Vpath"] = true

return M
