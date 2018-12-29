#ifndef _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_H_
#define _ELM_INTERFACE_ATSPI_ACCESSIBLE_EO_H_

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
/** AT-SPI accessible mixin
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_MIXIN elm_interface_atspi_accessible_mixin_get()

EWAPI const Efl_Class *elm_interface_atspi_accessible_mixin_get(void);

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 * @brief Gets an localized string describing accessible object role name.
 *
 * @return Localized accessible object role name
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI const char *elm_interface_atspi_accessible_localized_role_name_get(const Eo *obj);
#endif

/**
 * @brief Accessible name of the object.
 *
 * @param[in] name Accessible name
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_name_set(Eo *obj, const char *name);

/**
 * @brief Accessible name of the object.
 *
 * @return Accessible name
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI const char *elm_interface_atspi_accessible_name_get(const Eo *obj);

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 * @brief Gets an all relations between accessible object and other accessible
 * objects.
 *
 * @return Accessible relation set
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Elm_Atspi_Relation_Set elm_interface_atspi_accessible_relation_set_get(const Eo *obj);
#endif

/**
 * @brief The role of the object in accessibility domain.
 *
 * @param[in] role Accessible role
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_role_set(Eo *obj, Elm_Atspi_Role role);

/**
 * @brief The role of the object in accessibility domain.
 *
 * @return Accessible role
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Elm_Atspi_Role elm_interface_atspi_accessible_role_get(const Eo *obj);

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 * @brief Gets object's accessible children.
 *
 * @return List of widget's children
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Eina_List *elm_interface_atspi_accessible_children_get(const Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 * @brief Gets human-readable string indentifying object accessibility role.
 *
 * @return Accessible role name
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI const char *elm_interface_atspi_accessible_role_name_get(const Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 * @brief Gets key-value pairs indentifying object extra attributes. Must be
 * free by a user.
 *
 * @return List of object attributes
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Eina_List *elm_interface_atspi_accessible_attributes_get(const Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 * @brief Gets index of the child in parent's children list.
 *
 * @return Index in children list
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI int elm_interface_atspi_accessible_index_in_parent_get(const Eo *obj);
#endif

/**
 * @brief Contextual information about object.
 *
 * @param[in] description Accessible contextual information
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_description_set(Eo *obj, const char *description);

/**
 * @brief Contextual information about object.
 *
 * @return Accessible contextual information
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI const char *elm_interface_atspi_accessible_description_get(const Eo *obj);

/**
 * @brief Object's accessible parent.
 *
 * @param[in] parent Accessible parent
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_parent_set(Eo *obj, Elm_Interface_Atspi_Accessible *parent);

/**
 * @brief Object's accessible parent.
 *
 * @return Accessible parent
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Elm_Interface_Atspi_Accessible *elm_interface_atspi_accessible_parent_get(const Eo *obj);

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 * @brief Gets set describing object accessible states.
 *
 * @return Accessible state set
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Elm_Atspi_State_Set elm_interface_atspi_accessible_state_set_get(const Eo *obj);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 * @brief Register accessibility event listener
 *
 * @param[in] cb Callback
 * @param[in] data Data
 *
 * @return Event handler
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Elm_Atspi_Event_Handler *elm_interface_atspi_accessible_event_handler_add(const Eo *obj, Efl_Event_Cb cb, void *data);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 * @brief Deregister accessibility event listener
 *
 * @param[in] handler Event handler
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_event_handler_del(const Eo *obj, Elm_Atspi_Event_Handler *handler);
#endif

#ifdef ELM_INTERFACE_ATSPI_ACCESSIBLE_PROTECTED
/**
 * @brief Emit event
 *
 * @param[in] accessible Accessibility object.
 * @param[in] event Accessibility event type.
 * @param[in] event_info Accessibility event details.
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_event_emit(const Eo *obj, Elm_Interface_Atspi_Accessible *accessible, const Efl_Event_Description *event, void *event_info);
#endif

/**
 * @brief The translation domain of "name" and "description" properties.
 *
 * Translation domain should be set if application wants to support i18n for
 * accessibily "name" and "description" properties.
 *
 * When translation domain is set values of "name" and "description" properties
 * will be translated with dgettext function using current translation domain
 * as "domainname" parameter.
 *
 * It is application developer responsibility to ensure that translation files
 * are loaded and binded to translation domain when accessibility is enabled.
 *
 * @param[in] domain Translation domain
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_translation_domain_set(Eo *obj, const char *domain);

/**
 * @brief The translation domain of "name" and "description" properties.
 *
 * Translation domain should be set if application wants to support i18n for
 * accessibily "name" and "description" properties.
 *
 * When translation domain is set values of "name" and "description" properties
 * will be translated with dgettext function using current translation domain
 * as "domainname" parameter.
 *
 * It is application developer responsibility to ensure that translation files
 * are loaded and binded to translation domain when accessibility is enabled.
 *
 * @return Translation domain
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI const char *elm_interface_atspi_accessible_translation_domain_get(const Eo *obj);

/**
 * @brief Type of accessibility object
 *
 * @param[in] type Object type
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_type_set(Eo *obj, Elm_Atspi_Type type);

/**
 * @brief Type of accessibility object
 *
 * @return Object type
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Elm_Atspi_Type elm_interface_atspi_accessible_type_get(const Eo *obj);

/**
 * @brief Defines the relationship between two accessible objects.
 *
 * Adds unique relation between source object and relation_object of a given
 * type.
 *
 * Relationships can be queried by Assistive Technology clients to provide
 * customized feedback, improving overall user experience.
 *
 * Relationship_append API is asymmetric, which means that appending, for
 * example, relation ELM_ATSPI_RELATION_FLOWS_TO from object A to B, do NOT
 * append relation ELM_ATSPI_RELATION_FLOWS_FROM from object B to object A.
 *
 * @param[in] type Relation type
 * @param[in] relation_object Object to relate to
 *
 * @return @c true if relationship was successfully appended, @c false
 * otherwise
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Eina_Bool elm_interface_atspi_accessible_relationship_append(Eo *obj, Elm_Atspi_Relation_Type type, const Elm_Interface_Atspi_Accessible *relation_object);

/**
 * @brief Removes the relationship between two accessible objects.
 *
 * If relation_object is NULL function removes all relations of given type.
 *
 * @param[in] type Relation type
 * @param[in] relation_object Object to remove relation from
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_relationship_remove(Eo *obj, Elm_Atspi_Relation_Type type, const Elm_Interface_Atspi_Accessible *relation_object);

/** Removes all relationships in accessible object.
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI void elm_interface_atspi_accessible_relationships_clear(Eo *obj);

/**
 * @brief Get root object of accessible object hierarchy
 *
 * @return Root object
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
EOAPI Efl_Object *elm_interface_atspi_accessible_root_get(const Eo *obj);

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_PROPERTY_CHANGED;

/** Called when roperty has changed
 * @return const char *
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_PROPERTY_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_PROPERTY_CHANGED))

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_CHILDREN_CHANGED;

/** Called when children have changed
 * @return Elm_Atspi_Event_Children_Changed_Data
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_CHILDREN_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_CHILDREN_CHANGED))

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_STATE_CHANGED;

/** Called when tate has changed
 * @return Elm_Atspi_Event_State_Changed_Data
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_STATE_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_STATE_CHANGED))

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_BOUNDS_CHANGED;

/** Called when bounds have changed
 * @return Elm_Atspi_Event_Geometry_Changed_Data
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_BOUNDS_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_BOUNDS_CHANGED))

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_VISIBLE_DATA_CHANGED;

/** Called when visibility has changed
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_VISIBLE_DATA_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_VISIBLE_DATA_CHANGED))

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ACTIVE_DESCENDANT_CHANGED;

/** Called when active state of descendant has changed
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ACTIVE_DESCENDANT_CHANGED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ACTIVE_DESCENDANT_CHANGED))

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ADDED;

/** Called when item was added
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ADDED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_ADDED))

EWAPI extern const Efl_Event_Description _ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_REMOVED;

/** Called when item was removed
 *
 * @ingroup Elm_Interface_Atspi_Accessible
 */
#define ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_REMOVED (&(_ELM_INTERFACE_ATSPI_ACCESSIBLE_EVENT_REMOVED))

#endif
