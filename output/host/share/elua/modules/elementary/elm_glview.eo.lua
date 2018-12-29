-- EFL LuaJIT bindings: elm_glview.eo (class Elm.Glview)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_glview_class_get()
    eo.class_register("Elm_Glview", {"Elm_Widget"}, {"Efl_Gfx_View"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_glview_class_get(void);
    Eina_Bool elm_obj_glview_resize_policy_set(Elm_GLView_Resize_Policy policy);
    Eina_Bool elm_obj_glview_render_policy_set(Elm_GLView_Render_Policy policy);
    Eina_Bool elm_obj_glview_mode_set(Elm_GLView_Mode mode);
    Evas_GL_API *elm_obj_glview_gl_api_get(void);
    Evas_GL *elm_obj_glview_evas_gl_get(void);
    int elm_obj_glview_rotation_get(void);
    void elm_obj_glview_version_constructor(Evas_GL_Context_Version version);
    void elm_obj_glview_draw_request(void);
    extern const Eo_Event_Description _ELM_GLVIEW_EVENT_CREATED;
    extern const Eo_Event_Description _ELM_GLVIEW_EVENT_DESTROYED;
    extern const Eo_Event_Description _ELM_GLVIEW_EVENT_RESIZED;
    extern const Eo_Event_Description _ELM_GLVIEW_EVENT_RENDER;
]]

__body = {
    __eo_ctor = function(self, version_constructor_version, __func)
        self:version_constructor(version_constructor_version)
        if __func then __func() end
    end,

    resize_policy_set = function(self, policy)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_glview_resize_policy_set(policy)
        eo.__do_end()
    end,

    render_policy_set = function(self, policy)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_glview_render_policy_set(policy)
        eo.__do_end()
    end,

    mode_set = function(self, mode)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_glview_mode_set(mode)
        eo.__do_end()
    end,

    gl_api_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_glview_gl_api_get()
        eo.__do_end()
    end,

    evas_gl_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_glview_evas_gl_get()
        eo.__do_end()
    end,

    rotation_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_obj_glview_rotation_get()
        eo.__do_end()
    end,

    version_constructor = function(self, version)
        eo.__do_start(self, __class)
        __lib.elm_obj_glview_version_constructor(version)
        eo.__do_end()
    end,

    draw_request = function(self)
        eo.__do_start(self, __class)
        __lib.elm_obj_glview_draw_request()
        eo.__do_end()
    end,

    __events = {
        ["created"] = __lib._ELM_GLVIEW_EVENT_CREATED,
        ["destroyed"] = __lib._ELM_GLVIEW_EVENT_DESTROYED,
        ["resized"] = __lib._ELM_GLVIEW_EVENT_RESIZED,
        ["render"] = __lib._ELM_GLVIEW_EVENT_RENDER
    },

    __properties = {
        ["rotation"] = { 0, 0, 1, 0, true, false },
        ["evas_gl"] = { 0, 0, 1, 0, true, false },
        ["resize_policy"] = { 0, 0, 0, 1, false, true },
        ["render_policy"] = { 0, 0, 0, 1, false, true },
        ["gl_api"] = { 0, 0, 1, 0, true, false },
        ["mode"] = { 0, 0, 0, 1, false, true }
    }
}

M.Glview = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_Glview").__eo_ctor,
                            1, ...)
end

return M
