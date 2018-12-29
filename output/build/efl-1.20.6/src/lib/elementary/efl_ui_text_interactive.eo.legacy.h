#ifndef _EFL_UI_TEXT_INTERACTIVE_EO_LEGACY_H_
#define _EFL_UI_TEXT_INTERACTIVE_EO_LEGACY_H_

#ifndef _EFL_UI_TEXT_INTERACTIVE_EO_CLASS_TYPE
#define _EFL_UI_TEXT_INTERACTIVE_EO_CLASS_TYPE

typedef Eo Efl_Ui_Text_Interactive;

#endif

#ifndef _EFL_UI_TEXT_INTERACTIVE_EO_TYPES
#define _EFL_UI_TEXT_INTERACTIVE_EO_TYPES

/**
 * @brief This structure includes all the information about content changes.
 *
 * It's meant to be used to implement undo/redo.
 *
 * @ingroup Efl_Ui_Text_Interactive
 */
typedef struct _Efl_Ui_Text_Interactive_Change_Info
{
  const char *content; /**< The content added/removed */
  size_t position; /**< The position where it was added/removed */
  size_t length; /**< The length of content in characters (not bytes, actual
                  * unicode characters) */
  Eina_Bool insert; /**< @c true if the content was inserted, @c false if
                     * removei */
  Eina_Bool merge; /**< @c true if can be merged with the previous one. Used for
                    * example with insertion when something is already selected
                    */
} Efl_Ui_Text_Interactive_Change_Info;


#endif






#endif
