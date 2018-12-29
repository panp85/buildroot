-- EFL LuaJIT bindings: efl_input_event.eo (class Efl.Input.Event)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_input_event_mixin_get()
    eo.class_register("Efl_Input_Event", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_input_event_mixin_get(void);
    void efl_input_timestamp_set(double ms);
    double efl_input_timestamp_get(void);
    void efl_input_device_set(Efl_Input_Device * dev);
    Efl_Input_Device *efl_input_device_get(void);
    void efl_input_event_flags_set(Efl_Input_Flags flags);
    Efl_Input_Flags efl_input_event_flags_get(void);
    void efl_input_processed_set(Eina_Bool val);
    Eina_Bool efl_input_processed_get(void);
    void efl_input_scrolling_set(Eina_Bool val);
    Eina_Bool efl_input_scrolling_get(void);
    Eina_Bool efl_input_fake_get(void);
    void efl_input_reset(void);
    Efl_Input_Event *efl_input_dup(void);
]]

local __M = util.get_namespace(M, { "input" })
__body = {
    timestamp_set = function(self, ms)
        eo.__do_start(self, __class)
        __lib.efl_input_timestamp_set(ms)
        eo.__do_end()
    end,

    timestamp_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_timestamp_get()
        eo.__do_end()
        return tonumber(v)
    end,

    device_set = function(self, dev)
        eo.__do_start(self, __class)
        __lib.efl_input_device_set(dev)
        eo.__do_end()
    end,

    device_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_device_get()
        eo.__do_end()
        return v
    end,

    event_flags_set = function(self, flags)
        eo.__do_start(self, __class)
        __lib.efl_input_event_flags_set(flags)
        eo.__do_end()
    end,

    event_flags_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_event_flags_get()
        eo.__do_end()
        return v
    end,

    processed_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_input_processed_set(val)
        eo.__do_end()
    end,

    processed_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_processed_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    scrolling_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_input_scrolling_set(val)
        eo.__do_end()
    end,

    scrolling_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_scrolling_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    fake_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_fake_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    reset = function(self)
        eo.__do_start(self, __class)
        __lib.efl_input_reset()
        eo.__do_end()
    end,

    dup = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_dup()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["timestamp"] = { 0, 0, 1, 1, true, true },
        ["scrolling"] = { 0, 0, 1, 1, true, true },
        ["fake"] = { 0, 0, 1, 0, true, false },
        ["event_flags"] = { 0, 0, 1, 1, true, true },
        ["device"] = { 0, 0, 1, 1, true, true },
        ["processed"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__mixin_Efl_Input_Event"] = true

return M
