#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Start here
 * Desc - Write a function that allocates memory for an array, using malloc.
 *
 * @nmemb: arr size
 * @size: size in bytes
 *
 * Return: pointer
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a, b;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = (nmemb * size);
	arr = malloc(b);
	if (arr == NULL)
		return (NULL);
	for (a = 0; a < b; a++)
	{
		arr[a] = 0;
	}
	return (arr);
}

