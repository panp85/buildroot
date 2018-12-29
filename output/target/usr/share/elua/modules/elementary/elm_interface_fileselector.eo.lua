-- EFL LuaJIT bindings: elm_interface_fileselector.eo (class Elm.Interface.Fileselector)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_interface_fileselector_interface_get()
    eo.class_register("Elm_Interface_Fileselector", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_interface_fileselector_interface_get(void);
    void elm_interface_fileselector_folder_only_set(Eina_Bool only);
    Eina_Bool elm_interface_fileselector_folder_only_get(void);
    void elm_interface_fileselector_thumbnail_size_set(int w, int h);
    void elm_interface_fileselector_thumbnail_size_get(int *w, int *h);
    void elm_interface_fileselector_hidden_visible_set(Eina_Bool hidden);
    Eina_Bool elm_interface_fileselector_hidden_visible_get(void);
    void elm_interface_fileselector_sort_method_set(Elm_Fileselector_Sort sort);
    Elm_Fileselector_Sort elm_interface_fileselector_sort_method_get(void);
    void elm_interface_fileselector_multi_select_set(Eina_Bool multi);
    Eina_Bool elm_interface_fileselector_multi_select_get(void);
    void elm_interface_fileselector_expandable_set(Eina_Bool expand);
    Eina_Bool elm_interface_fileselector_expandable_get(void);
    void elm_interface_fileselector_model_set(Efl_Model * model);
    Efl_Model *elm_interface_fileselector_model_get(void);
    void elm_interface_fileselector_mode_set(Elm_Fileselector_Mode mode);
    Elm_Fileselector_Mode elm_interface_fileselector_mode_get(void);
    void elm_interface_fileselector_is_save_set(Eina_Bool is_save);
    Eina_Bool elm_interface_fileselector_is_save_get(void);
    const Eina_List *elm_interface_fileselector_selected_models_get(void);
    void elm_interface_fileselector_current_name_set(const char * name);
    const char *elm_interface_fileselector_current_name_get(void);
    Efl_Future *elm_interface_fileselector_selected_model_set(Efl_Model * model);
    Efl_Model *elm_interface_fileselector_selected_model_get(void);
    Eina_Bool elm_interface_fileselector_custom_filter_append(Elm_Fileselector_Filter_Func func, void * data, const char * filter_name);
    void elm_interface_fileselector_filters_clear(void);
    Eina_Bool elm_interface_fileselector_mime_types_filter_append(const char * mime_types, const char * filter_name);
]]

local __M = util.get_namespace(M, { "interface" })
__body = {
    folder_only_set = function(self, only)
        eo.__do_start(self, __class)
        __lib.elm_interface_fileselector_folder_only_set(only)
        eo.__do_end()
    end,

    folder_only_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_fileselector_folder_only_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    thumbnail_size_set = function(self, w, h)
        eo.__do_start(self, __class)
        __lib.elm_interface_fileselector_thumbnail_size_set(w, h)
        eo.__do_end()
    end,

    thumbnail_size_get = function(self)
        eo.__do_start(self, __class)
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        __lib.elm_interface_fileselector_thumbnail_size_get(w, h)
        eo.__do_end()
        return tonumber(w[0]), tonumber(h[0])
    end,

    hidden_visible_set = function(self, hidden)
        eo.__do_start(self, __class)
        __lib.elm_interface_fileselector_hidden_visible_set(hidden)
        eo.__do_end()
    end,

    hidden_visible_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_fileselector_hidden_visible_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    sort_method_set = function(self, sort)
        eo.__do_start(self, __class)
        __lib.elm_interface_fileselector_sort_method_set(sort)
        eo.__do_end()
    end,

    sort_method_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_fileselector_sort_method_get()
        eo.__do_end()
        return v
    end,

    multi_select_set = function(self, multi)
        eo.__do_start(self, __class)
        __lib.elm_interface_fileselector_multi_select_set(multi)
        eo.__do_end()
    end,

    multi_select_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_fileselector_multi_select_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    expandable_set = function(self, expand)
        eo.__do_start(self, __class)
        __lib.elm_interface_fileselector_expandable_set(expand)
        eo.__do_end()
    end,

    expandable_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_fileselector_expandable_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    model_set = function(self, model)
        eo.__do_start(self, __class)
        __lib.elm_interface_fileselector_model_set(model)
        eo.__do_end()
    end,

    model_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_fileselector_model_get()
        eo.__do_end()
        return v
    end,

    mode_set = function(self, mode)
        eo.__do_start(self, __class)
        __lib.elm_interface_fileselector_mode_set(mode)
        eo.__do_end()
    end,

    mode_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_fileselector_mode_get()
        eo.__do_end()
        return v
    end,

    is_save_set = function(self, is_save)
        eo.__do_start(self, __class)
        __lib.elm_interface_fileselector_is_save_set(is_save)
        eo.__do_end()
    end,

    is_save_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_fileselector_is_save_get()
        eo.__do_end()
        return ((v) ~= 0)
    end,

    selected_models_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_fileselector_selected_models_get()
        eo.__do_end()
        return v
    end,

    current_name_set = function(self, name)
        eo.__do_start(self, __class)
        __lib.elm_interface_fileselector_current_name_set(name)
        eo.__do_end()
    end,

    current_name_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_fileselector_current_name_get()
        eo.__do_end()
        return v
    end,

    selected_model_set = function(self, model)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_fileselector_selected_model_set(model)
        eo.__do_end()
        return v
    end,

    selected_model_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_fileselector_selected_model_get()
        eo.__do_end()
        return v
    end,

    custom_filter_append = function(self, func, data, filter_name)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_fileselector_custom_filter_append(func, data, filter_name)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    filters_clear = function(self)
        eo.__do_start(self, __class)
        __lib.elm_interface_fileselector_filters_clear()
        eo.__do_end()
    end,

    mime_types_filter_append = function(self, mime_types, filter_name)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_fileselector_mime_types_filter_append(mime_types, filter_name)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    __properties = {
        ["sort_method"] = { 0, 0, 1, 1, true, true },
        ["model"] = { 0, 0, 1, 1, true, true },
        ["mode"] = { 0, 0, 1, 1, true, true },
        ["thumbnail_size"] = { 0, 0, 2, 2, true, true },
        ["current_name"] = { 0, 0, 1, 1, true, true },
        ["multi_select"] = { 0, 0, 1, 1, true, true },
        ["hidden_visible"] = { 0, 0, 1, 1, true, true },
        ["is_save"] = { 0, 0, 1, 1, true, true },
        ["folder_only"] = { 0, 0, 1, 1, true, true },
        ["expandable"] = { 0, 0, 1, 1, true, true },
        ["selected_models"] = { 0, 0, 1, 0, true, false }
    }
}
__body["__iface_Elm_Interface_Fileselector"] = true

return M
