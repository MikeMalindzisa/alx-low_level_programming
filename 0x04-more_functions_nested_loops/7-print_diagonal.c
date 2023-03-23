#include "main.h"

/**
 * print_diagonal - Start here
 * Desc - Write a function that draws a diagonal line on the terminal.
 *
 *
 * @n: n is the number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int down, across;

	for (down = 1; down <= n; down++)
	{
		for (across = 2; across <= down; across++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}

