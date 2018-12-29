-- EFL LuaJIT bindings: efl_io_buffer.eo (class Efl.Io.Buffer)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_io_buffer_class_get()
    eo.class_register("Efl_Io_Buffer", {"Efl_Object"}, {"Efl_Io_Reader", "Efl_Io_Writer", "Efl_Io_Closer", "Efl_Io_Sizer", "Efl_Io_Positioner"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_io_buffer_class_get(void);
    void efl_io_buffer_limit_set(size_t size);
    size_t efl_io_buffer_limit_get(void);
    Eina_Bool efl_io_buffer_position_read_set(uint64_t position);
    uint64_t efl_io_buffer_position_read_get(void);
    Eina_Bool efl_io_buffer_position_write_set(uint64_t position);
    uint64_t efl_io_buffer_position_write_get(void);
    Eina_Slice efl_io_buffer_slice_get(void);
    void efl_io_buffer_preallocate(size_t size);
    void efl_io_buffer_adopt_readonly(const Eina_Slice slice);
    void efl_io_buffer_adopt_readwrite(Eina_Rw_Slice slice);
    Eina_Binbuf *efl_io_buffer_binbuf_steal(void);
    extern const Eo_Event_Description _EFL_IO_BUFFER_EVENT_POSITION_READ_CHANGED;
    extern const Eo_Event_Description _EFL_IO_BUFFER_EVENT_POSITION_WRITE_CHANGED;
    extern const Eo_Event_Description _EFL_IO_BUFFER_EVENT_REALLOCATED;
]]

local __M = util.get_namespace(M, { "io" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    limit_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.efl_io_buffer_limit_set(size)
        eo.__do_end()
    end,

    limit_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffer_limit_get()
        eo.__do_end()
        return tonumber(v)
    end,

    position_read_set = function(self, position)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffer_position_read_set(position)
        eo.__do_end()
    end,

    position_read_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffer_position_read_get()
        eo.__do_end()
        return v
    end,

    position_write_set = function(self, position)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffer_position_write_set(position)
        eo.__do_end()
    end,

    position_write_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffer_position_write_get()
        eo.__do_end()
        return v
    end,

    slice_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffer_slice_get()
        eo.__do_end()
        return v
    end,

    preallocate = function(self, size)
        eo.__do_start(self, __class)
        __lib.efl_io_buffer_preallocate(size)
        eo.__do_end()
    end,

    adopt_readonly = function(self, slice)
        eo.__do_start(self, __class)
        __lib.efl_io_buffer_adopt_readonly(slice)
        eo.__do_end()
    end,

    adopt_readwrite = function(self, slice)
        eo.__do_start(self, __class)
        __lib.efl_io_buffer_adopt_readwrite(slice)
        eo.__do_end()
    end,

    binbuf_steal = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffer_binbuf_steal()
        eo.__do_end()
        return v
    end,

    __events = {
        ["position_read,changed"] = __lib._EFL_IO_BUFFER_EVENT_POSITION_READ_CHANGED,
        ["position_write,changed"] = __lib._EFL_IO_BUFFER_EVENT_POSITION_WRITE_CHANGED,
        ["reallocated"] = __lib._EFL_IO_BUFFER_EVENT_REALLOCATED
    },

    __properties = {
        ["position_read"] = { 0, 0, 1, 1, true, true },
        ["limit"] = { 0, 0, 1, 1, true, true },
        ["slice"] = { 0, 0, 1, 0, true, false },
        ["position_write"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Buffer = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Io_Buffer").__eo_ctor,
                            1, ...)
end

return M
