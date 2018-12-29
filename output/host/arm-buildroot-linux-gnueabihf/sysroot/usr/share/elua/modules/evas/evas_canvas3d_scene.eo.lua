-- EFL LuaJIT bindings: evas_canvas3d_scene.eo (class Evas.Canvas3D.Scene)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_canvas3d_scene_class_get()
    eo.class_register("Evas_Canvas3D_Scene", {"Evas_Canvas3D_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_canvas3d_scene_class_get(void);
    void evas_canvas3d_scene_root_node_set(Evas_Canvas3D_Node * node);
    Evas_Canvas3D_Node *evas_canvas3d_scene_root_node_get(void);
    void evas_canvas3d_scene_camera_node_set(Evas_Canvas3D_Node * node);
    Evas_Canvas3D_Node *evas_canvas3d_scene_camera_node_get(void);
    void evas_canvas3d_scene_shadows_depth_set(Evas_Real depth_offset, Evas_Real depth_constant);
    void evas_canvas3d_scene_shadows_depth_get(Evas_Real *depth_offset, Evas_Real *depth_constant);
    void evas_canvas3d_scene_size_set(int w, int h);
    void evas_canvas3d_scene_size_get(int *w, int *h);
    void evas_canvas3d_scene_background_color_set(Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);
    void evas_canvas3d_scene_background_color_get(Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);
    Eina_Bool evas_canvas3d_scene_pick(Evas_Real x, Evas_Real y, Evas_Canvas3D_Node * *node, Evas_Canvas3D_Mesh * *mesh, Evas_Real *s, Evas_Real *t);
    Evas_Canvas3D_Node *evas_canvas3d_scene_exist(Evas_Real x, Evas_Real y, Evas_Canvas3D_Node * node);
    Eina_List *evas_canvas3d_scene_pick_member_list_get(Evas_Real x, Evas_Real y);
    void evas_canvas3d_scene_shadows_enable_set(Eina_Bool shadows_enabled);
    Eina_Bool evas_canvas3d_scene_shadows_enable_get(void);
    Eina_Bool evas_canvas3d_scene_color_pick_enable_get(void);
    Eina_Bool evas_canvas3d_scene_color_pick_enable_set(Eina_Bool color_pick);
]]

local __M = util.get_namespace(M, { "canvas3d" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    root_node_set = function(self, node)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_scene_root_node_set(node)
        eo.__do_end()
    end,

    root_node_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_scene_root_node_get()
        eo.__do_end()
        return v
    end,

    camera_node_set = function(self, node)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_scene_camera_node_set(node)
        eo.__do_end()
    end,

    camera_node_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_scene_camera_node_get()
        eo.__do_end()
        return v
    end,

    shadows_depth_set = function(self, depth_offset, depth_constant)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_scene_shadows_depth_set(depth_offset, depth_constant)
        eo.__do_end()
    end,

    shadows_depth_get = function(self)
        eo.__do_start(self, __class)
        local depth_offset = ffi.new("Evas_Real[1]")
        local depth_constant = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_scene_shadows_depth_get(depth_offset, depth_constant)
        eo.__do_end()
        return depth_offset[0], depth_constant[0]
    end,

    size_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_scene_size_set(w, h)
        eo.__do_end()
    end,

    size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.evas_canvas3d_scene_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    background_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_scene_background_color_set(r, g, b, a)
        eo.__do_end()
    end,

    background_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("Evas_Real[1]")
        local g = ffi.new("Evas_Real[1]")
        local b = ffi.new("Evas_Real[1]")
        local a = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_scene_background_color_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    pick = function(self, x, y)
        eo.__do_start(self, __class)
        local node = ffi.new("Evas_Canvas3D_Node *[1]")
        local mesh = ffi.new("Evas_Canvas3D_Mesh *[1]")
        local s = ffi.new("Evas_Real[1]")
        local t = ffi.new("Evas_Real[1]")
        local v = __lib.evas_canvas3d_scene_pick(x, y, node, mesh, s, t)
        eo.__do_end()
        return ((v) ~= 0), node[0], mesh[0], s[0], t[0]
    end,

    exist = function(self, x, y, node)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_scene_exist(x, y, node)
        eo.__do_end()
        return v
    end,

    pick_member_list_get = function(self, x, y)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_scene_pick_member_list_get(x, y)
        eo.__do_end()
        return v
    end,

    shadows_enable_set = function(self, shadows_enabled)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_scene_shadows_enable_set(shadows_enabled)
        eo.__do_end()
    end,

    shadows_enable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_scene_shadows_enable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    color_pick_enable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_scene_color_pick_enable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    color_pick_enable_set = function(self, color_pick)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_scene_color_pick_enable_set(color_pick)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["camera_node"] = { 0, 0, 1, 1, true, true },
        ["shadows_depth"] = { 0, 0, 2, 2, true, true },
        ["root_node"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Scene = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Canvas3D_Scene").__eo_ctor,
                            1, ...)
end

return M
