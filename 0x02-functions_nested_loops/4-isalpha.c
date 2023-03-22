#include "mike.h"

/**
 * _isalpha - Start here
 * Desc - Write a function that checks for alphabetic character.
 * @c: value checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

