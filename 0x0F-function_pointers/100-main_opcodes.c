#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Start here
 * Desc - Write a program that prints the opcodes
 * of its own main function.
 *
 * @argc: args count
 *
 * @argv: vector
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{

	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < atoi(argv[1]))
	{
		printf("%02x", *((unsigned char *)main + i));
		i++;
		if (i < atoi(argv[1]))
			putchar(' ');
	}
	putchar('\n');

	return (0);
}

