-- EFL LuaJIT bindings: elm_view_list.eo (class Elm.View.List)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_view_list_class_get()
    eo.class_register("Elm_View_List", {"Efl_Object"}, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_view_list_class_get(void);
    void elm_view_list_genlist_set(Efl_Canvas_Object * genlist, Elm_Genlist_Item_Type item_type, const char * item_style);
    void elm_view_list_evas_object_get(Efl_Canvas_Object * *widget);
    void elm_view_list_property_connect(const char * property, const char * part);
    void elm_view_list_model_set(Efl_Model * model);
    void elm_view_list_model_unset(void);
    void elm_view_list_model_get(Efl_Model * *model);
    extern const Eo_Event_Description _ELM_VIEW_LIST_EVENT_MODEL_SELECTED;
]]

local __M = util.get_namespace(M, { "view" })
__body = {
    __eo_ctor = function(self, genlist_set_genlist, genlist_set_item_type, genlist_set_item_style, __func)
        self:genlist_set(genlist_set_genlist, genlist_set_item_type, genlist_set_item_style)
        if __func then __func() end
    end,

    genlist_set = function(self, genlist, item_type, item_style)
        eo.__do_start(self, __class)
        __lib.elm_view_list_genlist_set(genlist, item_type, item_style)
        eo.__do_end()
    end,

    evas_object_get = function(self)
        eo.__do_start(self, __class)
        local widget = ffi.new("Efl_Canvas_Object *[1]")
        __lib.elm_view_list_evas_object_get(widget)
        eo.__do_end()
        return widget[0]
    end,

    property_connect = function(self, property, part)
        eo.__do_start(self, __class)
        __lib.elm_view_list_property_connect(property, part)
        eo.__do_end()
    end,

    model_set = function(self, model)
        eo.__do_start(self, __class)
        __lib.elm_view_list_model_set(model)
        eo.__do_end()
    end,

    model_unset = function(self)
        eo.__do_start(self, __class)
        __lib.elm_view_list_model_unset()
        eo.__do_end()
    end,

    model_get = function(self)
        eo.__do_start(self, __class)
        local model = ffi.new("Efl_Model *[1]")
        __lib.elm_view_list_model_get(model)
        eo.__do_end()
        return model[0]
    end,

    __events = {
        ["model,selected"] = __lib._ELM_VIEW_LIST_EVENT_MODEL_SELECTED
    }
}

__M.List = function(parent, ...)
    return eo.__ctor_common(__class, parent, eo.class_get("Elm_View_List").__eo_ctor,
                            1, ...)
end

return M
