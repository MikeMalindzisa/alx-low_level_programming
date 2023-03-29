#include "main.h"
#include <stdio.h>
/**
 * print_array - Start here
 * Desc - Write a function that prints n elements
 * of an array of integers, followed by a new line.
 * @a: input
 * @n: arr len
 *
 *
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}

