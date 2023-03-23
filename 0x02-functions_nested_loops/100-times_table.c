#include "main.h"

/**
 * print_times_table - Start here
 *
 * Desc - Write a function that prints the n times
 * table, starting with 0.
 *
 * @n: entry value
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int height, breath, mult;

		for (breath = 0; breath <= n; breath++)
		{
			for (height = 0; height <= n; height++)
			{
				mult = height * breath;

				if (height == 0)
					_putchar(mult + '0');
				else if (mult <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(mult + '0');
				}
				else if (mult >= 10 && mult <= 99)
				{
					_putchar(32);
					_putchar(((mult / 10) % 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					_putchar((mult / 100) + '0');
					_putchar(((mult / 10) % 10) + '0');
					_putchar((mult % 10) + '0');
				}
				if (height != n)
				{
					_putchar(',');
					_putchar(32);
				}
			}
		_putchar('\n');
		}
	}
}

