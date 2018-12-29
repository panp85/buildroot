EOAPI EFL_FUNC_BODYV(elm_interface_atspi_text_editable_content_set, Eina_Bool, 0, EFL_FUNC_CALL(string), const char *string);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_text_editable_insert, Eina_Bool, 0, EFL_FUNC_CALL(string, position), const char *string, int position);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_text_editable_copy, Eina_Bool, 0, EFL_FUNC_CALL(start, end), int start, int end);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_text_editable_cut, Eina_Bool, 0, EFL_FUNC_CALL(start, end), int start, int end);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_text_editable_delete, Eina_Bool, 0, EFL_FUNC_CALL(start, end), int start, int end);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_text_editable_paste, Eina_Bool, 0, EFL_FUNC_CALL(position), int position);

static Eina_Bool
_elm_interface_atspi_text_editable_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_INTERFACE_ATSPI_TEXT_EDITABLE_EXTRA_OPS
#define ELM_INTERFACE_ATSPI_TEXT_EDITABLE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_content_set, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_insert, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_copy, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_cut, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_delete, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_text_editable_paste, NULL),
      ELM_INTERFACE_ATSPI_TEXT_EDITABLE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_INTERFACE_ATSPI_TEXT_EDITABLE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_INTERFACE_ATSPI_TEXT_EDITABLE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_interface_atspi_text_editable_class_desc = {
   EO_VERSION,
   "Elm.Interface.Atspi.Text.Editable",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _elm_interface_atspi_text_editable_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_interface_atspi_text_editable_interface_get, &_elm_interface_atspi_text_editable_class_desc, NULL, NULL);
