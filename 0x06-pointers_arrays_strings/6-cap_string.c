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
		if (s[i] == 32 || s[i] == '\n' || s[i] == '\t' || s[i] == ';' ||
s[i] == ',' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i]
== ')' || s[i] == '{' || s[i] == '}' || s[i] == '.')
		{
			i += 1;
			while (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
