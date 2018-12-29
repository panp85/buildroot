-- EFL LuaJIT bindings: evas_canvas3d_mesh.eo (class Evas.Canvas3D.Mesh)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.evas_canvas3d_mesh_class_get()
    eo.class_register("Evas_Canvas3D_Mesh", {"Evas_Canvas3D_Object"}, {"Efl_File"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *evas_canvas3d_mesh_class_get(void);
    void evas_canvas3d_mesh_shader_mode_set(Evas_Canvas3D_Shader_Mode mode);
    Evas_Canvas3D_Shader_Mode evas_canvas3d_mesh_shader_mode_get(void);
    void evas_canvas3d_mesh_color_pick_enable_set(Eina_Bool enabled);
    Eina_Bool evas_canvas3d_mesh_color_pick_enable_get(void);
    void evas_canvas3d_mesh_vertex_count_set(unsigned int count);
    unsigned int evas_canvas3d_mesh_vertex_count_get(void);
    void evas_canvas3d_mesh_fog_enable_set(Eina_Bool enabled);
    Eina_Bool evas_canvas3d_mesh_fog_enable_get(void);
    void evas_canvas3d_mesh_alpha_test_enable_set(Eina_Bool enabled);
    Eina_Bool evas_canvas3d_mesh_alpha_test_enable_get(void);
    void evas_canvas3d_mesh_alpha_func_set(Evas_Canvas3D_Comparison comparison_func, Evas_Real ref_value);
    void evas_canvas3d_mesh_alpha_func_get(Evas_Canvas3D_Comparison *comparison_func, Evas_Real *ref_value);
    void evas_canvas3d_mesh_blending_enable_set(Eina_Bool blending);
    Eina_Bool evas_canvas3d_mesh_blending_enable_get(void);
    void evas_canvas3d_mesh_frame_material_set(int frame, Evas_Canvas3D_Material * material);
    Evas_Canvas3D_Material *evas_canvas3d_mesh_frame_material_get(int frame);
    void evas_canvas3d_mesh_vertex_assembly_set(Evas_Canvas3D_Vertex_Assembly assembly);
    Evas_Canvas3D_Vertex_Assembly evas_canvas3d_mesh_vertex_assembly_get(void);
    void evas_canvas3d_mesh_shadows_edges_filtering_set(int blur_level, Evas_Real edges_size);
    void evas_canvas3d_mesh_shadows_edges_filtering_get(int *blur_level, Evas_Real *edges_size);
    void evas_canvas3d_mesh_shadows_constant_bias_set(Evas_Real bias);
    Evas_Real evas_canvas3d_mesh_shadows_constant_bias_get(void);
    void evas_canvas3d_mesh_lod_boundary_set(Evas_Real near_lod, Evas_Real far_lod);
    void evas_canvas3d_mesh_lod_boundary_get(Evas_Real *near_lod, Evas_Real *far_lod);
    void evas_canvas3d_mesh_frame_vertex_data_set(int frame, Evas_Canvas3D_Vertex_Attrib attrib, int stride, const void * data);
    void evas_canvas3d_mesh_frame_vertex_data_copy_set(int frame, Evas_Canvas3D_Vertex_Attrib attrib, int stride, const void * data);
    void *evas_canvas3d_mesh_frame_vertex_data_map(int frame, Evas_Canvas3D_Vertex_Attrib attrib);
    void evas_canvas3d_mesh_frame_vertex_data_unmap(int frame, Evas_Canvas3D_Vertex_Attrib attrib);
    int evas_canvas3d_mesh_frame_vertex_stride_get(int frame, Evas_Canvas3D_Vertex_Attrib attrib);
    void evas_canvas3d_mesh_index_data_set(Evas_Canvas3D_Index_Format format, int count, const void * indices);
    void evas_canvas3d_mesh_convex_hull_data_get(int frame, Eina_Inarray * vertex, Eina_Inarray * index);
    void evas_canvas3d_mesh_index_data_copy_set(Evas_Canvas3D_Index_Format format, int count, const void * indices);
    Evas_Canvas3D_Index_Format evas_canvas3d_mesh_index_format_get(void);
    int evas_canvas3d_mesh_index_count_get(void);
    void *evas_canvas3d_mesh_index_data_map(void);
    void evas_canvas3d_mesh_index_data_unmap(void);
    Eina_Bool evas_canvas3d_mesh_frame_exist(int frame);
    void evas_canvas3d_mesh_frame_add(int frame);
    void evas_canvas3d_mesh_frame_del(int frame);
    void evas_canvas3d_mesh_fog_color_set(Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);
    void evas_canvas3d_mesh_fog_color_get(Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);
    void evas_canvas3d_mesh_blending_func_set(Evas_Canvas3D_Blend_Func sfactor, Evas_Canvas3D_Blend_Func dfactor);
    void evas_canvas3d_mesh_blending_func_get(Evas_Canvas3D_Blend_Func *sfactor, Evas_Canvas3D_Blend_Func *dfactor);
    void evas_canvas3d_mesh_from_primitive_set(int frame, Evas_Canvas3D_Primitive * primitive);
]]

local __M = util.get_namespace(M, { "canvas3d" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    shader_mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_shader_mode_set(mode)
        eo.__do_end()
    end,

    shader_mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_shader_mode_get()
        eo.__do_end()
        return v
    end,

    color_pick_enable_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_color_pick_enable_set(enabled)
        eo.__do_end()
    end,

    color_pick_enable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_color_pick_enable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    vertex_count_set = function(self, count)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_vertex_count_set(count)
        eo.__do_end()
    end,

    vertex_count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_vertex_count_get()
        eo.__do_end()
        return v
    end,

    fog_enable_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_fog_enable_set(enabled)
        eo.__do_end()
    end,

    fog_enable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_fog_enable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    alpha_test_enable_set = function(self, enabled)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_alpha_test_enable_set(enabled)
        eo.__do_end()
    end,

    alpha_test_enable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_alpha_test_enable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    alpha_func_set = function(self, comparison_func, ref_value)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_alpha_func_set(comparison_func, ref_value)
        eo.__do_end()
    end,

    alpha_func_get = function(self)
        eo.__do_start(self, __class)
        local comparison_func = ffi.new("Evas_Canvas3D_Comparison[1]")
        local ref_value = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_mesh_alpha_func_get(comparison_func, ref_value)
        eo.__do_end()
        return comparison_func[0], ref_value[0]
    end,

    blending_enable_set = function(self, blending)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_blending_enable_set(blending)
        eo.__do_end()
    end,

    blending_enable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_blending_enable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    frame_material_set = function(self, frame, material)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_frame_material_set(frame, material)
        eo.__do_end()
    end,

    frame_material_get = function(self, frame)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_frame_material_get(frame)
        eo.__do_end()
        return v
    end,

    vertex_assembly_set = function(self, assembly)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_vertex_assembly_set(assembly)
        eo.__do_end()
    end,

    vertex_assembly_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_vertex_assembly_get()
        eo.__do_end()
        return v
    end,

    shadows_edges_filtering_set = function(self, blur_level, edges_size)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_shadows_edges_filtering_set(blur_level, edges_size)
        eo.__do_end()
    end,

    shadows_edges_filtering_get = function(self)
        eo.__do_start(self, __class)
        local blur_level = ffi.new("int[1]")
        local edges_size = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_mesh_shadows_edges_filtering_get(blur_level, edges_size)
        eo.__do_end()
        return tonumber(blur_level[0]), edges_size[0]
    end,

    shadows_constant_bias_set = function(self, bias)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_shadows_constant_bias_set(bias)
        eo.__do_end()
    end,

    shadows_constant_bias_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_shadows_constant_bias_get()
        eo.__do_end()
        return v
    end,

    lod_boundary_set = function(self, near_lod, far_lod)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_lod_boundary_set(near_lod, far_lod)
        eo.__do_end()
    end,

    lod_boundary_get = function(self)
        eo.__do_start(self, __class)
        local near_lod = ffi.new("Evas_Real[1]")
        local far_lod = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_mesh_lod_boundary_get(near_lod, far_lod)
        eo.__do_end()
        return near_lod[0], far_lod[0]
    end,

    frame_vertex_data_set = function(self, frame, attrib, stride, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_frame_vertex_data_set(frame, attrib, stride, data)
        eo.__do_end()
    end,

    frame_vertex_data_copy_set = function(self, frame, attrib, stride, data)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_frame_vertex_data_copy_set(frame, attrib, stride, data)
        eo.__do_end()
    end,

    frame_vertex_data_map = function(self, frame, attrib)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_frame_vertex_data_map(frame, attrib)
        eo.__do_end()
        return v
    end,

    frame_vertex_data_unmap = function(self, frame, attrib)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_frame_vertex_data_unmap(frame, attrib)
        eo.__do_end()
    end,

    frame_vertex_stride_get = function(self, frame, attrib)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_frame_vertex_stride_get(frame, attrib)
        eo.__do_end()
        return tonumber(v)
    end,

    index_data_set = function(self, format, count, indices)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_index_data_set(format, count, indices)
        eo.__do_end()
    end,

    convex_hull_data_get = function(self, frame, vertex, index)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_convex_hull_data_get(frame, vertex, index)
        eo.__do_end()
    end,

    index_data_copy_set = function(self, format, count, indices)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_index_data_copy_set(format, count, indices)
        eo.__do_end()
    end,

    index_format_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_index_format_get()
        eo.__do_end()
        return v
    end,

    index_count_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_index_count_get()
        eo.__do_end()
        return tonumber(v)
    end,

    index_data_map = function(self)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_index_data_map()
        eo.__do_end()
        return v
    end,

    index_data_unmap = function(self)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_index_data_unmap()
        eo.__do_end()
    end,

    frame_exist = function(self, frame)
        eo.__do_start(self, __class)
        local v = __lib.evas_canvas3d_mesh_frame_exist(frame)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    frame_add = function(self, frame)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_frame_add(frame)
        eo.__do_end()
    end,

    frame_del = function(self, frame)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_frame_del(frame)
        eo.__do_end()
    end,

    fog_color_set = function(self, r, g, b, a)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_fog_color_set(r, g, b, a)
        eo.__do_end()
    end,

    fog_color_get = function(self)
        eo.__do_start(self, __class)
        local r = ffi.new("Evas_Real[1]")
        local g = ffi.new("Evas_Real[1]")
        local b = ffi.new("Evas_Real[1]")
        local a = ffi.new("Evas_Real[1]")
        __lib.evas_canvas3d_mesh_fog_color_get(r, g, b, a)
        eo.__do_end()
        return r[0], g[0], b[0], a[0]
    end,

    blending_func_set = function(self, sfactor, dfactor)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_blending_func_set(sfactor, dfactor)
        eo.__do_end()
    end,

    blending_func_get = function(self)
        eo.__do_start(self, __class)
        local sfactor = ffi.new("Evas_Canvas3D_Blend_Func[1]")
        local dfactor = ffi.new("Evas_Canvas3D_Blend_Func[1]")
        __lib.evas_canvas3d_mesh_blending_func_get(sfactor, dfactor)
        eo.__do_end()
        return sfactor[0], dfactor[0]
    end,

    from_primitive_set = function(self, frame, primitive)
        eo.__do_start(self, __class)
        __lib.evas_canvas3d_mesh_from_primitive_set(frame, primitive)
        eo.__do_end()
    end,

    __properties = {
        ["shader_mode"] = { 0, 0, 1, 1, true, true },
        ["vertex_assembly"] = { 0, 0, 1, 1, true, true },
        ["lod_boundary"] = { 0, 0, 2, 2, true, true },
        ["vertex_count"] = { 0, 0, 1, 1, true, true },
        ["shadows_constant_bias"] = { 0, 0, 1, 1, true, true },
        ["alpha_func"] = { 0, 0, 2, 2, true, true },
        ["color_pick_enable"] = { 0, 0, 1, 1, true, true },
        ["shadows_edges_filtering"] = { 0, 0, 2, 2, true, true },
        ["blending_enable"] = { 0, 0, 1, 1, true, true },
        ["frame_material"] = { 1, 1, 1, 1, true, true },
        ["fog_enable"] = { 0, 0, 1, 1, true, true },
        ["alpha_test_enable"] = { 0, 0, 1, 1, true, true }
    }
}

__M.Mesh = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Evas_Canvas3D_Mesh").__eo_ctor,
                            1, ...)
end

return M
