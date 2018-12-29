-- EFL LuaJIT bindings: ecore_exe.eo (class Ecore.Exe)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_exe_class_get()
    eo.class_register("Ecore_Exe", {"Efl_Object"}, {"Efl_Control"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_exe_class_get(void);
    void ecore_obj_exe_command_set(const char * exe_cmd, Ecore_Exe_Flags flags);
    void ecore_obj_exe_command_get(const char * *exe_cmd, Ecore_Exe_Flags *flags);
    extern const Eo_Event_Description _ECORE_EXE_EVENT_DATA_GET;
    extern const Eo_Event_Description _ECORE_EXE_EVENT_DATA_ERROR;
]]

__body = {
    __eo_ctor = function(self, command_exe_cmd, command_flags, __func)
        self:command_set(command_exe_cmd, command_flags)
        if __func then __func() end
    end,

    command_set = function(self, exe_cmd, flags)
        eo.__do_start(self, __class)
        __lib.ecore_obj_exe_command_set(exe_cmd, flags)
        eo.__do_end()
    end,

    command_get = function(self)
        eo.__do_start(self, __class)
        local exe_cmd = ffi.new("const char *[1]")
        local flags = ffi.new("Ecore_Exe_Flags[1]")
        __lib.ecore_obj_exe_command_get(exe_cmd, flags)
        eo.__do_end()
        return exe_cmd[0], flags[0]
    end,

    __events = {
        ["data,get"] = __lib._ECORE_EXE_EVENT_DATA_GET,
        ["data,error"] = __lib._ECORE_EXE_EVENT_DATA_ERROR
    },

    __properties = {
        ["command"] = { 0, 0, 2, 2, true, true }
    }
}

M.Exe = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Exe").__eo_ctor,
                            1, ...)
end

return M
