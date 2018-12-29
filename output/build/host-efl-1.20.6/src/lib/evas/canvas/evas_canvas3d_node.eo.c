
void _evas_canvas3d_node_constructor(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_Node_Type type);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_constructor, EFL_FUNC_CALL(type), Evas_Canvas3D_Node_Type type);

Evas_Canvas3D_Node_Type _evas_canvas3d_node_type_get(const Eo *obj, Evas_Canvas3D_Node_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_node_type_get, Evas_Canvas3D_Node_Type, 0);

void _evas_canvas3d_node_member_add(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_Node *member);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_member_add, EFL_FUNC_CALL(member), Evas_Canvas3D_Node *member);

void _evas_canvas3d_node_member_del(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_Node *member);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_member_del, EFL_FUNC_CALL(member), Evas_Canvas3D_Node *member);

Evas_Canvas3D_Node *_evas_canvas3d_node_parent_get(const Eo *obj, Evas_Canvas3D_Node_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_node_parent_get, Evas_Canvas3D_Node *, NULL);

const Eina_List *_evas_canvas3d_node_member_list_get(const Eo *obj, Evas_Canvas3D_Node_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_node_member_list_get, const Eina_List *, NULL);

Eina_Hash *_evas_canvas3d_node_scene_root_get(Eo *obj, Evas_Canvas3D_Node_Data *pd);

EOAPI EFL_FUNC_BODY(evas_canvas3d_node_scene_root_get, Eina_Hash *, NULL);

void _evas_canvas3d_node_position_set(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Real x, Evas_Real y, Evas_Real z);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_position_set, EFL_FUNC_CALL(x, y, z), Evas_Real x, Evas_Real y, Evas_Real z);

void _evas_canvas3d_node_orientation_set(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Real x, Evas_Real y, Evas_Real z, Evas_Real w);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_orientation_set, EFL_FUNC_CALL(x, y, z, w), Evas_Real x, Evas_Real y, Evas_Real z, Evas_Real w);

void _evas_canvas3d_node_orientation_angle_axis_set(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Real angle, Evas_Real x, Evas_Real y, Evas_Real z);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_orientation_angle_axis_set, EFL_FUNC_CALL(angle, x, y, z), Evas_Real angle, Evas_Real x, Evas_Real y, Evas_Real z);

void _evas_canvas3d_node_scale_set(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Real x, Evas_Real y, Evas_Real z);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_scale_set, EFL_FUNC_CALL(x, y, z), Evas_Real x, Evas_Real y, Evas_Real z);

void _evas_canvas3d_node_position_get(const Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_node_position_get, EFL_FUNC_CALL(space, x, y, z), Evas_Canvas3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z);

void _evas_canvas3d_node_orientation_get(const Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z, Evas_Real *w);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_node_orientation_get, EFL_FUNC_CALL(space, x, y, z, w), Evas_Canvas3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z, Evas_Real *w);

void _evas_canvas3d_node_scale_get(const Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_node_scale_get, EFL_FUNC_CALL(space, x, y, z), Evas_Canvas3D_Space space, Evas_Real *x, Evas_Real *y, Evas_Real *z);

void _evas_canvas3d_node_look_at_set(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_Space target_space, Evas_Real x, Evas_Real y, Evas_Real z, Evas_Canvas3D_Space up_space, Evas_Real ux, Evas_Real uy, Evas_Real uz);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_look_at_set, EFL_FUNC_CALL(target_space, x, y, z, up_space, ux, uy, uz), Evas_Canvas3D_Space target_space, Evas_Real x, Evas_Real y, Evas_Real z, Evas_Canvas3D_Space up_space, Evas_Real ux, Evas_Real uy, Evas_Real uz);

void _evas_canvas3d_node_mesh_add(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_Mesh *mesh);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_mesh_add, EFL_FUNC_CALL(mesh), Evas_Canvas3D_Mesh *mesh);

void _evas_canvas3d_node_mesh_del(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_Mesh *mesh);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_mesh_del, EFL_FUNC_CALL(mesh), Evas_Canvas3D_Mesh *mesh);

const Eina_List *_evas_canvas3d_node_mesh_list_get(const Eo *obj, Evas_Canvas3D_Node_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_node_mesh_list_get, const Eina_List *, NULL);

void _evas_canvas3d_node_bounding_box_get(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Real *x, Evas_Real *y, Evas_Real *z, Evas_Real *x2, Evas_Real *y2, Evas_Real *z2);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_bounding_box_get, EFL_FUNC_CALL(x, y, z, x2, y2, z2), Evas_Real *x, Evas_Real *y, Evas_Real *z, Evas_Real *x2, Evas_Real *y2, Evas_Real *z2);

void _evas_canvas3d_node_bounding_sphere_get(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Real *x, Evas_Real *y, Evas_Real *z, Evas_Real *r);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_bounding_sphere_get, EFL_FUNC_CALL(x, y, z, r), Evas_Real *x, Evas_Real *y, Evas_Real *z, Evas_Real *r);

void _evas_canvas3d_node_position_inherit_set(Eo *obj, Evas_Canvas3D_Node_Data *pd, Eina_Bool inherit);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_position_inherit_set, EFL_FUNC_CALL(inherit), Eina_Bool inherit);

Eina_Bool _evas_canvas3d_node_position_inherit_get(Eo *obj, Evas_Canvas3D_Node_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_node_position_inherit_get, Eina_Bool, 0);

void _evas_canvas3d_node_orientation_inherit_set(Eo *obj, Evas_Canvas3D_Node_Data *pd, Eina_Bool inherit);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_orientation_inherit_set, EFL_FUNC_CALL(inherit), Eina_Bool inherit);

Eina_Bool _evas_canvas3d_node_orientation_inherit_get(Eo *obj, Evas_Canvas3D_Node_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_node_orientation_inherit_get, Eina_Bool, 0);

void _evas_canvas3d_node_scale_inherit_set(Eo *obj, Evas_Canvas3D_Node_Data *pd, Eina_Bool inherit);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_scale_inherit_set, EFL_FUNC_CALL(inherit), Eina_Bool inherit);

Eina_Bool _evas_canvas3d_node_scale_inherit_get(Eo *obj, Evas_Canvas3D_Node_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_node_scale_inherit_get, Eina_Bool, 0);

void _evas_canvas3d_node_camera_set(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_Object *camera);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_camera_set, EFL_FUNC_CALL(camera), Evas_Canvas3D_Object *camera);

Evas_Canvas3D_Object *_evas_canvas3d_node_camera_get(Eo *obj, Evas_Canvas3D_Node_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_node_camera_get, Evas_Canvas3D_Object *, NULL);

void _evas_canvas3d_node_light_set(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_Light *light);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_light_set, EFL_FUNC_CALL(light), Evas_Canvas3D_Light *light);

Evas_Canvas3D_Light *_evas_canvas3d_node_light_get(Eo *obj, Evas_Canvas3D_Node_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_node_light_get, Evas_Canvas3D_Light *, NULL);

void _evas_canvas3d_node_mesh_frame_set(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_Mesh *mesh, int frame);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_mesh_frame_set, EFL_FUNC_CALL(mesh, frame), Evas_Canvas3D_Mesh *mesh, int frame);

int _evas_canvas3d_node_mesh_frame_get(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_Mesh *mesh);

EOAPI EFL_FUNC_BODYV_CONST(evas_canvas3d_node_mesh_frame_get, int, 0, EFL_FUNC_CALL(mesh), Evas_Canvas3D_Mesh *mesh);

void _evas_canvas3d_node_billboard_target_set(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_Node *target);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_billboard_target_set, EFL_FUNC_CALL(target), Evas_Canvas3D_Node *target);

Evas_Canvas3D_Node *_evas_canvas3d_node_billboard_target_get(Eo *obj, Evas_Canvas3D_Node_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_node_billboard_target_get, Evas_Canvas3D_Node *, NULL);

void _evas_canvas3d_node_lod_enable_set(Eo *obj, Evas_Canvas3D_Node_Data *pd, Eina_Bool enable);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_node_lod_enable_set, EFL_FUNC_CALL(enable), Eina_Bool enable);

Eina_Bool _evas_canvas3d_node_lod_enable_get(Eo *obj, Evas_Canvas3D_Node_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_node_lod_enable_get, Eina_Bool, 0);

void _evas_canvas3d_node_efl_object_destructor(Eo *obj, Evas_Canvas3D_Node_Data *pd);


void _evas_canvas3d_node_evas_canvas3d_object_update_notify(Eo *obj, Evas_Canvas3D_Node_Data *pd);


void _evas_canvas3d_node_evas_canvas3d_object_change_notify(Eo *obj, Evas_Canvas3D_Node_Data *pd, Evas_Canvas3D_State state, Evas_Canvas3D_Object *ref);


void _evas_canvas3d_node_evas_canvas3d_object_callback_register(Eo *obj, Evas_Canvas3D_Node_Data *pd, const char *event, const void *data);


void _evas_canvas3d_node_evas_canvas3d_object_callback_unregister(Eo *obj, Evas_Canvas3D_Node_Data *pd, const char *event);


static Eina_Bool
_evas_canvas3d_node_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_CANVAS3D_NODE_EXTRA_OPS
#define EVAS_CANVAS3D_NODE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_constructor, _evas_canvas3d_node_constructor),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_type_get, _evas_canvas3d_node_type_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_member_add, _evas_canvas3d_node_member_add),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_member_del, _evas_canvas3d_node_member_del),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_parent_get, _evas_canvas3d_node_parent_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_member_list_get, _evas_canvas3d_node_member_list_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_scene_root_get, _evas_canvas3d_node_scene_root_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_position_set, _evas_canvas3d_node_position_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_orientation_set, _evas_canvas3d_node_orientation_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_orientation_angle_axis_set, _evas_canvas3d_node_orientation_angle_axis_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_scale_set, _evas_canvas3d_node_scale_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_position_get, _evas_canvas3d_node_position_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_orientation_get, _evas_canvas3d_node_orientation_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_scale_get, _evas_canvas3d_node_scale_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_look_at_set, _evas_canvas3d_node_look_at_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_mesh_add, _evas_canvas3d_node_mesh_add),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_mesh_del, _evas_canvas3d_node_mesh_del),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_mesh_list_get, _evas_canvas3d_node_mesh_list_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_bounding_box_get, _evas_canvas3d_node_bounding_box_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_bounding_sphere_get, _evas_canvas3d_node_bounding_sphere_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_position_inherit_set, _evas_canvas3d_node_position_inherit_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_position_inherit_get, _evas_canvas3d_node_position_inherit_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_orientation_inherit_set, _evas_canvas3d_node_orientation_inherit_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_orientation_inherit_get, _evas_canvas3d_node_orientation_inherit_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_scale_inherit_set, _evas_canvas3d_node_scale_inherit_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_scale_inherit_get, _evas_canvas3d_node_scale_inherit_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_camera_set, _evas_canvas3d_node_camera_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_camera_get, _evas_canvas3d_node_camera_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_light_set, _evas_canvas3d_node_light_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_light_get, _evas_canvas3d_node_light_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_mesh_frame_set, _evas_canvas3d_node_mesh_frame_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_mesh_frame_get, _evas_canvas3d_node_mesh_frame_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_billboard_target_set, _evas_canvas3d_node_billboard_target_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_billboard_target_get, _evas_canvas3d_node_billboard_target_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_lod_enable_set, _evas_canvas3d_node_lod_enable_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_node_lod_enable_get, _evas_canvas3d_node_lod_enable_get),
      EFL_OBJECT_OP_FUNC(efl_destructor, _evas_canvas3d_node_efl_object_destructor),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_update_notify, _evas_canvas3d_node_evas_canvas3d_object_update_notify),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_change_notify, _evas_canvas3d_node_evas_canvas3d_object_change_notify),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_callback_register, _evas_canvas3d_node_evas_canvas3d_object_callback_register),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_callback_unregister, _evas_canvas3d_node_evas_canvas3d_object_callback_unregister),
      EVAS_CANVAS3D_NODE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_CANVAS3D_NODE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_CANVAS3D_NODE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_canvas3d_node_class_desc = {
   EO_VERSION,
   "Evas.Canvas3D.Node",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Canvas3D_Node_Data),
   _evas_canvas3d_node_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_canvas3d_node_class_get, &_evas_canvas3d_node_class_desc, EVAS_CANVAS3D_OBJECT_CLASS, NULL);
