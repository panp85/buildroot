EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_BOUNDS_CHANGED =
   EFL_EVENT_DESCRIPTION("access,text,bounds,changed");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_ATTRIBUTES_CHANGED =
   EFL_EVENT_DESCRIPTION("access,text,attributes,changed");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_CARET_MOVED =
   EFL_EVENT_DESCRIPTION("access,text,caret,moved");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_INSERTED =
   EFL_EVENT_DESCRIPTION("access,text,inserted");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_REMOVED =
   EFL_EVENT_DESCRIPTION("access,text,removed");
EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_TEXT_EVENT_ACCESS_TEXT_SELECTION_CHANGED =
   EFL_EVENT_DESCRIPTION("access,text,selection,changed");
EOAPI EFL_FUNC_BODYV_CONST(elm_interface_atspi_text_character_get, Eina_Unicode, 0, EFL_FUNC_CALL(offset), int offset);
EOAPI EFL_FUNC_BODYV_CONST(elm_interface_atspi_text_string_get, char *, NULL, EFL_FUNC_CALL(granularity, start_offset, end_offset), Elm_Atspi_Text_Granularity granularity, int *start_offset, int *end_offset);
EOAPI EFL_FUNC_BODYV_CONST(elm_interface_atspi_text_get, char *, NULL, EFL_FUNC_CALL(start_offset, end_offset), int start_offset, int end_offset);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_text_caret_offset_set, Eina_Bool, 0, EFL_FUNC_CALL(offset), int offset);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_text_caret_offset_get, int, 0);
EOAPI EFL_FUNC_BODYV_CONST(elm_interface_atspi_text_attribute_get, Eina_Bool, 0, EFL_FUNC_CALL(name, start_offset, end_offset, value), const char *name, int *start_offset, int *end_offset, char **value);
EOAPI EFL_FUNC_BODYV_CONST(elm_interface_atspi_text_attributes_get, Eina_List *, NULL, EFL_FUNC_CALL(start_offset, end_offset), int *start_offset, int *end_offset);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_text_default_attributes_get, Eina_List *, NULL);
EOAPI EFL_FUNC_BODYV_CONST(elm_interface_atspi_text_character_extents_get, Eina_Bool, 0, EFL_FUNC_CALL(offset, screen_coords, rect), int offset, Eina_Bool screen_coords, Eina_Rectangle *rect);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_text_character_count_get, int, 0);
EOAPI EFL_FUNC_BODYV_CONST(elm_interface_atspi_text_offset_at_point_get, int, 0, EFL_FUNC_CALL(screen_coords, x, y), Eina_Bool screen_coords, int x, int y);
EOAPI EFL_FUNC_BODYV_CONST(elm_interface_atspi_text_bounded_ranges_get, Eina_List *, NULL, EFL_FUNC_CALL(screen_coords, rect, xclip, yclip), Eina_Bool screen_coords, Eina_Rectangle rect, Elm_Atspi_Text_Clip_Type xclip, Elm_Atspi_Text_Clip_Type yclip);
EOAPI EFL_FUNC_BODYV_CONST(elm_interface_atspi_text_range_extents_get, Eina_Bool, 0, EFL_FUNC_CALL(screen_coords, start_offset, end_offset, rect), Eina_Bool screen_coords, int start_offset, int end_offset, Eina_Rectangle *rect);
EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_text_selections_count_get, int, 0);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_text_selection_set, Eina_Bool, 0, EFL_FUNC_CALL(selection_number, start_offset, end_offset), int selection_number, int start_offset, int end_offset);
EOAPI EFL_VOID_FUNC_BODYV_CONST(elm_interface_atspi_text_selection_get, EFL_FUNC_CALL(selection_number, start_offset, end_offset), int selection_number, int *start_offset, int *end_offset);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_text_selection_add, Eina_Bool, 0, EFL_FUNC_CALL(start_offset, end_offset), int start_offset, int end_offset);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_text_selection_remove, Eina_Bool, 0, EFL_FUNC_CALL(selection_number), int selection_number);

static Eina_Bool
_elm_interface_atspi_text_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_INTERFACE_ATSPI_TEXT_EXTRA_OPS
#define ELM_INTERFACE_ATSPI_TEXT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_character_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_string_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_caret_offset_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_caret_offset_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_attribute_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_attributes_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_default_attributes_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_character_extents_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_character_count_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_offset_at_point_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_bounded_ranges_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_range_extents_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selections_count_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selection_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selection_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selection_add, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_selection_remove, NULL),
      ELM_INTERFACE_ATSPI_TEXT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_INTERFACE_ATSPI_TEXT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_INTERFACE_ATSPI_TEXT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_interface_atspi_text_class_desc = {
   EO_VERSION,
   "Elm.Interface.Atspi.Text",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _elm_interface_atspi_text_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_interface_atspi_text_interface_get, &_elm_interface_atspi_text_class_desc, NULL, NULL);
