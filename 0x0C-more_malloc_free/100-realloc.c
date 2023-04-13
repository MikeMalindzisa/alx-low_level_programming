#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_realloc Start here
 * Desc - Write a function that reallocates a memory
 * block using malloc and free
 *
 * @ptr: pointer
 *
 * @old_size: prt size
 *
 * @new_size: new memory block size
 *
 *  Return: null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;

	if (new_size > old_size)
	{
		arr = malloc(new_size);
		free(ptr);
		return (arr);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		arr = malloc(new_size);
		free(ptr);
		return (arr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

