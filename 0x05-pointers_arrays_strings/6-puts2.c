#include "main.h"

/**
 * puts2 -  Start here
 * Desc - Write a function that prints every
 * other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: arg *str
 *
 * Return: string to stdout
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

