-- EFL LuaJIT bindings: efl_input_key.eo (class Efl.Input.Key)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_input_key_class_get()
    eo.class_register("Efl_Input_Key", {"Efl_Object"}, {"Efl_Input_Event", "Efl_Input_State", "Efl_Input_Event"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_input_key_class_get(void);
    void efl_input_key_pressed_set(Eina_Bool val);
    Eina_Bool efl_input_key_pressed_get(void);
    void efl_input_key_name_set(const char * val);
    const char *efl_input_key_name_get(void);
    void efl_input_key_set(const char * val);
    const char *efl_input_key_get(void);
    void efl_input_key_string_set(const char * val);
    const char *efl_input_key_string_get(void);
    void efl_input_key_compose_set(const char * val);
    const char *efl_input_key_compose_get(void);
    void efl_input_key_code_set(int val);
    int efl_input_key_code_get(void);
]]

local __M = util.get_namespace(M, { "input" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    pressed_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_input_key_pressed_set(val)
        eo.__do_end()
    end,

    pressed_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_key_pressed_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    key_name_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_input_key_name_set(val)
        eo.__do_end()
    end,

    key_name_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_key_name_get()
        eo.__do_end()
        return v
    end,

    key_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_input_key_set(val)
        eo.__do_end()
    end,

    key_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_key_get()
        eo.__do_end()
        return v
    end,

    string_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_input_key_string_set(val)
        eo.__do_end()
    end,

    string_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_key_string_get()
        eo.__do_end()
        return v
    end,

    compose_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_input_key_compose_set(val)
        eo.__do_end()
    end,

    compose_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_key_compose_get()
        eo.__do_end()
        return v
    end,

    key_code_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_input_key_code_set(val)
        eo.__do_end()
    end,

    key_code_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_key_code_get()
        eo.__do_end()
        return tonumber(v)
    end,

    __properties = {
        ["key_name"] = { 0, 0, 1, 1, true, true },
        ["string"] = { 0, 0, 1, 1, true, true },
        ["key_code"] = { 0, 0, 1, 1, true, true },
        ["pressed"] = { 0, 0, 1, 1, true, true },
        ["key"] = { 0, 0, 1, 1, true, true },
        ["compose"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Key = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Input_Key").__eo_ctor,
                            1, ...)
end

return M
