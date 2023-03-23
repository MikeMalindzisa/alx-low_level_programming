#include <stdio.h>

/**
 * main - Start here
 *
 * Desc - Write a program that finds and prints the
 * first 98 Fibonacci numbers, starting with 1
 * and 2, followed by a new line.
 *
 * The numbers should be separated by
 * comma, followed by a space ,
 *
 * You are allowed to use the standard library
 *
 * You are not allowed to use any other library
 * (You can’t use GMP etc…)
 *
 * You are not allowed to use long
 * long, malloc, pointers, arrays/tables, or structures
 *
 * You are not allowed to hard code
 * any Fibonacci number (except for 1 and 2)
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int count;
	unsigned long int prev = 1;
	unsigned long int next = 2;
	unsigned long int length = 1000000000;
	unsigned long int p_temp_1;
	unsigned long int p_temp_2;

	unsigned long int n_temp_1;
	unsigned long int n_temp_2;

	printf("%lu", prev);

	for (count = 1; count < 91; count++)
	{
		printf(", %lu", next);
		next += prev;
		prev = next - prev;
	}

	p_temp_1 = (prev / length);
	p_temp_2 = (prev % length);
	n_temp_1 = (next / length);
	n_temp_2 = (next % length);

	for (count = 92; count < 99; ++count)
	{
		printf(", %lu", n_temp_1 + (n_temp_2 / length));
		printf("%lu", n_temp_2 % length);
		n_temp_1 = n_temp_1 + p_temp_1;
		p_temp_1 = n_temp_1 - p_temp_1;
		n_temp_2 = n_temp_2 + p_temp_2;
		p_temp_2 = n_temp_2 - p_temp_2;
	}
	printf("\n");
	return (0);
}

