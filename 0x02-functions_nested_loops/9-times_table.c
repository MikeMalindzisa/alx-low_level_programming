#include "mike.h"
/**
 * times_table - Start here
 * Desc - Write a function that prints the 9
 * times table, starting with 0.
 *
 * @n: int type
 *
 *  Return: times table
 */

void times_table(int n)
{
	int col;
	int row;

	if (n < 10 || n < 0)

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			if (col == 0)
				_putchar(((row * col) % 10) + '0');
			else if ((row * col) <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar((row * col) + '0');
			}
			else if ((row * col) <= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(((row * col) / 10) + '0');
				_putchar(((row * col) % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((row * col) / 100) + '0');
				_putchar((((row * col) / 10) % 10) + '0');
				_putchar(((row * col) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

