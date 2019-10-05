#include "holberton.h"

/**
* cap_string - works with defined prototype variables
* Description: changes all lowercase letters of a string to uppercase.
*@s: char pointer type variable
* Return: char
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i - 1] == 32 || s[i - 1] == '\n' || s[i - 1] == '\t' ||
		    s[i - 1] == ';' || s[i - 1] == ',' || s[i - 1] == '!' ||
		    s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' ||
		    s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' ||
		    s[i - 1] == '.') && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
