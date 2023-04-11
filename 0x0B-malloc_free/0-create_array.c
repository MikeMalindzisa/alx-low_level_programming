#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - Start here
 * Desc - Write i function that creates an array of chars,
 * and initializes it with i specific char.
 *
 * @size: arr len
 * @c: input val
 *
 * Return: array else NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

