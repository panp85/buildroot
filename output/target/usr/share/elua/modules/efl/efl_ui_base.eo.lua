-- EFL LuaJIT bindings: efl_ui_base.eo (class Efl.Ui.Base)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_base_interface_get()
    eo.class_register("Efl_Ui_Base", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_base_interface_get(void);
    void efl_ui_mirrored_set(Eina_Bool rtl);
    Eina_Bool efl_ui_mirrored_get(void);
    void efl_ui_mirrored_automatic_set(Eina_Bool automatic);
    Eina_Bool efl_ui_mirrored_automatic_get(void);
    void efl_ui_language_set(const char * language);
    const char *efl_ui_language_get(void);
    void efl_ui_scale_set(double scale);
    double efl_ui_scale_get(void);
    double efl_ui_base_scale_get(void);
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    mirrored_set = function(self, rtl)
        eo.__do_start(self, __class)
        __lib.efl_ui_mirrored_set(rtl)
        eo.__do_end()
    end,

    mirrored_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_mirrored_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    mirrored_automatic_set = function(self, automatic)
        eo.__do_start(self, __class)
        __lib.efl_ui_mirrored_automatic_set(automatic)
        eo.__do_end()
    end,

    mirrored_automatic_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_mirrored_automatic_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    language_set = function(self, language)
        eo.__do_start(self, __class)
        __lib.efl_ui_language_set(language)
        eo.__do_end()
    end,

    language_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_language_get()
        eo.__do_end()
        return v
    end,

    scale_set = function(self, scale)
        eo.__do_start(self, __class)
        __lib.efl_ui_scale_set(scale)
        eo.__do_end()
    end,

    scale_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_scale_get()
        eo.__do_end()
        return tonumber(v)
    end,

    base_scale_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_base_scale_get()
        eo.__do_end()
        return tonumber(v)
    end,

    __properties = {
        ["scale"] = { 0, 0, 1, 1, true, true },
        ["mirrored"] = { 0, 0, 1, 1, true, true },
        ["base_scale"] = { 0, 0, 1, 0, true, false },
        ["mirrored_automatic"] = { 0, 0, 1, 1, true, true },
        ["language"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Ui_Base"] = true

return M
