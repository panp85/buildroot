-- EFL LuaJIT bindings: efl_ui_autorepeat.eo (class Efl.Ui.Autorepeat)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_autorepeat_interface_get()
    eo.class_register("Efl_Ui_Autorepeat", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_autorepeat_interface_get(void);
    void efl_ui_autorepeat_initial_timeout_set(double t);
    double efl_ui_autorepeat_initial_timeout_get(void);
    void efl_ui_autorepeat_gap_timeout_set(double t);
    double efl_ui_autorepeat_gap_timeout_get(void);
    void efl_ui_autorepeat_enabled_set(Eina_Bool on);
    Eina_Bool efl_ui_autorepeat_enabled_get(void);
    Eina_Bool efl_ui_autorepeat_supported_get(void);
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    autorepeat_initial_timeout_set = function(self, t)
        eo.__do_start(self, __class)
        __lib.efl_ui_autorepeat_initial_timeout_set(t)
        eo.__do_end()
    end,

    autorepeat_initial_timeout_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_autorepeat_initial_timeout_get()
        eo.__do_end()
        return tonumber(v)
    end,

    autorepeat_gap_timeout_set = function(self, t)
        eo.__do_start(self, __class)
        __lib.efl_ui_autorepeat_gap_timeout_set(t)
        eo.__do_end()
    end,

    autorepeat_gap_timeout_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_autorepeat_gap_timeout_get()
        eo.__do_end()
        return tonumber(v)
    end,

    autorepeat_enabled_set = function(self, on)
        eo.__do_start(self, __class)
        __lib.efl_ui_autorepeat_enabled_set(on)
        eo.__do_end()
    end,

    autorepeat_enabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_autorepeat_enabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    autorepeat_supported_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_autorepeat_supported_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["autorepeat_initial_timeout"] = { 0, 0, 1, 1, true, true },
        ["autorepeat_supported"] = { 0, 0, 1, 0, true, false },
        ["autorepeat_gap_timeout"] = { 0, 0, 1, 1, true, true },
        ["autorepeat_enabled"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Ui_Autorepeat"] = true

return M
