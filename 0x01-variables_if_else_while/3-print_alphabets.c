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
	char upc = 'A';
	char lwc = 'a';

	while (upc <= 'Z')
	{
		while (lwc <= 'z')
		{
			putchar(lwc);
			lwc++;
		}
		putchar(upc);
		upc++;
	}

	putchar('\n');
	return (0);
}

