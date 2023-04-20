#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -  Start hers
 * Desc - Write a function that prints strings, followed by a new line.
 *
 * @separator: input separator
 * @n: strings count
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int count;

	va_start(list, n);
	for (count = 0; count < n; count++)
	{
		char *s;

		s = va_arg(list, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && (count + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

