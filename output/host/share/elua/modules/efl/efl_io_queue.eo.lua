-- EFL LuaJIT bindings: efl_io_queue.eo (class Efl.Io.Queue)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_io_queue_class_get()
    eo.class_register("Efl_Io_Queue", {"Efl_Object"}, {"Efl_Io_Reader", "Efl_Io_Writer", "Efl_Io_Closer"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_io_queue_class_get(void);
    void efl_io_queue_limit_set(size_t size);
    size_t efl_io_queue_limit_get(void);
    size_t efl_io_queue_usage_get(void);
    Eina_Slice efl_io_queue_slice_get(void);
    void efl_io_queue_preallocate(size_t size);
    void efl_io_queue_discard(size_t amount);
    void efl_io_queue_clear(void);
    void efl_io_queue_eos_mark(void);
    extern const Eo_Event_Description _EFL_IO_QUEUE_EVENT_SLICE_CHANGED;
]]

local __M = util.get_namespace(M, { "io" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    limit_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.efl_io_queue_limit_set(size)
        eo.__do_end()
    end,

    limit_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_queue_limit_get()
        eo.__do_end()
        return tonumber(v)
    end,

    usage_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_queue_usage_get()
        eo.__do_end()
        return tonumber(v)
    end,

    slice_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_queue_slice_get()
        eo.__do_end()
        return v
    end,

    preallocate = function(self, size)
        eo.__do_start(self, __class)
        __lib.efl_io_queue_preallocate(size)
        eo.__do_end()
    end,

    discard = function(self, amount)
        eo.__do_start(self, __class)
        __lib.efl_io_queue_discard(amount)
        eo.__do_end()
    end,

    clear = function(self)
        eo.__do_start(self, __class)
        __lib.efl_io_queue_clear()
        eo.__do_end()
    end,

    eos_mark = function(self)
        eo.__do_start(self, __class)
        __lib.efl_io_queue_eos_mark()
        eo.__do_end()
    end,

    __events = {
        ["slice,changed"] = __lib._EFL_IO_QUEUE_EVENT_SLICE_CHANGED
    },

    __properties = {
        ["limit"] = { 0, 0, 1, 1, true, true },
        ["slice"] = { 0, 0, 1, 0, true, false },
        ["usage"] = { 0, 0, 1, 0, true, false }
    }
}

__M.Queue = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Io_Queue").__eo_ctor,
                            1, ...)
end

return M
