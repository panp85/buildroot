-- EFL LuaJIT bindings: efl_text_annotate.eo (class Efl.Text.Annotate)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_text_annotate_interface_get()
    eo.class_register("Efl_Text_Annotate", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_text_annotate_interface_get(void);
    Eina_Bool efl_text_annotation_set(Efl_Text_Annotate_Annotation * annotation, const char * format);
    const char *efl_text_annotation_get(Efl_Text_Annotate_Annotation * annotation);
    Efl_Text_Annotate_Annotation *efl_text_cursor_object_item_annotation_get(Efl_Text_Cursor_Cursor * cur);
    Eina_Iterator *efl_text_range_annotations_get(const Efl_Text_Cursor_Cursor * start, const Efl_Text_Cursor_Cursor * end_);
    Efl_Text_Annotate_Annotation *efl_text_annotation_insert(Efl_Text_Cursor_Cursor * start, Efl_Text_Cursor_Cursor * end_, const char * format);
    Eina_Bool efl_text_annotation_del(Efl_Text_Annotate_Annotation * annotation);
    Eina_Bool efl_text_object_item_geometry_get(const Efl_Text_Annotate_Annotation * an, int *x, int *y, int *w, int *h);
    void efl_text_annotation_positions_get(const Efl_Text_Annotate_Annotation * annotation, Efl_Text_Cursor_Cursor * start, Efl_Text_Cursor_Cursor * end_);
    Efl_Text_Annotate_Annotation *efl_text_cursor_object_item_insert(Efl_Text_Cursor_Cursor * cur, const char * format);
]]

local __M = util.get_namespace(M, { "text" })
__body = {
    annotation_set = function(self, annotation, format)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_annotation_set(annotation, format)
        eo.__do_end()
    end,

    annotation_get = function(self, annotation)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_annotation_get(annotation)
        eo.__do_end()
        return v
    end,

    cursor_object_item_annotation_get = function(self, cur)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_cursor_object_item_annotation_get(cur)
        eo.__do_end()
        return v
    end,

    range_annotations_get = function(self, start, end_)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_range_annotations_get(start, end_)
        eo.__do_end()
        return v
    end,

    annotation_insert = function(self, start, end_, format)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_annotation_insert(start, end_, format)
        eo.__do_end()
        return v
    end,

    annotation_del = function(self, annotation)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_annotation_del(annotation)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    object_item_geometry_get = function(self, an)
        eo.__do_start(self, __class)
        local x = ffi.new("int[1]")
        local y = ffi.new("int[1]")
        local w = ffi.new("int[1]")
        local h = ffi.new("int[1]")
        local v = __lib.efl_text_object_item_geometry_get(an, x, y, w, h)
        eo.__do_end()
        return ((v) ~= 0), tonumber(x[0]), tonumber(y[0]), tonumber(w[0]), tonumber(h[0])
    end,

    annotation_positions_get = function(self, annotation, start, end_)
        eo.__do_start(self, __class)
        __lib.efl_text_annotation_positions_get(annotation, start, end_)
        eo.__do_end()
    end,

    cursor_object_item_insert = function(self, cur, format)
        eo.__do_start(self, __class)
        local v = __lib.efl_text_cursor_object_item_insert(cur, format)
        eo.__do_end()
        return v
    end,

    __properties = {
        ["cursor_object_item_annotation"] = { 1, 0, 1, 0, true, false },
        ["annotation"] = { 1, 1, 1, 1, true, true }
    }
}
__body["__iface_Efl_Text_Annotate"] = true

return M
