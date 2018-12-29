
Efl_Object *_efl_ui_internal_text_interactive_efl_object_constructor(Eo *obj, Efl_Ui_Internal_Text_Interactive_Data *pd);


Efl_Object *_efl_ui_internal_text_interactive_efl_object_finalize(Eo *obj, Efl_Ui_Internal_Text_Interactive_Data *pd);


void _efl_ui_internal_text_interactive_efl_ui_text_interactive_selection_allowed_set(Eo *obj, Efl_Ui_Internal_Text_Interactive_Data *pd, Eina_Bool allowed);


Eina_Bool _efl_ui_internal_text_interactive_efl_ui_text_interactive_selection_allowed_get(Eo *obj, Efl_Ui_Internal_Text_Interactive_Data *pd);


void _efl_ui_internal_text_interactive_efl_ui_text_interactive_selection_cursors_get(Eo *obj, Efl_Ui_Internal_Text_Interactive_Data *pd, Efl_Text_Cursor_Cursor **start, Efl_Text_Cursor_Cursor **end);


void _efl_ui_internal_text_interactive_efl_ui_text_interactive_editable_set(Eo *obj, Efl_Ui_Internal_Text_Interactive_Data *pd, Eina_Bool editable);


Eina_Bool _efl_ui_internal_text_interactive_efl_ui_text_interactive_editable_get(Eo *obj, Efl_Ui_Internal_Text_Interactive_Data *pd);


static Eina_Bool
_efl_ui_internal_text_interactive_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_INTERNAL_TEXT_INTERACTIVE_EXTRA_OPS
#define EFL_UI_INTERNAL_TEXT_INTERACTIVE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_constructor, _efl_ui_internal_text_interactive_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_finalize, _efl_ui_internal_text_interactive_efl_object_finalize),
      EFL_OBJECT_OP_FUNC(efl_ui_text_interactive_selection_allowed_set, _efl_ui_internal_text_interactive_efl_ui_text_interactive_selection_allowed_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_interactive_selection_allowed_get, _efl_ui_internal_text_interactive_efl_ui_text_interactive_selection_allowed_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_interactive_selection_cursors_get, _efl_ui_internal_text_interactive_efl_ui_text_interactive_selection_cursors_get),
      EFL_OBJECT_OP_FUNC(efl_ui_text_interactive_editable_set, _efl_ui_internal_text_interactive_efl_ui_text_interactive_editable_set),
      EFL_OBJECT_OP_FUNC(efl_ui_text_interactive_editable_get, _efl_ui_internal_text_interactive_efl_ui_text_interactive_editable_get),
      EFL_UI_INTERNAL_TEXT_INTERACTIVE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_INTERNAL_TEXT_INTERACTIVE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_INTERNAL_TEXT_INTERACTIVE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_internal_text_interactive_class_desc = {
   EO_VERSION,
   "Efl.Ui.Internal.Text.Interactive",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Internal_Text_Interactive_Data),
   _efl_ui_internal_text_interactive_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_internal_text_interactive_class_get, &_efl_ui_internal_text_interactive_class_desc, EFL_CANVAS_TEXT_CLASS, EFL_UI_TEXT_INTERACTIVE_INTERFACE, NULL);
