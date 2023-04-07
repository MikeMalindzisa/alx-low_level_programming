#include <stdio.h>
/**
 * main - Start here
 * Desc - Write a program that prints all arguments it receives
 * All arguments should be printed, including the first on
 * 
 * @argc: count 
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}

