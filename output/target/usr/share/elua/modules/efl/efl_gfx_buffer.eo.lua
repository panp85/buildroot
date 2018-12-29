-- EFL LuaJIT bindings: efl_gfx_buffer.eo (class Efl.Gfx.Buffer)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_gfx_buffer_interface_get()
    eo.class_register("Efl_Gfx_Buffer", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_gfx_buffer_interface_get(void);
    void efl_gfx_buffer_size_set(int w, int h);
    void efl_gfx_buffer_size_get(int *w, int *h);
    Efl_Gfx_Colorspace efl_gfx_buffer_colorspace_get(void);
    void efl_gfx_buffer_alpha_set(Eina_Bool alpha);
    Eina_Bool efl_gfx_buffer_alpha_get(void);
    int efl_gfx_buffer_stride_get(void);
    void efl_gfx_buffer_borders_get(unsigned int *l, unsigned int *r, unsigned int *t, unsigned int *b);
    void efl_gfx_buffer_update_add(int x, int y, int w, int h);
    Eina_Bool efl_gfx_buffer_map(Eina_Rw_Slice *slice, Efl_Gfx_Buffer_Access_Mode mode, int x, int y, int w, int h, Efl_Gfx_Colorspace cspace, int plane, int *stride);
    Eina_Bool efl_gfx_buffer_unmap(const Eina_Rw_Slice * slice);
    Eina_Bool efl_gfx_buffer_copy_set(const Eina_Slice * slice, int width, int height, int stride, Efl_Gfx_Colorspace cspace, int plane);
    Eina_Bool efl_gfx_buffer_managed_set(const Eina_Slice * slice, int width, int height, int stride, Efl_Gfx_Colorspace cspace, int plane);
    Eina_Bool efl_gfx_buffer_managed_get(Eina_Slice *slice, int plane);
]]

local __M = util.get_namespace(M, { "gfx" })
__body = {
    buffer_size_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.efl_gfx_buffer_size_set(w, h)
        eo.__do_end()
    end,

    buffer_size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_gfx_buffer_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    colorspace_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_buffer_colorspace_get()
        eo.__do_end()
        return v
    end,

    alpha_set = function(self, alpha)
        eo.__do_start(self, __class)
        __lib.efl_gfx_buffer_alpha_set(alpha)
        eo.__do_end()
    end,

    alpha_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_buffer_alpha_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    stride_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_buffer_stride_get()
        eo.__do_end()
        return tonumber(v)
    end,

    buffer_borders_get = function(self)
        eo.__do_start(self, __class)
        local l = ffi.new("unsigned int[1]")
        local r = ffi.new("unsigned int[1]")
        local t = ffi.new("unsigned int[1]")
        local b = ffi.new("unsigned int[1]")
        __lib.efl_gfx_buffer_borders_get(l, r, t, b)
        eo.__do_end()
        return l[0], r[0], t[0], b[0]
    end,

    buffer_update_add = function(self, x, y, w, h)
        eo.__do_start(self, __class)
        __lib.efl_gfx_buffer_update_add(x, y, w, h)
        eo.__do_end()
    end,

    buffer_map = function(self, mode, x, y, w, h, cspace, plane)
        eo.__do_start(self, __class)
        local slice = ffi.new("Eina_Rw_Slice[1]")
        local stride = ffi.new("int[1]")
        local v = __lib.efl_gfx_buffer_map(slice, mode, x, y, w, h, cspace, plane, stride)
        eo.__do_end()
        return ((v) ~= 0), slice[0], tonumber(stride[0])
    end,

    buffer_unmap = function(self, slice)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_buffer_unmap(slice)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    buffer_copy_set = function(self, slice, width, height, stride, cspace, plane)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_buffer_copy_set(slice, width, height, stride, cspace, plane)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    buffer_managed_set = function(self, slice, width, height, stride, cspace, plane)
        eo.__do_start(self, __class)
        local v = __lib.efl_gfx_buffer_managed_set(slice, width, height, stride, cspace, plane)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    buffer_managed_get = function(self, plane)
        eo.__do_start(self, __class)
        local slice = ffi.new("Eina_Slice[1]")
        local v = __lib.efl_gfx_buffer_managed_get(slice, plane)
        eo.__do_end()
        return ((v) ~= 0), slice[0]
    end,

    __properties = {
        ["buffer_borders"] = { 0, 0, 4, 0, true, false },
        ["alpha"] = { 0, 0, 1, 1, true, true },
        ["buffer_size"] = { 0, 0, 2, 2, true, true },
        ["stride"] = { 0, 0, 1, 0, true, false },
        ["colorspace"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Efl_Gfx_Buffer"] = true

return M
