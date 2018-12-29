-- EFL LuaJIT bindings: efl_image_animated.eo (class Efl.Image.Animated)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_image_animated_interface_get()
    eo.class_register("Efl_Image_Animated", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_image_animated_interface_get(void);
    Eina_Bool efl_image_animated_get(void);
    Eina_Bool efl_image_animated_frame_set(int frame_index);
    int efl_image_animated_frame_get(void);
    int efl_image_animated_frame_count_get(void);
    Efl_Image_Animated_Loop_Hint efl_image_animated_loop_type_get(void);
    int efl_image_animated_loop_count_get(void);
    double efl_image_animated_frame_duration_get(int start_frame, int frame_num);
]]

local __M = util.get_namespace(M, { "image" })
__body = {
    animated_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_animated_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    animated_frame_set = function(self, frame_index)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_animated_frame_set(frame_index)
        eo.__do_end()
    end,

    animated_frame_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_animated_frame_get()
        eo.__do_end()
        return tonumber(v)
    end,

    animated_frame_count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_animated_frame_count_get()
        eo.__do_end()
    end,

    animated_loop_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_animated_loop_type_get()
        eo.__do_end()
    end,

    animated_loop_count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_animated_loop_count_get()
        eo.__do_end()
    end,

    animated_frame_duration_get = function(self, start_frame, frame_num)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_animated_frame_duration_get(start_frame, frame_num)
        eo.__do_end()
        return tonumber(v)
    end,

    __properties = {
        ["animated_frame_duration"] = { 2, 0, 1, 0, true, false },
        ["animated_frame"] = { 0, 0, 1, 1, true, true },
        ["animated_loop_count"] = { 0, 0, 1, 0, true, false },
        ["animated"] = { 0, 0, 1, 0, true, false },
        ["animated_frame_count"] = { 0, 0, 1, 0, true, false },
        ["animated_loop_type"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Image_Animated"] = true

return M
