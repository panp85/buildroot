-- EFL LuaJIT bindings: efl_input_device.eo (class Efl.Input.Device)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_input_device_class_get()
    eo.class_register("Efl_Input_Device", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_input_device_class_get(void);
    void efl_input_device_type_set(Efl_Input_Device_Type klass);
    Efl_Input_Device_Type efl_input_device_type_get(void);
    void efl_input_device_source_set(Efl_Input_Device * src);
    Efl_Input_Device *efl_input_device_source_get(void);
    Efl_Input_Device *efl_input_device_seat_get(void);
    void efl_input_device_seat_id_set(unsigned int id);
    unsigned int efl_input_device_seat_id_get(void);
    Eina_Iterator *efl_input_device_children_iterate(void);
    unsigned int efl_input_device_has_pointer_caps(void);
]]

local __M = util.get_namespace(M, { "input" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    device_type_set = function(self, klass)
        eo.__do_start(self, __class)
        __lib.efl_input_device_type_set(klass)
        eo.__do_end()
    end,

    device_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_device_type_get()
        eo.__do_end()
        return v
    end,

    source_set = function(self, src)
        eo.__do_start(self, __class)
        __lib.efl_input_device_source_set(src)
        eo.__do_end()
    end,

    source_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_device_source_get()
        eo.__do_end()
        return v
    end,

    seat_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_device_seat_get()
        eo.__do_end()
        return v
    end,

    seat_id_set = function(self, id)
        eo.__do_start(self, __class)
        __lib.efl_input_device_seat_id_set(id)
        eo.__do_end()
    end,

    seat_id_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_device_seat_id_get()
        eo.__do_end()
        return v
    end,

    children_iterate = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_device_children_iterate()
        eo.__do_end()
        return v
    end,

    has_pointer_caps = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_device_has_pointer_caps()
        eo.__do_end()
        return v
    end,

    __properties = {
        ["device_type"] = { 0, 0, 1, 1, true, true },
        ["seat"] = { 0, 0, 1, 0, true, false },
        ["source"] = { 0, 0, 1, 1, true, true },
        ["seat_id"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Device = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Input_Device").__eo_ctor,
                            1, ...)
end

return M
