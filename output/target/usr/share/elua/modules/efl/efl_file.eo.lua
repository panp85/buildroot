-- EFL LuaJIT bindings: efl_file.eo (class Efl.File)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_file_interface_get()
    eo.class_register("Efl_File", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_file_interface_get(void);
    Eina_Bool efl_file_mmap_set(const Eina_File * f, const char * key);
    void efl_file_mmap_get(const Eina_File * *f, const char * *key);
    Eina_Bool efl_file_set(const char * file, const char * key);
    void efl_file_get(const char * *file, const char * *key);
    Eina_Bool efl_file_save(const char * file, const char * key, const char * flags);
]]

__body = {
    mmap_set = function(self, f, key)
        eo.__do_start(self, __class)
        local v = __lib.efl_file_mmap_set(f, key)
        eo.__do_end()
    end,

    mmap_get = function(self)
        eo.__do_start(self, __class)
        local f = ffi.new("const Eina_File *[1]")
        local key = ffi.new("const char *[1]")
        __lib.efl_file_mmap_get(f, key)
        eo.__do_end()
        return f[0], key[0]
    end,

    file_set = function(self, file, key)
        eo.__do_start(self, __class)
        local v = __lib.efl_file_set(file, key)
        eo.__do_end()
    end,

    file_get = function(self)
        eo.__do_start(self, __class)
        local file = ffi.new("const char *[1]")
        local key = ffi.new("const char *[1]")
        __lib.efl_file_get(file, key)
        eo.__do_end()
        return file[0], key[0]
    end,

    save = function(self, file, key, flags)
        eo.__do_start(self, __class)
        local v = __lib.efl_file_save(file, key, flags)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["file"] = { 0, 0, 2, 2, true, true },
        ["mmap"] = { 0, 0, 2, 2, true, true }
    }
}
__body["__iface_Efl_File"] = true

return M
