#include <stdio.h>

/**
 * main - Start here
 * Desc - Write a program that prints its name,
 * followed by a new line.
 * If you rename the program,
 * it will print the new name, without having to
 * compile it again
 * You should not remove the path
 * before the name of the program
 *
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}

