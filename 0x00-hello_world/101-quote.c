#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Write a C program that prints
 * exactly and that piece of art is useful\" -
 * Dora Korpar, 2015-10-19, followed by a
 * new line, to the standard error.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (0);
}
