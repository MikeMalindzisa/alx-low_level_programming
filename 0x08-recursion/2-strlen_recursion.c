#include "main.h"
/**
 * _strlen_recursion - Start here
 * Desc - Write a function that returns the length of a string.
 * @s: input string
 *
 * Return: str len
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

