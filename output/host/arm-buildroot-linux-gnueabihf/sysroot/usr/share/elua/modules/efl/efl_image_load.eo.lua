-- EFL LuaJIT bindings: efl_image_load.eo (class Efl.Image.Load)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_image_load_interface_get()
    eo.class_register("Efl_Image_Load", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_image_load_interface_get(void);
    void efl_image_load_size_set(int w, int h);
    void efl_image_load_size_get(int *w, int *h);
    void efl_image_load_dpi_set(double dpi);
    double efl_image_load_dpi_get(void);
    Eina_Bool efl_image_load_region_support_get(void);
    void efl_image_load_region_set(int x, int y, int w, int h);
    void efl_image_load_region_get(int *x, int *y, int *w, int *h);
    void efl_image_load_orientation_set(Eina_Bool enable);
    Eina_Bool efl_image_load_orientation_get(void);
    void efl_image_load_scale_down_set(int div);
    int efl_image_load_scale_down_get(void);
    Efl_Image_Load_Error efl_image_load_error_get(void);
    void efl_image_load_skip_header_set(Eina_Bool skip);
    Eina_Bool efl_image_load_skip_header_get(void);
    void efl_image_load_async_start(void);
    void efl_image_load_async_cancel(void);
    extern const Eo_Event_Description _EFL_IMAGE_LOAD_EVENT_LOAD_DONE;
    extern const Eo_Event_Description _EFL_IMAGE_LOAD_EVENT_LOAD_ERROR;
    extern const Eo_Event_Description _EFL_IMAGE_LOAD_EVENT_LOAD_CANCELLED;
]]

local __M = util.get_namespace(M, { "image" })
__body = {
    load_size_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.efl_image_load_size_set(w, h)
        eo.__do_end()
    end,

    load_size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_image_load_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    load_dpi_set = function(self, dpi)
        eo.__do_start(self, __class)
        __lib.efl_image_load_dpi_set(dpi)
        eo.__do_end()
    end,

    load_dpi_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_load_dpi_get()
        eo.__do_end()
        return tonumber(v)
    end,

    load_region_support_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_load_region_support_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    load_region_set = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.efl_image_load_region_set(x, y, w, h)
        eo.__do_end()
    end,

    load_region_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_image_load_region_get(x, y, w, h)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    load_orientation_set = function(self, enable)
        eo.__do_start(self, __class)
        __lib.efl_image_load_orientation_set(enable)
        eo.__do_end()
    end,

    load_orientation_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_load_orientation_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    load_scale_down_set = function(self, div)
        eo.__do_start(self, __class)
        __lib.efl_image_load_scale_down_set(div)
        eo.__do_end()
    end,

    load_scale_down_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_load_scale_down_get()
        eo.__do_end()
        return tonumber(v)
    end,

    load_error_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_load_error_get()
        eo.__do_end()
    end,

    load_skip_header_set = function(self, skip)
        eo.__do_start(self, __class)
        __lib.efl_image_load_skip_header_set(skip)
        eo.__do_end()
    end,

    load_skip_header_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_load_skip_header_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    load_async_start = function(self)
        eo.__do_start(self, __class)
        __lib.efl_image_load_async_start()
        eo.__do_end()
    end,

    load_async_cancel = function(self)
        eo.__do_start(self, __class)
        __lib.efl_image_load_async_cancel()
        eo.__do_end()
    end,

    __events = {
        ["load,done"] = __lib._EFL_IMAGE_LOAD_EVENT_LOAD_DONE,
        ["load,error"] = __lib._EFL_IMAGE_LOAD_EVENT_LOAD_ERROR,
        ["load,cancelled"] = __lib._EFL_IMAGE_LOAD_EVENT_LOAD_CANCELLED
    },

    __properties = {
        ["load_error"] = { 0, 0, 1, 0, true, false },
        ["load_skip_header"] = { 0, 0, 1, 1, true, true },
        ["load_size"] = { 0, 0, 2, 2, true, true },
        ["load_dpi"] = { 0, 0, 1, 1, true, true },
        ["load_scale_down"] = { 0, 0, 1, 1, true, true },
        ["load_region_support"] = { 0, 0, 1, 0, true, false },
        ["load_orientation"] = { 0, 0, 1, 1, true, true },
        ["load_region"] = { 0, 0, 4, 4, true, true }
    }
}
__body["__iface_Efl_Image_Load"] = true

return M
