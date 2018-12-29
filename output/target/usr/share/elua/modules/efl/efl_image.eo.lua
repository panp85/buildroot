-- EFL LuaJIT bindings: efl_image.eo (class Efl.Image)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_image_interface_get()
    eo.class_register("Efl_Image", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_image_interface_get(void);
    void efl_image_smooth_scale_set(Eina_Bool smooth_scale);
    Eina_Bool efl_image_smooth_scale_get(void);
    double efl_image_ratio_get(void);
    void efl_image_border_set(int l, int r, int t, int b);
    void efl_image_border_get(int *l, int *r, int *t, int *b);
    void efl_image_border_scale_set(double scale);
    double efl_image_border_scale_get(void);
    void efl_image_border_center_fill_set(Efl_Gfx_Border_Fill_Mode fill);
    Efl_Gfx_Border_Fill_Mode efl_image_border_center_fill_get(void);
    void efl_image_size_get(int *w, int *h);
    void efl_image_content_hint_set(Efl_Image_Content_Hint hint);
    Efl_Image_Content_Hint efl_image_content_hint_get(void);
    void efl_image_scale_hint_set(Efl_Image_Scale_Hint hint);
    Efl_Image_Scale_Hint efl_image_scale_hint_get(void);
    extern const Eo_Event_Description _EFL_IMAGE_EVENT_PRELOAD;
    extern const Eo_Event_Description _EFL_IMAGE_EVENT_RESIZE;
    extern const Eo_Event_Description _EFL_IMAGE_EVENT_UNLOAD;
]]

__body = {
    smooth_scale_set = function(self, smooth_scale)
        eo.__do_start(self, __class)
        __lib.efl_image_smooth_scale_set(smooth_scale)
        eo.__do_end()
    end,

    smooth_scale_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_smooth_scale_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    ratio_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_ratio_get()
        eo.__do_end()
        return tonumber(v)
    end,

    border_set = function(self, l, r, t, b)
        eo.__do_start(self, __class)
        __lib.efl_image_border_set(l, r, t, b)
        eo.__do_end()
    end,

    border_get = function(self)
        eo.__do_start(self, __class)
        local l = ffi.new("int[1]")
        local r = ffi.new("int[1]")
        local t = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        __lib.efl_image_border_get(l, r, t, b)
        eo.__do_end()
        return tonumber(l[0]), tonumber(r[0]), tonumber(t[0]), tonumber(b[0])
    end,

    border_scale_set = function(self, scale)
        eo.__do_start(self, __class)
        __lib.efl_image_border_scale_set(scale)
        eo.__do_end()
    end,

    border_scale_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_border_scale_get()
        eo.__do_end()
        return tonumber(v)
    end,

    border_center_fill_set = function(self, fill)
        eo.__do_start(self, __class)
        __lib.efl_image_border_center_fill_set(fill)
        eo.__do_end()
    end,

    border_center_fill_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_border_center_fill_get()
        eo.__do_end()
        return v
    end,

    image_size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_image_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    content_hint_set = function(self, hint)
        eo.__do_start(self, __class)
        __lib.efl_image_content_hint_set(hint)
        eo.__do_end()
    end,

    content_hint_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_content_hint_get()
        eo.__do_end()
        return v
    end,

    scale_hint_set = function(self, hint)
        eo.__do_start(self, __class)
        __lib.efl_image_scale_hint_set(hint)
        eo.__do_end()
    end,

    scale_hint_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_image_scale_hint_get()
        eo.__do_end()
        return v
    end,

    __events = {
        ["preload"] = __lib._EFL_IMAGE_EVENT_PRELOAD,
        ["resize"] = __lib._EFL_IMAGE_EVENT_RESIZE,
        ["unload"] = __lib._EFL_IMAGE_EVENT_UNLOAD
    },

    __properties = {
        ["border"] = { 0, 0, 4, 4, true, true },
        ["image_size"] = { 0, 0, 2, 0, true, false },
        ["border_scale"] = { 0, 0, 1, 1, true, true },
        ["scale_hint"] = { 0, 0, 1, 1, true, true },
        ["ratio"] = { 0, 0, 1, 0, true, false },
        ["border_center_fill"] = { 0, 0, 1, 1, true, true },
        ["content_hint"] = { 0, 0, 1, 1, true, true },
        ["smooth_scale"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Image"] = true

return M
