#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -Start here
 * Desc - Write a program that adds positive numbers.
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0, followed by a new line
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1
 * You can assume that numbers and the addition of all the numbers can be
 * stored in an int
 *
 * @argc: count
 *
 * @argv: vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y;
	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");

	}

	for (x = 1; x < argc; x++)
	{
		sum += atoi(argv[x]);

		for (y = 0; argv[x][y] != '\0'; y++) /*argv is a 2-d array*/
		{
			if (!(isdigit(argv[x][y])))
			{
				printf("Error\n");

				return (0);
			}
		}
	}

	printf("%d\n", sum);

	return (0);
}

