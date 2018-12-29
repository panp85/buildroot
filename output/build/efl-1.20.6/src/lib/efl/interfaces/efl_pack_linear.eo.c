EOAPI EFL_FUNC_BODYV(efl_pack_begin, Eina_Bool, 0, EFL_FUNC_CALL(subobj), Efl_Gfx *subobj);
EOAPI EFL_FUNC_BODYV(efl_pack_end, Eina_Bool, 0, EFL_FUNC_CALL(subobj), Efl_Gfx *subobj);
EOAPI EFL_FUNC_BODYV(efl_pack_before, Eina_Bool, 0, EFL_FUNC_CALL(subobj, existing), Efl_Gfx *subobj, const Efl_Gfx *existing);
EOAPI EFL_FUNC_BODYV(efl_pack_after, Eina_Bool, 0, EFL_FUNC_CALL(subobj, existing), Efl_Gfx *subobj, const Efl_Gfx *existing);
EOAPI EFL_FUNC_BODYV(efl_pack_at, Eina_Bool, 0, EFL_FUNC_CALL(subobj, index), Efl_Gfx *subobj, int index);
EOAPI EFL_FUNC_BODYV(efl_pack_content_get, Efl_Gfx *, NULL, EFL_FUNC_CALL(index), int index);
EOAPI EFL_FUNC_BODYV(efl_pack_index_get, int, -1 /* +1 */, EFL_FUNC_CALL(subobj), const Efl_Gfx *subobj);
EOAPI EFL_FUNC_BODYV(efl_pack_unpack_at, Efl_Gfx *, NULL, EFL_FUNC_CALL(index), int index);

static Eina_Bool
_efl_pack_linear_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EFL_PACK_LINEAR_EXTRA_OPS
#define EFL_PACK_LINEAR_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(efl_pack_begin, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_end, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_before, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_after, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_at, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_content_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_index_get, NULL),
      EFL_OBJECT_OP_FUNC(efl_pack_unpack_at, NULL),
      EFL_PACK_LINEAR_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EFL_PACK_LINEAR_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EFL_PACK_LINEAR_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _efl_pack_linear_class_desc = {
   EO_VERSION,
   "Efl.Pack.Linear",
   EFL_CLASS_TYPE_INTERFACE,
   0,
   _efl_pack_linear_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(efl_pack_linear_interface_get, &_efl_pack_linear_class_desc, EFL_PACK_INTERFACE, NULL);
