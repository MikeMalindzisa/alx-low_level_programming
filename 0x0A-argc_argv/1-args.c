#include <stdio.h>
/**
 * main - Start here
 * Desc - Write a program that prints the number of
 * arguments passed into it
 *
 * @args: count
 * @argv: vector
 *
 * Return: 0
 *
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}

