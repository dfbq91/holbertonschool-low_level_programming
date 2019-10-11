#include "holberton.h"

/**
* len_recursion - get and return lenght of a string.
*@str: char pointer type variable
* Return: 1 if value is prime, 0 if no.
 */

int len_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + len_recursion(str + 1));
}

/**
* check_palindrome - check if a string is a palindrome.
*@s: char pointer to string
*@len: int type variable
* Return: 1 if a string is a palindrome and 0 if not.
 */

int check_palindrome(char *s, int len)
{

	if (len <= 0)
		return (1);
	if (s[0] == s[len - 1])
	{
		return (check_palindrome(s + 1, len - 2));
	}
	return (0);
}

/**
 * is_palindrome - works with defined prototype variables
 * Description: call other functions to get len and if a string is a palindrome
 *@s: char pointer to string type variable
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len;

	len = len_recursion(s);

	return (check_palindrome(s, len));
}
