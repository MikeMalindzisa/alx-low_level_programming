#include "main.h"

/**
 * sqrt_fn - sqrt function
 * @a: int 
 * @b: int
 *
 * Return: sqrt
 */
int sqrt_fn(int n, int result)
{
    if (result * result == n)
    {
        return (result);
    }
    else if (result * result > n)
    {
        return (-1);
    }
    else
        return (sqrt_fn(n, result + 1));
}

/**
 * _sqrt_recursion - Start here
 * Desc - Write a function that returns the natural square root of a number.
 * @n: input value
 *
 * Return: sqrt_fn result
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (sqrt_fn(n, 0));
}

