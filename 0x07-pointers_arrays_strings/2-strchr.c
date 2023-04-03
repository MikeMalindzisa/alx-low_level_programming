#include "main.h"

/**
 * _strchr - Start here
 * Desc - Function that locates a character in a string
 * @s: input value
 * @c: char value
 * Return: char else return a NULL
 */

char *_strchr(char *s, char c)
{

	while (s[0] != '\0')
	{

		if (s[0] == c)

			return (s);

		else if (s[1] == c)

			return (s + 1);

		s++;
	}
	return (s + 1);
}

