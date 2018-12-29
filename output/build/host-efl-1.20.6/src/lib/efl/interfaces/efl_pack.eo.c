EWAPI const Efl_Event_Description _EFL_PACK_EVENT_LAYOUT_UPDATED =
   EFL_EVENT_DESCRIPTION("layout,updated");
EOAPI EFL_FUNC_BODY(efl_pack_clear, Eina_Bool, 0);
EOAPI EFL_FUNC_BODY(efl_pack_unpack_all, Eina_Bool, 0);
EOAPI EFL_FUNC_BODYV(efl_pack_unpack, Eina_Bool, 0, EFL_FUNC_CALL(subobj), Efl_Gfx *subobj);
EOAPI EFL_FUNC_BODYV(efl_pack, Eina_Bool, 0, EFL_FUNC_CALL(subobj), Efl_Gfx *subobj);
EOAPI EFL_VOID_FUNC_BODYV(efl_pack_align_set, EFL_FUNC_CALL(align_horiz, align_vert), double align_horiz, double align_vert);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_pack_align_get, EFL_FUNC_CALL(align_horiz, align_vert), double *align_horiz, double *align_vert);
EOAPI EFL_VOID_FUNC_BODYV(efl_pack_padding_set, EFL_FUNC_CALL(pad_horiz, pad_vert, scalable), double pad_horiz, double pad_vert, Eina_Bool scalable);
EOAPI EFL_VOID_FUNC_BODYV_CONST(efl_pack_padding_get, EFL_FUNC_CALL(pad_horiz, pad_vert, scalable), double *pad_horiz, double *pad_vert, Eina_Bool *scalable);

static Eina_Bool
_efl_pack_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_PACK_EXTRA_OPS
#define EFL_PACK_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_pack_clear, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack_all, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_align_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_align_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_padding_set, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_padding_get, NULL),
      EFL_PACK_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_PACK_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_PACK_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_pack_class_desc = {
   EO_VERSION,
   "Efl.Pack",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_pack_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_pack_interface_get, &_efl_pack_class_desc, EFL_CONTAINER_INTERFACE, NULL);
