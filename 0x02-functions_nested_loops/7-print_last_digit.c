#include "main.h"

/**
 * print_last_digit - Start here
 * Desc - Write a function that prints the last digit of a number.
 * @n: value checked
 * Return: last value on n
 */
int print_last_digit(int n)
{
	int value;

	if (n < 0)
	n = -n;

	value = n % 10;

	if (value < 0)
		value = -value;

	_putchar(value + '0');

	return (value);
}


