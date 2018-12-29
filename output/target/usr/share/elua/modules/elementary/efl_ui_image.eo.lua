-- EFL LuaJIT bindings: efl_ui_image.eo (class Efl.Ui.Image)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_ui_image_class_get()
    eo.class_register("Efl_Ui_Image", {"Elm_Widget", "Edje_Object"}, {"Efl_Ui_Clickable", "Efl_Ui_Draggable", "Efl_File", "Efl_Image", "Efl_Image_Load", "Efl_Player", "Efl_Gfx_View", "Elm_Interface_Atspi_Image", "Elm_Interface_Atspi_Widget_Action", "Efl_Orientation", "Efl_Flipable", "Efl_Ui_View", "Efl_Ui_Model_Connect"}, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_ui_image_class_get(void);
    void efl_ui_image_scale_type_set(Efl_Ui_Image_Scale_Type scale_type);
    Efl_Ui_Image_Scale_Type efl_ui_image_scale_type_get(void);
    void efl_ui_image_scalable_set(Eina_Bool scale_up, Eina_Bool scale_down);
    void efl_ui_image_scalable_get(Eina_Bool *scale_up, Eina_Bool *scale_down);
    void efl_ui_image_align_set(double align_x, double align_y);
    void efl_ui_image_align_get(double *align_x, double *align_y);
    Eina_Bool efl_ui_image_icon_set(const char * name);
    const char *efl_ui_image_icon_get(void);
    extern const Eo_Event_Description _EFL_UI_IMAGE_EVENT_DROP;
]]

local __M = util.get_namespace(M, { "ui" })
__body = {
    __eo_ctor = function(self, __func)
        if __func then __func() end
    end,

    scale_type_set = function(self, scale_type)
        eo.__do_start(self, __class)
        __lib.efl_ui_image_scale_type_set(scale_type)
        eo.__do_end()
    end,

    scale_type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_image_scale_type_get()
        eo.__do_end()
        return v
    end,

    scalable_set = function(self, scale_up, scale_down)
        eo.__do_start(self, __class)
        __lib.efl_ui_image_scalable_set(scale_up, scale_down)
        eo.__do_end()
    end,

    scalable_get = function(self)
        eo.__do_start(self, __class)
        local scale_up = ffi.new("Eina_Bool[1]")
        local scale_down = ffi.new("Eina_Bool[1]")
        __lib.efl_ui_image_scalable_get(scale_up, scale_down)
        eo.__do_end()
        return ((scale_up[0]) ~= 0), ((scale_down[0]) ~= 0)
    end,

    align_set = function(self, align_x, align_y)
        eo.__do_start(self, __class)
        __lib.efl_ui_image_align_set(align_x, align_y)
        eo.__do_end()
    end,

    align_get = function(self)
        eo.__do_start(self, __class)
        local align_x = ffi.new("double[1]")
        local align_y = ffi.new("double[1]")
        __lib.efl_ui_image_align_get(align_x, align_y)
        eo.__do_end()
        return tonumber(align_x[0]), tonumber(align_y[0])
    end,

    icon_set = function(self, name)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_image_icon_set(name)
        eo.__do_end()
    end,

    icon_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_ui_image_icon_get()
        eo.__do_end()
        return v
    end,

    __events = {
        ["drop"] = __lib._EFL_UI_IMAGE_EVENT_DROP
    },

    __properties = {
        ["scale_type"] = { 0, 0, 1, 1, true, true },
        ["icon"] = { 0, 0, 1, 1, true, true },
        ["align"] = { 0, 0, 2, 2, true, true },
        ["scalable"] = { 0, 0, 2, 2, true, true }
    }
}

__M.Image = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Efl_Ui_Image").__eo_ctor,
                            1, ...)
end

return M
