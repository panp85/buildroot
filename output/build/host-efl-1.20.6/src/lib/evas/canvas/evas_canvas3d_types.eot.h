#ifndef _EVAS_CANVAS3D_TYPES_EOT_H_
#define _EVAS_CANVAS3D_TYPES_EOT_H_

#ifndef _EVAS_CANVAS3D_TYPES_EOT_TYPES
#define _EVAS_CANVAS3D_TYPES_EOT_TYPES

/** A type for floating value
 *
 * @ingroup Evas
 */
typedef double Evas_Real;

/** Type of 3D Object
 *
 * @since 1.10
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_OBJECT_TYPE_INVALID = 0, /**< Evas 3D type: invalid */
  EVAS_CANVAS3D_OBJECT_TYPE_SCENE, /**< Evas 3D type: scene */
  EVAS_CANVAS3D_OBJECT_TYPE_NODE, /**< Evas 3D type: node */
  EVAS_CANVAS3D_OBJECT_TYPE_CAMERA, /**< Evas 3D type: camera */
  EVAS_CANVAS3D_OBJECT_TYPE_LIGHT, /**< Evas 3D type: light */
  EVAS_CANVAS3D_OBJECT_TYPE_MODEL, /**< Evas 3D type: model */
  EVAS_CANVAS3D_OBJECT_TYPE_MESH, /**< Evas 3D type: mesh */
  EVAS_CANVAS3D_OBJECT_TYPE_TEXTURE, /**< Evas 3D type: texture */
  EVAS_CANVAS3D_OBJECT_TYPE_MATERIAL, /**< Evas 3D type: material */
  EVAS_CANVAS3D_OBJECT_TYPE_PRIMITIVE /**< Evas 3D type: primitive
                                       *
                                       * @since 1.15 */
} Evas_Canvas3D_Object_Type;

/** State of the Evas 3D
 *
 * @since 1.10
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_STATE_MAX = 16, /**< Evas 3D state: max */
  EVAS_CANVAS3D_STATE_ANY = 0, /**< Evas 3D state: any */
  EVAS_CANVAS3D_STATE_SCENE_ROOT_NODE = 1, /**< Evas 3D state: scene root node
                                            */
  EVAS_CANVAS3D_STATE_SCENE_CAMERA_NODE, /**< Evas 3D state: scene camera node
                                          */
  EVAS_CANVAS3D_STATE_SCENE_BACKGROUND_COLOR, /**< Evas 3D state: scene
                                               * background color */
  EVAS_CANVAS3D_STATE_SCENE_SIZE, /**< Evas 3D state: scene size */
  EVAS_CANVAS3D_STATE_SCENE_SHADOWS_ENABLED, /**< Evas 3D state: scene shadows
                                              * enabled */
  EVAS_CANVAS3D_STATE_SCENE_UPDATED, /**< Evas 3D state: scene updated
                                      *
                                      * @since 1.14 */
  EVAS_CANVAS3D_STATE_SCENE_SHADOWS_DEPTH, /**< Evas 3D state: scene shadows
                                            * depth */
  EVAS_CANVAS3D_STATE_SCENE_RENDER_TO_TEXTURE, /**< Evas 3D state: scene render
                                                * to texture */
  EVAS_CANVAS3D_STATE_TEXTURE_DATA = 1, /**< Evas 3D state: texture data */
  EVAS_CANVAS3D_STATE_TEXTURE_WRAP, /**< Evas 3D state: texture wrap */
  EVAS_CANVAS3D_STATE_TEXTURE_FILTER, /**< Evas 3D state: texture filter */
  EVAS_CANVAS3D_STATE_MATERIAL_ID = 1, /**< Evas 3D state: material ID */
  EVAS_CANVAS3D_STATE_MATERIAL_COLOR, /**< Evas 3D state: material color */
  EVAS_CANVAS3D_STATE_MATERIAL_TEXTURE, /**< Evas 3D state: material texture */
  EVAS_CANVAS3D_STATE_MESH_VERTEX_COUNT = 1, /**< Evas 3D state: mesh vertex
                                              * count */
  EVAS_CANVAS3D_STATE_MESH_FRAME, /**< Evas 3D state: mesh frame */
  EVAS_CANVAS3D_STATE_MESH_MATERIAL, /**< Evas 3D state: mesh material */
  EVAS_CANVAS3D_STATE_MESH_TRANSFORM, /**< Evas 3D state: mesh transform */
  EVAS_CANVAS3D_STATE_MESH_VERTEX_DATA, /**< Evas 3D state: mesh vertex data */
  EVAS_CANVAS3D_STATE_MESH_INDEX_DATA, /**< Evas 3D state: mesh index data */
  EVAS_CANVAS3D_STATE_MESH_VERTEX_ASSEMBLY, /**< Evas 3D state: mesh vertex
                                             * assembly */
  EVAS_CANVAS3D_STATE_MESH_SHADER_MODE, /**< Evas 3D state: mesh shader mode */
  EVAS_CANVAS3D_STATE_MESH_FOG, /**< Evas 3D state: mesh fog */
  EVAS_CANVAS3D_STATE_MESH_BLENDING, /**< Evas 3D state: mesh blending */
  EVAS_CANVAS3D_STATE_MESH_ALPHA_TEST, /**< Evas 3D state: mesh alpha test */
  EVAS_CANVAS3D_STATE_MESH_COLOR_PICK, /**< Evas 3D state: mesh color pick */
  EVAS_CANVAS3D_STATE_MESH_SHADOWS_EDGES_FILTERING, /**< Evas 3D state: mesh
                                                     * shadows edges filtering
                                                     */
  EVAS_CANVAS3D_STATE_MESH_SHADOWS_CONSTANT_BIAS, /**< Evas 3D state: mesh
                                                   * shadows constant bias */
  EVAS_CANVAS3D_STATE_CAMERA_PROJECTION = 1, /**< Evas 3D state: camera
                                              * projection */
  EVAS_CANVAS3D_STATE_LIGHT_AMBIENT = 1, /**< Evas 3D state: light ambient */
  EVAS_CANVAS3D_STATE_LIGHT_DIFFUSE, /**< Evas 3D state: light diffuse */
  EVAS_CANVAS3D_STATE_LIGHT_SPECULAR, /**< Evas 3D state: light specular */
  EVAS_CANVAS3D_STATE_LIGHT_SPOT_DIR, /**< Evas 3D state: light spot dir */
  EVAS_CANVAS3D_STATE_LIGHT_SPOT_EXP, /**< Evas 3D state: light spot exp */
  EVAS_CANVAS3D_STATE_LIGHT_SPOT_CUTOFF, /**< Evas 3D state: light spot cutoff
                                          */
  EVAS_CANVAS3D_STATE_LIGHT_ATTENUATION, /**< Evas 3D state: light attenuation
                                          */
  EVAS_CANVAS3D_STATE_LIGHT_PROJECTION, /**< Evas 3D state: light projection */
  EVAS_CANVAS3D_STATE_NODE_TRANSFORM_POSITION = 1, /**< Evas 3D state: node
                                                    * transform position */
  EVAS_CANVAS3D_STATE_NODE_TRANSFORM_ORIENTATION, /**< Evas 3D state: node
                                                   * transform orientation */
  EVAS_CANVAS3D_STATE_NODE_TRANSFORM_SCALE, /**< Evas 3D state: node transform
                                             * scale */
  EVAS_CANVAS3D_STATE_NODE_MESH_GEOMETRY, /**< Evas 3D state: node mesh geometry
                                           */
  EVAS_CANVAS3D_STATE_NODE_MESH_MATERIAL, /**< Evas 3D state: node mesh material
                                           */
  EVAS_CANVAS3D_STATE_NODE_MESH_FRAME, /**< Evas 3D state: node mesh frame */
  EVAS_CANVAS3D_STATE_NODE_MESH_SHADER_MODE, /**< Evas 3D state: node mesh
                                              * shader mode */
  EVAS_CANVAS3D_STATE_NODE_MESH_MATERIAL_ID, /**< Evas 3D state: node mesh
                                              * material ID */
  EVAS_CANVAS3D_STATE_NODE_LIGHT, /**< Evas 3D state: node light */
  EVAS_CANVAS3D_STATE_NODE_CAMERA, /**< Evas 3D state: node camera */
  EVAS_CANVAS3D_STATE_NODE_PARENT_POSITION, /**< Evas 3D state: node parent
                                             * position */
  EVAS_CANVAS3D_STATE_NODE_PARENT_ORIENTATION, /**< Evas 3D state: node parent
                                                * orientation */
  EVAS_CANVAS3D_STATE_NODE_PARENT_SCALE, /**< Evas 3D state: node parent scale
                                          */
  EVAS_CANVAS3D_STATE_NODE_MEMBER, /**< Evas 3D state: node member */
  EVAS_CANVAS3D_STATE_NODE_PARENT_BILLBOARD, /**< Evas 3D state: node parent
                                              * billboard
                                              *
                                              * @since 1.14 */
  EVAS_CANVAS3D_STATE_NODE_LOD /**< Evas 3D state: node lod
                                *
                                * @since 1.18 */
} Evas_Canvas3D_State;

/** Transform space
 *
 * @since 1.10
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_SPACE_LOCAL = 0, /**< Local coordinate space */
  EVAS_CANVAS3D_SPACE_PARENT, /**< Parent coordinate space */
  EVAS_CANVAS3D_SPACE_WORLD /**< World coordinate space */
} Evas_Canvas3D_Space;

/** Types of a node
 *
 * @since 1.10
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_NODE_TYPE_NODE = 0, /**< Node with no items */
  EVAS_CANVAS3D_NODE_TYPE_CAMERA, /**< Node which can contain camera object */
  EVAS_CANVAS3D_NODE_TYPE_LIGHT, /**< Node which can contain light object */
  EVAS_CANVAS3D_NODE_TYPE_MESH /**< Node which can contain mesh objects */
} Evas_Canvas3D_Node_Type;

/** Types of node orientation
 *
 * @since 1.13
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_NODE_ORIENTATION_TYPE_NONE = 0, /**< Node with no orientation
                                                 * properties */
  EVAS_CANVAS3D_NODE_ORIENTATION_TYPE_LOOK_AT, /**< Node orientation is given as
                                                * a point to look at and a
                                                * vector that indicates the
                                                * angle at which the subject is
                                                * looking at the point */
  EVAS_CANVAS3D_NODE_ORIENTATION_TYPE_LOOK_TO, /**< Node orientation is given as
                                                * id of another part to look at
                                                * and a vector that indicates
                                                * the angle at which the
                                                * subject is looking at the
                                                * part */
  EVAS_CANVAS3D_NODE_ORIENTATION_TYPE_ANGLE_AXIS, /**< Node orientation is given
                                                   * as an angle and an axis to
                                                   * rotate around */
  EVAS_CANVAS3D_NODE_ORIENTATION_TYPE_QUATERNION /**< Node orientation is given
                                                  * as a quaternion */
} Evas_Canvas3D_Node_Orientation_Type;

/** Index formats
 *
 * @since 1.10
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_INDEX_FORMAT_NONE = 0, /**< Indexing is not used */
  EVAS_CANVAS3D_INDEX_FORMAT_UNSIGNED_BYTE, /**< Index is of type unsigned byte
                                             */
  EVAS_CANVAS3D_INDEX_FORMAT_UNSIGNED_SHORT /**< Index is of type unsigned short
                                             */
} Evas_Canvas3D_Index_Format;

/** Frustum modes
 *
 * @since 1.12
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_FRUSTUM_MODE_BSPHERE = 0, /**< Bounding sphere */
  EVAS_CANVAS3D_FRUSTUM_MODE_AABB, /**< Axis-aligned bounding box */
  EVAS_CANVAS3D_FRUSTUM_MODE_CENTRAL_POINT /**< Central point */
} Evas_Canvas3D_Frustum_Mode;

/** Vertex assembly modes. Vertex assembly represents how the vertices are
 * organized into geometric primitives.
 *
 * @since 1.10
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_VERTEX_ASSEMBLY_POINTS = 0, /**< A vertex is rendered as a point
                                             */
  EVAS_CANVAS3D_VERTEX_ASSEMBLY_LINES, /**< Two vertices are organized as a line
                                        */
  EVAS_CANVAS3D_VERTEX_ASSEMBLY_LINE_STRIP, /**< Vertices are organized as a
                                             * connected line path */
  EVAS_CANVAS3D_VERTEX_ASSEMBLY_LINE_LOOP, /**< Vertices are organized as a
                                            * closed line path */
  EVAS_CANVAS3D_VERTEX_ASSEMBLY_TRIANGLES, /**< Three vertices are organized as
                                            * a triangle */
  EVAS_CANVAS3D_VERTEX_ASSEMBLY_TRIANGLE_STRIP, /**< Vertices are organized as
                                                 * connected triangles */
  EVAS_CANVAS3D_VERTEX_ASSEMBLY_TRIANGLE_FAN /**< Vertices are organized as a
                                              * triangle fan */
} Evas_Canvas3D_Vertex_Assembly;

/** Comparsion functions for testing(alpha, depth, stencil) in fragment shader
 *
 * @since 1.14
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_COMPARISON_NEVER = 0, /**< Never passes */
  EVAS_CANVAS3D_COMPARISON_LESS, /**< Passes if the incoming value is less than
                                  * the reference value */
  EVAS_CANVAS3D_COMPARISON_EQUAL, /**< Passes if the incoming value is equal to
                                   * the reference value */
  EVAS_CANVAS3D_COMPARISON_LEQUAL, /**< Passes if the incoming value is less
                                    * than or equal to the reference value */
  EVAS_CANVAS3D_COMPARISON_GREATER, /**< Passes if the incoming value is greater
                                     * than the reference value */
  EVAS_CANVAS3D_COMPARISON_NOTEQUAL, /**< Passes if the incoming value is not
                                      * equal to the reference value */
  EVAS_CANVAS3D_COMPARISON_GEQUAL, /**< Passes if the incoming value is greater
                                    * than or equal to the reference value */
  EVAS_CANVAS3D_COMPARISON_ALWAYS /**< Always passes (initial value) */
} Evas_Canvas3D_Comparison;

/** Wrap modes for texture units
 *
 * @since 1.14
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_WRAP_MODE_CLAMP = 0, /**< Values will be clamped to be in range
                                      * (min, max) */
  EVAS_CANVAS3D_WRAP_MODE_REPEAT, /**< Values will be repeated */
  EVAS_CANVAS3D_WRAP_MODE_REFLECT /**< Values will be repeated in a reflected
                                   * manner */
} Evas_Canvas3D_Wrap_Mode;

/** Filters for texture units
 *
 * @since 1.14
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_TEXTURE_FILTER_NEAREST = 0, /**< Samples nearest texel */
  EVAS_CANVAS3D_TEXTURE_FILTER_LINEAR, /**< Lineary interpolate nearby texels */
  EVAS_CANVAS3D_TEXTURE_FILTER_NEAREST_MIPMAP_NEAREST, /**< Nearest sampling
                                                        * mipmap */
  EVAS_CANVAS3D_TEXTURE_FILTER_LINEAR_MIPMAP_NEAREST, /**< Nearest sampling
                                                       * mipmap and interpolate
                                                       */
  EVAS_CANVAS3D_TEXTURE_FILTER_NEAREST_MIPMAP_LINEAR, /**< Linear sampling in
                                                       * nearest mipmap */
  EVAS_CANVAS3D_TEXTURE_FILTER_LINEAR_MIPMAP_LINEAR /**< Linear sampling in
                                                     * mipmap and interpolate
                                                     */
} Evas_Canvas3D_Texture_Filter;

/** Mesh primitive
 *
 * @since 1.12
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_MESH_PRIMITIVE_NONE = 0, /**< An empty space */
  EVAS_CANVAS3D_MESH_PRIMITIVE_SQUARE, /**< One sided square */
  EVAS_CANVAS3D_MESH_PRIMITIVE_CUBE, /**< Cube primitive */
  EVAS_CANVAS3D_MESH_PRIMITIVE_CYLINDER, /**< Cylinder (can use precision and
                                          * texture scale) */
  EVAS_CANVAS3D_MESH_PRIMITIVE_CONE, /**< Cone (can use precision and texture
                                      * scale) */
  EVAS_CANVAS3D_MESH_PRIMITIVE_SPHERE, /**< Sphere (can use precision and
                                        * texture scale) */
  EVAS_CANVAS3D_MESH_PRIMITIVE_TORUS, /**< Torus (can use ratio, precision and
                                       * texture scale) */
  EVAS_CANVAS3D_MESH_PRIMITIVE_SURFACE, /**< Custom surface (can use pointer to
                                         * users function, precision and
                                         * texture scale) */
  EVAS_CANVAS3D_MESH_PRIMITIVE_TERRAIN, /**< Terrain as surface with pointer to
                                         * perlin's noise function */
  EVAS_CANVAS3D_MESH_PRIMITIVE_COUNT /**< Sentinel value to indicate last enum
                                      * field during iteration */
} Evas_Canvas3D_Mesh_Primitive;

/** Mode of mesh primitive
 *
 * @since 1.15
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_PRIMITIVE_MODE_DEFAULT = 0, /**< Default mode of primitive */
  EVAS_CANVAS3D_PRIMITIVE_MODE_WITHOUT_BASE, /**< Primitive without base
                                              * (supported for cylinder and
                                              * cone) */
  EVAS_CANVAS3D_PRIMITIVE_MODE_ALTERNATIVE_UV /**< Ptimitive with alternative uv
                                               * (supported for sphere) */
} Evas_Canvas3D_Primitive_Mode;

/** Shader shade modes
 *
 * @since 1.10
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_SHADER_MODE_VERTEX_COLOR = 0, /**< Shaded using vertex color
                                               * attribute */
  EVAS_CANVAS3D_SHADER_MODE_DIFFUSE, /**< Shaded using material diffuse term */
  EVAS_CANVAS3D_SHADER_MODE_FLAT, /**< Per-vertex flat lighting */
  EVAS_CANVAS3D_SHADER_MODE_PHONG, /**< Per-pixel phong shading */
  EVAS_CANVAS3D_SHADER_MODE_NORMAL_MAP, /**< Per-pixel normal map shading */
  EVAS_CANVAS3D_SHADER_MODE_SHADOW_MAP_RENDER, /**< Fragment color is defined by
                                                * its z-coord */
  EVAS_CANVAS3D_SHADER_MODE_COLOR_PICK, /**< Rendering to additional frame bufer
                                         */
  EVAS_CANVAS3D_SHADER_MODE_PARALLAX_OCCLUSION, /**< Per-pixel parallax
                                                 * occlusion map shading */
  EVAS_CANVAS3D_SHADER_MODE_POST_PROCESSING_FXAA /**< Render full screen quard
                                                  */
} Evas_Canvas3D_Shader_Mode;

/** Vertex attribute IDs
 *
 * @since 1.10
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_VERTEX_ATTRIB_POSITION = 0, /**< vertex position */
  EVAS_CANVAS3D_VERTEX_ATTRIB_NORMAL, /**< vertex normal */
  EVAS_CANVAS3D_VERTEX_ATTRIB_TANGENT, /**< vertex tangent (for normal mapping)
                                        */
  EVAS_CANVAS3D_VERTEX_ATTRIB_COLOR, /**< vertex color */
  EVAS_CANVAS3D_VERTEX_ATTRIB_TEXCOORD /**< vertex texture coordinate */
} Evas_Canvas3D_Vertex_Attrib;

/** Blending function
 *
 * @since 1.14
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_BLEND_FUNC_ZERO = 0, /**< The scale factors for color components
                                      * is (0, 0, 0, 0) */
  EVAS_CANVAS3D_BLEND_FUNC_ONE, /**< The scale factors for color components is
                                 * (1, 1, 1, 1) */
  EVAS_CANVAS3D_BLEND_FUNC_SRC_COLOR, /**< The scale factors for color
                                       * components is (rs/kr, gs/kg, bs/kb,
                                       * as/ka) */
  EVAS_CANVAS3D_BLEND_FUNC_ONE_MINUS_SRC_COLOR, /**< The scale factors for color
                                                 * components is (1, 1, 1, 1) -
                                                 * (rs/kr, gs/kg, bs/kb, as/ka)
                                                 */
  EVAS_CANVAS3D_BLEND_FUNC_DST_COLOR, /**< The scale factors for color
                                       * components is (rd/kr, gd/kg, bd/kb,
                                       * ad/ka) */
  EVAS_CANVAS3D_BLEND_FUNC_ONE_MINUS_DST_COLOR, /**< The scale factors for color
                                                 * components is (1, 1, 1, 1) -
                                                 * (rd/kr, gd/kg, bd/kb, ad/ka)
                                                 */
  EVAS_CANVAS3D_BLEND_FUNC_SRC_ALPHA, /**< The scale factors for color
                                       * components is (as/ka, as/ka, as/ka,
                                       * as/ka) */
  EVAS_CANVAS3D_BLEND_FUNC_ONE_MINUS_SRC_ALPHA, /**< The scale factors for color
                                                 * components is (1, 1, 1, 1) -
                                                 * (as/ka, as/ka, as/ka, as/ka)
                                                 */
  EVAS_CANVAS3D_BLEND_FUNC_DST_ALPHA, /**< The scale factors for color
                                       * components is (ad/ka, ad/ka, ad/ka,
                                       * ad/ka) */
  EVAS_CANVAS3D_BLEND_FUNC_ONE_MINUS_DST_ALPHA, /**< The scale factors for color
                                                 * components is (1, 1, 1, 1) -
                                                 * (ad/ka, ad/ka, ad/ka, ad/ka)
                                                 */
  EVAS_CANVAS3D_BLEND_FUNC_CONSTANT_COLOR, /**< The scale factors for color
                                            * components is (rc, gc, bc, ac) */
  EVAS_CANVAS3D_BLEND_FUNC_ONE_MINUS_CONSTANT_COLOR, /**< The scale factors for
                                                      * color components is (1,
                                                      * 1, 1, 1) - (rc, gc, bc,
                                                      * ac) */
  EVAS_CANVAS3D_BLEND_FUNC_CONSTANT_ALPHA, /**< The scale factors for color
                                            * components is (ac, ac, ac, ac) */
  EVAS_CANVAS3D_BLEND_FUNC_ONE_MINUS_CONSTANT_ALPHA, /**< The scale factors for
                                                      * color components is (1,
                                                      * 1, 1, 1) - (ac, ac, ac,
                                                      * ac) */
  EVAS_CANVAS3D_BLEND_FUNC_SRC_ALPHA_SATURATE /**< The scale factors for color
                                               * components is (i, i, i, 1)
                                               * where i = min(as, ka, ad)/ka
                                               */
} Evas_Canvas3D_Blend_Func;

/** Material attributes
 *
 * @since 1.10
 *
 * @ingroup Evas_Canvas3D
 */
typedef enum
{
  EVAS_CANVAS3D_MATERIAL_ATTRIB_AMBIENT = 0, /**< ambient term */
  EVAS_CANVAS3D_MATERIAL_ATTRIB_DIFFUSE, /**< diffuse term */
  EVAS_CANVAS3D_MATERIAL_ATTRIB_SPECULAR, /**< specular term */
  EVAS_CANVAS3D_MATERIAL_ATTRIB_EMISSION, /**< emission term */
  EVAS_CANVAS3D_MATERIAL_ATTRIB_NORMAL /**< Normal map term */
} Evas_Canvas3D_Material_Attrib;


#endif

#endif
