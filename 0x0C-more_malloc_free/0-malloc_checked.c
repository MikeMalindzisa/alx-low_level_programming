#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Start here
 * Desc - Write a function that allocates memory using malloc.
 *
 * @b: This is the length to allocate in the memory
 *
 * Return: Returns a pointer to the allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}

