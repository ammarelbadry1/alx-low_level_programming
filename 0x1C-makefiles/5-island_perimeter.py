#!/usr/bin/python3
"""5-island_perimeter module

This module contains a function that calculates
the perimeter of an island inside a grid
"""


def island_perimeter(grid):
    """Calculates the perimeter of the island inside
    the grid passed

    Args:
        grid (list): the grid passed
    """

    land_cells = 0
    shared_sides = 0
    grid_len = len(grid)
    row_len = len(grid[0])

    for i in range(grid_len):
        for j in range(row_len):
            if grid[i][j] == 1:
                land_cells += 1
                if i < grid_len - 1 and grid[i + 1][j] == 1:
                    shared_sides += 1
                if j < row_len - 1 and grid[i][j + 1] == 1:
                    shared_sides += 1
    
    return ((4 * land_cells) - (2 * shared_sides))
