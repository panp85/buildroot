-- EFL LuaJIT bindings: efl_ui_range.eo (class Efl.Ui.Range)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_range_interface_get()
    eo.class_register("Efl_Ui_Range", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_range_interface_get(void);
    void efl_ui_range_span_size_set(int size);
    int efl_ui_range_span_size_get(void);
    void efl_ui_range_value_set(double val);
    double efl_ui_range_value_get(void);
    void efl_ui_range_min_max_set(double min, double max);
    void efl_ui_range_min_max_get(double *min, double *max);
    void efl_ui_range_unit_format_set(const char * units);
    const char *efl_ui_range_unit_format_get(void);
    void efl_ui_range_interval_enabled_set(Eina_Bool enable);
    Eina_Bool efl_ui_range_interval_enabled_get(void);
    void efl_ui_range_interval_set(double from, double to);
    void efl_ui_range_interval_get(double *from, double *to);
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    span_size_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.efl_ui_range_span_size_set(size)
        eo.__do_end()
    end,

    span_size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_range_span_size_get()
        eo.__do_end()
        return tonumber(v)
    end,

    range_value_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_ui_range_value_set(val)
        eo.__do_end()
    end,

    range_value_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_range_value_get()
        eo.__do_end()
        return tonumber(v)
    end,

    range_min_max_set = function(self, min, max)
        eo.__do_start(self, __class)
        __lib.efl_ui_range_min_max_set(min, max)
        eo.__do_end()
    end,

    range_min_max_get = function(self)
        eo.__do_start(self, __class)
        local min = ffi.new("double[1]")
        local max = ffi.new("double[1]")
        __lib.efl_ui_range_min_max_get(min, max)
        eo.__do_end()
        return tonumber(min[0]), tonumber(max[0])
    end,

    range_unit_format_set = function(self, units)
        eo.__do_start(self, __class)
        __lib.efl_ui_range_unit_format_set(units)
        eo.__do_end()
    end,

    range_unit_format_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_range_unit_format_get()
        eo.__do_end()
        return v
    end,

    range_interval_enabled_set = function(self, enable)
        eo.__do_start(self, __class)
        __lib.efl_ui_range_interval_enabled_set(enable)
        eo.__do_end()
    end,

    range_interval_enabled_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_range_interval_enabled_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    range_interval_set = function(self, from, to)
        eo.__do_start(self, __class)
        __lib.efl_ui_range_interval_set(from, to)
        eo.__do_end()
    end,

    range_interval_get = function(self)
        eo.__do_start(self, __class)
        local from = ffi.new("double[1]")
        local to = ffi.new("double[1]")
        __lib.efl_ui_range_interval_get(from, to)
        eo.__do_end()
        return tonumber(from[0]), tonumber(to[0])
    end,

    __properties = {
        ["range_interval"] = { 0, 0, 2, 2, true, true },
        ["range_min_max"] = { 0, 0, 2, 2, true, true },
        ["range_interval_enabled"] = { 0, 0, 1, 1, true, true },
        ["range_unit_format"] = { 0, 0, 1, 1, true, true },
        ["range_value"] = { 0, 0, 1, 1, true, true },
        ["span_size"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Ui_Range"] = true

return M
