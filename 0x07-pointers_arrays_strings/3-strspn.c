#include "main.h"
/**
 * _strspn - Start here
 * Desc - Write a Function that gets the length of a prefix substring
 * @s: first pointer
 * @accept: second pointer
 *
 * Return: size in bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, counter;

	counter = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				counter++;
				break;
			}
		}
		if (accept[y] != s[x])
		{
		break;
		}
	}
	return (counter);
}

