#include "main.h"

/**
 * print_triangle - Start here
 * Desc - Write a function that prints a
 * triangle, followed by a new line.
 * @size: dim num
 * Return: void
 **/

void print_triangle(int size)
{
	int x, y;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	for (x = 1; x <= size; x++)
	{
		for (y = size - x; y > 0; y--)
			_putchar(' ');
		for (y = x; y > 0; y--)
			_putchar('#');
		_putchar('\n');
	}
}

