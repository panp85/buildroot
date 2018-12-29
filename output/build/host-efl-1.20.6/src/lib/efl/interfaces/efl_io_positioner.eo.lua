-- EFL LuaJIT bindings: efl_io_positioner.eo (class Efl.Io.Positioner)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_io_positioner_mixin_get()
    eo.class_register("Efl_Io_Positioner", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_io_positioner_mixin_get(void);
    Eina_Bool efl_io_positioner_position_set(uint64_t position);
    uint64_t efl_io_positioner_position_get(void);
    Eina_Error efl_io_positioner_seek(int64_t offset, Efl_Io_Positioner_Whence whence);
    extern const Eo_Event_Description _EFL_IO_POSITIONER_EVENT_POSITION_CHANGED;
]]

local __M = util.get_namespace(M, { "io" })
__body = {
    position_set = function(self, position)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_positioner_position_set(position)
        eo.__do_end()
    end,

    position_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_positioner_position_get()
        eo.__do_end()
        return v
    end,

    seek = function(self, offset, whence)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_positioner_seek(offset, whence)
        eo.__do_end()
        return v
    end,

    __events = {
        ["position,changed"] = __lib._EFL_IO_POSITIONER_EVENT_POSITION_CHANGED
    },

    __properties = {
        ["position"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__mixin_Efl_Io_Positioner"] = true

return M
