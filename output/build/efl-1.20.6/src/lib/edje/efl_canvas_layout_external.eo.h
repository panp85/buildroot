#ifndef _EFL_CANVAS_LAYOUT_EXTERNAL_EO_H_
#define _EFL_CANVAS_LAYOUT_EXTERNAL_EO_H_

#ifndef _EFL_CANVAS_LAYOUT_EXTERNAL_EO_CLASS_TYPE
#define _EFL_CANVAS_LAYOUT_EXTERNAL_EO_CLASS_TYPE

typedef Eo Efl_Canvas_Layout_External;

#endif

#ifndef _EFL_CANVAS_LAYOUT_EXTERNAL_EO_TYPES
#define _EFL_CANVAS_LAYOUT_EXTERNAL_EO_TYPES


#endif
/**
 * @brief Class representing an external part in Edje layouts.
 *
 * An object of this type is an Efl.Part object, which means its lifecycle is
 * limited to one and only one function call.
 *
 * An external part contains one object, which can be retrieved with
 * @ref efl_content_get(). Do not delete this object. Just like for other
 * parts, Edje is in charge of the visibility, geometry, clip, etc...
 *
 * Common usage is then, in pseudo-C: Eo *widget =
 * efl_content_get(efl_part(layout, "extpartname")); efl_text_set(widget,
 * "hello");
 *
 * Note that as a shortcut the widget's functions can be called directly on
 * this part object. In pseudo-C++:
 * dynamic_cast<efl::Text>(layout.part("title")).text_set("hello"); Or in
 * pseudo-C: efl_text_set(efl_part(layout, "title"), "hello"); Or in
 * pseudo-script: layout["title"].text = "hello";
 *
 * @since 1.20
 *
 * @ingroup Efl_Canvas_Layout_External
 */
#define EFL_CANVAS_LAYOUT_EXTERNAL_CLASS efl_canvas_layout_external_class_get()

EWAPI const Efl_Class *efl_canvas_layout_external_class_get(void);

#endif
