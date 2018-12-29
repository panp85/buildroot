-- EFL LuaJIT bindings: evas_canvas3d_camera.eo (class Evas.Canvas3D.Camera)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_canvas3d_camera_class_get()
    eo.class_register("Evas_Canvas3D_Camera", {"Evas_Canvas3D_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_canvas3d_camera_class_get(void);
    void evas_canvas3d_camera_projection_matrix_set(const Evas_Real * matrix);
    void evas_canvas3d_camera_projection_matrix_get(Evas_Real *matrix);
    void evas_canvas3d_camera_projection_perspective_set(Evas_Real fovy, Evas_Real aspect, Evas_Real dnear, Evas_Real dfar);
    void evas_canvas3d_camera_projection_frustum_set(Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);
    void evas_canvas3d_camera_projection_ortho_set(Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);
    Eina_Bool evas_canvas3d_camera_node_visible_get(Evas_Canvas3D_Node * camera_node, Evas_Canvas3D_Node * node, Evas_Canvas3D_Frustum_Mode key);
]]

local __M = util.get_namespace(M, { "canvas3d" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    projection_matrix_set = function(self, matrix)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_camera_projection_matrix_set(matrix)
        eo.__do_end()
    end,

    projection_matrix_get = function(self)
        eo.__do_start(self, __class)
        local matrix = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_camera_projection_matrix_get(matrix)
        eo.__do_end()
        return matrix[0]
    end,

    projection_perspective_set = function(self, fovy, aspect, dnear, dfar)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_camera_projection_perspective_set(fovy, aspect, dnear, dfar)
        eo.__do_end()
    end,

    projection_frustum_set = function(self, left, right, bottom, top, dnear, dfar)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_camera_projection_frustum_set(left, right, bottom, top, dnear, dfar)
        eo.__do_end()
    end,

    projection_ortho_set = function(self, left, right, bottom, top, dnear, dfar)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_camera_projection_ortho_set(left, right, bottom, top, dnear, dfar)
        eo.__do_end()
    end,

    node_visible_get = function(self, camera_node, node, key)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_camera_node_visible_get(camera_node, node, key)
        eo.__do_end()
        return ((v) ~= 0)
    end
}

__M.Camera = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Canvas3D_Camera").__eo_ctor,
                            1, ...)
end

return M
