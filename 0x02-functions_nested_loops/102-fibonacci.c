#include <stdio.h>

/**
 * main - Start here
 * Desc: Write a program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	unsigned long prev, next;
	unsigned long temp;
	int count = 0;

	prev = 0;
	next = 1;
	printf("%lu, ", prev);
	printf("%lu, ", next);
		for (count = 0; count < 50; count++)
		{
			temp = prev + next;
			printf("%lu", temp);
			if (count < 49)
				printf(", ");
			prev = next;
			next = temp;
		}
	printf("\n");
	return (0);
}

