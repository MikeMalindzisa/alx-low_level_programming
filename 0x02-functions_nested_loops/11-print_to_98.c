#include <stdio.h>
#include "mike.h"
/**
 * print_to_98 - Start here
 * Desc - Write a function that prints all natural
 * numbers from n to 98, followed by a new line.
 *
 * @n: value
 *
 * Return: n to 98
 */

int print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else

		printf("98");
	return (98);
}

