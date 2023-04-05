#include "main.h"




/**
  * str_len - checks string len
  * @s: input string
  * Return: str len
**/
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * palindrome - checks if the string is a palindrome
 * @index: index
 * @strLen: string len
 * @s: input string
 * Return: 1 if true else 0
**/
int palindrome(int index, int strLen, char *s)
{
	if (strLen > 0)
	{
		if (s[index] == s[strLen])
		{
			return (palindrome(index + 1, strLen - 1, s));
		}
		else if (s[index] != s[strLen])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}
/**
  * is_palindrome - Start here
  * Desc - Write a function that returns 1 if a string is a palindrome and 0 if not.
  * @s: input string
  * Return: return 1 if true else 0
**/
int is_palindrome(char *s)
{
	return (palindrome(0, str_len(s) - 1, s));
}


