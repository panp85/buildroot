-- EFL LuaJIT bindings: efl_pack_layout.eo (class Efl.Pack.Layout)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_pack_layout_interface_get()
    eo.class_register("Efl_Pack_Layout", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_pack_layout_interface_get(void);
    void efl_pack_layout_request(void);
]]

local __M = util.get_namespace(M, { "pack" })
__body = {
    layout_request = function(self)
        eo.__do_start(self, __class)
        __lib.efl_pack_layout_request()
        eo.__do_end()
    end
}
__body["__iface_Efl_Pack_Layout"] = true

return M
