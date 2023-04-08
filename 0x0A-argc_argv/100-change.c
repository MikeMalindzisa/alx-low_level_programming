#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start here
 * Desc - Write a program that prints the minimum number
 * of coins to make change for an amount of money.
 * @args: count
 * @argv: vector
 * Return: 0
 */

int main(int args, char *argv[])
{
	int  sum, coins = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]);
	if (sum < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; sum >= 0;)
	{
		if (sum >= 25)
			sum -= 25;

		else if (sum >= 10)
			sum -= 10;

		else if (sum >= 5)
			sum -= 5;

		else if (sum >= 2)
			sum -= 2;

		else if (sum >= 1)
			sum -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}

