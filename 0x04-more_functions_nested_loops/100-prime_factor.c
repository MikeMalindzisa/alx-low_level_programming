#include <stdio.h>

/**
 * main - Start here
 * Desc - Write a program that finds and prints the largest prime factor
 * followed by a new line.
 *
 *
 * Return: 0
 *
 **/
int main(void)
{
	long int number = 612852475143;
	int factor;
	int x;

	for (x = 2; x <= number; x++)
	{
		if (number % x == 0)
		{
			number = number / x;
			factor = x;
		}
	}
	printf("%d\n", factor);
	return (0);
}

