-- EFL LuaJIT bindings: ecore_con_eet_base.eo (class Ecore.Con.Eet.Base)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.ecore_con_eet_base_class_get()
    eo.class_register("Ecore_Con_Eet_Base", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *ecore_con_eet_base_class_get(void);
    void ecore_con_eet_base_server_set(Ecore_Con_Server * data);
    Ecore_Con_Server *ecore_con_eet_base_server_get(void);
    void ecore_con_eet_base_data_callback_set(const char * name, Ecore_Con_Eet_Data_Cb func, const void * data);
    void ecore_con_eet_base_raw_data_callback_set(const char * name, Ecore_Con_Eet_Raw_Data_Cb func, const void * data);
    void ecore_con_eet_base_data_callback_del(const char * name);
    void ecore_con_eet_base_raw_data_callback_del(const char * name);
    void ecore_con_eet_base_register(const char * name, Eet_Data_Descriptor * edd);
    void ecore_con_eet_base_send(Ecore_Con_Reply * reply, const char * name, void * value);
    void ecore_con_eet_base_raw_send(Ecore_Con_Reply * reply, const char * protocol_name, const char * section, void * value, unsigned int length);
]]

local __M = util.get_namespace(M, { "con", "eet" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    server_set = function(self, data)
        eo.__do_start(self, __class)
        __lib.ecore_con_eet_base_server_set(data)
        eo.__do_end()
    end,

    server_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.ecore_con_eet_base_server_get()
        eo.__do_end()
        return v
    end,

    data_callback_set = function(self, name, func, data)
        eo.__do_start(self, __class)
        __lib.ecore_con_eet_base_data_callback_set(name, func, data)
        eo.__do_end()
    end,

    raw_data_callback_set = function(self, name, func, data)
        eo.__do_start(self, __class)
        __lib.ecore_con_eet_base_raw_data_callback_set(name, func, data)
        eo.__do_end()
    end,

    data_callback_del = function(self, name)
        eo.__do_start(self, __class)
        __lib.ecore_con_eet_base_data_callback_del(name)
        eo.__do_end()
    end,

    raw_data_callback_del = function(self, name)
        eo.__do_start(self, __class)
        __lib.ecore_con_eet_base_raw_data_callback_del(name)
        eo.__do_end()
    end,

    register = function(self, name, edd)
        eo.__do_start(self, __class)
        __lib.ecore_con_eet_base_register(name, edd)
        eo.__do_end()
    end,

    send = function(self, reply, name, value)
        eo.__do_start(self, __class)
        __lib.ecore_con_eet_base_send(reply, name, value)
        eo.__do_end()
    end,

    raw_send = function(self, reply, protocol_name, section, value, length)
        eo.__do_start(self, __class)
        __lib.ecore_con_eet_base_raw_send(reply, protocol_name, section, value, length)
        eo.__do_end()
    end,

    __properties = {
        ["server"] = { 0, 0, 1, 1, true, true },
        ["raw_data_callback"] = { 0, 0, 0, 3, false, true },
        ["data_callback"] = { 0, 0, 0, 3, false, true }
    }
}

__M.Base = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Ecore_Con_Eet_Base").__eo_ctor,
                            1, ...)
end

return M
