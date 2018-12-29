#ifndef _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_LEGACY_H_
#define _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_LEGACY_H_

#ifndef _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_CLASS_TYPE
#define _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_CLASS_TYPE

typedef Eo Elm_Interface_Atspi_Accessible;

#endif

#ifndef _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_TYPES
#define _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_TYPES

/** Type of accessibility object
 *
 * @ingroup Elm_Atspi
 */
typedef enum
{
  ELM_ATSPI_TYPE_REGULAR = 0, /**< default accessibile object */
  ELM_ATSPI_TYPE_DISABLED, /**< skip object and its children in accessibility
                            * hierarchy */
  ELM_ATSPI_TYPE_SKIPPED /**< skip object in accessibility hierarchy */
} Elm_Atspi_Type;

/** Describes the role of an object visible to AT-SPI Clients.
 *
 * @ingroup Elm_Atspi
 */
typedef enum
{
  ELM_ATSPI_ROLE_INVALID = 0, /**< Role: invalid */
  ELM_ATSPI_ROLE_ACCELERATOR_LABEL, /**< Role: accelerator label */
  ELM_ATSPI_ROLE_ALERT, /**< Role: alert */
  ELM_ATSPI_ROLE_ANIMATION, /**< Role: animation */
  ELM_ATSPI_ROLE_ARROW, /**< Role: arrow */
  ELM_ATSPI_ROLE_CALENDAR, /**< Role: calendar */
  ELM_ATSPI_ROLE_CANVAS, /**< Role: canvas */
  ELM_ATSPI_ROLE_CHECK_BOX, /**< Role: check box */
  ELM_ATSPI_ROLE_CHECK_MENU_ITEM, /**< Role: check menu item */
  ELM_ATSPI_ROLE_COLOR_CHOOSER, /**< Role: color chooser */
  ELM_ATSPI_ROLE_COLUMN_HEADER, /**< Role: column header */
  ELM_ATSPI_ROLE_COMBO_BOX, /**< Role: combo box */
  ELM_ATSPI_ROLE_DATE_EDITOR, /**< Role: data editor */
  ELM_ATSPI_ROLE_DESKTOP_ICON, /**< Role: desktop icon */
  ELM_ATSPI_ROLE_DESKTOP_FRAME, /**< Role: desktop frame */
  ELM_ATSPI_ROLE_DIAL, /**< Role: dial */
  ELM_ATSPI_ROLE_DIALOG, /**< Role: dialog */
  ELM_ATSPI_ROLE_DIRECTORY_PANE, /**< Role: directory pane */
  ELM_ATSPI_ROLE_DRAWING_AREA, /**< Role: drawing area */
  ELM_ATSPI_ROLE_FILE_CHOOSER, /**< Role: file chooser */
  ELM_ATSPI_ROLE_FILLER, /**< Role: filler */
  ELM_ATSPI_ROLE_FOCUS_TRAVERSABLE, /**< Role: focus traversable */
  ELM_ATSPI_ROLE_FONT_CHOOSER, /**< Role: font chooser */
  ELM_ATSPI_ROLE_FRAME, /**< Role: frame */
  ELM_ATSPI_ROLE_GLASS_PANE, /**< Role: glass pane */
  ELM_ATSPI_ROLE_HTML_CONTAINER, /**< Role: HTML container */
  ELM_ATSPI_ROLE_ICON, /**< Role: icon */
  ELM_ATSPI_ROLE_IMAGE, /**< Role: image */
  ELM_ATSPI_ROLE_INTERNAL_FRAME, /**< Role: internal frame */
  ELM_ATSPI_ROLE_LABEL, /**< Role: label */
  ELM_ATSPI_ROLE_LAYERED_PANE, /**< Role: layered pane */
  ELM_ATSPI_ROLE_LIST, /**< Role: list */
  ELM_ATSPI_ROLE_LIST_ITEM, /**< Role: list item */
  ELM_ATSPI_ROLE_MENU, /**< Role: menu */
  ELM_ATSPI_ROLE_MENU_BAR, /**< Role: menu bar */
  ELM_ATSPI_ROLE_MENU_ITEM, /**< Role: menu item */
  ELM_ATSPI_ROLE_OPTION_PANE, /**< Role: option pane */
  ELM_ATSPI_ROLE_PAGE_TAB, /**< Role: page tab */
  ELM_ATSPI_ROLE_PAGE_TAB_LIST, /**< Role: page tab list */
  ELM_ATSPI_ROLE_PANEL, /**< Role: panel */
  ELM_ATSPI_ROLE_PASSWORD_TEXT, /**< Role: password text */
  ELM_ATSPI_ROLE_POPUP_MENU, /**< Role: popup menu */
  ELM_ATSPI_ROLE_PROGRESS_BAR, /**< Role: progress bar */
  ELM_ATSPI_ROLE_PUSH_BUTTON, /**< Role: push button */
  ELM_ATSPI_ROLE_RADIO_BUTTON, /**< Role: radio button */
  ELM_ATSPI_ROLE_RADIO_MENU_ITEM, /**< Role: radio menu item */
  ELM_ATSPI_ROLE_ROOT_PANE, /**< Role: root pane */
  ELM_ATSPI_ROLE_ROW_HEADER, /**< Role: row header */
  ELM_ATSPI_ROLE_SCROLL_BAR, /**< Role: scroll bar */
  ELM_ATSPI_ROLE_SCROLL_PANE, /**< Role: scroll pane */
  ELM_ATSPI_ROLE_SEPARATOR, /**< Role: separator */
  ELM_ATSPI_ROLE_SLIDER, /**< Role: slider */
  ELM_ATSPI_ROLE_SPIN_BUTTON, /**< Role: spin button */
  ELM_ATSPI_ROLE_SPLIT_PANE, /**< Role: split pane */
  ELM_ATSPI_ROLE_STATUS_BAR, /**< Role: status bar */
  ELM_ATSPI_ROLE_TABLE, /**< Role: table */
  ELM_ATSPI_ROLE_TABLE_CELL, /**< Role: table cell */
  ELM_ATSPI_ROLE_TABLE_COLUMN_HEADER, /**< Role: table column header */
  ELM_ATSPI_ROLE_TABLE_ROW_HEADER, /**< Role: table row header */
  ELM_ATSPI_ROLE_TEAROFF_MENU_ITEM, /**< Role: tearoff menu item */
  ELM_ATSPI_ROLE_TERMINAL, /**< Role: terminal */
  ELM_ATSPI_ROLE_TEXT, /**< Role: text */
  ELM_ATSPI_ROLE_TOGGLE_BUTTON, /**< Role: toggle button */
  ELM_ATSPI_ROLE_TOOL_BAR, /**< Role: too bar */
  ELM_ATSPI_ROLE_TOOL_TIP, /**< Role: tool tip */
  ELM_ATSPI_ROLE_TREE, /**< Role: tree */
  ELM_ATSPI_ROLE_TREE_TABLE, /**< Role: tree table */
  ELM_ATSPI_ROLE_UNKNOWN, /**< Role: unknown */
  ELM_ATSPI_ROLE_VIEWPORT, /**< Role: viewport */
  ELM_ATSPI_ROLE_WINDOW, /**< Role: window */
  ELM_ATSPI_ROLE_EXTENDED, /**< Role: extended */
  ELM_ATSPI_ROLE_HEADER, /**< Role: header */
  ELM_ATSPI_ROLE_FOOTER, /**< Role: footer */
  ELM_ATSPI_ROLE_PARAGRAPH, /**< Role: paragraph */
  ELM_ATSPI_ROLE_RULER, /**< Role: ruler */
  ELM_ATSPI_ROLE_APPLICATION, /**< Role: application */
  ELM_ATSPI_ROLE_AUTOCOMPLETE, /**< Role: autocomplete */
  ELM_ATSPI_ROLE_EDITBAR, /**< Role: editbar */
  ELM_ATSPI_ROLE_EMBEDDED, /**< Role: embedded */
  ELM_ATSPI_ROLE_ENTRY, /**< Role: entry */
  ELM_ATSPI_ROLE_CHART, /**< Role: chart */
  ELM_ATSPI_ROLE_CAPTION, /**< Role: caption */
  ELM_ATSPI_ROLE_DOCUMENT_FRAME, /**< Role: document frame */
  ELM_ATSPI_ROLE_HEADING, /**< Role: heading */
  ELM_ATSPI_ROLE_PAGE, /**< Role: page */
  ELM_ATSPI_ROLE_SECTION, /**< Role: section */
  ELM_ATSPI_ROLE_REDUNDANT_OBJECT, /**< Role: redundant object */
  ELM_ATSPI_ROLE_FORM, /**< Role: form */
  ELM_ATSPI_ROLE_LINK, /**< Role: link */
  ELM_ATSPI_ROLE_INPUT_METHOD_WINDOW, /**< Role: input method window */
  ELM_ATSPI_ROLE_TABLE_ROW, /**< Role: table row */
  ELM_ATSPI_ROLE_TREE_ITEM, /**< Role: table item */
  ELM_ATSPI_ROLE_DOCUMENT_SPREADSHEET, /**< Role: document spreadsheet */
  ELM_ATSPI_ROLE_DOCUMENT_PRESENTATION, /**< Role: document presentation */
  ELM_ATSPI_ROLE_DOCUMENT_TEXT, /**< Role: document text */
  ELM_ATSPI_ROLE_DOCUMENT_WEB, /**< Role: document web */
  ELM_ATSPI_ROLE_DOCUMENT_EMAIL, /**< Role: document email */
  ELM_ATSPI_ROLE_COMMENT, /**< Role: comment */
  ELM_ATSPI_ROLE_LIST_BOX, /**< Role: list box */
  ELM_ATSPI_ROLE_GROUPING, /**< Role: grouping */
  ELM_ATSPI_ROLE_IMAGE_MAP, /**< Role: image map */
  ELM_ATSPI_ROLE_NOTIFICATION, /**< Role: notification */
  ELM_ATSPI_ROLE_INFO_BAR, /**< Role: info bar */
  ELM_ATSPI_ROLE_LAST_DEFINED /**< Last enum entry sentinel */
} Elm_Atspi_Role;

/** Describes a possible states of an object visible to AT-SPI clients.
 *
 * @ingroup Elm_Atspi
 */
typedef enum
{
  ELM_ATSPI_STATE_INVALID = 0, /**< State: invalid */
  ELM_ATSPI_STATE_ACTIVE, /**< State: active */
  ELM_ATSPI_STATE_ARMED, /**< State: armed */
  ELM_ATSPI_STATE_BUSY, /**< State: busy */
  ELM_ATSPI_STATE_CHECKED, /**< State: checked */
  ELM_ATSPI_STATE_COLLAPSED, /**< State: collapsed */
  ELM_ATSPI_STATE_DEFUNCT, /**< State: defunct */
  ELM_ATSPI_STATE_EDITABLE, /**< State: editable */
  ELM_ATSPI_STATE_ENABLED, /**< State: enabled */
  ELM_ATSPI_STATE_EXPANDABLE, /**< State: expandable */
  ELM_ATSPI_STATE_EXPANDED, /**< State: expanded */
  ELM_ATSPI_STATE_FOCUSABLE, /**< State: focusable */
  ELM_ATSPI_STATE_FOCUSED, /**< State: focused */
  ELM_ATSPI_STATE_HAS_TOOLTIP, /**< State: has a tooltip */
  ELM_ATSPI_STATE_HORIZONTAL, /**< State: horizontal */
  ELM_ATSPI_STATE_ICONIFIED, /**< State: iconified */
  ELM_ATSPI_STATE_MODAL, /**< State: modal */
  ELM_ATSPI_STATE_MULTI_LINE, /**< State: multi line */
  ELM_ATSPI_STATE_MULTISELECTABLE, /**< State: multiselectable */
  ELM_ATSPI_STATE_OPAQUE, /**< State: opaque */
  ELM_ATSPI_STATE_PRESSED, /**< State: pressed */
  ELM_ATSPI_STATE_RESIZABLE, /**< State: resizable */
  ELM_ATSPI_STATE_SELECTABLE, /**< State: selectable */
  ELM_ATSPI_STATE_SELECTED, /**< State: selected */
  ELM_ATSPI_STATE_SENSITIVE, /**< State: sensitive */
  ELM_ATSPI_STATE_SHOWING, /**< State: showing */
  ELM_ATSPI_STATE_SINGLE_LINE, /**< State: single line */
  ELM_ATSPI_STATE_STALE, /**< State: stale */
  ELM_ATSPI_STATE_TRANSIENT, /**< State: transient */
  ELM_ATSPI_STATE_VERTICAL, /**< State: vertical */
  ELM_ATSPI_STATE_VISIBLE, /**< State: visible */
  ELM_ATSPI_STATE_MANAGES_DESCENDANTS, /**< State: manage descendants */
  ELM_ATSPI_STATE_INDETERMINATE, /**< State: indeterminate */
  ELM_ATSPI_STATE_REQUIRED, /**< State: required */
  ELM_ATSPI_STATE_TRUNCATED, /**< State: truncated */
  ELM_ATSPI_STATE_ANIMATED, /**< State: animated */
  ELM_ATSPI_STATE_INVALID_ENTRY, /**< State: invalid entry */
  ELM_ATSPI_STATE_SUPPORTS_AUTOCOMPLETION, /**< State: supports autocompletion
                                            */
  ELM_ATSPI_STATE_SELECTABLE_TEXT, /**< State: selectable text */
  ELM_ATSPI_STATE_IS_DEFAULT, /**< State: is default */
  ELM_ATSPI_STATE_VISITED, /**< State: visited */
  ELM_ATSPI_STATE_LAST_DEFINED /**< Last enum entry sentinel */
} Elm_Atspi_State_Type;

/** Describes relation between two objects.
 *
 * @ingroup Elm_Atspi
 */
typedef enum
{
  ELM_ATSPI_RELATION_NULL = 0, /**< No relation */
  ELM_ATSPI_RELATION_LABEL_FOR, /**< Label for relation */
  ELM_ATSPI_RELATION_LABELLED_BY, /**< Labelled by relation */
  ELM_ATSPI_RELATION_CONTROLLER_FOR, /**< Controller for relation */
  ELM_ATSPI_RELATION_CONTROLLED_BY, /**< Controlled by relation */
  ELM_ATSPI_RELATION_MEMBER_OF, /**< Member of relation */
  ELM_ATSPI_RELATION_TOOLTIP_FOR, /**< Tooltip for relation */
  ELM_ATSPI_RELATION_NODE_CHILD_OF, /**< Node child of relation */
  ELM_ATSPI_RELATION_NODE_PARENT_OF, /**< Node parent of relation */
  ELM_ATSPI_RELATION_EXTENDED, /**< Extended relation */
  ELM_ATSPI_RELATION_FLOWS_TO, /**< Flows to relation */
  ELM_ATSPI_RELATION_FLOWS_FROM, /**< Flows from relation */
  ELM_ATSPI_RELATION_SUBWINDOW_OF, /**< Subwindow of relation */
  ELM_ATSPI_RELATION_EMBEDS, /**< Embeds relation */
  ELM_ATSPI_RELATION_EMBEDDED_BY, /**< Embedded by relation */
  ELM_ATSPI_RELATION_POPUP_FOR, /**< Popup for relation */
  ELM_ATSPI_RELATION_PARENT_WINDOW_OF, /**< Parent window of relation */
  ELM_ATSPI_RELATION_DESCRIPTION_FOR, /**< Description for relation */
  ELM_ATSPI_RELATION_DESCRIBED_BY, /**< Described by relation */
  ELM_ATSPI_RELATION_LAST_DEFINED /**< Last enum entry sentinel */
} Elm_Atspi_Relation_Type;

/** AT-SPI object state set.
 *
 * @ingroup Elm_Atspi
 */
typedef uint64_t Elm_Atspi_State_Set;

/** AT-SPI event listener
 *
 * @ingroup Elm_Atspi_Event
 */
typedef struct _Elm_Atspi_Event_Handler Elm_Atspi_Event_Handler;

/** AT-SPI state changed event data
 *
 * @ingroup Elm_Atspi_Event_State_Changed
 */
typedef struct _Elm_Atspi_Event_State_Changed_Data
{
  Elm_Atspi_State_Type type; /**< Type of the state changed event */
  Eina_Bool new_value; /**< New value */
} Elm_Atspi_Event_State_Changed_Data;

/** AT-SPI geometry changed event data
 *
 * @ingroup Elm_Atspi_Event_Geometry_Changed
 */
typedef struct _Elm_Atspi_Event_Geometry_Changed_Data
{
  int x; /**< X coordinate */
  int y; /**< Y coordinate */
  int width; /**< Width */
  int height; /**< Height */
} Elm_Atspi_Event_Geometry_Changed_Data;

/** AT-SPI children changed event data
 *
 * @ingroup Elm_Atspi_Event_Children_Changed
 */
typedef struct _Elm_Atspi_Event_Children_Changed_Data
{
  Eina_Bool is_added; /**< Child is added or not */
  Efl_Object *child; /**< Child object */
} Elm_Atspi_Event_Children_Changed_Data;

/** AT-SPI Attribute
 *
 * @ingroup Elm_Atspi
 */
typedef struct _Elm_Atspi_Attribute
{
  const char *key; /**< Attribute key */
  const char *value; /**< Attribute value */
} Elm_Atspi_Attribute;

/** AT-SPI Relation
 *
 * @ingroup Elm_Atspi
 */
typedef struct _Elm_Atspi_Relation
{
  Elm_Atspi_Relation_Type type; /**< Relation type */
  Eina_List *objects; /**< List with relation objects */
} Elm_Atspi_Relation;

/** Elementary AT-SPI relation set type
 *
 * @ingroup Elm_Atspi
 */
typedef Eina_List *Elm_Atspi_Relation_Set;


#endif



























#endif
