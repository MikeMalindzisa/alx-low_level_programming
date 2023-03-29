#include "main.h"

/**
 * swap_int - Start here
 * Desc - Write a function that swaps the values of
 * two integers.
 *
 * @a: arg a
 *
 * @b: arg b
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

