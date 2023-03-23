#include "main.h"

/**
 * jack_bauer - Start here
 * Desc - Write a function that prints every minute of the
 * day of Jack Bauer, starting from 00:00 to 23:59.
 * starting timer
 */
void jack_bauer(void)
{
	int j = 0;
	int b;

	while (j < 24)
	{
		b = 0;
		while (b < 60)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		j++;
	}
}


