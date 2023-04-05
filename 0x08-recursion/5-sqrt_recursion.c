#include "main.h"

int sqrt_fn(int n, int x);

/**
 * _sqrt_recursion - Start here
 * Desc - Write a function that returns the natural square root of a number.
 * @n: input value
 *
 * Return: sqrt_fn result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_fn(n, 0));
}

/**
 * sqrt_fn - sqrt function
 * @n: int
 * @x: int
 *
 * Return: sqrt
 */
int sqrt_fn(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (sqrt_fn(n, x + 1));
}

