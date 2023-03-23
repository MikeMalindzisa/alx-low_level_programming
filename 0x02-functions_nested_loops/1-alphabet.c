#include "main.h"
/**
 * print_alphabet - Start here
 * Desc - Write a function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 *
 *Return: On success 0.
 *
 */
void print_alphabet(void)
{

int current = 'a';
int end = 'z';

while (current <= end)
{
	_putchar(current);
	current++;
}
_putchar('\n');

}

