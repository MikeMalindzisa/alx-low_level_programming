#include "main.h"

/**
 * _memset - Start here
 * Desc - Write a function that fills memory with a constant byte
 * The _memset() function fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * Returns a pointer to the memory area s
 *
 * @s: memory pointer
 * @b: input value
 * @n: size in bytes
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n ; count++)
	{
		s[count] = b;
	}
	return (s);
}
