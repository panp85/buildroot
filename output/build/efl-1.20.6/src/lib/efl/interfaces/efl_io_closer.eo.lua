-- EFL LuaJIT bindings: efl_io_closer.eo (class Efl.Io.Closer)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_io_closer_mixin_get()
    eo.class_register("Efl_Io_Closer", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_io_closer_mixin_get(void);
    Eina_Bool efl_io_closer_closed_set(Eina_Bool is_closed);
    Eina_Bool efl_io_closer_closed_get(void);
    Eina_Bool efl_io_closer_close_on_exec_set(Eina_Bool close_on_exec);
    Eina_Bool efl_io_closer_close_on_exec_get(void);
    void efl_io_closer_close_on_destructor_set(Eina_Bool close_on_destructor);
    Eina_Bool efl_io_closer_close_on_destructor_get(void);
    Eina_Error efl_io_closer_close(void);
    extern const Eo_Event_Description _EFL_IO_CLOSER_EVENT_CLOSED;
]]

local __M = util.get_namespace(M, { "io" })
__body = {
    closed_set = function(self, is_closed)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_closer_closed_set(is_closed)
        eo.__do_end()
    end,

    closed_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_closer_closed_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    close_on_exec_set = function(self, close_on_exec)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_closer_close_on_exec_set(close_on_exec)
        eo.__do_end()
    end,

    close_on_exec_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_closer_close_on_exec_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    close_on_destructor_set = function(self, close_on_destructor)
        eo.__do_start(self, __class)
        __lib.efl_io_closer_close_on_destructor_set(close_on_destructor)
        eo.__do_end()
    end,

    close_on_destructor_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_closer_close_on_destructor_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    close = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_closer_close()
        eo.__do_end()
        return v
    end,

    __events = {
        ["closed"] = __lib._EFL_IO_CLOSER_EVENT_CLOSED
    },

    __properties = {
        ["close_on_exec"] = { 0, 0, 1, 1, true, true },
        ["closed"] = { 0, 0, 1, 1, true, true },
        ["close_on_destructor"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__mixin_Efl_Io_Closer"] = true

return M
