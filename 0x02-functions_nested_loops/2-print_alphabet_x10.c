#include "mike.h"

/**
 * print_alphabet_x10 - Start here
 * Desc - prints 10 times
 * the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char x;
	int counter;

	counter = 0;

	while (counter < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		counter++;
	}
}

