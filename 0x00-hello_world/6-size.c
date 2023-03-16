#include <stdio.h>
/**
 * main - Write a C program
 * that prints the size of
 * various types on the
 * computer it is compiled and
 * run on.
 * Return 0 on success
 */
int main(void)
{
	char myChar;
	int myInt;
	long int myLint;
	long long int myLLint;
	float myFloat;

	printf("Size of a char: %lu byte(s)\n",
			(unsigned long)sizeof(myChar));
	printf("Size of an int: %lu byte(s)\n",
			(unsigned long)sizeof(myInt));
	printf("Size of a long int: %lu byte(s)\n",
			(unsigned long)sizeof(myLint));
	printf("Size of a long long int: %lu byte(s)\n",
			(unsigned long)sizeof(myLLint));
	printf("Size of a float: %lu byte(s)\n",
			(unsigned long)sizeof(myFloat));
return (0);
}
