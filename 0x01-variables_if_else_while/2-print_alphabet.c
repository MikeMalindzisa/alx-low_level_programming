#include <stdio.h>
/**
 * main - Begin Here
 * Desc: Write a program that
 * prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: 0 on success
 */
int main(void)
{
	char val = 'a';

	while (val <= 'z')
	{
		putchar(val);
		val++;
	}
	putchar('\n');
	return (0);
}

