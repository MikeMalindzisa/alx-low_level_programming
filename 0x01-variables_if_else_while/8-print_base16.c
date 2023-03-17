#include <stdio.h>
/**
 * main - Begin Here
 * Desc: Write a program that prints
 * all the numbers of base 16 in
 * lowercase, followed by a new line.
 * You can only use the putchar function
 * (every other function (printf, puts, etc…)
 * is forbidden)
 * Return: 0 on success
 */
int main(void)
{
	int x = 'a';
	int y = '0';

	while (x <= 'f')
	{
		while (y <= '9')
		{
			putchar(y);
			y++;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

