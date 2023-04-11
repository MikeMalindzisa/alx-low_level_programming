#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Start here
 * Desc - Write a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 *
 * @grid: 2D arr
 * @height: height(arr rows)
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

