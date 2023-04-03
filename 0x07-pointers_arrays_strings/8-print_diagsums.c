#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Start here
 * Desc - Write a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 *
 * @a: input array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int prev, next, i, nextSum, prevSum;

	nextSum = prevSum = 0;
	next = 0;
	prev = size - 1;
	for (i = 0; i < size; i++)
	{
		nextSum += *(a + i * size + next);
		prevSum += *(a + i * size + prev);
		next += 1;
		prev -= 1;
	}
	printf("%d, %d\n", nextSum, prevSum);
}

