-- EFL LuaJIT bindings: efl_io_sizer.eo (class Efl.Io.Sizer)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_io_sizer_mixin_get()
    eo.class_register("Efl_Io_Sizer", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_io_sizer_mixin_get(void);
    Eina_Bool efl_io_sizer_size_set(uint64_t size);
    uint64_t efl_io_sizer_size_get(void);
    Eina_Error efl_io_sizer_resize(uint64_t size);
    extern const Eo_Event_Description _EFL_IO_SIZER_EVENT_SIZE_CHANGED;
]]

local __M = util.get_namespace(M, { "io" })
__body = {
    size_set = function(self, size)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_sizer_size_set(size)
        eo.__do_end()
    end,

    size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_sizer_size_get()
        eo.__do_end()
        return v
    end,

    resize = function(self, size)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_sizer_resize(size)
        eo.__do_end()
        return v
    end,

    __events = {
        ["size,changed"] = __lib._EFL_IO_SIZER_EVENT_SIZE_CHANGED
    },

    __properties = {
        ["size"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__mixin_Efl_Io_Sizer"] = true

return M
