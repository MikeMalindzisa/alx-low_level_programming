#include "main.h"
/**
 * _strpbrk - Start here
 * Desc - Write a function that searches a string for
 * any of a set of bytes. The _strpbrk() function locates
 * the first occurrence in the string s of any
 * of the bytes in the string accept
 *
 * @s: input value
 * @accept: search key
 *
 * Return: pointer else Null
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}

