#include "main.h"

/**
 * print_numbers - Start here
 * Desc - Write a function that prints the
 * numbers, from 0 to 9, followed by a new line.
 *
 *
 * Return: 0
 */
void print_numbers(void)
{
	char counter;

	for (counter = '0'; counter <= '9'; counter++)
	{
		_putchar(counter);
	}
	_putchar('\n');
}

