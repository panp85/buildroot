-- EFL LuaJIT bindings: efl_gfx_size_hint.eo (class Efl.Gfx.Size.Hint)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_gfx_size_hint_interface_get()
    eo.class_register("Efl_Gfx_Size_Hint", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_gfx_size_hint_interface_get(void);
    void efl_gfx_size_hint_base_set(int w, int h);
    void efl_gfx_size_hint_base_get(int *w, int *h);
    void efl_gfx_size_hint_step_set(int w, int h);
    void efl_gfx_size_hint_step_get(int *w, int *h);
    void efl_gfx_size_hint_aspect_set(Efl_Gfx_Size_Hint_Aspect mode, int w, int h);
    void efl_gfx_size_hint_aspect_get(Efl_Gfx_Size_Hint_Aspect *mode, int *w, int *h);
    void efl_gfx_size_hint_max_set(int w, int h);
    void efl_gfx_size_hint_max_get(int *w, int *h);
    void efl_gfx_size_hint_min_set(int w, int h);
    void efl_gfx_size_hint_min_get(int *w, int *h);
    void efl_gfx_size_hint_request_set(int w, int h);
    void efl_gfx_size_hint_request_get(int *w, int *h);
    void efl_gfx_size_hint_restricted_min_get(int *w, int *h);
    void efl_gfx_size_hint_combined_min_get(int *w, int *h);
    void efl_gfx_size_hint_margin_set(int l, int r, int t, int b);
    void efl_gfx_size_hint_margin_get(int *l, int *r, int *t, int *b);
    void efl_gfx_size_hint_weight_set(double x, double y);
    void efl_gfx_size_hint_weight_get(double *x, double *y);
    void efl_gfx_size_hint_align_set(double x, double y);
    void efl_gfx_size_hint_align_get(double *x, double *y);
    extern const Eo_Event_Description _EFL_GFX_EVENT_CHANGE_SIZE_HINTS;
]]

local __M = util.get_namespace(M, { "gfx", "size" })
__body = {
    hint_base_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.efl_gfx_size_hint_base_set(w, h)
        eo.__do_end()
    end,

    hint_base_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_gfx_size_hint_base_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    hint_step_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.efl_gfx_size_hint_step_set(w, h)
        eo.__do_end()
    end,

    hint_step_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_gfx_size_hint_step_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    hint_aspect_set = function(self, mode, w, h)
        eo.__do_start(self, __class)
        __lib.efl_gfx_size_hint_aspect_set(mode, w, h)
        eo.__do_end()
    end,

    hint_aspect_get = function(self)
        eo.__do_start(self, __class)
        local mode = ffi.new("Efl_Gfx_Size_Hint_Aspect[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_gfx_size_hint_aspect_get(mode, w, h)
        eo.__do_end()
        return mode[0], tonumber(w[0]), tonumber(h[0])
    end,

    hint_max_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.efl_gfx_size_hint_max_set(w, h)
        eo.__do_end()
    end,

    hint_max_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_gfx_size_hint_max_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    hint_min_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.efl_gfx_size_hint_min_set(w, h)
        eo.__do_end()
    end,

    hint_min_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_gfx_size_hint_min_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    hint_request_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.efl_gfx_size_hint_request_set(w, h)
        eo.__do_end()
    end,

    hint_request_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_gfx_size_hint_request_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    hint_restricted_min_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_gfx_size_hint_restricted_min_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    hint_combined_min_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.efl_gfx_size_hint_combined_min_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    hint_margin_set = function(self, l, r, t, b)
        eo.__do_start(self, __class)
        __lib.efl_gfx_size_hint_margin_set(l, r, t, b)
        eo.__do_end()
    end,

    hint_margin_get = function(self)
        eo.__do_start(self, __class)
        local l = ffi.new("int[1]")
        local r = ffi.new("int[1]")
        local t = ffi.new("int[1]")
        local b = ffi.new("int[1]")
        __lib.efl_gfx_size_hint_margin_get(l, r, t, b)
        eo.__do_end()
        return tonumber(l[0]), tonumber(r[0]), tonumber(t[0]), tonumber(b[0])
    end,

    hint_weight_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_size_hint_weight_set(x, y)
        eo.__do_end()
    end,

    hint_weight_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.efl_gfx_size_hint_weight_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    hint_align_set = function(self, x, y)
        eo.__do_start(self, __class)
        __lib.efl_gfx_size_hint_align_set(x, y)
        eo.__do_end()
    end,

    hint_align_get = function(self)
        eo.__do_start(self, __class)
        local x = ffi.new("double[1]")
        local y = ffi.new("double[1]")
        __lib.efl_gfx_size_hint_align_get(x, y)
        eo.__do_end()
        return tonumber(x[0]), tonumber(y[0])
    end,

    __events = {
        ["change,size,hints"] = __lib._EFL_GFX_EVENT_CHANGE_SIZE_HINTS
    },

    __properties = {
        ["hint_base"] = { 0, 0, 2, 2, true, true },
        ["hint_combined_min"] = { 0, 0, 2, 0, true, false },
        ["hint_step"] = { 0, 0, 2, 2, true, true },
        ["hint_margin"] = { 0, 0, 4, 4, true, true },
        ["hint_weight"] = { 0, 0, 2, 2, true, true },
        ["hint_restricted_min"] = { 0, 0, 2, 0, true, false },
        ["hint_align"] = { 0, 0, 2, 2, true, true },
        ["hint_min"] = { 0, 0, 2, 2, true, true },
        ["hint_max"] = { 0, 0, 2, 2, true, true },
        ["hint_request"] = { 0, 0, 2, 2, true, true },
        ["hint_aspect"] = { 0, 0, 3, 3, true, true }
    }
}
__body["__iface_Efl_Gfx_Size_Hint"] = true

return M
