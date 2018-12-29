-- EFL LuaJIT bindings: evas_canvas3d_node.eo (class Evas.Canvas3D.Node)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_canvas3d_node_class_get()
    eo.class_register("Evas_Canvas3D_Node", {"Evas_Canvas3D_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_canvas3d_node_class_get(void);
    void evas_canvas3d_node_position_inherit_set(Eina_Bool inherit);
    Eina_Bool evas_canvas3d_node_position_inherit_get(void);
    void evas_canvas3d_node_orientation_inherit_set(Eina_Bool inherit);
    Eina_Bool evas_canvas3d_node_orientation_inherit_get(void);
    void evas_canvas3d_node_scale_inherit_set(Eina_Bool inherit);
    Eina_Bool evas_canvas3d_node_scale_inherit_get(void);
    void evas_canvas3d_node_camera_set(Evas_Canvas3D_Object * camera);
    Evas_Canvas3D_Object *evas_canvas3d_node_camera_get(void);
    void evas_canvas3d_node_light_set(Evas_Canvas3D_Light * light);
    Evas_Canvas3D_Light *evas_canvas3d_node_light_get(void);
    void evas_canvas3d_node_mesh_frame_set(Evas_Canvas3D_Mesh * mesh, int frame);
    int evas_canvas3d_node_mesh_frame_get(Evas_Canvas3D_Mesh * mesh);
    void evas_canvas3d_node_billboard_target_set(Evas_Canvas3D_Node * target);
    Evas_Canvas3D_Node *evas_canvas3d_node_billboard_target_get(void);
    void evas_canvas3d_node_lod_enable_set(Eina_Bool enable);
    Eina_Bool evas_canvas3d_node_lod_enable_get(void);
    void evas_canvas3d_node_constructor(Evas_Canvas3D_Node_Type type);
    Evas_Canvas3D_Node_Type evas_canvas3d_node_type_get(void);
    void evas_canvas3d_node_member_add(Evas_Canvas3D_Node * member);
    void evas_canvas3d_node_member_del(Evas_Canvas3D_Node * member);
    Evas_Canvas3D_Node *evas_canvas3d_node_parent_get(void);
    const Eina_List *evas_canvas3d_node_member_list_get(void);
    Eina_Hash *evas_canvas3d_node_scene_root_get(void);
    void evas_canvas3d_node_position_set(Evas_Real x, Evas_Real y, Evas_Real z);
    void evas_canvas3d_node_orientation_set(Evas_Real x, Evas_Real y, Evas_Real z, Evas_Real w);
    void evas_canvas3d_node_orientation_angle_axis_set(Evas_Real angle, Evas_Real x, Evas_Real y, Evas_Real z);
    void evas_canvas3d_node_scale_set(Evas_Real x, Evas_Real y, Evas_Real z);
    void evas_canvas3d_node_position_get(Evas_Canvas3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z);
    void evas_canvas3d_node_orientation_get(Evas_Canvas3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z, Evas_Real *w);
    void evas_canvas3d_node_scale_get(Evas_Canvas3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z);
    void evas_canvas3d_node_look_at_set(Evas_Canvas3D_Space target_space, Evas_Real x, Evas_Real y, Evas_Real z, Evas_Canvas3D_Space up_space, Evas_Real ux, Evas_Real uy, Evas_Real uz);
    void evas_canvas3d_node_mesh_add(Evas_Canvas3D_Mesh * mesh);
    void evas_canvas3d_node_mesh_del(Evas_Canvas3D_Mesh * mesh);
    const Eina_List *evas_canvas3d_node_mesh_list_get(void);
    void evas_canvas3d_node_bounding_box_get(Evas_Real * x, Evas_Real * y, Evas_Real * z, Evas_Real * x2, Evas_Real * y2, Evas_Real * z2);
    void evas_canvas3d_node_bounding_sphere_get(Evas_Real * x, Evas_Real * y, Evas_Real * z, Evas_Real * r);
]]

local __M = util.get_namespace(M, { "canvas3d" })
__body = {
    __eo_ctor = function(self, constructor_type, __func)
        self:constructor(constructor_type)
        if __func then __func() end
    end,

    position_inherit_set = function(self, inherit)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_position_inherit_set(inherit)
        eo.__do_end()
    end,

    position_inherit_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_node_position_inherit_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    orientation_inherit_set = function(self, inherit)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_orientation_inherit_set(inherit)
        eo.__do_end()
    end,

    orientation_inherit_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_node_orientation_inherit_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    scale_inherit_set = function(self, inherit)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_scale_inherit_set(inherit)
        eo.__do_end()
    end,

    scale_inherit_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_node_scale_inherit_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    camera_set = function(self, camera)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_camera_set(camera)
        eo.__do_end()
    end,

    camera_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_node_camera_get()
        eo.__do_end()
        return v
    end,

    light_set = function(self, light)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_light_set(light)
        eo.__do_end()
    end,

    light_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_node_light_get()
        eo.__do_end()
        return v
    end,

    mesh_frame_set = function(self, mesh, frame)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_mesh_frame_set(mesh, frame)
        eo.__do_end()
    end,

    mesh_frame_get = function(self, mesh)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_node_mesh_frame_get(mesh)
        eo.__do_end()
        return tonumber(v)
    end,

    billboard_target_set = function(self, target)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_billboard_target_set(target)
        eo.__do_end()
    end,

    billboard_target_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_node_billboard_target_get()
        eo.__do_end()
        return v
    end,

    lod_enable_set = function(self, enable)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_lod_enable_set(enable)
        eo.__do_end()
    end,

    lod_enable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_node_lod_enable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    constructor = function(self, type)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_constructor(type)
        eo.__do_end()
    end,

    type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_node_type_get()
        eo.__do_end()
        return v
    end,

    member_add = function(self, member)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_member_add(member)
        eo.__do_end()
    end,

    member_del = function(self, member)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_member_del(member)
        eo.__do_end()
    end,

    parent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_node_parent_get()
        eo.__do_end()
        return v
    end,

    member_list_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_node_member_list_get()
        eo.__do_end()
        return v
    end,

    scene_root_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_node_scene_root_get()
        eo.__do_end()
        return v
    end,

    position_set = function(self, x, y, z)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_position_set(x, y, z)
        eo.__do_end()
    end,

    orientation_set = function(self, x, y, z, w)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_orientation_set(x, y, z, w)
        eo.__do_end()
    end,

    orientation_angle_axis_set = function(self, angle, x, y, z)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_orientation_angle_axis_set(angle, x, y, z)
        eo.__do_end()
    end,

    scale_set = function(self, x, y, z)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_scale_set(x, y, z)
        eo.__do_end()
    end,

    position_get = function(self, space)
        eo.__do_start(self, __class)
        local x = ffi.new("Evas_Real[1]")
        local y = ffi.new("Evas_Real[1]")
        local z = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_node_position_get(space, x, y, z)
        eo.__do_end()
        return x[0], y[0], z[0]
    end,

    orientation_get = function(self, space)
        eo.__do_start(self, __class)
        local x = ffi.new("Evas_Real[1]")
        local y = ffi.new("Evas_Real[1]")
        local z = ffi.new("Evas_Real[1]")
        local w = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_node_orientation_get(space, x, y, z, w)
        eo.__do_end()
        return x[0], y[0], z[0], w[0]
    end,

    scale_get = function(self, space)
        eo.__do_start(self, __class)
        local x = ffi.new("Evas_Real[1]")
        local y = ffi.new("Evas_Real[1]")
        local z = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_node_scale_get(space, x, y, z)
        eo.__do_end()
        return x[0], y[0], z[0]
    end,

    look_at_set = function(self, target_space, x, y, z, up_space, ux, uy, uz)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_look_at_set(target_space, x, y, z, up_space, ux, uy, uz)
        eo.__do_end()
    end,

    mesh_add = function(self, mesh)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_mesh_add(mesh)
        eo.__do_end()
    end,

    mesh_del = function(self, mesh)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_mesh_del(mesh)
        eo.__do_end()
    end,

    mesh_list_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_node_mesh_list_get()
        eo.__do_end()
        return v
    end,

    bounding_box_get = function(self, x, y, z, x2, y2, z2)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_bounding_box_get(x, y, z, x2, y2, z2)
        eo.__do_end()
    end,

    bounding_sphere_get = function(self, x, y, z, r)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_node_bounding_sphere_get(x, y, z, r)
        eo.__do_end()
    end,

    __properties = {
        ["camera"] = { 0, 0, 1, 1, true, true },
        ["lod_enable"] = { 0, 0, 1, 1, true, true },
        ["light"] = { 0, 0, 1, 1, true, true },
        ["billboard_target"] = { 0, 0, 1, 1, true, true },
        ["orientation_inherit"] = { 0, 0, 1, 1, true, true },
        ["mesh_frame"] = { 1, 1, 1, 1, true, true },
        ["scale_inherit"] = { 0, 0, 1, 1, true, true },
        ["position_inherit"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Node = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Canvas3D_Node").__eo_ctor,
                            1, ...)
end

return M
