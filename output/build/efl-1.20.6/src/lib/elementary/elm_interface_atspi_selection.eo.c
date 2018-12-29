EWAPI const Efl_Event_Description _ELM_INTERFACE_ATSPI_SELECTION_EVENT_SELECTION_CHANGED =
   EFL_EVENT_DESCRIPTION("selection,changed");
EOAPI EFL_FUNC_BODY_CONST(elm_interface_atspi_selection_selected_children_count_get, int, 0);
EOAPI EFL_FUNC_BODYV_CONST(elm_interface_atspi_selection_selected_child_get, Efl_Object *, NULL, EFL_FUNC_CALL(selected_child_index), int selected_child_index);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_selection_child_select, Eina_Bool, 0, EFL_FUNC_CALL(child_index), int child_index);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_selection_selected_child_deselect, Eina_Bool, 0, EFL_FUNC_CALL(child_index), int child_index);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_selection_is_child_selected, Eina_Bool, 0, EFL_FUNC_CALL(child_index), int child_index);
EOAPI EFL_FUNC_BODY(elm_interface_atspi_selection_all_children_select, Eina_Bool, 0);
EOAPI EFL_FUNC_BODY(elm_interface_atspi_selection_clear, Eina_Bool, 0);
EOAPI EFL_FUNC_BODYV(elm_interface_atspi_selection_child_deselect, Eina_Bool, 0, EFL_FUNC_CALL(child_index), int child_index);

static Eina_Bool
_elm_interface_atspi_selection_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef ELM_INTERFACE_ATSPI_SELECTION_EXTRA_OPS
#define ELM_INTERFACE_ATSPI_SELECTION_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_children_count_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_child_get, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_child_select, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_selected_child_deselect, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_is_child_selected, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_all_children_select, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_clear, NULL),
      EFL_OBJECT_OP_FUNC(elm_interface_atspi_selection_child_deselect, NULL),
      ELM_INTERFACE_ATSPI_SELECTION_EXTRA_OPS
   );
   opsp = &ops;

#ifdef ELM_INTERFACE_ATSPI_SELECTION_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, ELM_INTERFACE_ATSPI_SELECTION_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _elm_interface_atspi_selection_class_desc = {
   EO_VERSION,
   "Elm.Interface.Atspi.Selection",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _elm_interface_atspi_selection_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(elm_interface_atspi_selection_interface_get, &_elm_interface_atspi_selection_class_desc, NULL, NULL);
