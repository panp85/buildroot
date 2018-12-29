-- EFL LuaJIT bindings: efl_observable.eo (class Efl.Observable)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_observable_class_get()
    eo.class_register("Efl_Observable", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_observable_class_get(void);
    void efl_observable_observer_add(const char * key, Efl_Observer * obs);
    void efl_observable_observer_del(const char * key, Efl_Observer * obs);
    void efl_observable_observer_clean(Efl_Observer * obs);
    Eina_Iterator *efl_observable_observers_iterator_new(const char * key);
    void efl_observable_observers_update(const char * key, void * data);
    Eina_Iterator *efl_observable_iterator_tuple_new(void);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    observer_add = function(self, key, obs)
        eo.__do_start(self, __class)
        __lib.efl_observable_observer_add(key, obs)
        eo.__do_end()
    end,

    observer_del = function(self, key, obs)
        eo.__do_start(self, __class)
        __lib.efl_observable_observer_del(key, obs)
        eo.__do_end()
    end,

    observer_clean = function(self, obs)
        eo.__do_start(self, __class)
        __lib.efl_observable_observer_clean(obs)
        eo.__do_end()
    end,

    observers_iterator_new = function(self, key)
        eo.__do_start(self, __class)
        local v = __lib.efl_observable_observers_iterator_new(key)
        eo.__do_end()
        return v
    end,

    observers_update = function(self, key, data)
        eo.__do_start(self, __class)
        __lib.efl_observable_observers_update(key, data)
        eo.__do_end()
    end,

    iterator_tuple_new = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_observable_iterator_tuple_new()
        eo.__do_end()
        return v
    end
}

M.Observable = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Observable").__eo_ctor,
                            1, ...)
end

return M
