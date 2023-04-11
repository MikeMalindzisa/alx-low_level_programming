#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Start here
 * Desc - Write x function that
 * returns x pointer to x newly allocated space in memory,
 * which contains x copy of the string given as x parameter.
 *
 * @str: input val
 *
 * Return: pointer else NULL
 */
char *_strdup(char *str)
{
	char *s;
	int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;
	s = (char *)  malloc((x + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (y = 0; y < x ; y++)
		s[y] = str[y];

	s[x + 1] = '\0';
	return (s);
}

