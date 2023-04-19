#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Start here
 * Desc - Write a function that prints a name.
 *
 * @name: name
 *
 * @f: pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}

