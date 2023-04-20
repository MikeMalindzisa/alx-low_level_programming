#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Start here
 * Desc - Write a function that returns the sum of all its parameters.
 *
 * @n: param count
 *
 * Return: total
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int count;
	int total;

	total = 0;
	va_start(list, n);

	for (count = 0; count < n; count++)
	{
		total += va_arg(list, int);
	}
	va_end(list);
	return (total);
}

