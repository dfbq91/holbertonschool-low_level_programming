#include "holberton.h"

/**
* string_toupper - works with defined prototype variables
* Description: changes all lowercase letters of a string to uppercase.
*@s: char pointer type variable
* Return: char
 */

char *cap_string(char s*)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
