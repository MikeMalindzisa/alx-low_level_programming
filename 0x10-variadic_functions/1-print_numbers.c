#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Start here
 * Desc - Write a function that prints numbers, followed by a new line.
 *
 * @separator: input separator
 * @n: integers count
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int count;

	va_start(list, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(list, const unsigned int));
		if (separator != NULL && count != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

