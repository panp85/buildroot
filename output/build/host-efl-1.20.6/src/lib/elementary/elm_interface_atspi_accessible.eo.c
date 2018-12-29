EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_PROPERTY_CHANGED =
   EFL_EVENT_DESCRIPTION("property,changed");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_CHILDREN_CHANGED =
   EFL_EVENT_DESCRIPTION("children,changed");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_STATE_CHANGED =
   EFL_EVENT_DESCRIPTION("state,changed");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_BOUNDS_CHANGED =
   EFL_EVENT_DESCRIPTION("bounds,changed");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_VISIBLE_DATA_CHANGED =
   EFL_EVENT_DESCRIPTION("visible,data,changed");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ACTIVE_DESCENDANT_CHANGED =
   EFL_EVENT_DESCRIPTION("active,descendant,changed");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ADDED =
   EFL_EVENT_DESCRIPTION("added");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_REMOVED =
   EFL_EVENT_DESCRIPTION("removed");

const char *_elm_interface_atspi_accessible_localized_role_name_get(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_accessible_localized_role_name_get, const char *, NULL);

void _elm_interface_atspi_accessible_name_set(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd, const char *name);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_atspi_accessible_name_set, EFL_FUNC_CALL(name), const char *name);

const char *_elm_interface_atspi_accessible_name_get(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_accessible_name_get, const char *, NULL);

Elm_Atspi_Relation_Set _elm_interface_atspi_accessible_relation_set_get(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_accessible_relation_set_get, Elm_Atspi_Relation_Set, NULL);

void _elm_interface_atspi_accessible_role_set(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd, Elm_Atspi_Role role);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_atspi_accessible_role_set, EFL_FUNC_CALL(role), Elm_Atspi_Role role);

Elm_Atspi_Role _elm_interface_atspi_accessible_role_get(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_accessible_role_get, Elm_Atspi_Role, 0);

Eina_List *_elm_interface_atspi_accessible_children_get(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_accessible_children_get, Eina_List *, NULL);

const char *_elm_interface_atspi_accessible_role_name_get(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_accessible_role_name_get, const char *, NULL);

Eina_List *_elm_interface_atspi_accessible_attributes_get(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_accessible_attributes_get, Eina_List *, NULL);

int _elm_interface_atspi_accessible_index_in_parent_get(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_accessible_index_in_parent_get, int, 0);

void _elm_interface_atspi_accessible_description_set(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd, const char *description);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_atspi_accessible_description_set, EFL_FUNC_CALL(description), const char *description);

const char *_elm_interface_atspi_accessible_description_get(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_accessible_description_get, const char *, NULL);

void _elm_interface_atspi_accessible_parent_set(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd, Elm_Interface_Atspi_Accessible *parent);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_atspi_accessible_parent_set, EFL_FUNC_CALL(parent), Elm_Interface_Atspi_Accessible *parent);

Elm_Interface_Atspi_Accessible *_elm_interface_atspi_accessible_parent_get(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_accessible_parent_get, Elm_Interface_Atspi_Accessible *, NULL);

Elm_Atspi_State_Set _elm_interface_atspi_accessible_state_set_get(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_accessible_state_set_get, Elm_Atspi_State_Set, 0);

Elm_Atspi_Event_Handler *_elm_interface_atspi_accessible_event_handler_add(Eo *obj, void *pd, Efl_Event_Cb cb, void *data);

EOAPI EFL_FUNC_BODYV_CONST(elm_interface_atspi_accessible_event_handler_add, Elm_Atspi_Event_Handler *, NULL, EFL_FUNC_CALL(cb, data), Efl_Event_Cb cb, void *data);

void _elm_interface_atspi_accessible_event_handler_del(Eo *obj, void *pd, Elm_Atspi_Event_Handler *handler);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_atspi_accessible_event_handler_del, EFL_FUNC_CALL(handler), Elm_Atspi_Event_Handler *handler);

void _elm_interface_atspi_accessible_event_emit(Eo *obj, void *pd, Elm_Interface_Atspi_Accessible *accessible, const Efl_Event_Description *event, void *event_info);

EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_atspi_accessible_event_emit, EFL_FUNC_CALL(accessible, event, event_info), Elm_Interface_Atspi_Accessible *accessible, const Efl_Event_Description *event, void *event_info);

void _elm_interface_atspi_accessible_translation_domain_set(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd, const char *domain);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_atspi_accessible_translation_domain_set, EFL_FUNC_CALL(domain), const char *domain);

const char *_elm_interface_atspi_accessible_translation_domain_get(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_accessible_translation_domain_get, const char *, NULL);

void _elm_interface_atspi_accessible_type_set(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd, Elm_Atspi_Type type);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_atspi_accessible_type_set, EFL_FUNC_CALL(type), Elm_Atspi_Type type);

Elm_Atspi_Type _elm_interface_atspi_accessible_type_get(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_accessible_type_get, Elm_Atspi_Type, 0);

Eina_Bool _elm_interface_atspi_accessible_relationship_append(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd, Elm_Atspi_Relation_Type type, const Elm_Interface_Atspi_Accessible *relation_object);

EOAPI EFL_FUNC_BODYV(elm_interface_atspi_accessible_relationship_append, Eina_Bool, 0, EFL_FUNC_CALL(type, relation_object), Elm_Atspi_Relation_Type type, const Elm_Interface_Atspi_Accessible *relation_object);

void _elm_interface_atspi_accessible_relationship_remove(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd, Elm_Atspi_Relation_Type type, const Elm_Interface_Atspi_Accessible *relation_object);

EOAPI EFL_VOID_FUNC_BODYV(elm_interface_atspi_accessible_relationship_remove, EFL_FUNC_CALL(type, relation_object), Elm_Atspi_Relation_Type type, const Elm_Interface_Atspi_Accessible *relation_object);

void _elm_interface_atspi_accessible_relationships_clear(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(elm_interface_atspi_accessible_relationships_clear);

Efl_Object *_elm_interface_atspi_accessible_root_get(Eo *obj, void *pd);

EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_accessible_root_get, Efl_Object *, NULL);

void _elm_interface_atspi_accessible_efl_object_destructor(Eo *obj, Elm_Interface_Atspi_Accessible_Data *pd);


static Eina_Bool
_elm_interface_atspi_accessible_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_INTERFACE_ATSPI_ACCESSIBLE_EXTRA_OPS
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_localized_role_name_get, _elm_interface_atspi_accessible_localized_role_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_name_set, _elm_interface_atspi_accessible_name_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_name_get, _elm_interface_atspi_accessible_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_relation_set_get, _elm_interface_atspi_accessible_relation_set_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_role_set, _elm_interface_atspi_accessible_role_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_role_get, _elm_interface_atspi_accessible_role_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_children_get, _elm_interface_atspi_accessible_children_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_role_name_get, _elm_interface_atspi_accessible_role_name_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_attributes_get, _elm_interface_atspi_accessible_attributes_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_index_in_parent_get, _elm_interface_atspi_accessible_index_in_parent_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_description_set, _elm_interface_atspi_accessible_description_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_description_get, _elm_interface_atspi_accessible_description_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_parent_set, _elm_interface_atspi_accessible_parent_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_parent_get, _elm_interface_atspi_accessible_parent_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_state_set_get, _elm_interface_atspi_accessible_state_set_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_translation_domain_set, _elm_interface_atspi_accessible_translation_domain_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_translation_domain_get, _elm_interface_atspi_accessible_translation_domain_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_type_set, _elm_interface_atspi_accessible_type_set),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_type_get, _elm_interface_atspi_accessible_type_get),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_relationship_append, _elm_interface_atspi_accessible_relationship_append),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_relationship_remove, _elm_interface_atspi_accessible_relationship_remove),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_relationships_clear, _elm_interface_atspi_accessible_relationships_clear),
      EFL_OBJECT_OP_FUNC(efl_destructor, _elm_interface_atspi_accessible_efl_object_destructor),
      ELM_INTERFACE_ATSPI_ACCESSIBLE_EXTRA_OPS
   );
   opsp = &ops;

#ifndef ELM_INTERFACE_ATSPI_ACCESSIBLE_EXTRA_CLASS_OPS
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EXTRA_CLASS_OPS
#endif

   EFL_OPS_DEFINE(cops,
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_event_handler_add, _elm_interface_atspi_accessible_event_handler_add),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_event_handler_del, _elm_interface_atspi_accessible_event_handler_del),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_event_emit, _elm_interface_atspi_accessible_event_emit),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_accessible_root_get, _elm_interface_atspi_accessible_root_get),
      ELM_INTERFACE_ATSPI_ACCESSIBLE_EXTRA_CLASS_OPS
   );
   copsp = &cops;

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_interface_atspi_accessible_class_desc = {
   EO_VERSION,
   "Elm.Interface.Atspi_Accessible",
   EFL_CLASS_TYPE_MIXIN,
   sizeof(Elm_Interface_Atspi_Accessible_Data),
   _elm_interface_atspi_accessible_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_interface_atspi_accessible_mixin_get, &_elm_interface_atspi_accessible_class_desc, EFL_INTERFACE_INTERFACE, EFL_OBJECT_CLASS, NULL);
