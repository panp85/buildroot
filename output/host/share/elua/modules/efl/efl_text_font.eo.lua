-- EFL LuaJIT bindings: efl_text_font.eo (class Efl.Text.Font)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_text_font_interface_get()
    eo.class_register("Efl_Text_Font", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_text_font_interface_get(void);
    void efl_text_font_set(const char * font, int size);
    void efl_text_font_get(const char * *font, int *size);
    void efl_text_font_source_set(const char * font_source);
    const char *efl_text_font_source_get(void);
    void efl_text_font_fallbacks_set(const char * font_fallbacks);
    const char *efl_text_font_fallbacks_get(void);
    void efl_text_font_weight_set(Efl_Text_Font_Weight font_weight);
    Efl_Text_Font_Weight efl_text_font_weight_get(void);
    void efl_text_font_slant_set(Efl_Text_Font_Slant style);
    Efl_Text_Font_Slant efl_text_font_slant_get(void);
    void efl_text_font_width_set(Efl_Text_Font_Width width);
    Efl_Text_Font_Width efl_text_font_width_get(void);
    void efl_text_font_lang_set(const char * lang);
    const char *efl_text_font_lang_get(void);
]]

local __M = util.get_namespace(M, { "text" })
__body = {
    font_set = function(self, font, size)
        eo.__do_start(self, __class)
        __lib.efl_text_font_set(font, size)
        eo.__do_end()
    end,

    font_get = function(self)
        eo.__do_start(self, __class)
        local font = ffi.new("const char *[1]")
        local size = ffi.new("int[1]")
        __lib.efl_text_font_get(font, size)
        eo.__do_end()
        return font[0], tonumber(size[0])
    end,

    font_source_set = function(self, font_source)
        eo.__do_start(self, __class)
        __lib.efl_text_font_source_set(font_source)
        eo.__do_end()
    end,

    font_source_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_font_source_get()
        eo.__do_end()
        return v
    end,

    font_fallbacks_set = function(self, font_fallbacks)
        eo.__do_start(self, __class)
        __lib.efl_text_font_fallbacks_set(font_fallbacks)
        eo.__do_end()
    end,

    font_fallbacks_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_font_fallbacks_get()
        eo.__do_end()
        return v
    end,

    font_weight_set = function(self, font_weight)
        eo.__do_start(self, __class)
        __lib.efl_text_font_weight_set(font_weight)
        eo.__do_end()
    end,

    font_weight_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_font_weight_get()
        eo.__do_end()
        return v
    end,

    font_slant_set = function(self, style)
        eo.__do_start(self, __class)
        __lib.efl_text_font_slant_set(style)
        eo.__do_end()
    end,

    font_slant_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_font_slant_get()
        eo.__do_end()
        return v
    end,

    font_width_set = function(self, width)
        eo.__do_start(self, __class)
        __lib.efl_text_font_width_set(width)
        eo.__do_end()
    end,

    font_width_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_font_width_get()
        eo.__do_end()
        return v
    end,

    font_lang_set = function(self, lang)
        eo.__do_start(self, __class)
        __lib.efl_text_font_lang_set(lang)
        eo.__do_end()
    end,

    font_lang_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_font_lang_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["font_width"] = { 0, 0, 1, 1, true, true },
        ["font_fallbacks"] = { 0, 0, 1, 1, true, true },
        ["font_weight"] = { 0, 0, 1, 1, true, true },
        ["font_lang"] = { 0, 0, 1, 1, true, true },
        ["font_source"] = { 0, 0, 1, 1, true, true },
        ["font"] = { 0, 0, 2, 2, true, true },
        ["font_slant"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Text_Font"] = true

return M
