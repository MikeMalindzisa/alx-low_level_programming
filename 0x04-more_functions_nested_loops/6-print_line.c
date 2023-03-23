#include "main.h"

/**
 * print_line - Start here
 * Desc - Write a function that draws a straight line in the terminal.
 *
 * @n: line length
 *
 * Return: void
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar ('_');
	}
	_putchar ('\n');
}

