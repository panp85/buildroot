-- EFL LuaJIT bindings: efl_loop.eo (class Efl.Loop)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_loop_class_get()
    eo.class_register("Efl_Loop", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_loop_class_get(void);
    Efl_Loop *efl_loop_main_get(void);
    const Efl_Version *efl_loop_app_efl_version_get(void);
    const Efl_Version *efl_loop_efl_version_get(void);
    void efl_loop_iterate(void);
    int efl_loop_iterate_may_block(int may_block);
    unsigned char efl_loop_begin(void);
    void efl_loop_quit(unsigned char exit_code);
    Efl_Future *efl_loop_job(const void * data);
    Efl_Future *efl_loop_timeout(double time, const void * data);
    Eina_Bool efl_loop_register(const Efl_Class * klass, const Efl_Object * provider);
    Eina_Bool efl_loop_unregister(const Efl_Class * klass, const Efl_Object * provider);
    extern const Eo_Event_Description _EFL_LOOP_EVENT_IDLE_ENTER;
    extern const Eo_Event_Description _EFL_LOOP_EVENT_IDLE_EXIT;
    extern const Eo_Event_Description _EFL_LOOP_EVENT_IDLE;
    extern const Eo_Event_Description _EFL_LOOP_EVENT_ARGUMENTS;
    extern const Eo_Event_Description _EFL_LOOP_EVENT_POLL_HIGH;
    extern const Eo_Event_Description _EFL_LOOP_EVENT_POLL_MEDIUM;
    extern const Eo_Event_Description _EFL_LOOP_EVENT_POLL_LOW;
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    main_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_loop_main_get()
        eo.__do_end()
        return v
    end,

    app_efl_version_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_loop_app_efl_version_get()
        eo.__do_end()
        return v
    end,

    efl_version_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_loop_efl_version_get()
        eo.__do_end()
        return v
    end,

    iterate = function(self)
        eo.__do_start(self, __class)
        __lib.efl_loop_iterate()
        eo.__do_end()
    end,

    iterate_may_block = function(self, may_block)
        eo.__do_start(self, __class)
        local v = __lib.efl_loop_iterate_may_block(may_block)
        eo.__do_end()
        return tonumber(v)
    end,

    begin = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_loop_begin()
        eo.__do_end()
        return v
    end,

    quit = function(self, exit_code)
        eo.__do_start(self, __class)
        __lib.efl_loop_quit(exit_code)
        eo.__do_end()
    end,

    job = function(self, data)
        eo.__do_start(self, __class)
        local v = __lib.efl_loop_job(data)
        eo.__do_end()
        return v
    end,

    timeout = function(self, time, data)
        eo.__do_start(self, __class)
        local v = __lib.efl_loop_timeout(time, data)
        eo.__do_end()
        return v
    end,

    register = function(self, klass, provider)
        eo.__do_start(self, __class)
        local v = __lib.efl_loop_register(klass, provider)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    unregister = function(self, klass, provider)
        eo.__do_start(self, __class)
        local v = __lib.efl_loop_unregister(klass, provider)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["idle,enter"] = __lib._EFL_LOOP_EVENT_IDLE_ENTER,
        ["idle,exit"] = __lib._EFL_LOOP_EVENT_IDLE_EXIT,
        ["idle"] = __lib._EFL_LOOP_EVENT_IDLE,
        ["arguments"] = __lib._EFL_LOOP_EVENT_ARGUMENTS,
        ["poll,high"] = __lib._EFL_LOOP_EVENT_POLL_HIGH,
        ["poll,medium"] = __lib._EFL_LOOP_EVENT_POLL_MEDIUM,
        ["poll,low"] = __lib._EFL_LOOP_EVENT_POLL_LOW
    },

    __properties = {
        ["main"] = { 0, 0, 1, 0, true, false },
        ["app_efl_version"] = { 0, 0, 1, 0, true, false },
        ["efl_version"] = { 0, 0, 1, 0, true, false }
    }
}

M.Loop = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Loop").__eo_ctor,
                            1, ...)
end

return M
