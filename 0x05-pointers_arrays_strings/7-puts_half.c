#include "main.h"
/**
 *puts_half - Start here
 * Desc - Write a function that prints
 * half of a string, followed by a new line.
 *
 *@str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}

