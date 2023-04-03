#include "main.h"

/**
 * _strstr - Start here
 * Desc - Write a function that locates a substring.
 *
 * @haystack: input value
 * @needle: search key
 *
 * Return: pointer else Null
 */

char *_strstr(char *haystack, char *needle)
{
	int count;

	for (; haystack[0]; haystack++)
	{
		for (count = 0; haystack[count] == needle[count]; count++)
			;
		if (!(needle[count]))
			return (haystack);
	}
	return (0);
}

