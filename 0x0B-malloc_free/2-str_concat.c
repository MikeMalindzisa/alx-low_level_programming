#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Satrt here
 * Desc - Write x function that concatenates two strings.
 *
 * @s1: first input
 * @s2: second input
 *
 * Return: The returned pointer should point to x newly allocated space in
 *         memory which contains the contents of s1, followed by the contents 
 *         of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int x, y;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
	}

	s = (char *)  malloc(((x + y) + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
	{
		s[x] = s1[x];
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
		s[x] = s2[y];
		x++;
	}
	return (s);
}

