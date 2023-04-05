#include "main.h"
/**
 * _print_rev_recursion - Start here
 * Desc - Write a function that prints a string in reverse.
 * @s: entry string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

