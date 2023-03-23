#include "main.h"

/**
 * print_square - Start here
 * Desc - Write a function that prints a
 * square, followed by a new line.
 *
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int height;
	int breadth;


	for (height = 0; height < size; height++)
	{
		for (breadth = 0; breadth < size; breadth++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

