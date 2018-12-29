-- EFL LuaJIT bindings: efl_loop_fd.eo (class Efl.Loop.Fd)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_loop_fd_class_get()
    eo.class_register("Efl_Loop_Fd", {"Efl_Loop_User"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_loop_fd_class_get(void);
    void efl_loop_fd_set(int fd);
    int efl_loop_fd_get(void);
    void efl_loop_fd_file_set(int fd);
    int efl_loop_fd_file_get(void);
    extern const Eo_Event_Description _EFL_LOOP_FD_EVENT_READ;
    extern const Eo_Event_Description _EFL_LOOP_FD_EVENT_WRITE;
    extern const Eo_Event_Description _EFL_LOOP_FD_EVENT_ERROR;
]]

local __M = util.get_namespace(M, { "loop" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    fd_set = function(self, fd)
        eo.__do_start(self, __class)
        __lib.efl_loop_fd_set(fd)
        eo.__do_end()
    end,

    fd_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_loop_fd_get()
        eo.__do_end()
        return tonumber(v)
    end,

    fd_file_set = function(self, fd)
        eo.__do_start(self, __class)
        __lib.efl_loop_fd_file_set(fd)
        eo.__do_end()
    end,

    fd_file_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_loop_fd_file_get()
        eo.__do_end()
        return tonumber(v)
    end,

    __events = {
        ["read"] = __lib._EFL_LOOP_FD_EVENT_READ,
        ["write"] = __lib._EFL_LOOP_FD_EVENT_WRITE,
        ["error"] = __lib._EFL_LOOP_FD_EVENT_ERROR
    },

    __properties = {
        ["fd"] = { 0, 0, 1, 1, true, true },
        ["fd_file"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Fd = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Loop_Fd").__eo_ctor,
                            1, ...)
end

return M
