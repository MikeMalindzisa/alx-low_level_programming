#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Begin Here
 * Desc: This program will assign a random number
 * to the variable n each time it is executed.
 * Complete the source code in order to print
 * whether the number stored in the variable n
 * is positive or negative.
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);

}

