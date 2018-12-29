-- EFL LuaJIT bindings: efl_io_reader.eo (class Efl.Io.Reader)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_io_reader_interface_get()
    eo.class_register("Efl_Io_Reader", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_io_reader_interface_get(void);
    Eina_Bool efl_io_reader_can_read_get(void);
    Eina_Bool efl_io_reader_eos_get(void);
    Eina_Error efl_io_reader_read(Eina_Rw_Slice *rw_slice);
    extern const Eo_Event_Description _EFL_IO_READER_EVENT_CAN_READ_CHANGED;
    extern const Eo_Event_Description _EFL_IO_READER_EVENT_EOS;
]]

local __M = util.get_namespace(M, { "io" })
__body = {
    can_read_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_reader_can_read_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    eos_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_reader_eos_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    read = function(self, rw_slice)
        eo.__do_start(self, __class)
        local rw_slice = ffi.new("Eina_Rw_Slice[1]")
        local v = __lib.efl_io_reader_read(rw_slice)
        eo.__do_end()
        return v, rw_slice[0]
    end,

    __events = {
        ["can_read,changed"] = __lib._EFL_IO_READER_EVENT_CAN_READ_CHANGED,
        ["eos"] = __lib._EFL_IO_READER_EVENT_EOS
    },

    __properties = {
        ["eos"] = { 0, 0, 1, 0, true, false },
        ["can_read"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Io_Reader"] = true

return M
