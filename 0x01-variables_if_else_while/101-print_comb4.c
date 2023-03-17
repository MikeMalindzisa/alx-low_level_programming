#include <stdio.h>
/**
 * main - Begin here
 *
 * - Write a program that prints all possible
 * combinations of two two-digit numbers.
 *
 * - The numbers should range from 0 to 99
 *
 * - The two numbers should be separated by a space
 *
 * - All numbers should be printed with two digits.
 * 1 should be printed as 01
 *
 * - The combination of numbers must be separated
 * by comma, followed by a space
 *
 * - The combinations of numbers should be
 * printed in ascending order * 00 01
 * and 01 00 are considered as the same
 * combination of the numbers 0 and 1
 *
 * Return: 0 on success
*/
int main(void)
{
	int x = '0';
	int y = '0';
	int z = '0';

	while (x <= '7')
	{
		while (y <= '8')
		{
			while (z <= '9')
			{
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (!(x == '7' && y == '8' && z == '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}
				z++;
			}
			z = '0';
			y++;
		}
		y = '0';
		x++;
	}
	putchar('\n');
	return (0);
}


