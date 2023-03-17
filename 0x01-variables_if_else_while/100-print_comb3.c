#include <stdio.h>
/**
 * main - Begin here
 * Desc: Write a program that prints
 * all possible combinations of two
 * two-digit numbers.
 *
 * - Numbers must be separated by ,, followed by a space
 * - The two digits must be different
 * - 01 and 10 are considered the same combination of
 * the two digits 0 and 1
 * - Print only the smallest combination of two digits
 * - Numbers should be printed in ascending order, with two digits
 *
 * Return: 0 on success
 */
int main(void)
{
	int x = '0';
	int y = '0';

	while (x <= '9')
	{
		while (y <= '9')
		{
			if (!(x > y || x == y))
			{
				putchar(x);
				putchar(y);
				if (x == '8' && y == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		y = '0';
		x++;
	}
	return (0);
}


