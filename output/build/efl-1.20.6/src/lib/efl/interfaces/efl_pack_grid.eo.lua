-- EFL LuaJIT bindings: efl_pack_grid.eo (class Efl.Pack.Grid)
-- For use with Elua; automatically generated, do not modify

local cutil = require("cutil")
local util  = require("util")
local ffi   = require("ffi")
local eo    = require("eo")

local M, __lib = ...

local __class
local __body

local init = function()
    __class = __lib.efl_pack_grid_interface_get()
    eo.class_register("Efl_Pack_Grid", nil, nil, __body, __class)
end

cutil.init_module(init, function() end)

ffi.cdef [[
    const Eo_Class *efl_pack_grid_interface_get(void);
    Eina_Bool efl_pack_grid_position_get(Efl_Gfx * subobj, int *col, int *row, int *colspan, int *rowspan);
    void efl_pack_grid_size_set(int cols, int rows);
    void efl_pack_grid_size_get(int *cols, int *rows);
    void efl_pack_grid_columns_set(int cols);
    int efl_pack_grid_columns_get(void);
    void efl_pack_grid_rows_set(int rows);
    int efl_pack_grid_rows_get(void);
    void efl_pack_grid_orientation_set(Efl_Orient primary, Efl_Orient secondary);
    void efl_pack_grid_orientation_get(Efl_Orient *primary, Efl_Orient *secondary);
    Eina_Bool efl_pack_grid(Efl_Gfx * subobj, int col, int row, int colspan, int rowspan);
    Eina_Iterator *efl_pack_grid_contents_get(int col, int row, Eina_Bool below);
    Efl_Gfx *efl_pack_grid_content_get(int col, int row);
]]

local __M = util.get_namespace(M, { "pack" })
__body = {
    grid_position_get = function(self, subobj)
        eo.__do_start(self, __class)
        local col = ffi.new("int[1]")
        local row = ffi.new("int[1]")
        local colspan = ffi.new("int[1]")
        local rowspan = ffi.new("int[1]")
        local v = __lib.efl_pack_grid_position_get(subobj, col, row, colspan, rowspan)
        eo.__do_end()
        return tonumber(col[0]), tonumber(row[0]), tonumber(colspan[0]), tonumber(rowspan[0])
    end,

    grid_size_set = function(self, cols, rows)
        eo.__do_start(self, __class)
        __lib.efl_pack_grid_size_set(cols, rows)
        eo.__do_end()
    end,

    grid_size_get = function(self)
        eo.__do_start(self, __class)
        local cols = ffi.new("int[1]")
        local rows = ffi.new("int[1]")
        __lib.efl_pack_grid_size_get(cols, rows)
        eo.__do_end()
        return tonumber(cols[0]), tonumber(rows[0])
    end,

    grid_columns_set = function(self, cols)
        eo.__do_start(self, __class)
        __lib.efl_pack_grid_columns_set(cols)
        eo.__do_end()
    end,

    grid_columns_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_grid_columns_get()
        eo.__do_end()
        return tonumber(v)
    end,

    grid_rows_set = function(self, rows)
        eo.__do_start(self, __class)
        __lib.efl_pack_grid_rows_set(rows)
        eo.__do_end()
    end,

    grid_rows_get = function(self)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_grid_rows_get()
        eo.__do_end()
        return tonumber(v)
    end,

    grid_orientation_set = function(self, primary, secondary)
        eo.__do_start(self, __class)
        __lib.efl_pack_grid_orientation_set(primary, secondary)
        eo.__do_end()
    end,

    grid_orientation_get = function(self)
        eo.__do_start(self, __class)
        local primary = ffi.new("Efl_Orient[1]")
        local secondary = ffi.new("Efl_Orient[1]")
        __lib.efl_pack_grid_orientation_get(primary, secondary)
        eo.__do_end()
        return primary[0], secondary[0]
    end,

    pack_grid = function(self, subobj, col, row, colspan, rowspan)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_grid(subobj, col, row, colspan, rowspan)
        eo.__do_end()
        return ((v) ~= 0)
    end,

    grid_contents_get = function(self, col, row, below)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_grid_contents_get(col, row, below)
        eo.__do_end()
        return v
    end,

    grid_content_get = function(self, col, row)
        eo.__do_start(self, __class)
        local v = __lib.efl_pack_grid_content_get(col, row)
        eo.__do_end()
        return v
    end,

    __properties = {
        ["grid_orientation"] = { 0, 0, 2, 2, true, true },
        ["grid_size"] = { 0, 0, 2, 2, true, true },
        ["grid_position"] = { 1, 0, 4, 0, true, false },
        ["grid_rows"] = { 0, 0, 1, 1, true, true },
        ["grid_columns"] = { 0, 0, 1, 1, true, true }
    }
}
__body["__iface_Efl_Pack_Grid"] = true

return M
