-- EFL LuaJIT bindings: efl_loop_timer.eo (class Efl.Loop.Timer)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_loop_timer_class_get()
    eo.class_register("Efl_Loop_Timer", {"Efl_Loop_User"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_loop_timer_class_get(void);
    void efl_loop_timer_interval_set(double in_);
    double efl_loop_timer_interval_get(void);
    double efl_loop_timer_pending_get(void);
    void efl_loop_timer_reset(void);
    void efl_loop_timer_loop_reset(void);
    void efl_loop_timer_delay(double add);
    extern const Eo_Event_Description _EFL_LOOP_TIMER_EVENT_TICK;
]]

local __M = util.get_namespace(M, { "loop" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    interval_set = function(self, in_)
        eo.__do_start(self, __class)
        __lib.efl_loop_timer_interval_set(in_)
        eo.__do_end()
    end,

    interval_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_loop_timer_interval_get()
        eo.__do_end()
        return tonumber(v)
    end,

    pending_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_loop_timer_pending_get()
        eo.__do_end()
    end,

    reset = function(self)
        eo.__do_start(self, __class)
        __lib.efl_loop_timer_reset()
        eo.__do_end()
    end,

    loop_reset = function(self)
        eo.__do_start(self, __class)
        __lib.efl_loop_timer_loop_reset()
        eo.__do_end()
    end,

    delay = function(self, add)
        eo.__do_start(self, __class)
        __lib.efl_loop_timer_delay(add)
        eo.__do_end()
    end,

    __events = {
        ["tick"] = __lib._EFL_LOOP_TIMER_EVENT_TICK
    },

    __properties = {
        ["pending"] = { 0, 0, 1, 0, true, false },
        ["interval"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Timer = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Loop_Timer").__eo_ctor,
                            1, ...)
end

return M
