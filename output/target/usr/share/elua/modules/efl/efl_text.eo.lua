-- EFL LuaJIT bindings: efl_text.eo (class Efl.Text)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_text_interface_get()
    eo.class_register("Efl_Text", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_text_interface_get(void);
    void efl_text_set(const char * text);
    const char *efl_text_get(void);
]]

__body = {
    text_set = function(self, text)
        eo.__do_start(self, __class)
        __lib.efl_text_set(text)
        eo.__do_end()
    end,

    text_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["text"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Text"] = true

return M
