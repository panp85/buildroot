#ifndef _EFL_CANVAS_SCENE3D_EO_H_
#define _EFL_CANVAS_SCENE3D_EO_H_

#ifndef _EFL_CANVAS_SCENE3D_EO_CLASS_TYPE
#define _EFL_CANVAS_SCENE3D_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Scene3d;

#endif

#ifndef _EFL_CANVAS_SCENE3D_EO_TYPES
#define _EFL_CANVAS_SCENE3D_EO_TYPES


#endif
/** A UI view for EFL Canvas 3D.
 *
 * @ingroup Efl_Canvas_Scene3d
 */
#define EFL_CANVAS_SCENE3D_CLASS efl_canvas_scene3d_class_get()

EWAPI const Efl_Class *efl_canvas_scene3d_class_get(void);

/**
 * @brief The 3d scene to display in this view.
 *
 * @param[in] scene 3D scene.
 *
 * @since 1.10
 *
 * @ingroup Efl_Canvas_Scene3d
 */
EOAPI void efl_canvas_scene3d_set(Eo *obj, Evas_Canvas3D_Scene *scene);

/**
 * @brief The 3d scene to display in this view.
 *
 * @return 3D scene.
 *
 * @since 1.10
 *
 * @ingroup Efl_Canvas_Scene3d
 */
EOAPI Evas_Canvas3D_Scene *efl_canvas_scene3d_get(const Eo *obj);

#endif
