-- EFL LuaJIT bindings: efl_io_file.eo (class Efl.Io.File)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_io_file_class_get()
    eo.class_register("Efl_Io_File", {"Efl_Loop_Fd"}, {"Efl_File", "Efl_Io_Reader_Fd", "Efl_Io_Writer_Fd", "Efl_Io_Closer_Fd", "Efl_Io_Sizer_Fd", "Efl_Io_Positioner_Fd"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_io_file_class_get(void);
    void efl_io_file_flags_set(uint32_t flags);
    uint32_t efl_io_file_flags_get(void);
    void efl_io_file_mode_set(uint32_t mode);
    uint32_t efl_io_file_mode_get(void);
]]

local __M = util.get_namespace(M, { "io" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    flags_set = function(self, flags)
        eo.__do_start(self, __class)
        __lib.efl_io_file_flags_set(flags)
        eo.__do_end()
    end,

    flags_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_file_flags_get()
        eo.__do_end()
        return v
    end,

    mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.efl_io_file_mode_set(mode)
        eo.__do_end()
    end,

    mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_io_file_mode_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["mode"] = { 0, 0, 1, 1, true, true },
        ["flags"] = { 0, 0, 1, 1, true, true }
    }
}

__M.File = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Io_File").__eo_ctor,
                            1, ...)
end

return M
