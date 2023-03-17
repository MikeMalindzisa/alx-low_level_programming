#include <stdio.h>
/**
 * main - Begin Here
 * Desc: Write a program
 * that prints the alphabet
 * in lowercase, and then in
 * uppercase, followed by a
 * new line.
 *
 * Return: 0 on success
 */
int main(void)
{
	char val = 'a';

	while (val <= 'z')
	{
		if (val != 'e' && val != 'q')
		{
			putchar(val);
		}
		val++;
	}
	putchar('\n');
	return (0);
}

