-- EFL LuaJIT bindings: elm_interface_atspi_accessible.eo (class Elm.Interface.Atspi_Accessible)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.elm_interface_atspi_accessible_mixin_get()
    eo.class_register("Elm_Interface_Atspi_Accessible", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *elm_interface_atspi_accessible_mixin_get(void);
    void elm_interface_atspi_accessible_name_set(const char * name);
    const char *elm_interface_atspi_accessible_name_get(void);
    void elm_interface_atspi_accessible_role_set(Elm_Atspi_Role role);
    Elm_Atspi_Role elm_interface_atspi_accessible_role_get(void);
    void elm_interface_atspi_accessible_description_set(const char * description);
    const char *elm_interface_atspi_accessible_description_get(void);
    void elm_interface_atspi_accessible_parent_set(Elm_Interface_Atspi_Accessible * parent);
    Elm_Interface_Atspi_Accessible *elm_interface_atspi_accessible_parent_get(void);
    void elm_interface_atspi_accessible_translation_domain_set(const char * domain);
    const char *elm_interface_atspi_accessible_translation_domain_get(void);
    void elm_interface_atspi_accessible_type_set(Elm_Atspi_Type type);
    Elm_Atspi_Type elm_interface_atspi_accessible_type_get(void);
    Efl_Object *elm_interface_atspi_accessible_root_get(void);
    Eina_Bool elm_interface_atspi_accessible_relationship_append(Elm_Atspi_Relation_Type type, const Elm_Interface_Atspi_Accessible * relation_object);
    void elm_interface_atspi_accessible_relationship_remove(Elm_Atspi_Relation_Type type, const Elm_Interface_Atspi_Accessible * relation_object);
    void elm_interface_atspi_accessible_relationships_clear(void);
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_PROPERTY_CHANGED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_CHILDREN_CHANGED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_STATE_CHANGED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_BOUNDS_CHANGED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_VISIBLE_DATA_CHANGED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ACTIVE_DESCENDANT_CHANGED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ADDED;
    extern const Eo_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_REMOVED;
]]

local __M = util.get_namespace(M, { "interface" })
__body = {
    name_set = function(self, name)
        eo.__do_start(self, __class)
        __lib.elm_interface_atspi_accessible_name_set(name)
        eo.__do_end()
    end,

    name_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_atspi_accessible_name_get()
        eo.__do_end()
        return v
    end,

    role_set = function(self, role)
        eo.__do_start(self, __class)
        __lib.elm_interface_atspi_accessible_role_set(role)
        eo.__do_end()
    end,

    role_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_atspi_accessible_role_get()
        eo.__do_end()
        return v
    end,

    description_set = function(self, description)
        eo.__do_start(self, __class)
        __lib.elm_interface_atspi_accessible_description_set(description)
        eo.__do_end()
    end,

    description_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_atspi_accessible_description_get()
        eo.__do_end()
        return v
    end,

    parent_set = function(self, parent)
        eo.__do_start(self, __class)
        __lib.elm_interface_atspi_accessible_parent_set(parent)
        eo.__do_end()
    end,

    parent_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_atspi_accessible_parent_get()
        eo.__do_end()
        return v
    end,

    translation_domain_set = function(self, domain)
        eo.__do_start(self, __class)
        __lib.elm_interface_atspi_accessible_translation_domain_set(domain)
        eo.__do_end()
    end,

    translation_domain_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_atspi_accessible_translation_domain_get()
        eo.__do_end()
        return v
    end,

    type_set = function(self, type)
        eo.__do_start(self, __class)
        __lib.elm_interface_atspi_accessible_type_set(type)
        eo.__do_end()
    end,

    type_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_atspi_accessible_type_get()
        eo.__do_end()
        return v
    end,

    root_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_atspi_accessible_root_get()
        eo.__do_end()
        return v
    end,

    relationship_append = function(self, type, relation_object)
        eo.__do_start(self, __class)
        local v = __lib.elm_interface_atspi_accessible_relationship_append(type, relation_object)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    relationship_remove = function(self, type, relation_object)
        eo.__do_start(self, __class)
        __lib.elm_interface_atspi_accessible_relationship_remove(type, relation_object)
        eo.__do_end()
    end,

    relationships_clear = function(self)
        eo.__do_start(self, __class)
        __lib.elm_interface_atspi_accessible_relationships_clear()
        eo.__do_end()
    end,

    __events = {
        ["property,changed"] = __lib._ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_PROPERTY_CHANGED,
        ["children,changed"] = __lib._ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_CHILDREN_CHANGED,
        ["state,changed"] = __lib._ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_STATE_CHANGED,
        ["bounds,changed"] = __lib._ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_BOUNDS_CHANGED,
        ["visible,data,changed"] = __lib._ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_VISIBLE_DATA_CHANGED,
        ["active,descendant,changed"] = __lib._ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ACTIVE_DESCENDANT_CHANGED,
        ["added"] = __lib._ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ADDED,
        ["removed"] = __lib._ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_REMOVED
    },

    __properties = {
        ["translation_domain"] = { 0, 0, 1, 1, true, true },
        ["root"] = { 0, 0, 1, 0, true, false },
        ["role"] = { 0, 0, 1, 1, true, true },
        ["type"] = { 0, 0, 1, 1, true, true },
        ["name"] = { 0, 0, 1, 1, true, true },
        ["parent"] = { 0, 0, 1, 1, true, true },
        ["description"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__mixin_Elm_Interface_Atspi_Accessible"] = true

return M
