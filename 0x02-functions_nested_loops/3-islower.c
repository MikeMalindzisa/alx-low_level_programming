#include "main.h"

/**
 * _islower - Start here
 * Desc - Write a function that checks for lowercase character.
 * Prototype: int _islower(int c);
 * @c: value checked
 * Return: 1 if c is lowercase
 * Returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

