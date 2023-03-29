#include "main.h"

/**
 * _strlen - Start here
 * Desc - Write a function that returns the length of a string.
 *
 * @s: arg s
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
		return (i);
}

