-- EFL LuaJIT bindings: elm_sys_notify.eo (class Elm.Sys_Notify)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_sys_notify_class_get()
    eo.class_register("Elm_Sys_Notify", {"Efl_Object"}, {"Elm_Sys_Notify_Interface"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_sys_notify_class_get(void);
    Eina_Bool elm_obj_sys_notify_servers_set(Elm_Sys_Notify_Server servers);
    Elm_Sys_Notify_Server elm_obj_sys_notify_servers_get(void);
    Elm_Sys_Notify *elm_obj_sys_notify_singleton_get(void);
]]

__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    servers_set = function(self, servers)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_sys_notify_servers_set(servers)
        eo.__do_end()
    end,

    servers_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_sys_notify_servers_get()
        eo.__do_end()
        return v
    end,

    singleton_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_sys_notify_singleton_get()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["servers"] = { 0, 0, 1, 1, true, true }
    }
}

M.Sys_Notify = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Sys_Notify").__eo_ctor,
                            1, ...)
end

return M
