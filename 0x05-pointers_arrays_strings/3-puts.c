#include "main.h"

/**
 * _puts -  Start here
 * Desc - Write a function that prints a string,
 * followed by a new line, to stdout.
 *
 * @str: arg s
 *
 * Return: string to stdout
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

