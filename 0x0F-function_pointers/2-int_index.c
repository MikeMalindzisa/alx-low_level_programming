#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Start here
 * Desc - Write a function that searches for an integer.
 *
 * @array: int pointer
 *
 * @size: int
 *
 * @cmp: function pointer
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int index;

	if (array && size && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
			{
				return (index);
			}
		}
	}
		return (-1);
}

