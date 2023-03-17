#include <stdio.h>
/**
 * main - Begin here
* Desc: Write a program that prints
 * all possible combinations of two
 * two-digit numbers.
 *
 * - The numbers should range from 0 to 99
 * - The two numbers should be separated by a space
 * - All numbers should be printed with two digits.
 *  1 should be printed as 01
 * - The combination of numbers must be separated by comma,
 *  followed by a space
 * - The combinations of numbers should be printed
 *  in ascending order
 * 00 01 and 01 00 are considered as the
 *  same combination of the numbers 0 and 1
 * Return: 0 on success.
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = 0; y <= 99; y++)
		{
			if (x < y && x != y)
			{
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				putchar(' ');
				putchar((y / 10) + '0');
				putchar((y % 10) + '0');
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

