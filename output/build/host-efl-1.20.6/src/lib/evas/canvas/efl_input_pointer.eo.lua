-- EFL LuaJIT bindings: efl_input_pointer.eo (class Efl.Input.Pointer)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_input_pointer_class_get()
    eo.class_register("Efl_Input_Pointer", {"Efl_Object"}, {"Efl_Input_Event", "Efl_Input_State"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_input_pointer_class_get(void);
    void efl_input_pointer_action_set(Efl_Pointer_Action act);
    Efl_Pointer_Action efl_input_pointer_action_get(void);
    Eina_Bool efl_input_pointer_value_has_get(Efl_Input_Value key);
    Eina_Bool efl_input_pointer_value_set(Efl_Input_Value key, double val);
    double efl_input_pointer_value_get(Efl_Input_Value key);
    void efl_input_pointer_button_set(int but);
    int efl_input_pointer_button_get(void);
    void efl_input_pointer_button_pressed_set(int button, Eina_Bool pressed);
    Eina_Bool efl_input_pointer_button_pressed_get(int button);
    void efl_input_pointer_position_set(int x, int y);
    void efl_input_pointer_position_get(int *x, int *y);
    void efl_input_pointer_previous_position_set(int x, int y);
    void efl_input_pointer_previous_position_get(int *x, int *y);
    void efl_input_pointer_delta_get(int *dx, int *dy);
    void efl_input_pointer_tool_set(int id);
    int efl_input_pointer_tool_get(void);
    void efl_input_pointer_source_set(Efl_Object * src);
    Efl_Object *efl_input_pointer_source_get(void);
    void efl_input_pointer_button_flags_set(Efl_Pointer_Flags flags);
    Efl_Pointer_Flags efl_input_pointer_button_flags_get(void);
    void efl_input_pointer_double_click_set(Eina_Bool val);
    Eina_Bool efl_input_pointer_double_click_get(void);
    void efl_input_pointer_triple_click_set(Eina_Bool val);
    Eina_Bool efl_input_pointer_triple_click_get(void);
    void efl_input_pointer_wheel_direction_set(Efl_Orient dir);
    Efl_Orient efl_input_pointer_wheel_direction_get(void);
    void efl_input_pointer_wheel_delta_set(int dist);
    int efl_input_pointer_wheel_delta_get(void);
]]

local __M = util.get_namespace(M, { "input" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    action_set = function(self, act)
        eo.__do_start(self, __class)
        __lib.efl_input_pointer_action_set(act)
        eo.__do_end()
    end,

    action_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_action_get()
        eo.__do_end()
        return v
    end,

    value_has_get = function(self, key)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_value_has_get(key)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    value_set = function(self, key, val)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_value_set(key, val)
        eo.__do_end()
    end,

    value_get = function(self, key)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_value_get(key)
        eo.__do_end()
        return tonumber(v)
    end,

    button_set = function(self, but)
        eo.__do_start(self, __class)
        __lib.efl_input_pointer_button_set(but)
        eo.__do_end()
    end,

    button_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_button_get()
        eo.__do_end()
        return tonumber(v)
    end,

    button_pressed_set = function(self, button, pressed)
        eo.__do_start(self, __class)
        __lib.efl_input_pointer_button_pressed_set(button, pressed)
        eo.__do_end()
    end,

    button_pressed_get = function(self, button)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_button_pressed_get(button)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    position_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_input_pointer_position_set(x, y)
        eo.__do_end()
    end,

    position_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.efl_input_pointer_position_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    previous_position_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_input_pointer_previous_position_set(x, y)
        eo.__do_end()
    end,

    previous_position_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        __lib.efl_input_pointer_previous_position_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    delta_get = function(self)
        eo.__do_start(self, __class)
        local dx = ffi.new("int[1]")
        local dy = ffi.new("int[1]")
        __lib.efl_input_pointer_delta_get(dx, dy)
        eo.__do_end()
        return tonumber(dx[0]), tonumber(dy[0])
    end,

    tool_set = function(self, id)
        eo.__do_start(self, __class)
        __lib.efl_input_pointer_tool_set(id)
        eo.__do_end()
    end,

    tool_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_tool_get()
        eo.__do_end()
        return tonumber(v)
    end,

    source_set = function(self, src)
        eo.__do_start(self, __class)
        __lib.efl_input_pointer_source_set(src)
        eo.__do_end()
    end,

    source_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_source_get()
        eo.__do_end()
        return v
    end,

    button_flags_set = function(self, flags)
        eo.__do_start(self, __class)
        __lib.efl_input_pointer_button_flags_set(flags)
        eo.__do_end()
    end,

    button_flags_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_button_flags_get()
        eo.__do_end()
        return v
    end,

    double_click_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_input_pointer_double_click_set(val)
        eo.__do_end()
    end,

    double_click_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_double_click_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    triple_click_set = function(self, val)
        eo.__do_start(self, __class)
        __lib.efl_input_pointer_triple_click_set(val)
        eo.__do_end()
    end,

    triple_click_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_triple_click_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    wheel_direction_set = function(self, dir)
        eo.__do_start(self, __class)
        __lib.efl_input_pointer_wheel_direction_set(dir)
        eo.__do_end()
    end,

    wheel_direction_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_wheel_direction_get()
        eo.__do_end()
        return v
    end,

    wheel_delta_set = function(self, dist)
        eo.__do_start(self, __class)
        __lib.efl_input_pointer_wheel_delta_set(dist)
        eo.__do_end()
    end,

    wheel_delta_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_input_pointer_wheel_delta_get()
        eo.__do_end()
        return tonumber(v)
    end,

    __properties = {
        ["wheel_direction"] = { 0, 0, 1, 1, true, true },
        ["position"] = { 0, 0, 2, 2, true, true },
        ["button_pressed"] = { 1, 1, 1, 1, true, true },
        ["wheel_delta"] = { 0, 0, 1, 1, true, true },
        ["button"] = { 0, 0, 1, 1, true, true },
        ["triple_click"] = { 0, 0, 1, 1, true, true },
        ["delta"] = { 0, 0, 2, 0, true, false },
        ["double_click"] = { 0, 0, 1, 1, true, true },
        ["button_flags"] = { 0, 0, 1, 1, true, true },
        ["source"] = { 0, 0, 1, 1, true, true },
        ["value"] = { 1, 1, 1, 1, true, true },
        ["value_has"] = { 1, 0, 1, 0, true, false },
        ["action"] = { 0, 0, 1, 1, true, true },
        ["tool"] = { 0, 0, 1, 1, true, true },
        ["previous_position"] = { 0, 0, 2, 2, true, true }
    }
}

__M.Pointer = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Input_Pointer").__eo_ctor,
                            1, ...)
end

return M
