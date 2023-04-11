#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid -Start here
 * Desc - Write a function that returns a
 * pointer to a 2 dimensional array of integers.
 *
 * @width: width
 *
 * @height: height
 *
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int col, row;
	int **grid;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (col = 0; col < height; col++)
	{
		grid[col] = malloc(width * sizeof(int));

		if (grid[col] == NULL)
		{
			for (row = 0; row < col; row++)
				free(grid[row]);

			free(grid);
			return (NULL);
		}

		for (row = 0; row < width; row++)
		{
			grid[col][row] = 0;
		}
	}
		return (grid);
}

