
void _evas_canvas3d_camera_projection_matrix_set(Eo *obj, Evas_Canvas3D_Camera_Data *pd, const Evas_Real *matrix);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_camera_projection_matrix_set, EFL_FUNC_CALL(matrix), const Evas_Real *matrix);

void _evas_canvas3d_camera_projection_matrix_get(const Eo *obj, Evas_Canvas3D_Camera_Data *pd, Evas_Real *matrix);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_camera_projection_matrix_get, EFL_FUNC_CALL(matrix), Evas_Real *matrix);

void _evas_canvas3d_camera_projection_perspective_set(Eo *obj, Evas_Canvas3D_Camera_Data *pd, Evas_Real fovy, Evas_Real aspect, Evas_Real dnear, Evas_Real dfar);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_camera_projection_perspective_set, EFL_FUNC_CALL(fovy, aspect, dnear, dfar), Evas_Real fovy, Evas_Real aspect, Evas_Real dnear, Evas_Real dfar);

void _evas_canvas3d_camera_projection_frustum_set(Eo *obj, Evas_Canvas3D_Camera_Data *pd, Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_camera_projection_frustum_set, EFL_FUNC_CALL(left, right, bottom, top, dnear, dfar), Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);

void _evas_canvas3d_camera_projection_ortho_set(Eo *obj, Evas_Canvas3D_Camera_Data *pd, Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_camera_projection_ortho_set, EFL_FUNC_CALL(left, right, bottom, top, dnear, dfar), Evas_Real left, Evas_Real right, Evas_Real bottom, Evas_Real top, Evas_Real dnear, Evas_Real dfar);

Eina_Bool _evas_canvas3d_camera_node_visible_get(Eo *obj, Evas_Canvas3D_Camera_Data *pd, Evas_Canvas3D_Node *camera_node, Evas_Canvas3D_Node *node, Evas_Canvas3D_Frustum_Mode key);

EOAPI EFL_FUNC_BODYV(evas_canvas3d_camera_node_visible_get, Eina_Bool, 0, EFL_FUNC_CALL(camera_node, node, key), Evas_Canvas3D_Node *camera_node, Evas_Canvas3D_Node *node, Evas_Canvas3D_Frustum_Mode key);

Efl_Object *_evas_canvas3d_camera_efl_object_constructor(Eo *obj, Evas_Canvas3D_Camera_Data *pd);


void _evas_canvas3d_camera_efl_object_destructor(Eo *obj, Evas_Canvas3D_Camera_Data *pd);


void _evas_canvas3d_camera_evas_canvas3d_object_update_notify(Eo *obj, Evas_Canvas3D_Camera_Data *pd);


void _evas_canvas3d_camera_evas_canvas3d_object_change_notify(Eo *obj, Evas_Canvas3D_Camera_Data *pd, Evas_Canvas3D_State state, Evas_Canvas3D_Object *ref);


static Eina_Bool
_evas_canvas3d_camera_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_CANVAS3D_CAMERA_EXTRA_OPS
#define EVAS_CANVAS3D_CAMERA_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_canvas3d_camera_projection_matrix_set, _evas_canvas3d_camera_projection_matrix_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_camera_projection_matrix_get, _evas_canvas3d_camera_projection_matrix_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_camera_projection_perspective_set, _evas_canvas3d_camera_projection_perspective_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_camera_projection_frustum_set, _evas_canvas3d_camera_projection_frustum_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_camera_projection_ortho_set, _evas_canvas3d_camera_projection_ortho_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_camera_node_visible_get, _evas_canvas3d_camera_node_visible_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _evas_canvas3d_camera_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(efl_destructor, _evas_canvas3d_camera_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_update_notify, _evas_canvas3d_camera_evas_canvas3d_object_update_notify),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_change_notify, _evas_canvas3d_camera_evas_canvas3d_object_change_notify),
      EVAS_CANVAS3D_CAMERA_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_CANVAS3D_CAMERA_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_CANVAS3D_CAMERA_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_canvas3d_camera_class_desc = {
   EO_VERSION,
   "Evas.Canvas3D.Camera",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Canvas3D_Camera_Data),
   _evas_canvas3d_camera_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_canvas3d_camera_class_get, &_evas_canvas3d_camera_class_desc, EVAS_CANVAS3D_OBJECT_CLASS, NULL);
