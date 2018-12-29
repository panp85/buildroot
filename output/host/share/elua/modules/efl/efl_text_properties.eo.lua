-- EFL LuaJIT bindings: efl_text_properties.eo (class Efl.Text.Properties)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_text_properties_interface_get()
    eo.class_register("Efl_Text_Properties", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_text_properties_interface_get(void);
    void efl_text_properties_font_set(const char * font, Efl_Font_Size size);
    void efl_text_properties_font_get(const char * *font, Efl_Font_Size *size);
    void efl_text_properties_font_source_set(const char * font_source);
    const char *efl_text_properties_font_source_get(void);
]]

local __M = util.get_namespace(M, { "text" })
__body = {
    font_set = function(self, font, size)
        eo.__do_start(self, __class)
        __lib.efl_text_properties_font_set(font, size)
        eo.__do_end()
    end,

    font_get = function(self)
        eo.__do_start(self, __class)
        local font = ffi.new("const char *[1]")
        local size = ffi.new("Efl_Font_Size[1]")
        __lib.efl_text_properties_font_get(font, size)
        eo.__do_end()
        return font[0], size[0]
    end,

    font_source_set = function(self, font_source)
        eo.__do_start(self, __class)
        __lib.efl_text_properties_font_source_set(font_source)
        eo.__do_end()
    end,

    font_source_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_properties_font_source_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["font"] = { 0, 0, 2, 2, true, true },
        ["font_source"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Text_Properties"] = true

return M
