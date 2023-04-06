#include "main.h"

/**
 * _memcpy - Start here
 * Desc - Write a function that copies memory area.
 * The _memcpy() function copies n bytes from memory
 * area src to memory area dest
 *
 * @dest: output value
 * @src: input value
 * @n: size in bytes of copy
 *
 * Return: copied value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		dest[index] = src[index];
		n -= 1;
	}
	return (dest);
}

