-- EFL LuaJIT bindings: efl_text_format.eo (class Efl.Text.Format)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_text_format_interface_get()
    eo.class_register("Efl_Text_Format", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_text_format_interface_get(void);
    void efl_text_ellipsis_set(double value);
    double efl_text_ellipsis_get(void);
    void efl_text_wrap_set(Efl_Text_Format_Wrap wrap);
    Efl_Text_Format_Wrap efl_text_wrap_get(void);
    void efl_text_multiline_set(Eina_Bool enabled);
    Eina_Bool efl_text_multiline_get(void);
    void efl_text_halign_set(Efl_Text_Format_Horizontal_Alignment_Type value);
    Efl_Text_Format_Horizontal_Alignment_Type efl_text_halign_get(void);
    void efl_text_valign_set(Efl_Text_Format_Vertical_Alignment_Type value);
    Efl_Text_Format_Vertical_Alignment_Type efl_text_valign_get(void);
    void efl_text_linegap_set(double value);
    double efl_text_linegap_get(void);
    void efl_text_linerelgap_set(double value);
    double efl_text_linerelgap_get(void);
    void efl_text_tabstops_set(int value);
    int efl_text_tabstops_get(void);
    void efl_text_password_set(Eina_Bool enabled);
    Eina_Bool efl_text_password_get(void);
    void efl_text_replacement_char_set(const char * repch);
    const char *efl_text_replacement_char_get(void);
]]

local __M = util.get_namespace(M, { "text" })
__body = {
    ellipsis_set = function(self, value)
        eo.__do_start(self, __class)
        __lib.efl_text_ellipsis_set(value)
        eo.__do_end()
    end,

    ellipsis_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_ellipsis_get()
        eo.__do_end()
        return tonumber(v)
    end,

    wrap_set = function(self, wrap)
        eo.__do_start(self, __class)
        __lib.efl_text_wrap_set(wrap)
        eo.__do_end()
    end,

    wrap_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_wrap_get()
        eo.__do_end()
        return v
    end,

    multiline_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.efl_text_multiline_set(enabled)
        eo.__do_end()
    end,

    multiline_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_multiline_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    halign_set = function(self, value)
        eo.__do_start(self, __class)
        __lib.efl_text_halign_set(value)
        eo.__do_end()
    end,

    halign_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_halign_get()
        eo.__do_end()
        return v
    end,

    valign_set = function(self, value)
        eo.__do_start(self, __class)
        __lib.efl_text_valign_set(value)
        eo.__do_end()
    end,

    valign_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_valign_get()
        eo.__do_end()
        return v
    end,

    linegap_set = function(self, value)
        eo.__do_start(self, __class)
        __lib.efl_text_linegap_set(value)
        eo.__do_end()
    end,

    linegap_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_linegap_get()
        eo.__do_end()
        return tonumber(v)
    end,

    linerelgap_set = function(self, value)
        eo.__do_start(self, __class)
        __lib.efl_text_linerelgap_set(value)
        eo.__do_end()
    end,

    linerelgap_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_linerelgap_get()
        eo.__do_end()
        return tonumber(v)
    end,

    tabstops_set = function(self, value)
        eo.__do_start(self, __class)
        __lib.efl_text_tabstops_set(value)
        eo.__do_end()
    end,

    tabstops_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_tabstops_get()
        eo.__do_end()
        return tonumber(v)
    end,

    password_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.efl_text_password_set(enabled)
        eo.__do_end()
    end,

    password_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_password_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    replacement_char_set = function(self, repch)
        eo.__do_start(self, __class)
        __lib.efl_text_replacement_char_set(repch)
        eo.__do_end()
    end,

    replacement_char_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_replacement_char_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["valign"] = { 0, 0, 1, 1, true, true },
        ["linerelgap"] = { 0, 0, 1, 1, true, true },
        ["halign"] = { 0, 0, 1, 1, true, true },
        ["ellipsis"] = { 0, 0, 1, 1, true, true },
        ["replacement_char"] = { 0, 0, 1, 1, true, true },
        ["linegap"] = { 0, 0, 1, 1, true, true },
        ["wrap"] = { 0, 0, 1, 1, true, true },
        ["tabstops"] = { 0, 0, 1, 1, true, true },
        ["password"] = { 0, 0, 1, 1, true, true },
        ["multiline"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Text_Format"] = true

return M
