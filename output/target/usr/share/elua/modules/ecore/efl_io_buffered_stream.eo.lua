-- EFL LuaJIT bindings: efl_io_buffered_stream.eo (class Efl.Io.Buffered_Stream)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_io_buffered_stream_class_get()
    eo.class_register("Efl_Io_Buffered_Stream", {"Efl_Loop_User"}, {"Efl_Io_Reader", "Efl_Io_Writer", "Efl_Io_Closer"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_io_buffered_stream_class_get(void);
    void efl_io_buffered_stream_inner_io_set(Efl_Object * io);
    Efl_Object *efl_io_buffered_stream_inner_io_get(void);
    void efl_io_buffered_stream_max_queue_size_input_set(size_t max_queue_size_input);
    size_t efl_io_buffered_stream_max_queue_size_input_get(void);
    void efl_io_buffered_stream_max_queue_size_output_set(size_t max_queue_size_output);
    size_t efl_io_buffered_stream_max_queue_size_output_get(void);
    void efl_io_buffered_stream_line_delimiter_set(Eina_Slice slice);
    Eina_Slice efl_io_buffered_stream_line_delimiter_get(void);
    void efl_io_buffered_stream_timeout_inactivity_set(double seconds);
    double efl_io_buffered_stream_timeout_inactivity_get(void);
    void efl_io_buffered_stream_read_chunk_size_set(size_t size);
    size_t efl_io_buffered_stream_read_chunk_size_get(void);
    size_t efl_io_buffered_stream_pending_write_get(void);
    size_t efl_io_buffered_stream_pending_read_get(void);
    void efl_io_buffered_stream_progress_get(size_t *read_bytes, size_t *written_bytes);
    Eina_Slice efl_io_buffered_stream_slice_get(void);
    void efl_io_buffered_stream_discard(size_t amount);
    void efl_io_buffered_stream_clear(void);
    void efl_io_buffered_stream_eos_mark(void);
    Eina_Bool efl_io_buffered_stream_flush(Eina_Bool may_block, Eina_Bool ignore_line_delimiter);
    extern const Eo_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_WRITE_FINISHED;
    extern const Eo_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_READ_FINISHED;
    extern const Eo_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_FINISHED;
    extern const Eo_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_ERROR;
    extern const Eo_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_PROGRESS;
    extern const Eo_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_SLICE_CHANGED;
    extern const Eo_Event_Description _EFL_IO_BUFFERED_STREAM_EVENT_LINE;
]]

local __M = util.get_namespace(M, { "io" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    inner_io_set = function(self, io)
        eo.__do_start(self, __class)
        __lib.efl_io_buffered_stream_inner_io_set(io)
        eo.__do_end()
    end,

    inner_io_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffered_stream_inner_io_get()
        eo.__do_end()
        return v
    end,

    max_queue_size_input_set = function(self, max_queue_size_input)
        eo.__do_start(self, __class)
        __lib.efl_io_buffered_stream_max_queue_size_input_set(max_queue_size_input)
        eo.__do_end()
    end,

    max_queue_size_input_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffered_stream_max_queue_size_input_get()
        eo.__do_end()
        return tonumber(v)
    end,

    max_queue_size_output_set = function(self, max_queue_size_output)
        eo.__do_start(self, __class)
        __lib.efl_io_buffered_stream_max_queue_size_output_set(max_queue_size_output)
        eo.__do_end()
    end,

    max_queue_size_output_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffered_stream_max_queue_size_output_get()
        eo.__do_end()
        return tonumber(v)
    end,

    line_delimiter_set = function(self, slice)
        eo.__do_start(self, __class)
        __lib.efl_io_buffered_stream_line_delimiter_set(slice)
        eo.__do_end()
    end,

    line_delimiter_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffered_stream_line_delimiter_get()
        eo.__do_end()
        return v
    end,

    timeout_inactivity_set = function(self, seconds)
        eo.__do_start(self, __class)
        __lib.efl_io_buffered_stream_timeout_inactivity_set(seconds)
        eo.__do_end()
    end,

    timeout_inactivity_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffered_stream_timeout_inactivity_get()
        eo.__do_end()
        return tonumber(v)
    end,

    read_chunk_size_set = function(self, size)
        eo.__do_start(self, __class)
        __lib.efl_io_buffered_stream_read_chunk_size_set(size)
        eo.__do_end()
    end,

    read_chunk_size_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffered_stream_read_chunk_size_get()
        eo.__do_end()
        return tonumber(v)
    end,

    pending_write_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffered_stream_pending_write_get()
        eo.__do_end()
        return tonumber(v)
    end,

    pending_read_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffered_stream_pending_read_get()
        eo.__do_end()
        return tonumber(v)
    end,

    progress_get = function(self)
        eo.__do_start(self, __class)
        local read_bytes = ffi.new("size_t[1]")
        local written_bytes = ffi.new("size_t[1]")
        __lib.efl_io_buffered_stream_progress_get(read_bytes, written_bytes)
        eo.__do_end()
        return tonumber(read_bytes[0]), tonumber(written_bytes[0])
    end,

    slice_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffered_stream_slice_get()
        eo.__do_end()
        return v
    end,

    discard = function(self, amount)
        eo.__do_start(self, __class)
        __lib.efl_io_buffered_stream_discard(amount)
        eo.__do_end()
    end,

    clear = function(self)
        eo.__do_start(self, __class)
        __lib.efl_io_buffered_stream_clear()
        eo.__do_end()
    end,

    eos_mark = function(self)
        eo.__do_start(self, __class)
        __lib.efl_io_buffered_stream_eos_mark()
        eo.__do_end()
    end,

    flush = function(self, may_block, ignore_line_delimiter)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_buffered_stream_flush(may_block, ignore_line_delimiter)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __events = {
        ["write,finished"] = __lib._EFL_IO_BUFFERED_STREAM_EVENT_WRITE_FINISHED,
        ["read,finished"] = __lib._EFL_IO_BUFFERED_STREAM_EVENT_READ_FINISHED,
        ["finished"] = __lib._EFL_IO_BUFFERED_STREAM_EVENT_FINISHED,
        ["error"] = __lib._EFL_IO_BUFFERED_STREAM_EVENT_ERROR,
        ["progress"] = __lib._EFL_IO_BUFFERED_STREAM_EVENT_PROGRESS,
        ["slice,changed"] = __lib._EFL_IO_BUFFERED_STREAM_EVENT_SLICE_CHANGED,
        ["line"] = __lib._EFL_IO_BUFFERED_STREAM_EVENT_LINE
    },

    __properties = {
        ["pending_write"] = { 0, 0, 1, 0, true, false },
        ["line_delimiter"] = { 0, 0, 1, 1, true, true },
        ["slice"] = { 0, 0, 1, 0, true, false },
        ["timeout_inactivity"] = { 0, 0, 1, 1, true, true },
        ["progress"] = { 0, 0, 2, 0, true, false },
        ["max_queue_size_output"] = { 0, 0, 1, 1, true, true },
        ["read_chunk_size"] = { 0, 0, 1, 1, true, true },
        ["pending_read"] = { 0, 0, 1, 0, true, false },
        ["max_queue_size_input"] = { 0, 0, 1, 1, true, true },
        ["inner_io"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Buffered_Stream = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Io_Buffered_Stream").__eo_ctor,
                            1, ...)
end

return M
