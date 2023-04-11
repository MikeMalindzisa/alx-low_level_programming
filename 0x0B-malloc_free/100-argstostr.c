#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - Start here
 * Desc - Write a function that concatenates all the arguments of your program.
 *
 * @ac: counter
 *
 * @av: vector
 *
 * Return: args
 */

char *argstostr(int ac, char **av)
{
	int counter1, counter2, counter3 = 0;
	char *temp;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (counter1 = 0; counter1 < ac; counter1++)
	{
		for (counter2 = 0; av[counter1][counter2] != '\0'; counter2++, counter3++)
		{
			;
		}
	}

	temp = malloc(sizeof(char) * (counter3 + ac + 1));

	if (temp == NULL)
	{
		return (NULL);
	}

	for (counter1 = 0, counter3 = 0; counter1 < ac; counter1++)
	{
		for (counter2 = 0; av[counter1][counter2] != '\0'; counter2++, counter3++)
		{
			temp[counter3] = av[counter1][counter2];
		}
		temp[counter3] = '\n';
		counter3++;
	}
	return (temp);
}

