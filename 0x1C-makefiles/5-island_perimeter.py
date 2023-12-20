#!/usr/bin/python3
"""
The island_perimeter function which
returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    grid_height = len(grid)
    grid_width = len(grid[0])
    total_edges = 0
    total_cells = 0

    for h in range(grid_height):
        for w in range(grid_width):
            if grid[h][w] == 1:
                total_cells += 1
                if w > 0 and grid[h][w-1] == 1:
                    total_edges += 1
                if h > 0 and grid[h-1][w] == 1:
                    total_edges += 1

    peri = total_cells * 4 - total_edges * 2

    return (peri)
