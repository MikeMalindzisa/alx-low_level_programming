#include <stdio.h>
/**
 * main - Begin Here
 * Desc: Write a program that prints all
 * possible combinations of
 * single-digit numbers.
 *
 * - Numbers must be separated by ,
 * followed by a space
 * - Numbers should be printed
 * in ascending order
 *
 * Return: 0 on success
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
		++num;
	}
	putchar('\n');
	return (0);
}

