#ifndef _EFL_PACK_GRID_EO_H_
#define _EFL_PACK_GRID_EO_H_

#ifndef _EFL_PACK_GRID_EO_CLASS_TYPE
#define _EFL_PACK_GRID_EO_CLASS_TYPE

typedef Eo Efl_Pack_Grid;

#endif

#ifndef _EFL_PACK_GRID_EO_TYPES
#define _EFL_PACK_GRID_EO_TYPES


#endif
/** 2D containers aligned on a grid with rows and columns
 *
 * @ingroup Efl_Pack_Grid
 */
#define EFL_PACK_GRID_INTERFACE efl_pack_grid_interface_get()

EWAPI const Efl_Class *efl_pack_grid_interface_get(void);

/**
 * @brief Pack object on the grid
 *
 * @param[in] subobj Object
 * @param[in] col Column number
 * @param[in] row Row number
 * @param[in] colspan 0 means 1, -1 means @ref efl_pack_grid_columns_get
 * @param[in] rowspan 0 means 1, -1 means @ref efl_pack_grid_rows_get
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Pack_Grid
 */
EOAPI Eina_Bool efl_pack_grid(Eo *obj, Efl_Gfx *subobj, int col, int row, int colspan, int rowspan);

/**
 * @brief Returns all objects at a given position in this grid.
 *
 * @param[in] col Column number
 * @param[in] row Row number
 * @param[in] below If @c true get objects spanning over this cell.
 *
 * @return Iterator to grid contents
 *
 * @ingroup Efl_Pack_Grid
 */
EOAPI Eina_Iterator *efl_pack_grid_contents_get(Eo *obj, int col, int row, Eina_Bool below);

/**
 * @brief Returns a child at a given position, see
 * @ref efl_pack_grid_contents_get.
 *
 * @param[in] col Column number
 * @param[in] row Row number
 *
 * @return Child object
 *
 * @ingroup Efl_Pack_Grid
 */
EOAPI Efl_Gfx *efl_pack_grid_content_get(Eo *obj, int col, int row);

/**
 * @brief Position and span of the @c subobj in this container, may be modified
 * to move the @c subobj
 *
 * @param[in] subobj Child object
 * @param[out] col Column number
 * @param[out] row Row number
 * @param[out] colspan Column span
 * @param[out] rowspan Row span
 *
 * @return Returns false if item is not a child
 *
 * @ingroup Efl_Pack_Grid
 */
EOAPI Eina_Bool efl_pack_grid_position_get(const Eo *obj, Efl_Gfx * subobj, int *col, int *row, int *colspan, int *rowspan);

/**
 * @brief Combines @ref efl_pack_grid_columns_get and
 * @ref efl_pack_grid_rows_get
 *
 * @param[in] cols Number of columns
 * @param[in] rows Number of rows
 *
 * @ingroup Efl_Pack_Grid
 */
EOAPI void efl_pack_grid_size_set(Eo *obj, int cols, int rows);

/**
 * @brief Combines @ref efl_pack_grid_columns_get and
 * @ref efl_pack_grid_rows_get
 *
 * @param[out] cols Number of columns
 * @param[out] rows Number of rows
 *
 * @ingroup Efl_Pack_Grid
 */
EOAPI void efl_pack_grid_size_get(const Eo *obj, int *cols, int *rows);

/**
 * @brief Gird columns property
 *
 * Specifies limit for linear adds - if direction is horizontal
 *
 * @param[in] cols Number of columns
 *
 * @ingroup Efl_Pack_Grid
 */
EOAPI void efl_pack_grid_columns_set(Eo *obj, int cols);

/**
 * @brief Gird columns property
 *
 * @return Number of columns
 *
 * @ingroup Efl_Pack_Grid
 */
EOAPI int efl_pack_grid_columns_get(const Eo *obj);

/**
 * @brief Grid rows property
 *
 * Specifies limit for linear adds - if direction is vertical
 *
 * @param[in] rows Number of rows
 *
 * @ingroup Efl_Pack_Grid
 */
EOAPI void efl_pack_grid_rows_set(Eo *obj, int rows);

/**
 * @brief Grid rows property
 *
 * @return Number of rows
 *
 * @ingroup Efl_Pack_Grid
 */
EOAPI int efl_pack_grid_rows_get(const Eo *obj);

/**
 * @brief Primary and secondary up/left/right/down orientations for linear
 * apis.
 *
 * Default is right and down. Overrides @ref efl_orientation_get.
 *
 * @param[in] primary Primary orientation
 * @param[in] secondary Secondary orientation
 *
 * @ingroup Efl_Pack_Grid
 */
EOAPI void efl_pack_grid_orientation_set(Eo *obj, Efl_Orient primary, Efl_Orient secondary);

/**
 * @brief Primary and secondary up/left/right/down orientations for linear
 * apis.
 *
 * Default is right and down. Overrides @ref efl_orientation_get.
 *
 * @param[out] primary Primary orientation
 * @param[out] secondary Secondary orientation
 *
 * @ingroup Efl_Pack_Grid
 */
EOAPI void efl_pack_grid_orientation_get(const Eo *obj, Efl_Orient *primary, Efl_Orient *secondary);

#endif
