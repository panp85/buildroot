-- EFL LuaJIT bindings: efl_io_writer.eo (class Efl.Io.Writer)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_io_writer_interface_get()
    eo.class_register("Efl_Io_Writer", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_io_writer_interface_get(void);
    Eina_Bool efl_io_writer_can_write_get(void);
    Eina_Error efl_io_writer_write(Eina_Slice *slice, Eina_Slice *remaining);
    extern const Eo_Event_Description _EFL_IO_WRITER_EVENT_CAN_WRITE_CHANGED;
]]

local __M = util.get_namespace(M, { "io" })
__body = {
    can_write_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_writer_can_write_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    write = function(self, slice)
        eo.__do_start(self, __class)
        local slice = ffi.new("Eina_Slice[1]")
        local remaining = ffi.new("Eina_Slice[1]")
        local v = __lib.efl_io_writer_write(slice, remaining)
        eo.__do_end()
        return v, slice[0], remaining[0]
    end,

    __events = {
        ["can_write,changed"] = __lib._EFL_IO_WRITER_EVENT_CAN_WRITE_CHANGED
    },

    __properties = {
        ["can_write"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Io_Writer"] = true

return M
