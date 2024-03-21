#!/usr/bin/python3
"""Defines a function to calculate the perimeter of an island."""


def island_perimeter(grid):
    """Calculate the perimeter of an island.

    The grid represents an island where land is denoted by 1 and water by 0.

    Args:
        grid (list): A list of lists of integers representing the island.

    Returns:
        The perimeter of the island defined in the grid.
    """
    perimeter = 0
    height = len(grid)
    width = len(grid[0])

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
