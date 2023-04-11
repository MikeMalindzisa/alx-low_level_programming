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

	i = 0;


	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	arr[i] = '\0';

	return (arr);
}

