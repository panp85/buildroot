EOAPI EFL_VOID_FUNC_BODY(efl_pack_layout_request);
EOAPI EFL_VOID_FUNC_BODY(efl_pack_layout_update);

static Eina_Bool
_efl_pack_layout_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_PACK_LAYOUT_EXTRA_OPS
#define EFL_PACK_LAYOUT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_pack_layout_request, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_layout_update, NULL),
      EFL_PACK_LAYOUT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_PACK_LAYOUT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_PACK_LAYOUT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_pack_layout_class_desc = {
   EO_VERSION,
   "Efl.Pack.Layout",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_pack_layout_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_pack_layout_interface_get, &_efl_pack_layout_class_desc, NULL, NULL);
