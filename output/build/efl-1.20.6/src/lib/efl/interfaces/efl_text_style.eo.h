#ifndef _EFL_TEXT_STYLE_EO_H_
#define _EFL_TEXT_STYLE_EO_H_

#ifndef _EFL_TEXT_STYLE_EO_CLASS_TYPE
#define _EFL_TEXT_STYLE_EO_CLASS_TYPE

typedef Eo Efl_Text_Style;

#endif

#ifndef _EFL_TEXT_STYLE_EO_TYPES
#define _EFL_TEXT_STYLE_EO_TYPES

/** Whether to apply backing style to the displayed text or not
 *
 * @ingroup Efl_Text_Style
 */
typedef enum
{
  EFL_TEXT_STYLE_BACKING_TYPE_DISABLED = 0, /**< Do not use backing */
  EFL_TEXT_STYLE_BACKING_TYPE_ENABLED /**< Use backing style */
} Efl_Text_Style_Backing_Type;

/** Whether to apply strikethrough style to the displayed text or not
 *
 * @ingroup Efl_Text_Style
 */
typedef enum
{
  EFL_TEXT_STYLE_STRIKETHROUGH_TYPE_DISABLED = 0, /**< Do not use strikethrough
                                                   */
  EFL_TEXT_STYLE_STRIKETHROUGH_TYPE_ENABLED /**< Use strikethrough style */
} Efl_Text_Style_Strikethrough_Type;

/** Effect to apply to the displayed text
 *
 * @ingroup Efl_Text_Style
 */
typedef enum
{
  EFL_TEXT_STYLE_EFFECT_TYPE_NONE = 0, /**< No effect */
  EFL_TEXT_STYLE_EFFECT_TYPE_SHADOW, /**< Shadow effect */
  EFL_TEXT_STYLE_EFFECT_TYPE_FAR_SHADOW, /**< Far shadow effect */
  EFL_TEXT_STYLE_EFFECT_TYPE_SOFT_SHADOW, /**< Soft shadow effect */
  EFL_TEXT_STYLE_EFFECT_TYPE_FAR_SOFT_SHADOW, /**< Far and soft shadow effect */
  EFL_TEXT_STYLE_EFFECT_TYPE_GLOW, /**< Glow effect */
  EFL_TEXT_STYLE_EFFECT_TYPE_OUTLINE, /**< Outline effect */
  EFL_TEXT_STYLE_EFFECT_TYPE_SOFT_OUTLINE, /**< Soft outline effect */
  EFL_TEXT_STYLE_EFFECT_TYPE_OUTLINE_SHADOW, /**< Outline shadow effect */
  EFL_TEXT_STYLE_EFFECT_TYPE_OUTLINE_SOFT_SHADOW /**< Outline soft shadow effect
                                                  */
} Efl_Text_Style_Effect_Type;

/** Direction of the shadow style, if used
 *
 * @ingroup Efl_Text_Style
 */
typedef enum
{
  EFL_TEXT_STYLE_SHADOW_DIRECTION_BOTTOM_RIGHT = 0, /**< Shadow towards bottom
                                                     * right */
  EFL_TEXT_STYLE_SHADOW_DIRECTION_BOTTOM, /**< Shadow towards botom */
  EFL_TEXT_STYLE_SHADOW_DIRECTION_BOTTOM_LEFT, /**< Shadow towards bottom left
                                                */
  EFL_TEXT_STYLE_SHADOW_DIRECTION_LEFT, /**< Shadow towards left */
  EFL_TEXT_STYLE_SHADOW_DIRECTION_TOP_LEFT, /**< Shadow towards top left */
  EFL_TEXT_STYLE_SHADOW_DIRECTION_TOP, /**< Shadow towards top */
  EFL_TEXT_STYLE_SHADOW_DIRECTION_TOP_RIGHT, /**< Shadow towards top right */
  EFL_TEXT_STYLE_SHADOW_DIRECTION_RIGHT /**< Shadow towards right */
} Efl_Text_Style_Shadow_Direction;

/** Underline type of the displayed text
 *
 * @ingroup Efl_Text_Style
 */
typedef enum
{
  EFL_TEXT_STYLE_UNDERLINE_TYPE_OFF = 0, /**< Text without underline */
  EFL_TEXT_STYLE_UNDERLINE_TYPE_ON, /**< Underline enabled */
  EFL_TEXT_STYLE_UNDERLINE_TYPE_SINGLE, /**< Underlined with a signle line */
  EFL_TEXT_STYLE_UNDERLINE_TYPE_DOUBLE, /**< Underlined with a double line */
  EFL_TEXT_STYLE_UNDERLINE_TYPE_DASHED /**< Underlined with a dashed line */
} Efl_Text_Style_Underline_Type;


#endif
/**
 * @brief Style to apply to the text
 *
 * A style can be coloring, effects, underline, strikethrough etc.
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
#define EFL_TEXT_STYLE_INTERFACE efl_text_style_interface_get()

EWAPI const Efl_Class *efl_text_style_interface_get(void);

/**
 * @brief Color of text, excluding style
 *
 * @param[in] r
 * @param[in] g
 * @param[in] b
 * @param[in] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_normal_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of text, excluding style
 *
 * @param[out] r
 * @param[out] g
 * @param[out] b
 * @param[out] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_normal_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

EOAPI void efl_text_backing_type_set(Eo *obj, Efl_Text_Style_Backing_Type type);

EOAPI Efl_Text_Style_Backing_Type efl_text_backing_type_get(const Eo *obj);

EOAPI void efl_text_backing_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

EOAPI void efl_text_backing_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Sets an underline style on the text
 *
 * @param[in] type
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_underline_type_set(Eo *obj, Efl_Text_Style_Underline_Type type);

/** Sets an underline style on the text
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI Efl_Text_Style_Underline_Type efl_text_underline_type_get(const Eo *obj);

/**
 * @brief Color of normal underline style
 *
 * @param[in] r
 * @param[in] g
 * @param[in] b
 * @param[in] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_underline_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of normal underline style
 *
 * @param[out] r
 * @param[out] g
 * @param[out] b
 * @param[out] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_underline_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Height of underline style
 *
 * @param[in] height
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_underline_height_set(Eo *obj, double height);

/** Height of underline style
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI double efl_text_underline_height_get(const Eo *obj);

/**
 * @brief Color of dashed underline style
 *
 * @param[in] r
 * @param[in] g
 * @param[in] b
 * @param[in] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_underline_dashed_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of dashed underline style
 *
 * @param[out] r
 * @param[out] g
 * @param[out] b
 * @param[out] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_underline_dashed_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Width of dashed underline style
 *
 * @param[in] width
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_underline_dashed_width_set(Eo *obj, int width);

/** Width of dashed underline style
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI int efl_text_underline_dashed_width_get(const Eo *obj);

/**
 * @brief Gap of dashed underline style
 *
 * @param[in] gap
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_underline_dashed_gap_set(Eo *obj, int gap);

/** Gap of dashed underline style
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI int efl_text_underline_dashed_gap_get(const Eo *obj);

/**
 * @brief Type of underline2 style
 *
 * @param[in] type
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_underline2_type_set(Eo *obj, Efl_Text_Style_Underline_Type type);

/** Type of underline2 style
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI Efl_Text_Style_Underline_Type efl_text_underline2_type_get(const Eo *obj);

/**
 * @brief Color of underline2 style
 *
 * @param[in] r
 * @param[in] g
 * @param[in] b
 * @param[in] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_underline2_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of underline2 style
 *
 * @param[out] r
 * @param[out] g
 * @param[out] b
 * @param[out] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_underline2_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Type of strikethrough style
 *
 * @param[in] type
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_strikethrough_type_set(Eo *obj, Efl_Text_Style_Strikethrough_Type type);

/** Type of strikethrough style
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI Efl_Text_Style_Strikethrough_Type efl_text_strikethrough_type_get(const Eo *obj);

/**
 * @brief Color of strikethrough_style
 *
 * @param[in] r
 * @param[in] g
 * @param[in] b
 * @param[in] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_strikethrough_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of strikethrough_style
 *
 * @param[out] r
 * @param[out] g
 * @param[out] b
 * @param[out] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_strikethrough_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Type of effect used for the displayed text
 *
 * @param[in] type
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_effect_type_set(Eo *obj, Efl_Text_Style_Effect_Type type);

/** Type of effect used for the displayed text
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI Efl_Text_Style_Effect_Type efl_text_effect_type_get(const Eo *obj);

/**
 * @brief Color of outline effect
 *
 * @param[in] r
 * @param[in] g
 * @param[in] b
 * @param[in] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_outline_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of outline effect
 *
 * @param[out] r
 * @param[out] g
 * @param[out] b
 * @param[out] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_outline_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Direction of shadow effect
 *
 * @param[in] type
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_shadow_direction_set(Eo *obj, Efl_Text_Style_Shadow_Direction type);

/** Direction of shadow effect
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI Efl_Text_Style_Shadow_Direction efl_text_shadow_direction_get(const Eo *obj);

/**
 * @brief Color of shadow effect
 *
 * @param[in] r
 * @param[in] g
 * @param[in] b
 * @param[in] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_shadow_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of shadow effect
 *
 * @param[out] r
 * @param[out] g
 * @param[out] b
 * @param[out] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_shadow_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Color of glow effect
 *
 * @param[in] r
 * @param[in] g
 * @param[in] b
 * @param[in] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_glow_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Color of glow effect
 *
 * @param[out] r
 * @param[out] g
 * @param[out] b
 * @param[out] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_glow_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Second color of the glow effect
 *
 * @param[in] r
 * @param[in] g
 * @param[in] b
 * @param[in] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_glow2_color_set(Eo *obj, unsigned char r, unsigned char g, unsigned char b, unsigned char a);

/**
 * @brief Second color of the glow effect
 *
 * @param[out] r
 * @param[out] g
 * @param[out] b
 * @param[out] a
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_glow2_color_get(const Eo *obj, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);

/**
 * @brief Program that applies a special filter
 *
 * See @ref Efl_Gfx_Filter.
 *
 * @param[in] code
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI void efl_text_gfx_filter_set(Eo *obj, const char *code);

/**
 * @brief Program that applies a special filter
 *
 * See @ref Efl_Gfx_Filter.
 *
 * @since 1.20
 *
 * @ingroup Efl_Text_Style
 */
EOAPI const char *efl_text_gfx_filter_get(const Eo *obj);

#endif
