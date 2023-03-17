#include <stdio.h>
/**
 * main - Begin Here
 * Desc: Write a program that prints the
 * lowercase alphabet in reverse, followed
 * by a new line.
 *
 * Return: 0 on success
 */
int main(void)
{
	char val = 'z';

	while ('a' <= val)
	{
		putchar(val);
		val--;
	}
	putchar('\n');
	return (0);
}


