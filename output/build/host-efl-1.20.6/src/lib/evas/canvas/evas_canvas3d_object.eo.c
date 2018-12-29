EWAPI const Efl_Event_Description _EVAS_CANVAS3D_OBJECT_EVENT_CLICKED =
   EFL_EVENT_DESCRIPTION("clicked");
EWAPI const Efl_Event_Description _EVAS_CANVAS3D_OBJECT_EVENT_COLLISION =
   EFL_EVENT_DESCRIPTION("collision");

void _evas_canvas3d_object_change(Eo *obj, Evas_Canvas3D_Object_Data *pd, Evas_Canvas3D_State state, Evas_Canvas3D_Object *ref);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_object_change, EFL_FUNC_CALL(state, ref), Evas_Canvas3D_State state, Evas_Canvas3D_Object *ref);

Evas_Canvas3D_Object_Type _evas_canvas3d_object_type_get(const Eo *obj, Evas_Canvas3D_Object_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_object_type_get, Evas_Canvas3D_Object_Type, 0);

void _evas_canvas3d_object_type_set(Eo *obj, Evas_Canvas3D_Object_Data *pd, Evas_Canvas3D_Object_Type type);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_object_type_set, EFL_FUNC_CALL(type), Evas_Canvas3D_Object_Type type);

Eina_Bool _evas_canvas3d_object_dirty_get(const Eo *obj, Evas_Canvas3D_Object_Data *pd, Evas_Canvas3D_State state);

EOAPI EFL_FUNC_BODYV_CONST(evas_canvas3d_object_dirty_get, Eina_Bool, 0, EFL_FUNC_CALL(state), Evas_Canvas3D_State state);

void _evas_canvas3d_object_update(Eo *obj, Evas_Canvas3D_Object_Data *pd);

EOAPI EFL_VOID_FUNC_BODY(evas_canvas3d_object_update);
EOAPI EFL_VOID_FUNC_BODY(evas_canvas3d_object_update_notify);
EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_object_change_notify, EFL_FUNC_CALL(state, ref), Evas_Canvas3D_State state, Evas_Canvas3D_Object *ref);
EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_object_callback_register, EFL_FUNC_CALL(event, data), const char *event, const void *data);
EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_object_callback_unregister, EFL_FUNC_CALL(event), const char *event);

Efl_Object *_evas_canvas3d_object_efl_object_constructor(Eo *obj, Evas_Canvas3D_Object_Data *pd);


Efl_Object *_evas_canvas3d_object_efl_object_provider_find(Eo *obj, Evas_Canvas3D_Object_Data *pd, const Efl_Object *klass);


static Eina_Bool
_evas_canvas3d_object_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_CANVAS3D_OBJECT_EXTRA_OPS
#define EVAS_CANVAS3D_OBJECT_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_change, _evas_canvas3d_object_change),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_type_get, _evas_canvas3d_object_type_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_type_set, _evas_canvas3d_object_type_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_dirty_get, _evas_canvas3d_object_dirty_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_update, _evas_canvas3d_object_update),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_update_notify, NULL),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_change_notify, NULL),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_callback_register, NULL),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_callback_unregister, NULL),
      EFL_OBJECT_OP_FUNC(efl_constructor, _evas_canvas3d_object_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_provider_find, _evas_canvas3d_object_efl_object_provider_find),
      EVAS_CANVAS3D_OBJECT_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_CANVAS3D_OBJECT_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_CANVAS3D_OBJECT_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_canvas3d_object_class_desc = {
   EO_VERSION,
   "Evas.Canvas3D.Object",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Canvas3D_Object_Data),
   _evas_canvas3d_object_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_canvas3d_object_class_get, &_evas_canvas3d_object_class_desc, EFL_OBJECT_CLASS, NULL);
