-- EFL LuaJIT bindings: efl_ui_spin.eo (class Efl.Ui.Spin)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_spin_interface_get()
    eo.class_register("Efl_Ui_Spin", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_spin_interface_get(void);
    void efl_ui_spin_min_max_set(double min, double max);
    void efl_ui_spin_min_max_get(double *min, double *max);
    void efl_ui_spin_step_set(double step);
    double efl_ui_spin_step_get(void);
    void efl_ui_spin_value_set(double val);
    double efl_ui_spin_value_get(void);
    void efl_ui_spin_interval_set(double interval);
    double efl_ui_spin_interval_get(void);
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    min_max_set = function(self, min, max)
        eo.__do_start(self, __class)
        __lib.efl_ui_spin_min_max_set(min, max)
        eo.__do_end()
    end,

    min_max_get = function(self)
        eo.__do_start(self, __class)
        local min = ffi.new("double[1]")
        local max = ffi.new("double[1]")
        __lib.efl_ui_spin_min_max_get(min, max)
        eo.__do_end()
        return tonumber(min[0]), tonumber(max[0])
    end,

    step_set = function(self, step)
        eo.__do_start(self, __class)
        __lib.efl_ui_spin_step_set(step)
        eo.__do_end()
    end,

    step_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_spin_step_get()
        eo.__do_end()
        return tonumber(v)
    end,

    value_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_ui_spin_value_set(val)
        eo.__do_end()
    end,

    value_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_spin_value_get()
        eo.__do_end()
        return tonumber(v)
    end,

    interval_set = function(self, interval)
        eo.__do_start(self, __class)
        __lib.efl_ui_spin_interval_set(interval)
        eo.__do_end()
    end,

    interval_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_spin_interval_get()
        eo.__do_end()
        return tonumber(v)
    end,

    __properties = {
        ["step"] = { 0, 0, 1, 1, true, true },
        ["min_max"] = { 0, 0, 2, 2, true, true },
        ["interval"] = { 0, 0, 1, 1, true, true },
        ["value"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Ui_Spin"] = true

return M
