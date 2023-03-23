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
	int count = 0;
	unsigned long temp;

	prev = 1;
	next = 2;
	printf("%lu, ", prev);
	printf("%lu, ", next);
		while (count <= 50)
		{
			temp = prev + next;
			printf("%lu", temp);
			if (count != 50)
				printf(", ");
			prev = next;
			next = temp;
			count++;
		}
	printf("\n");
	return (0);
}

