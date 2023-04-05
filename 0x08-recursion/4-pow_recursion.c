#include "main.h"
/**
 * _pow_recursion - Start here
 * Desc - Write a function that returns the value of x raised to the
 * power of y.
 *
 * @x: input number
 * @y: power
 *
 * Return: -1 if "y" < 0, else 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}

