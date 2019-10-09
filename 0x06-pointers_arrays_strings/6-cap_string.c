#include "holberton.h"

/**
* cap_string - works with defined prototype variables
* Description: changes all lowercase letters of a string to uppercase.
*@s: char pointer type variable
* Return: string
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 97 && s[i] <= 122)
		s[i] = s[i] - 32;

	while (s[i] != '\0')
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
		     s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
		     s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
		     s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
		     s[i - 1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
