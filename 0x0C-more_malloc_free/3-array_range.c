#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Start here
 * Desc - Write x function that creates an array of integers.
 *
 * @min: minimum in range
 * @max: maximum in range
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int x, y;
	int *integers;

	if (min > max)
		return (NULL);
	y = min;
	integers = (int *) malloc(sizeof(int) * (max - min + 1));
	if (integers == NULL)
		return (NULL);
	for (x = 0; x <= (max - min); x++)
	{
		integers[x] = y;
		y++;
	}
	return (integers);
}

