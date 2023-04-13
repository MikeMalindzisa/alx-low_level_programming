#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Start here
 * Desc - Write x function that allocates memory for an array, using malloc.
 *
 * @s1: first input
 * @s2: second input
 * @n: size
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y;
	char *temp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
	{
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
	}
	if (n > y)
		n = y;
	temp = malloc(((x + n) + 1));
	if (temp == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
	{
		temp[x] = s1[x];
	}
	for (y = 0; y != n; y++)
	{
		temp[x] = s2[y];
		x++;
	}
	temp[x] = '\0';
	return (temp);
}

