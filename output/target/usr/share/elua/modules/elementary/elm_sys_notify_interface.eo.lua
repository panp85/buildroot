-- EFL LuaJIT bindings: elm_sys_notify_interface.eo (class Elm.Sys_Notify_Interface)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_sys_notify_interface_interface_get()
    eo.class_register("Elm_Sys_Notify_Interface", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_sys_notify_interface_interface_get(void);
    void elm_obj_sys_notify_interface_send(unsigned int replaces_id, const char * icon, const char * summary, const char * body, Elm_Sys_Notify_Urgency urgency, int timeout, Elm_Sys_Notify_Send_Cb cb, const void * cb_data);
    void elm_obj_sys_notify_interface_simple_send(const char * icon, const char * summary, const char * body);
    void elm_obj_sys_notify_interface_close(unsigned int id);
]]

__body = {
    send = function(self, replaces_id, icon, summary, body, urgency, timeout, cb, cb_data)
        eo.__do_start(self, __class)
        __lib.elm_obj_sys_notify_interface_send(replaces_id, icon, summary, body, urgency, timeout, cb, cb_data)
        eo.__do_end()
    end,

    simple_send = function(self, icon, summary, body)
        eo.__do_start(self, __class)
        __lib.elm_obj_sys_notify_interface_simple_send(icon, summary, body)
        eo.__do_end()
    end,

    close = function(self, id)
        eo.__do_start(self, __class)
        __lib.elm_obj_sys_notify_interface_close(id)
        eo.__do_end()
    end
}
__body["__iface_Elm_Sys_Notify_Interface"] = true

return M
