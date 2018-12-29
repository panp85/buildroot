-- EFL LuaJIT bindings: efl_vpath_file.eo (class Efl.Vpath.File)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_vpath_file_class_get()
    eo.class_register("Efl_Vpath_File", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_vpath_file_class_get(void);
    void efl_vpath_file_path_set(const char * path);
    const char *efl_vpath_file_path_get(void);
    void efl_vpath_file_result_set(const char * path);
    const char *efl_vpath_file_result_get(void);
    void efl_vpath_file_keep_set(Eina_Bool keep);
    Eina_Bool efl_vpath_file_keep_get(void);
    Eina_Bool efl_vpath_file_do(void);
    void efl_vpath_file_wait(void);
    extern const Eo_Event_Description _EFL_VPATH_FILE_EVENT_FETCHED;
    extern const Eo_Event_Description _EFL_VPATH_FILE_EVENT_FAILED;
]]

local __M = util.get_namespace(M, { "vpath" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    path_set = function(self, path)
        eo.__do_start(self, __class)
        __lib.efl_vpath_file_path_set(path)
        eo.__do_end()
    end,

    path_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_vpath_file_path_get()
        eo.__do_end()
        return v
    end,

    result_set = function(self, path)
        eo.__do_start(self, __class)
        __lib.efl_vpath_file_result_set(path)
        eo.__do_end()
    end,

    result_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_vpath_file_result_get()
        eo.__do_end()
        return v
    end,

    keep_set = function(self, keep)
        eo.__do_start(self, __class)
        __lib.efl_vpath_file_keep_set(keep)
        eo.__do_end()
    end,

    keep_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_vpath_file_keep_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    do = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_vpath_file_do()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    wait = function(self)
        eo.__do_start(self, __class)
        __lib.efl_vpath_file_wait()
        eo.__do_end()
    end,

    __events = {
        ["fetched"] = __lib._EFL_VPATH_FILE_EVENT_FETCHED,
        ["failed"] = __lib._EFL_VPATH_FILE_EVENT_FAILED
    },

    __properties = {
        ["path"] = { 0, 0, 1, 1, true, true },
        ["keep"] = { 0, 0, 1, 1, true, true },
        ["result"] = { 0, 0, 1, 1, true, true }
    }
}

__M.File = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Vpath_File").__eo_ctor,
                            1, ...)
end

return M
