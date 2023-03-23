#include "main.h"

/**
 * _isdigit - Start here
 *
 *Desc - Write a function that checks for a
 * digit (0 through 9).
 *
 * @c: this is the entry
 * Returns 1 if true, else
 * Return: 0 if false
 *
 **/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

