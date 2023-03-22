#include "mike.h"
/**
 * times_table - Start here
 * Desc - Write a function that prints the 9
 * times table, starting with 0.
 *
 *
 *  Return: times table
 */

void times_table(void)
{
	int mult;
	int row;
	int col;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');

		for (col = 1; col <= 9; col++)
		{

			mult = col * row;

			_putchar(',');

			_putchar(' ');

			if (mult <= 9)
			{
				_putchar(' ');
				_putchar(mult + '0');
			}
			else
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
