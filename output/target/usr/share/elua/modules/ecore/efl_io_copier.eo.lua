-- EFL LuaJIT bindings: efl_io_copier.eo (class Efl.Io.Copier)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_io_copier_class_get()
    eo.class_register("Efl_Io_Copier", {"Efl_Loop_User"}, {"Efl_Io_Closer"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_io_copier_class_get(void);
    void efl_io_copier_source_set(Efl_Io_Reader * source);
    Efl_Io_Reader *efl_io_copier_source_get(void);
    void efl_io_copier_destination_set(Efl_Io_Writer * destination);
    Efl_Io_Writer *efl_io_copier_destination_get(void);
    void efl_io_copier_line_delimiter_set(Eina_Slice slice);
    Eina_Slice efl_io_copier_line_delimiter_get(void);
    void efl_io_copier_buffer_limit_set(size_t size);
    size_t efl_io_copier_buffer_limit_get(void);
    void efl_io_copier_read_chunk_size_set(size_t size);
    size_t efl_io_copier_read_chunk_size_get(void);
    void efl_io_copier_progress_get(uint64_t *read, uint64_t *written, uint64_t *total);
    void efl_io_copier_timeout_inactivity_set(double seconds);
    double efl_io_copier_timeout_inactivity_get(void);
    Eina_Bool efl_io_copier_done_get(void);
    size_t efl_io_copier_pending_size_get(void);
    Eina_Binbuf *efl_io_copier_binbuf_steal(void);
    Eina_Bool efl_io_copier_flush(Eina_Bool may_block, Eina_Bool ignore_line_delimiter);
    extern const Eo_Event_Description _EFL_IO_COPIER_EVENT_DONE;
    extern const Eo_Event_Description _EFL_IO_COPIER_EVENT_ERROR;
    extern const Eo_Event_Description _EFL_IO_COPIER_EVENT_PROGRESS;
    extern const Eo_Event_Description _EFL_IO_COPIER_EVENT_DATA;
    extern const Eo_Event_Description _EFL_IO_COPIER_EVENT_LINE;
]]

local __M = util.get_namespace(M, { "io" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    source_set = function(self, source)
        eo.__do_start(self, __class)
        __lib.efl_io_copier_source_set(source)
        eo.__do_end()
    end,

    source_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_copier_source_get()
        eo.__do_end()
        return v
    end,

    destination_set = function(self, destination)
        eo.__do_start(self, __class)
        __lib.efl_io_copier_destination_set(destination)
        eo.__do_end()
    end,

    destination_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_copier_destination_get()
        eo.__do_end()
        return v
    end,

    line_delimiter_set = function(self, slice)
        eo.__do_start(self, __class)
        __lib.efl_io_copier_line_delimiter_set(slice)
        eo.__do_end()
    end,

    line_delimiter_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_copier_line_delimiter_get()
        eo.__do_end()
        return v
    end,

    buffer_limit_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.efl_io_copier_buffer_limit_set(size)
        eo.__do_end()
    end,

    buffer_limit_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_copier_buffer_limit_get()
        eo.__do_end()
        return tonumber(v)
    end,

    read_chunk_size_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.efl_io_copier_read_chunk_size_set(size)
        eo.__do_end()
    end,

    read_chunk_size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_copier_read_chunk_size_get()
        eo.__do_end()
        return tonumber(v)
    end,

    progress_get = function(self)
        eo.__do_start(self, __class)
        local read = ffi.new("uint64_t[1]")
        local written = ffi.new("uint64_t[1]")
        local total = ffi.new("uint64_t[1]")
        __lib.efl_io_copier_progress_get(read, written, total)
        eo.__do_end()
        return read[0], written[0], total[0]
    end,

    timeout_inactivity_set = function(self, seconds)
        eo.__do_start(self, __class)
        __lib.efl_io_copier_timeout_inactivity_set(seconds)
        eo.__do_end()
    end,

    timeout_inactivity_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_copier_timeout_inactivity_get()
        eo.__do_end()
        return tonumber(v)
    end,

    done_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_copier_done_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    pending_size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_copier_pending_size_get()
        eo.__do_end()
        return tonumber(v)
    end,

    binbuf_steal = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_copier_binbuf_steal()
        eo.__do_end()
        return v
    end,

    flush = function(self, may_block, ignore_line_delimiter)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_copier_flush(may_block, ignore_line_delimiter)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["done"] = __lib._EFL_IO_COPIER_EVENT_DONE,
        ["error"] = __lib._EFL_IO_COPIER_EVENT_ERROR,
        ["progress"] = __lib._EFL_IO_COPIER_EVENT_PROGRESS,
        ["data"] = __lib._EFL_IO_COPIER_EVENT_DATA,
        ["line"] = __lib._EFL_IO_COPIER_EVENT_LINE
    },

    __properties = {
        ["line_delimiter"] = { 0, 0, 1, 1, true, true },
        ["done"] = { 0, 0, 1, 0, true, false },
        ["pending_size"] = { 0, 0, 1, 0, true, false },
        ["timeout_inactivity"] = { 0, 0, 1, 1, true, true },
        ["source"] = { 0, 0, 1, 1, true, true },
        ["destination"] = { 0, 0, 1, 1, true, true },
        ["read_chunk_size"] = { 0, 0, 1, 1, true, true },
        ["progress"] = { 0, 0, 3, 0, true, false },
        ["buffer_limit"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Copier = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Io_Copier").__eo_ctor,
                            1, ...)
end

return M
