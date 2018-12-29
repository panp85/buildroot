
void _efl_ui_box_flow_box_flow_homogenous_set(Eo *obj, Efl_Ui_Box_Flow_Data *pd, Eina_Bool val);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_box_flow_homogenous_set, EFL_FUNC_CALL(val), Eina_Bool val);

Eina_Bool _efl_ui_box_flow_box_flow_homogenous_get(Eo *obj, Efl_Ui_Box_Flow_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_box_flow_homogenous_get, Eina_Bool, 0);

void _efl_ui_box_flow_box_flow_max_size_set(Eo *obj, Efl_Ui_Box_Flow_Data *pd, Eina_Bool val);

EOAPI EFL_VOID_FUNC_BODYV(efl_ui_box_flow_max_size_set, EFL_FUNC_CALL(val), Eina_Bool val);

Eina_Bool _efl_ui_box_flow_box_flow_max_size_get(Eo *obj, Efl_Ui_Box_Flow_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(efl_ui_box_flow_max_size_get, Eina_Bool, 0);

void _efl_ui_box_flow_efl_pack_layout_layout_update(Eo *obj, Efl_Ui_Box_Flow_Data *pd);


static Eina_Bool
_efl_ui_box_flow_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_BOX_FLOW_EXTRA_OPS
#define EFL_UI_BOX_FLOW_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_ui_box_flow_homogenous_set, _efl_ui_box_flow_box_flow_homogenous_set),
      EFL_OBJECT_OP_FUNC(efl_ui_box_flow_homogenous_get, _efl_ui_box_flow_box_flow_homogenous_get),
      EFL_OBJECT_OP_FUNC(efl_ui_box_flow_max_size_set, _efl_ui_box_flow_box_flow_max_size_set),
      EFL_OBJECT_OP_FUNC(efl_ui_box_flow_max_size_get, _efl_ui_box_flow_box_flow_max_size_get),
      EFL_OBJECT_OP_FUNC(efl_pack_layout_update, _efl_ui_box_flow_efl_pack_layout_layout_update),
      EFL_UI_BOX_FLOW_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_BOX_FLOW_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_BOX_FLOW_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_box_flow_class_desc = {
   EO_VERSION,
   "Efl.Ui.Box.Flow",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Efl_Ui_Box_Flow_Data),
   _efl_ui_box_flow_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_box_flow_class_get, &_efl_ui_box_flow_class_desc, EFL_UI_BOX_CLASS, EFL_PACK_LAYOUT_INTERFACE, NULL);
