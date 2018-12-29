-- EFL LuaJIT bindings: efl_canvas_proxy.eo (class Efl.Canvas.Proxy)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_canvas_proxy_class_get()
    eo.class_register("Efl_Canvas_Proxy", {"Efl_Canvas_Image_Internal"}, {"Efl_Gfx_Buffer"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_canvas_proxy_class_get(void);
    Eina_Bool efl_canvas_proxy_source_set(Efl_Canvas_Object * src);
    Efl_Canvas_Object *efl_canvas_proxy_source_get(void);
    void efl_canvas_proxy_source_clip_set(Eina_Bool source_clip);
    Eina_Bool efl_canvas_proxy_source_clip_get(void);
    void efl_canvas_proxy_source_events_set(Eina_Bool repeat_);
    Eina_Bool efl_canvas_proxy_source_events_get(void);
]]

local __M = util.get_namespace(M, { "canvas" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    source_set = function(self, src)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_proxy_source_set(src)
        eo.__do_end()
    end,

    source_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_proxy_source_get()
        eo.__do_end()
        return v
    end,

    source_clip_set = function(self, source_clip)
        eo.__do_start(self, __class)
        __lib.efl_canvas_proxy_source_clip_set(source_clip)
        eo.__do_end()
    end,

    source_clip_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_proxy_source_clip_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    source_events_set = function(self, repeat_)
        eo.__do_start(self, __class)
        __lib.efl_canvas_proxy_source_events_set(repeat_)
        eo.__do_end()
    end,

    source_events_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_canvas_proxy_source_events_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["source_clip"] = { 0, 0, 1, 1, true, true },
        ["source"] = { 0, 0, 1, 1, true, true },
        ["source_events"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Proxy = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Canvas_Proxy").__eo_ctor,
                            1, ...)
end

return M
