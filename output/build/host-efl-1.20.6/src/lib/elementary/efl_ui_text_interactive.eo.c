EWAPI const Efl_Event_Description _EFL_UI_TEXT_INTERACTIVE_EVENT_CHANGED_USER =
   EFL_EVENT_DESCRIPTION("changed,user");
EWAPI const Efl_Event_Description _EFL_UI_TEXT_INTERACTIVE_EVENT_SELECTION_CHANGED =
   EFL_EVENT_DESCRIPTION("selection,changed");
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_interactive_selection_allowed_set, EFL_FUNC_CALL(allowed), Eina_Bool allowed);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_interactive_selection_allowed_get, Eina_Bool, 0);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_ui_text_interactive_selection_cursors_get, EFL_FUNC_CALL(start, end), Efl_Text_Cursor_Cursor **start, Efl_Text_Cursor_Cursor **end);
EOAPI EFL_VOID_FUNC_BODYV(efl_ui_text_interactive_editable_set, EFL_FUNC_CALL(editable), Eina_Bool editable);
EOAPI EFL_FUNC_BODY_CONST(efl_ui_text_interactive_editable_get, Eina_Bool, 0);

static Eina_Bool
_efl_ui_text_interactive_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_TEXT_INTERACTIVE_EXTRA_OPS
#define EFL_UI_TEXT_INTERACTIVE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_text_interactive_selection_allowed_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_text_interactive_selection_allowed_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_text_interactive_selection_cursors_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_text_interactive_editable_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_ui_text_interactive_editable_get, NULL),
      EFL_UI_TEXT_INTERACTIVE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_TEXT_INTERACTIVE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_TEXT_INTERACTIVE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_text_interactive_class_desc = {
   EO_VERSION,
   "Efl.Ui.Text.Interactive",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_ui_text_interactive_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_text_interactive_interface_get, &_efl_ui_text_interactive_class_desc, EFL_TEXT_INTERFACE, EFL_TEXT_FONT_INTERFACE, EFL_TEXT_FORMAT_INTERFACE, EFL_TEXT_STYLE_INTERFACE, NULL);
