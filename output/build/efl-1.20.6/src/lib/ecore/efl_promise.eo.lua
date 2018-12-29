-- EFL LuaJIT bindings: efl_promise.eo (class Efl.Promise)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_promise_class_get()
    eo.class_register("Efl_Promise", {"Efl_Loop_User"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_promise_class_get(void);
    Efl_Future *efl_promise_future_get(void);
    void efl_promise_value_set(void * v, Eina_Free_Cb free_cb);
    void efl_promise_failed_set(Eina_Error err);
    void efl_promise_progress_set(const void * p);
    Eina_Bool efl_promise_connect(Efl_Future * f);
    extern const Eo_Event_Description _EFL_PROMISE_EVENT_FUTURE_SET;
    extern const Eo_Event_Description _EFL_PROMISE_EVENT_FUTURE_PROGRESS_SET;
    extern const Eo_Event_Description _EFL_PROMISE_EVENT_FUTURE_NONE;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    future_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_promise_future_get()
        eo.__do_end()
        return v
    end,

    value_set = function(self, v, free_cb)
        eo.__do_start(self, __class)
        __lib.efl_promise_value_set(v, free_cb)
        eo.__do_end()
    end,

    failed_set = function(self, err)
        eo.__do_start(self, __class)
        __lib.efl_promise_failed_set(err)
        eo.__do_end()
    end,

    progress_set = function(self, p)
        eo.__do_start(self, __class)
        __lib.efl_promise_progress_set(p)
        eo.__do_end()
    end,

    connect = function(self, f)
        eo.__do_start(self, __class)
        local v = __lib.efl_promise_connect(f)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["future,set"] = __lib._EFL_PROMISE_EVENT_FUTURE_SET,
        ["future,progress,set"] = __lib._EFL_PROMISE_EVENT_FUTURE_PROGRESS_SET,
        ["future,none"] = __lib._EFL_PROMISE_EVENT_FUTURE_NONE
    },

    __properties = {
        ["failed"] = { 0, 0, 0, 1, false, true },
        ["future"] = { 0, 0, 1, 0, true, false },
        ["value"] = { 0, 0, 0, 2, false, true }
    }
}

M.Promise = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Promise").__eo_ctor,
                            1, ...)
end

return M
