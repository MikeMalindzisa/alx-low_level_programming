#include <stdio.h>

/**
 * main - Start here
 * Desc: Write a program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	long prev, next;
	int count = 0;
	int temp;

	prev = 1;
	next = 2;
	printf("%ld, ", prev);
	printf("%ld, ", next);
		while (count <= 50)
		{
			temp = prev + next;
			printf("%ld", temp);
			if (count != 50)
				printf(", ");
			prev = next;
			next = temp;
			count++;
		}
	printf("\n");
	return (0);
}

