
void _evas_canvas3d_scene_size_set(Eo *obj, Evas_Canvas3D_Scene_Data *pd, int w, int h);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_scene_size_set, EFL_FUNC_CALL(w, h), int w, int h);

void _evas_canvas3d_scene_size_get(const Eo *obj, Evas_Canvas3D_Scene_Data *pd, int *w, int *h);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_scene_size_get, EFL_FUNC_CALL(w, h), int *w, int *h);

void _evas_canvas3d_scene_background_color_set(Eo *obj, Evas_Canvas3D_Scene_Data *pd, Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_scene_background_color_set, EFL_FUNC_CALL(r, g, b, a), Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

void _evas_canvas3d_scene_background_color_get(const Eo *obj, Evas_Canvas3D_Scene_Data *pd, Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_scene_background_color_get, EFL_FUNC_CALL(r, g, b, a), Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

Eina_Bool _evas_canvas3d_scene_pick(const Eo *obj, Evas_Canvas3D_Scene_Data *pd, Evas_Real x, Evas_Real y, Evas_Canvas3D_Node **node, Evas_Canvas3D_Mesh **mesh, Evas_Real *s, Evas_Real *t);

EOAPI EFL_FUNC_BODYV_CONST(evas_canvas3d_scene_pick, Eina_Bool, 0, EFL_FUNC_CALL(x, y, node, mesh, s, t), Evas_Real x, Evas_Real y, Evas_Canvas3D_Node **node, Evas_Canvas3D_Mesh **mesh, Evas_Real *s, Evas_Real *t);

Evas_Canvas3D_Node *_evas_canvas3d_scene_exist(const Eo *obj, Evas_Canvas3D_Scene_Data *pd, Evas_Real x, Evas_Real y, Evas_Canvas3D_Node *node);

EOAPI EFL_FUNC_BODYV_CONST(evas_canvas3d_scene_exist, Evas_Canvas3D_Node *, NULL, EFL_FUNC_CALL(x, y, node), Evas_Real x, Evas_Real y, Evas_Canvas3D_Node *node);

Eina_List *_evas_canvas3d_scene_pick_member_list_get(const Eo *obj, Evas_Canvas3D_Scene_Data *pd, Evas_Real x, Evas_Real y);

EOAPI EFL_FUNC_BODYV_CONST(evas_canvas3d_scene_pick_member_list_get, Eina_List *, NULL, EFL_FUNC_CALL(x, y), Evas_Real x, Evas_Real y);

void _evas_canvas3d_scene_shadows_enable_set(Eo *obj, Evas_Canvas3D_Scene_Data *pd, Eina_Bool shadows_enabled);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_scene_shadows_enable_set, EFL_FUNC_CALL(shadows_enabled), Eina_Bool shadows_enabled);

Eina_Bool _evas_canvas3d_scene_shadows_enable_get(const Eo *obj, Evas_Canvas3D_Scene_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_scene_shadows_enable_get, Eina_Bool, 0);

Eina_Bool _evas_canvas3d_scene_color_pick_enable_get(const Eo *obj, Evas_Canvas3D_Scene_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_scene_color_pick_enable_get, Eina_Bool, 0);

Eina_Bool _evas_canvas3d_scene_color_pick_enable_set(Eo *obj, Evas_Canvas3D_Scene_Data *pd, Eina_Bool color_pick);

EOAPI EFL_FUNC_BODYV(evas_canvas3d_scene_color_pick_enable_set, Eina_Bool, 0, EFL_FUNC_CALL(color_pick), Eina_Bool color_pick);

void _evas_canvas3d_scene_root_node_set(Eo *obj, Evas_Canvas3D_Scene_Data *pd, Evas_Canvas3D_Node *node);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_scene_root_node_set, EFL_FUNC_CALL(node), Evas_Canvas3D_Node *node);

Evas_Canvas3D_Node *_evas_canvas3d_scene_root_node_get(Eo *obj, Evas_Canvas3D_Scene_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_scene_root_node_get, Evas_Canvas3D_Node *, NULL);

void _evas_canvas3d_scene_camera_node_set(Eo *obj, Evas_Canvas3D_Scene_Data *pd, Evas_Canvas3D_Node *node);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_scene_camera_node_set, EFL_FUNC_CALL(node), Evas_Canvas3D_Node *node);

Evas_Canvas3D_Node *_evas_canvas3d_scene_camera_node_get(Eo *obj, Evas_Canvas3D_Scene_Data *pd);

EOAPI EFL_FUNC_BODY_CONST(evas_canvas3d_scene_camera_node_get, Evas_Canvas3D_Node *, NULL);

void _evas_canvas3d_scene_shadows_depth_set(Eo *obj, Evas_Canvas3D_Scene_Data *pd, Evas_Real depth_offset, Evas_Real depth_constant);

EOAPI EFL_VOID_FUNC_BODYV(evas_canvas3d_scene_shadows_depth_set, EFL_FUNC_CALL(depth_offset, depth_constant), Evas_Real depth_offset, Evas_Real depth_constant);

void _evas_canvas3d_scene_shadows_depth_get(Eo *obj, Evas_Canvas3D_Scene_Data *pd, Evas_Real *depth_offset, Evas_Real *depth_constant);

EOAPI EFL_VOID_FUNC_BODYV_CONST(evas_canvas3d_scene_shadows_depth_get, EFL_FUNC_CALL(depth_offset, depth_constant), Evas_Real *depth_offset, Evas_Real *depth_constant);

Efl_Object *_evas_canvas3d_scene_efl_object_constructor(Eo *obj, Evas_Canvas3D_Scene_Data *pd);


void _evas_canvas3d_scene_evas_canvas3d_object_update_notify(Eo *obj, Evas_Canvas3D_Scene_Data *pd);


void _evas_canvas3d_scene_evas_canvas3d_object_change_notify(Eo *obj, Evas_Canvas3D_Scene_Data *pd, Evas_Canvas3D_State state, Evas_Canvas3D_Object *ref);


static Eina_Bool
_evas_canvas3d_scene_class_initializer(Efl_Class *klass)
{
   const Efl_Object_Ops *opsp = NULL, *copsp = NULL;

#ifndef EVAS_CANVAS3D_SCENE_EXTRA_OPS
#define EVAS_CANVAS3D_SCENE_EXTRA_OPS
#endif

   EFL_OPS_DEFINE(ops,
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_size_set, _evas_canvas3d_scene_size_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_size_get, _evas_canvas3d_scene_size_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_background_color_set, _evas_canvas3d_scene_background_color_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_background_color_get, _evas_canvas3d_scene_background_color_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_pick, _evas_canvas3d_scene_pick),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_exist, _evas_canvas3d_scene_exist),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_pick_member_list_get, _evas_canvas3d_scene_pick_member_list_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_shadows_enable_set, _evas_canvas3d_scene_shadows_enable_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_shadows_enable_get, _evas_canvas3d_scene_shadows_enable_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_color_pick_enable_get, _evas_canvas3d_scene_color_pick_enable_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_color_pick_enable_set, _evas_canvas3d_scene_color_pick_enable_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_root_node_set, _evas_canvas3d_scene_root_node_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_root_node_get, _evas_canvas3d_scene_root_node_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_camera_node_set, _evas_canvas3d_scene_camera_node_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_camera_node_get, _evas_canvas3d_scene_camera_node_get),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_shadows_depth_set, _evas_canvas3d_scene_shadows_depth_set),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_scene_shadows_depth_get, _evas_canvas3d_scene_shadows_depth_get),
      EFL_OBJECT_OP_FUNC(efl_constructor, _evas_canvas3d_scene_efl_object_constructor),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_update_notify, _evas_canvas3d_scene_evas_canvas3d_object_update_notify),
      EFL_OBJECT_OP_FUNC(evas_canvas3d_object_change_notify, _evas_canvas3d_scene_evas_canvas3d_object_change_notify),
      EVAS_CANVAS3D_SCENE_EXTRA_OPS
   );
   opsp = &ops;

#ifdef EVAS_CANVAS3D_SCENE_EXTRA_CLASS_OPS
   EFL_OPS_DEFINE(cops, EVAS_CANVAS3D_SCENE_EXTRA_CLASS_OPS);
   copsp = &cops;
#endif

   return efl_class_functions_set(klass, opsp, copsp);
}

static const Efl_Class_Description _evas_canvas3d_scene_class_desc = {
   EO_VERSION,
   "Evas.Canvas3D.Scene",
   EFL_CLASS_TYPE_REGULAR,
   sizeof(Evas_Canvas3D_Scene_Data),
   _evas_canvas3d_scene_class_initializer,
   NULL,
   NULL
};

EFL_DEFINE_CLASS(evas_canvas3d_scene_class_get, &_evas_canvas3d_scene_class_desc, EVAS_CANVAS3D_OBJECT_CLASS, NULL);
