
void _efl_ui_box_stack_efl_pack_layout_layout_update(Eo *obj, void *pd);


static Eina_Bool
_efl_ui_box_stack_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_UI_BOX_STACK_EXTRA_OPS
#define EFL_UI_BOX_STACK_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_pack_layout_update, _efl_ui_box_stack_efl_pack_layout_layout_update),
      EFL_UI_BOX_STACK_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_UI_BOX_STACK_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_UI_BOX_STACK_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_ui_box_stack_class_desc = {
   EO_VERSION,
   "Efl.Ui.Box.Stack",
   EFL_CLASS_TYPE_REGULAR,
   0,
   _efl_ui_box_stack_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_ui_box_stack_class_get, &_efl_ui_box_stack_class_desc, EFL_UI_BOX_CLASS, EFL_PACK_LAYOUT_INTERFACE, NULL);
